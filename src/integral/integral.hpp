#include <basis/basis.hpp>
#include <io/io.hpp>
#include <iostream>
#include <molecule/molecule.hpp>
#include <slepceps.h>
#include <string>
#include <vector>

#ifndef PYCI_INTEGRAL_H
#define PYCI_INTEGRAL_H
class PYCI_INTEGRAL {
public:
  PYCI_INTEGRAL(const PYCI_INPUT &input, const PYCI_BASIS &basis,
                const PYCI_MOLECULE &molecule);
  size_t nbasis(const std::vector<libint2::Shell> &shells);

  size_t max_nprim(const std::vector<libint2::Shell> &shells);

  int max_l(const std::vector<libint2::Shell> &shells);

  std::vector<size_t>
  map_shell_to_basis_function(const std::vector<libint2::Shell> &shells);
  void compute_1body_ints(
      Mat &output_matrix, const std::vector<libint2::Shell> &shells,
      libint2::Operator obtype,
      const std::vector<libint2::Atom> &atoms = std::vector<libint2::Atom>());

  Mat overlap; // Overlap matrix
  Mat kinetic; // Kinetic matrix
  Mat nuclear; // Nuclear matrix
};
#endif
