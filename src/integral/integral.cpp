#include <integral/integral.hpp>
#include <io/io.hpp>
#include <iostream>
#include <libint2.hpp>
#include <slepceps.h>
#include <sstream>

PYCI_INTEGRAL::PYCI_INTEGRAL(const PYCI_INPUT &input, const PYCI_BASIS &basis) {
  PetscErrorCode ierr;
  Selci_cout("INTEGRAL");
  ierr = MatCreateDense(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, 4, 4,
                        NULL, &S);
  CHKERRV(ierr);
}
