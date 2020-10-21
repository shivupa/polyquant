#include <scf/rhf.hpp>

using namespace selci;

void PYCI_RHF::form_H_core() {
  auto num_basis = this->input_basis.num_basis;
  this->H_core.resize(this->input_molecule.quantum_particles.size());
  std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_idx = 0;
  for (auto quantum_part : this->input_molecule.quantum_particles){
    this->H_core[quantum_part_idx].setZero(num_basis, num_basis);
    this->H_core[quantum_part_idx] += (1.0/quantum_part.second.mass)*this->input_integral.kinetic;
    this->H_core[quantum_part_idx] += (-quantum_part.second.charge)*this->input_integral.nuclear;
    // Selci_dump_mat_to_file(this->H_core, "H_core.txt");
    quantum_part_idx++;
  }
}
void PYCI_RHF::form_fock() {
  //TODO
  auto num_basis = this->input_basis.num_basis;
  this->F.resize(this->input_molecule.quantum_particles.size());

  std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_a_idx = 0;
  std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_b_idx = 0;
  for (auto quantum_part_a : this->input_molecule.quantum_particles){
    if ()
    this->F[quantum_part_a_idx].setZero(num_basis, num_basis);
    this->F[quantum_part_a_idx] += this->H_core[quantum_part_a_idx];
    for (int i = 0; i < num_basis; i++) {
      for (int j = 0; j < num_basis; j++) {
        for (int k = 0; k < num_basis; k++) {
          for (int l = 0; l < num_basis; l++) {
            this->F[quantum_part_a_idx](i, j) += this->D[quantum_part_a_idx](k, l) *
                            ((2.0 * this->input_integral.twoelec(
                                        this->input_integral.idx8(i, j, k, l))) -
                              this->input_integral.twoelec(
                                  this->input_integral.idx8(i, k, j, l)));
          }
        }
      }
    }
    if (this->iteration_num <= 1) {
      Selci_dump_mat_to_file(this->F, "F.txt");
    }
    quantum_part_idx++;
  }
}
void PYCI_RHF::diag_fock() {
  auto num_basis = this->input_basis.num_basis;
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> F_prime(num_basis,
                                                                num_basis);
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C_prime(num_basis,
                                                                num_basis);
  F_prime = this->input_integral.orth_X * this->F * this->input_integral.orth_X;
  Eigen::SelfAdjointEigenSolver<
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>
      eigensolver(F_prime);
  if (eigensolver.info() != Eigen::Success)
    (APP_ABORT("Error diagonalizing Fock matrix for RHF."));
  this->E_orbitals = eigensolver.eigenvalues();
  C_prime = eigensolver.eigenvectors();
  this->C = this->input_integral.orth_X * C_prime;
}
void PYCI_RHF::form_DM() {
  this->D_last = this->D;
  auto num_basis = this->input_basis.num_basis;
  this->D.setZero(num_basis, num_basis);
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
  auto num_basis = this->input_basis.num_basis;
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> temp(num_basis,
                                                             num_basis);
  this->E_elec = (this->D.array() * (this->H_core + this->F).array()).sum();
}
void PYCI_RHF::calculate_E_total() {
  Selci_cout(this->input_molecule.E_nuc);
  this->E_total = this->E_elec + this->input_molecule.E_nuc;
}
void PYCI_RHF::check_stop() {
  this->iteration_E_diff = std::abs(this->E_elec - this->E_elec_last);
  this->iteration_rmsc_dm =
      std::abs(((this->D - this->D_last).array().pow(2)).sum());
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
  this->D.resize(this->input_molecule.quantum_particles.size());
  this->D_last.resize(this->input_molecule.quantum_particles.size());
  std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_idx = 0;
  for (auto quantum_part : this->input_molecule.quantum_particles){
  this->D[quantum_part_idx].setZero(num_basis, num_basis);
  this->D_last[quantum_part_idx].setZero(num_basis, num_basis);
  if (quantum_part.first == "electron"){
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
      this->D[quantum_part_idx](ao_offset, ao_offset) = occ;
      ++ao_offset;
    }
  }
  }
  quantum_part_idx++;
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
    Selci_cout(this->E_particles);
    this->run_iteration();
    this->check_stop();
  }
  this->calculate_E_total();
  if (this->stop && this->converged) {
    this->print_success();
  } else if (this->stop && this->exceeded_iterations) {
    this->print_exceeded_iterations();
  } else {
    this->print_error();
  }
  Selci_cout(this->E_total);
}
