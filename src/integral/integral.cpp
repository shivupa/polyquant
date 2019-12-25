#include <integral/integral.hpp>
#include <io/io.hpp>
#include <iostream>
#include <libint2.hpp>
#include <numeric>
#include <slepceps.h>
#include <sstream>

PYCI_INTEGRAL::PYCI_INTEGRAL(const PYCI_INPUT &input, const PYCI_BASIS &basis,
                             const PYCI_MOLECULE &molecule) {
  libint2::initialize();
  PetscErrorCode ierr;
  Selci_cout("INTEGRAL");
  const auto num_basis = this->nbasis(basis.basis);

  ierr = MatCreateDense(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, num_basis,
                        num_basis, NULL, &overlap);
  CHKERRV(ierr);
  MatSetUp(overlap);
  this->compute_1body_ints(overlap, basis.basis, libint2::Operator::overlap);
  ierr = MatAssemblyBegin(overlap, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  ierr = MatAssemblyEnd(overlap, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  PetscViewer viewer;
  PetscViewerASCIIOpen(PETSC_COMM_WORLD, "ovlp.txt", &viewer);
  MatView(overlap, viewer);

  ierr = MatCreateDense(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, num_basis,
                        num_basis, NULL, &kinetic);
  CHKERRV(ierr);
  MatSetUp(kinetic);
  this->compute_1body_ints(kinetic, basis.basis, libint2::Operator::kinetic);
  ierr = MatAssemblyBegin(kinetic, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  ierr = MatAssemblyEnd(kinetic, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  PetscViewerASCIIOpen(PETSC_COMM_WORLD, "kin.txt", &viewer);
  MatView(kinetic, viewer);

  ierr = MatCreateDense(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, num_basis,
                        num_basis, NULL, &nuclear);
  CHKERRV(ierr);
  MatSetUp(nuclear);
  this->compute_1body_ints(nuclear, basis.basis, libint2::Operator::nuclear,
                           molecule.libint_atom);
  ierr = MatAssemblyBegin(nuclear, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  ierr = MatAssemblyEnd(nuclear, MAT_FINAL_ASSEMBLY);
  CHKERRV(ierr);
  PetscViewerASCIIOpen(PETSC_COMM_WORLD, "nuc.txt", &viewer);
  MatView(nuclear, viewer);

  libint2::finalize();
}

size_t PYCI_INTEGRAL::nbasis(const std::vector<libint2::Shell> &shells) {
  size_t n = 0;
  for (const auto &shell : shells)
    n += shell.size();
  return n;
}

size_t PYCI_INTEGRAL::max_nprim(const std::vector<libint2::Shell> &shells) {
  size_t n = 0;
  for (auto shell : shells)
    n = std::max(shell.nprim(), n);
  return n;
}

int PYCI_INTEGRAL::max_l(const std::vector<libint2::Shell> &shells) {
  int l = 0;
  for (auto shell : shells)
    for (auto c : shell.contr)
      l = std::max(c.l, l);
  return l;
}

std::vector<size_t> PYCI_INTEGRAL::map_shell_to_basis_function(
    const std::vector<libint2::Shell> &shells) {
  std::vector<size_t> result;
  result.reserve(shells.size());

  size_t n = 0;
  for (auto shell : shells) {
    result.push_back(n);
    n += shell.size();
  }

  return result;
}

void PYCI_INTEGRAL::compute_1body_ints(
    Mat &output_matrix, const std::vector<libint2::Shell> &shells,
    libint2::Operator obtype, const std::vector<libint2::Atom> &atoms) {
  // Following the HF test in the Libint2 repo
  // construct the overlap integrals engine
  libint2::Engine engine(obtype, this->max_nprim(shells), this->max_l(shells),
                         0);

  // nuclear attraction ints engine needs to know where the charges sit
  // the nuclei are charges in this case; in QM/MM there will also be classical
  // charges
  if (obtype == libint2::Operator::nuclear) {
    std::vector<
        std::pair<libint2::scalar_type, std::array<libint2::scalar_type, 3>>>
        q;
    for (const auto &atom : atoms) {
      q.push_back({static_cast<libint2::scalar_type>(atom.atomic_number),
                   {{atom.x, atom.y, atom.z}}});
    }
    engine.set_params(q);
  }

  auto shell2bf = this->map_shell_to_basis_function(shells);

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