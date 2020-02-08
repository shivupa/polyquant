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
void PYCI_RHF::form_fock() {
  auto num_basis = this->input_basis.num_basis;
  PetscErrorCode ierr;

  ierr = MatCreateDense(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, num_basis,
                        num_basis, NULL, &(this->F));
  CHKERRV(ierr);
  MatSetUp(this->F);
  MatZeroEntries(this->F);
  MatAXPY(this->F, 1.0, this->H_core, DIFFERENT_NONZERO_PATTERN);
  // TODO: use ownership ranges to define range
  for (int i = 0; i < num_basis; i++) {
    for (int j = 0; j < num_basis; j++) {
      for (int k = 0; k < num_basis; k++) {
        for (int l = 0; l < num_basis; l++) {
          PetscScalar coulomb;
          PetscInt ijkl = this->input_integral.idx8(i, j, k, l);
          PetscInt ikjl = this->input_integral.idx8(i, k, j, l);
          ierr = VecGetValues(this->input_integral.twoelec, 1, &ijkl, &coulomb);
          CHKERRV(ierr);

          PetscScalar exchange;
          ierr =
              VecGetValues(this->input_integral.twoelec, 1, &ikjl, &exchange);
          CHKERRV(ierr);

          PetscScalar dm_value;
          ierr = MatGetValues(this->D, 1, &i, 1, &j, &dm_value);
          CHKERRV(ierr);

          auto value = dm_value * ((2.0 * coulomb) - exchange);
          MatSetValue(this->F, i, j, value, ADD_VALUES);
        }
      }
    }
  }
  ierr = MatAssemblyBegin(this->F, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  ierr = MatAssemblyEnd(this->F, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
}
void PYCI_RHF::diag_fock() {
  PetscErrorCode ierr;

  EPS Fock_eps;
  ierr = EPSCreate(PETSC_COMM_WORLD, &Fock_eps);
  CHKERRV(ierr);

  ierr = EPSSetOperators(Fock_eps, this->F, this->input_integral.overlap);
  CHKERRV(ierr);

  ierr = EPSSetProblemType(Fock_eps, EPS_GHEP);
  CHKERRV(ierr);

  ierr = EPSSetWhichEigenpairs(Fock_eps, EPS_ALL);
  CHKERRV(ierr);

  ierr = EPSSetInterval(Fock_eps, -PETSC_MAX_REAL, 1000000);
  CHKERRV(ierr);

  ierr = EPSSolve(Fock_eps);
  CHKERRV(ierr);

  PetscInt nconv;
  ierr = EPSGetConverged(Fock_eps, &nconv);
  CHKERRV(ierr);
  Selci_cout(nconv);
}
void PYCI_RHF::form_DM() {}
void PYCI_RHF::calculate_E_elec() {}
void PYCI_RHF::calculate_E_total() {}
void PYCI_RHF::check_stop() {}
void PYCI_RHF::run_iteration() {}
void PYCI_RHF::guess_DM() {
  auto num_basis = this->input_basis.num_basis;
  PetscErrorCode ierr;

  ierr = MatCreateDense(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, num_basis,
                        num_basis, NULL, &(this->D));
  CHKERRV(ierr);
  MatSetUp(this->D);
  MatZeroEntries(this->D);
  ierr = MatAssemblyBegin(this->D, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  ierr = MatAssemblyEnd(this->D, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
}
void PYCI_RHF::run() {
  this->form_H_core();
  this->guess_DM();
  this->form_fock();
  this->diag_fock();
}