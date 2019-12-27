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
  int idx2(const int &i, const int &j);

  int idx4(const int &i, const int &j, const int &k, const int &l);

  void compute_1body_ints(
      Mat &output_matrix, const libint2::BasisSet &shells,
      libint2::Operator obtype,
      const std::vector<libint2::Atom> &atoms = std::vector<libint2::Atom>());

  void compute_2body_ints(Vec &output_vec, const libint2::BasisSet &shells,
                          libint2::Operator obtype);

  Mat overlap; // Overlap vector matrix
  Mat kinetic; // Kinetic vector matrix
  Mat nuclear; // Nuclear vector matrix
  Vec twoelec; // Two electron integral vector
};
#endif
