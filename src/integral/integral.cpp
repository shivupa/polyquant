#include <integral/integral.hpp>
#include <libint2.hpp> // IWYU pragma: keep
#include <numeric>
#include <slepceps.h> // IWYU pragma: keep

PYCI_INTEGRAL::PYCI_INTEGRAL(const PYCI_INPUT &input, const PYCI_BASIS &basis,
                             const PYCI_MOLECULE &molecule) {
  this->setup_integral(input, basis, molecule);
}

void PYCI_INTEGRAL::setup_integral(const PYCI_INPUT &input,
                                   const PYCI_BASIS &basis,
                                   const PYCI_MOLECULE &molecule) {

  auto num_basis = basis.num_basis;
  PetscErrorCode ierr;
  PetscViewer viewer;
  libint2::initialize();

  Selci_cout("INTEGRAL");
  Selci_cout("Calculating One Body Integrals...");

  ierr = MatCreateDense(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, num_basis,
                        num_basis, NULL, &(this->overlap));
  CHKERRV(ierr);
  MatSetUp(this->overlap);
  this->compute_1body_ints(this->overlap, basis.basis,
                           libint2::Operator::overlap);
  ierr = MatAssemblyBegin(this->overlap, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  ierr = MatAssemblyEnd(this->overlap, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  PetscViewerASCIIOpen(PETSC_COMM_WORLD, "ovlp.txt", &viewer);
  MatView(this->overlap, viewer);

  ierr = MatCreateDense(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, num_basis,
                        num_basis, NULL, &(this->kinetic));
  CHKERRV(ierr);
  MatSetUp(this->kinetic);
  this->compute_1body_ints(this->kinetic, basis.basis,
                           libint2::Operator::kinetic);
  ierr = MatAssemblyBegin(this->kinetic, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  ierr = MatAssemblyEnd(this->kinetic, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  PetscViewerASCIIOpen(PETSC_COMM_WORLD, "kin.txt", &viewer);
  MatView(kinetic, viewer);

  ierr = MatCreateDense(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, num_basis,
                        num_basis, NULL, &(this->nuclear));
  CHKERRV(ierr);
  MatSetUp(this->nuclear);
  this->compute_1body_ints(this->nuclear, basis.basis,
                           libint2::Operator::nuclear, molecule.libint_atom);
  ierr = MatAssemblyBegin(this->nuclear, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  ierr = MatAssemblyEnd(this->nuclear, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  PetscViewerASCIIOpen(PETSC_COMM_WORLD, "nuc.txt", &viewer);
  MatView(this->nuclear, viewer);

  Selci_cout("Calculating Two Body Integrals...");

  // the upper triangle of a square matrix is size N*(N-1)/2
  // this is that but where N=M*(M-1)/2
  auto two_elec_size = ((num_basis) * (num_basis + 1) *
                        ((num_basis * num_basis) + (num_basis) + 2)) /
                       8;
  ierr = VecCreateShared(PETSC_COMM_WORLD, PETSC_DECIDE, two_elec_size,
                         &(this->twoelec));
  CHKERRV(ierr);
  VecSetUp(this->twoelec);
  this->compute_2body_ints(this->twoelec, basis.basis,
                           libint2::Operator::coulomb);
  ierr = VecAssemblyBegin(this->twoelec);
  CHKERRV(ierr);
  ierr = VecAssemblyEnd(this->twoelec);
  CHKERRV(ierr);
  PetscViewerASCIIOpen(PETSC_COMM_WORLD, "eri.txt", &viewer);
  VecView(this->twoelec, viewer);

  libint2::finalize();
}

/**
 * @details This follows the HF test in the Libint2 repo. It constructs the
 * integral engine. This all needs to be flipped around so we are using the
 * SLEPc/PETSc get domain and calculating the integrals on each process that we
 * need to. Right now we calculate them all on each rank.
 */
void PYCI_INTEGRAL::compute_1body_ints(
    Mat &output_matrix, const libint2::BasisSet &shells,
    libint2::Operator obtype, const std::vector<libint2::Atom> &atoms) {

  // This all needs to be flipped around so we are using
  // the SLEPc/PETSc get domain and calculating the integrals
  // on each process that we need to. Right now we calculate
  // them on each rank

  // construct the overlap integrals engine
  libint2::Engine engine(obtype, shells.max_nprim(), shells.max_l(), 0);

  // nuclear attraction ints engine needs to know where the charges sit
  // the nuclei are charges in this case; in QM/MM there will also be classical
  // charges
  if (obtype == libint2::Operator::nuclear) {
    engine.set_params(libint2::make_point_charges(atoms));
  }

  auto shell2bf = shells.shell2bf();

  // buf[0] points to the target shell set after every call to engine.compute()
  const auto &buf = engine.results();
  // loop over unique shell pairs, {s1,s2} such that s1 >= s2
  // this is due to the permutational symmetry of the real integrals over
  // Hermitian operators: (1|2) = (2|1)
  for (auto s1 = 0; s1 != shells.size(); ++s1) {

    auto bf1 = shell2bf[s1]; // first basis function in this shell
    auto n1 = shells[s1].size();

    for (auto s2 = 0; s2 != shells.size(); ++s2) {

      auto bf2 = shell2bf[s2];
      auto n2 = shells[s2].size();
      // Todo use symmetry
      // compute shell pair
      engine.compute(shells[s1], shells[s2]);
      // Write values to the matrix
      // this stupid stuff is probably slow?
      std::vector<PetscInt> Petsc_bf1(n1);
      std::vector<PetscInt> Petsc_bf2(n2);
      std::iota(Petsc_bf1.begin(), Petsc_bf1.end(), bf1);
      std::iota(Petsc_bf2.begin(), Petsc_bf2.end(), bf2);
      // Selci_cout("bf1");
      // Selci_cout(n1);
      // Selci_cout(Petsc_bf1);
      // Selci_cout("bf2");
      // Selci_cout(n2);
      // Selci_cout(Petsc_bf2);
      MatSetValues(output_matrix, n1, Petsc_bf1.data(), n2, Petsc_bf2.data(),
                   buf[0], INSERT_VALUES);
    }
  }
}

/**
 * @details This follows the HF test in the Libint2 repo. It constructs the
 * integral engine. This all needs to be flipped around so we are using the
 * SLEPc/PETSc get domain and calculating the integrals on each process that we
 * need to. Right now we calculate them all on each rank.
 */
void PYCI_INTEGRAL::compute_2body_ints(Vec &output_vec,
                                       const libint2::BasisSet &shells,
                                       libint2::Operator obtype) {
  // Following the HF test in the Libint2 repo
  // construct the overlap integrals engine

  // This also needs to be flipped around so we are using
  // the SLEPc/PETSc get domain and calculating the integrals
  // on each process that we need to. This is harder cause
  // we have to go from an idx4 to the ijkl separated.
  libint2::Engine engine(obtype, shells.max_nprim(), shells.max_l(), 0);

  auto shell2bf = shells.shell2bf();

  // buf[0] points to the target shell set after every call to engine.compute()
  const auto &buf = engine.results();
  // loop over unique shell pairs, {s1,s2} such that s1 >= s2
  // this is due to the permutational symmetry of the real integrals over
  // Hermitian operators: (1|2) = (2|1)
  for (auto s1 = 0; s1 != shells.size(); ++s1) {
    auto bf1_first = shell2bf[s1]; // first basis function in this shell
    auto n1 = shells[s1].size();
    // std::vector<PetscInt> Petsc_bf1(n1);
    // std::iota(Petsc_bf1.begin(), Petsc_bf1.end(), bf1);
    for (auto s2 = 0; s2 <= s1; ++s2) {
      auto bf2_first = shell2bf[s2];
      auto n2 = shells[s2].size();
      // std::vector<PetscInt> Petsc_bf2(n2);
      // std::iota(Petsc_bf2.begin(), Petsc_bf2.end(), bf2);
      for (auto s3 = 0; s3 <= s1; ++s3) {
        auto bf3_first = shell2bf[s3]; // first basis function in this shell
        auto n3 = shells[s3].size();
        // std::vector<PetscInt> Petsc_bf3(n3);
        // std::iota(Petsc_bf3.begin(), Petsc_bf3.end(), bf3);
        for (auto s4 = 0; s4 <= (s1 == s3 ? s2 : s3); ++s4) {
          auto bf4_first = shell2bf[s4];
          auto n4 = shells[s4].size();
          // std::vector<PetscInt> Petsc_bf4(n4);
          // std::iota(Petsc_bf4.begin(), Petsc_bf4.end(), bf4);

          // Todo use symmetry
          // compute shell pair

          engine.compute(shells[s1], shells[s2], shells[s3], shells[s4]);

          const auto *buf_1234 = buf[0];
          if (buf_1234 == nullptr)
            continue; // if all integrals screened out, skip to next quartet
          for (PetscInt f1 = 0, f1234 = 0; f1 != n1; ++f1) {
            const auto bf1 = f1 + bf1_first;
            for (PetscInt f2 = 0; f2 != n2; ++f2) {
              const auto bf2 = f2 + bf2_first;
              for (PetscInt f3 = 0; f3 != n3; ++f3) {
                const auto bf3 = f3 + bf3_first;
                for (PetscInt f4 = 0; f4 != n4; ++f4, ++f1234) {
                  const auto bf4 = f4 + bf4_first;
                  PetscInt location = this->idx4(bf1, bf2, bf3, bf4);
                  VecSetValues(output_vec, 1, &location, &buf_1234[f1234],
                               INSERT_VALUES);
                }
              }
            }
          }
          // std::vector<PetscInt> insert_idx(n1 + n2 + n3 + n4);
          // for (auto i : Petsc_bf1) {
          //   for (auto j : Petsc_bf2) {
          //     for (auto k : Petsc_bf3) {
          //       for (auto l : Petsc_bf4) {
          //         insert_idx.push_back(this->idx4(i, j, k, l));
          //       }
          //     }
          //   }
          // }
          // std::cout << insert_idx.size() << std::endl;

          // VecSetValues(output_vec, insert_idx.size(), insert_idx.data(),
          // buf[0], INSERT_VALUES);
        }
      }
    }
  }
}

int PYCI_INTEGRAL::idx2(const int &i, const int &j) {
  if (i > j) {
    return ((i * (i + 1)) / 2) + j;
  } else {
    return ((j * (j + 1)) / 2) + i;
  }
}

int PYCI_INTEGRAL::idx4(const int &i, const int &j, const int &k,
                        const int &l) {
  return PYCI_INTEGRAL::idx2(PYCI_INTEGRAL::idx2(i, j),
                             PYCI_INTEGRAL::idx2(k, l));
}