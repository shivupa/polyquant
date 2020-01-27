#include <calculation/calculation.hpp>

PYCI_RHF::PYCI_RHF(const std::string &filename) {
  this->setup_calculation(filename);
}
void PYCI_RHF::setup_calculation(const std::string &filename) {
  // parse input file
  this->input_params = PYCI_INPUT(filename);
  // parse molecule
  this->input_molecule = PYCI_MOLECULE(input_params);
  // parse basis
  this->input_basis = PYCI_BASIS(input_params, input_molecule);
  // calculate integrals
  this->input_integral =
      PYCI_INTEGRAL(input_params, input_basis, input_molecule);
}

void PYCI_RHF::form_H_core() {
  auto num_basis = basis->num_basis;
  PetscErrorCode ierr;
  ierr = MatCreateDense(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, num_basis,
                        num_basis, NULL, &(this->H_core));
  CHKERRV(ierr);
  MatSetUp(this->H_core);
  MatZeroEntries(this->H_core);
  // H_core = T + V_nuc
  MatAXPY(1.0, this->input_integral->kinetic, this->H_core);
  MatAXPY(1.0, this->input_integral->nuclear, this->H_core);
  ierr = MatAssemblyBegin(this->H_core, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
}
void PYCI_RHF::form_fock() {}
void PYCI_RHF::diag_fock() {}
void PYCI_RHF::form_DM() {}
void PYCI_RHF::calculate_E_elec() {}
void PYCI_RHF::calculate_E_total() {}
void PYCI_RHF::check_stop() {}
void PYCI_RHF::run_iteration() {}
void PYCI_RHF::guess_DM() {}
void PYCI_RHF::run() {}