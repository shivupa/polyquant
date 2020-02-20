#include <scf/rhf.hpp>

void PYCI_RHF::form_H_core() {
  auto num_basis = this->input_basis.num_basis;
  this->H_core = xt::zeros<double>({num_basis, num_basis});
  this->H_core += this->input_integral.kinetic;
  this->H_core += this->input_integral.nuclear;
  xt::dump_npy("hcore.npy", this->H_core);
}
void PYCI_RHF::form_fock() {
  auto num_basis = this->input_basis.num_basis;
  this->F = xt::zeros<double>({num_basis, num_basis});
  this->F += this->H_core;
  for (int i = 0; i < num_basis; i++) {
    for (int j = 0; j < num_basis; j++) {
      for (int k = 0; k < num_basis; k++) {
        for (int l = 0; l < num_basis; l++) {
          F(i, j) += this->D(k, l) *
                     ((2.0 * this->input_integral.twoelec(
                                 this->input_integral.idx8(i, j, k, l)) -
                       this->input_integral.twoelec(
                           this->input_integral.idx8(i, k, j, l))));
        }
      }
    }
  }
  if (this->iteration_num <= 1) {

    xt::dump_npy("F.npy", this->F);
  }
}
void PYCI_RHF::diag_fock() {
  auto num_basis = this->input_basis.num_basis;
  xt::xarray<double> F_prime = xt::zeros<double>({num_basis, num_basis});
  xt::xarray<double> C_prime = xt::zeros<double>({num_basis, num_basis});
  F_prime =
      xt::linalg::dot(this->input_integral.orth_X,
                      xt::linalg::dot(this->F, this->input_integral.orth_X));

  auto F_prime_eigen = xt::linalg::eigh(F_prime);
  this->E_orbitals = std::get<0>(F_prime_eigen);
  C_prime = std::get<1>(F_prime_eigen);

  this->C = xt::linalg::dot(this->input_integral.orth_X, C_prime);
}
void PYCI_RHF::form_DM() {
  this->D_last = this->D;
  auto num_basis = this->input_basis.num_basis;
  this->D = xt::zeros<double>({num_basis, num_basis});
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
  this->E_elec = xt::sum(this->D * (this->H_core + this->F))(0);
}
void PYCI_RHF::calculate_E_total() {
  this->E_total = this->E_elec + this->input_molecule.E_nuc;
}
void PYCI_RHF::check_stop() {
  this->iteration_E_diff = std::abs(this->E_elec - this->E_elec_last);
  this->iteration_rmsc_dm =
      std::abs(xt::sum(xt::square(this->D - this->D_last))(0));
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
  auto num_basis = this->input_basis.num_basis;
  this->D = xt::zeros<double>({num_basis, num_basis});
}
void PYCI_RHF::run() {
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
