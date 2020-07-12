#include <scf/rhf.hpp>

using namespace selci;

void PYCI_RHF::form_H_core() {
  auto num_basis = this->input_basis.num_basis;
  this->H_core.resize(num_basis, num_basis);
  this->H_core.fill(0.0);
  this->H_core += this->input_integral.kinetic;
  this->H_core += this->input_integral.nuclear;
  // xt::dump_npy("hcore.npy", this->H_core);
}
void PYCI_RHF::form_fock() {
  auto num_basis = this->input_basis.num_basis;
  this->F.resize(num_basis, num_basis);
  this->F.fill(0.0);
  this->F += this->H_core;
  for (int i = 0; i < num_basis; i++) {
    for (int j = 0; j < num_basis; j++) {
      for (int k = 0; k < num_basis; k++) {
        for (int l = 0; l < num_basis; l++) {
          this->F(i, j) += this->D(k, l) *
                           ((2.0 * this->input_integral.twoelec(
                                       this->input_integral.idx8(i, j, k, l)) -
                             this->input_integral.twoelec(
                                 this->input_integral.idx8(i, k, j, l))));
        }
      }
    }
  }
  if (this->iteration_num <= 1) {

    // xt::dump_npy("F.npy", this->F);
  }
}
void PYCI_RHF::diag_fock() {
  auto num_basis = this->input_basis.num_basis;
  DENSE_MATRIX<double> F_prime(num_basis, num_basis);
  DENSE_MATRIX<double> C_prime(num_basis, num_basis);
  F_prime.fill(0.0);
  C_prime.fill(0.0);

  DENSE_MATRIX<double> temp;
  mm_dot(this->F, this->input_integral.orth_X, temp, false, false);
  mm_dot(this->input_integral.orth_X, temp, F_prime, false, false);
  eigenvalues_and_eigenvectors(F_prime, this->E_orbitals, C_prime);

  mm_dot(this->input_integral.orth_X, C_prime, this->C, false, false);
}
void PYCI_RHF::form_DM() {
  this->D_last = this->D;
  auto num_basis = this->input_basis.num_basis;
  this->D.resize(num_basis, num_basis);
  this->D.fill(0.0);
  for (size_t i = 0; i < num_basis; i++) {
    for (size_t j = 0; j < num_basis; j++) {
      for (size_t k = 0; k < this->input_molecule.num_elec_alpha; k++) {
        this->D(i, j) += this->C(i, k) * this->C(j, k);
      }
    }
  }
}
void PYCI_RHF::calculate_E_elec() {
  this->E_elec_last = this->E_elec;
  // this->E_elec = xt::sum(this->D * (this->H_core + this->F))(0);
  this->E_elec = (this->D * (this->H_core + this->F)).sum();
}
void PYCI_RHF::calculate_E_total() {
  this->E_total = this->E_elec + this->input_molecule.E_nuc;
}
void PYCI_RHF::check_stop() {
  this->iteration_E_diff = std::abs(this->E_elec - this->E_elec_last);
  this->iteration_rmsc_dm = std::abs(((this->D - this->D_last) ^ 2).sum());
  if ((std::abs(this->iteration_E_diff) < this->convergence_E) &&
      (this->iteration_rmsc_dm < this->convergence_DM)) {

    this->converged = true;
    this->stop = true;
  } else if (this->iteration_num == this->iteration_max) {
    this->exceeded_iterations = true;
    this->stop = true;
  }
}
void PYCI_RHF::run_iteration() {
  this->iteration_num += 1;
  this->form_fock();
  this->diag_fock();
  this->form_DM();
  this->calculate_E_elec();
}
void PYCI_RHF::guess_DM() {
  // SAD
  // TODO SAP
  // TODO move into separate functions
  auto num_basis = this->input_basis.num_basis;
  this->D.resize(num_basis, num_basis);
  this->D.fill(0.0);
  // compute number of atomic orbitals
  size_t nao = 0;
  for (const auto &atom : this->input_molecule.to_libint_atom()) {
    const auto Z = atom.atomic_number;
    nao += libint2::sto3g_num_ao(Z);
  }

  // compute the minimal basis density
  size_t ao_offset = 0; // first AO of this atom
  for (const auto &atom : this->input_molecule.to_libint_atom()) {
    const auto Z = atom.atomic_number;
    const auto &occvec = libint2::sto3g_ao_occupation_vector(Z);
    for (const auto &occ : occvec) {
      this->D(ao_offset, ao_offset) = occ;
      ++ao_offset;
    }
  }
}
void PYCI_RHF::run() {
  // calculate integrals we need
  this->input_integral.calculate_overlap();
  this->input_integral.symmetric_orthogonalization();
  this->input_integral.calculate_kinetic();
  this->input_integral.calculate_nuclear();
  this->input_integral.calculate_two_electron();

  // start the RHF process
  this->form_H_core();
  this->guess_DM();
  while (!this->stop) {
    Selci_cout(this->iteration_num);
    Selci_cout(this->E_elec);

    this->run_iteration();
    this->check_stop();
  }
  this->calculate_E_total();
  Selci_cout(this->E_total);
  if (this->stop && this->converged) {
    this->print_success();
  } else if (this->stop && this->exceeded_iterations) {
    this->print_exceeded_iterations();
  } else {
    this->print_error();
  }
}
