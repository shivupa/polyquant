static char help[] =
    "The command line options are:\n"
    "  -i <filename>, where <filename> is the input file.\n"
    "  -n <n>, where <n> = number of grid subdivisions = matrix dimension.\n\n";

#include <basis/basis.hpp>
#include <integral/integral.hpp>
#include <io/io.hpp>
#include <iostream>
#include <molecule/molecule.hpp>
#include <slepceps.h>
#include <string>

int main(int argc, char **argv) {
  PetscErrorCode ierr;
  PetscBool input_provided;
  char filename[PETSC_MAX_PATH_LEN];

  ierr = SlepcInitialize(&argc, &argv, (char *)0, help);
  if (ierr) {
    return ierr;
  }

  ierr = PetscOptionsGetString(NULL, NULL, "-i", filename, sizeof(filename),
                               &input_provided);

  if (input_provided) {
    ierr = PetscPrintf(PETSC_COMM_WORLD, "Reading Input File: %s\n", filename);
    CHKERRQ(ierr);
    // This will all later be in the calculation object

    // parse input file
    PYCI_INPUT input_params = PYCI_INPUT(filename);
    // parse molecule
    PYCI_MOLECULE input_molecule = PYCI_MOLECULE(input_params);
    // parse basis
    PYCI_BASIS input_basis = PYCI_BASIS(input_params);
    // calculate integrals
    PYCI_INTEGRAL input_integral = PYCI_INTEGRAL(input_params, input_basis);

    // set up calculation object
    // run calculation
  } else {
    ierr = APP_ABORT("MISSING INPUT FILE");
    return ierr;
  }

  //   exit(0);
  //   Mat A;   /* problem matrix */
  //   EPS eps; /* eigenproblem solver context */
  //   EPSType type;
  //   PetscReal error, tol, re, im;
  //   PetscScalar kr, ki;
  //   Vec xr, xi;
  //   PetscInt n = 30, i, Istart, Iend, nev, maxit, its, nconv;
  //   PetscInt x_i, y_i, z_i, x_j, y_j, z_j;
  //   PetscReal delta_x = 1.0, delta_y = 1.0, delta_z = 1.0;

  //   ierr = PetscOptionsGetInt(NULL, NULL, "-n", &n, NULL);
  //   CHKERRQ(ierr);
  //   ierr = PetscPrintf(PETSC_COMM_WORLD, "\n1-D Laplacian Eigenproblem,
  //   n=%D\n\n",
  //                      n);
  //   CHKERRQ(ierr);

  //   /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //      Compute the operator matrix that defines the eigensystem, Ax=kx
  //      - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

  //   ierr = MatCreate(PETSC_COMM_WORLD, &A);
  //   CHKERRQ(ierr);
  //   ierr = MatSetSizes(A, PETSC_DECIDE, PETSC_DECIDE, n, n);
  //   CHKERRQ(ierr);
  //   ierr = MatSetFromOptions(A);
  //   CHKERRQ(ierr);
  //   ierr = MatSetUp(A);
  //   CHKERRQ(ierr);

  //   ierr = MatGetOwnershipRange(A, &Istart, &Iend);
  //   CHKERRQ(ierr);
  //   for (i = Istart; i < Iend; i++) {
  //     if (i > 0) {
  //       ierr = MatSetValue(A, i, i - 1, -1.0, INSERT_VALUES);
  //       CHKERRQ(ierr);
  //     }
  //     if (i < n - 1) {
  //       ierr = MatSetValue(A, i, i + 1, -1.0, INSERT_VALUES);
  //       CHKERRQ(ierr);
  //     }
  //     ierr = MatSetValue(A, i, i, 2.0, INSERT_VALUES);
  //     CHKERRQ(ierr);
  //   }
  //   ierr = MatAssemblyBegin(A, MAT_FINAL_ASSEMBLY);
  //   CHKERRQ(ierr);
  //   ierr = MatAssemblyEnd(A, MAT_FINAL_ASSEMBLY);
  //   CHKERRQ(ierr);

  //   ierr = MatCreateVecs(A, NULL, &xr);
  //   CHKERRQ(ierr);
  //   ierr = MatCreateVecs(A, NULL, &xi);
  //   CHKERRQ(ierr);

  //   /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //                 Create the eigensolver and set various options
  //      - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
  //   /*
  //      Create eigensolver context
  //   */
  //   ierr = EPSCreate(PETSC_COMM_WORLD, &eps);
  //   CHKERRQ(ierr);

  //   /*
  //      Set operators. In this case, it is a standard eigenvalue problem
  //   */
  //   ierr = EPSSetOperators(eps, A, NULL);
  //   CHKERRQ(ierr);
  //   ierr = EPSSetProblemType(eps, EPS_HEP);
  //   CHKERRQ(ierr);

  //   /*
  //      Set solver parameters at runtime
  //   */
  //   ierr = EPSSetFromOptions(eps);
  //   CHKERRQ(ierr);

  //   /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //                       Solve the eigensystem
  //      - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

  //   ierr = EPSSolve(eps);
  //   CHKERRQ(ierr);
  //   /*
  //      Optional: Get some information from the solver and display it
  //   */
  //   ierr = EPSGetIterationNumber(eps, &its);
  //   CHKERRQ(ierr);
  //   ierr = PetscPrintf(PETSC_COMM_WORLD,
  //                      " Number of iterations of the method: %D\n", its);
  //   CHKERRQ(ierr);
  //   ierr = EPSGetType(eps, &type);
  //   CHKERRQ(ierr);
  //   ierr = PetscPrintf(PETSC_COMM_WORLD, " Solution method: %s\n\n", type);
  //   CHKERRQ(ierr);
  //   ierr = EPSGetDimensions(eps, &nev, NULL, NULL);
  //   CHKERRQ(ierr);
  //   ierr = PetscPrintf(PETSC_COMM_WORLD, " Number of requested eigenvalues:
  //   %D\n",
  //                      nev);
  //   CHKERRQ(ierr);
  //   ierr = EPSGetTolerances(eps, &tol, &maxit);
  //   CHKERRQ(ierr);
  //   ierr =
  //       PetscPrintf(PETSC_COMM_WORLD, " Stopping condition: tol=%.4g,
  //       maxit=%D\n",
  //                   (double)tol, maxit);
  //   CHKERRQ(ierr);

  //   /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //                     Display solution and clean up
  //      - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
  //   /*
  //      Get number of converged approximate eigenpairs
  //   */
  //   ierr = EPSGetConverged(eps, &nconv);
  //   CHKERRQ(ierr);
  //   ierr = PetscPrintf(PETSC_COMM_WORLD,
  //                      " Number of converged eigenpairs: %D\n\n", nconv);
  //   CHKERRQ(ierr);

  //   if (nconv > 0) {
  //     /*
  //        Display eigenvalues and relative errors
  //     */
  //     ierr = PetscPrintf(PETSC_COMM_WORLD,
  //                        "           k          ||Ax-kx||/||kx||\n"
  //                        "   ----------------- ------------------\n");
  //     CHKERRQ(ierr);

  //     for (i = 0; i < nconv; i++) {
  //       /*
  //         Get converged eigenpairs: i-th eigenvalue is stored in kr (real
  //         part) and ki (imaginary part)
  //       */
  //       ierr = EPSGetEigenpair(eps, i, &kr, &ki, xr, xi);
  //       CHKERRQ(ierr);
  //       /*
  //          Compute the relative error associated to each eigenpair
  //       */
  //       ierr = EPSComputeError(eps, i, EPS_ERROR_RELATIVE, &error);
  //       CHKERRQ(ierr);

  // #if defined(PETSC_USE_COMPLEX)
  //       re = PetscRealPart(kr);
  //       im = PetscImaginaryPart(kr);
  // #else
  //       re = kr;
  //       im = ki;
  // #endif
  //       if (im != 0.0) {
  //         ierr = PetscPrintf(PETSC_COMM_WORLD, " %9f%+9fi %12g\n",
  //         (double)re,
  //                            (double)im, (double)error);
  //         CHKERRQ(ierr);
  //       } else {
  //         ierr = PetscPrintf(PETSC_COMM_WORLD, "   %12f       %12g\n",
  //         (double)re,
  //                            (double)error);
  //         CHKERRQ(ierr);
  //       }
  //     }
  //     ierr = PetscPrintf(PETSC_COMM_WORLD, "\n");
  //     CHKERRQ(ierr);
  //   }

  //   /*
  //      Free work space
  //   */
  //   ierr = EPSDestroy(&eps);
  //   CHKERRQ(ierr);
  //   ierr = MatDestroy(&A);
  //   CHKERRQ(ierr);
  //   ierr = VecDestroy(&xr);
  //   CHKERRQ(ierr);
  //   ierr = VecDestroy(&xi);
  //   CHKERRQ(ierr);
  ierr = SlepcFinalize();
  return ierr;
}
