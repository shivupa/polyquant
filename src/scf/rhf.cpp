#include <scf/rhf.hpp>

void PYCI_RHF::form_H_core() {
  auto num_basis = this->input_basis.num_basis;
  PetscErrorCode ierr;
  ierr = MatCreateDense(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, num_basis,
                        num_basis, NULL, &(this->H_core));
  CHKERRV(ierr);
  MatSetUp(this->H_core);
  MatZeroEntries(this->H_core);
  // H_core = T + V_nuc
  MatAXPY(this->H_core, 1.0, this->input_integral.kinetic,
          DIFFERENT_NONZERO_PATTERN);
  MatAXPY(this->H_core, 1.0, this->input_integral.nuclear,
          DIFFERENT_NONZERO_PATTERN);
  ierr = MatAssemblyBegin(this->H_core, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  ierr = MatAssemblyEnd(this->H_core, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);

  PetscViewer viewer;
  PetscViewerASCIIOpen(PETSC_COMM_WORLD, "hcore.txt", &viewer);
  MatView(this->H_core, viewer);
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