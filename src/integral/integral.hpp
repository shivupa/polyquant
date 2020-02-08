#include <basis/basis.hpp>
#include <io/io.hpp>
#include <molecule/molecule.hpp>
#include <slepceps.h> // IWYU pragma: keep
#include <vector>

#ifndef PYCI_INTEGRAL_H
#define PYCI_INTEGRAL_H
/**
 * @brief A class to calculate integrals for a given molecule in a given basis.
 *
 */
class PYCI_INTEGRAL {
public:
  PYCI_INTEGRAL() = default;
  /**
   * @brief Construct a new pyci integral object by calling to setup_integral
   *
   * @param input the input parameters
   * @param basis the basis to calculate integrals in
   * @param molecule the molecule to calculate integrals for
   */
  PYCI_INTEGRAL(const PYCI_INPUT &input, const PYCI_BASIS &basis,
                const PYCI_MOLECULE &molecule);

  /**
   * @brief Create the matrivies and vector to hold the integrals and call to
   * the functions to calculate them.
   *
   * @param input the input parameters
   * @param basis the basis to calculate integrals in
   * @param molecule the molecule to calculate integrals for
   */
  void setup_integral(const PYCI_INPUT &input, const PYCI_BASIS &basis,
                      const PYCI_MOLECULE &molecule);
  /**
   * @brief Calculate the combined index for the vector containing the upper
   * triangle of a symmetric matrix from two indicies of the unflattened matrix.
   *
   * @param i index for the symmetric matrix
   * @param j index for the symmetric matrix
   * @return int combined index for the flattened upper triangle of the
   * symmetric matrix
   */
  int idx2(const int &i, const int &j);
  /**
   * @brief Calculate the combined index for the vector containing the unique
   * elements of a 4D symmetric tensor with 8 fold symmetry from four indicies
   * of the unflattened tensor.
   *
   * @param i index for the symmetric tensor
   * @param j index for the symmetric tensor
   * @param k index for the symmetric tensor
   * @param l index for the symmetric tensor
   * @return int combined index for the flattened unique elements of the
   * symmetric tensor
   */
  int idx8(const int &i, const int &j, const int &k, const int &l);

  /**
   * @brief Calculate one body integrals
   *
   * @param output_matrix the matrix to hold the one body ints
   * @param shells the basis set to calculate the one body integrals in
   * @param obtype the operator to calculate the integrals for
   * @param atoms if the operator is nuclear attraction coulomb, the we need to
   * know where the nuclei are
   */
  void compute_1body_ints(
      Mat &output_matrix, const libint2::BasisSet &shells,
      libint2::Operator obtype,
      const std::vector<libint2::Atom> &atoms = std::vector<libint2::Atom>());

  /**
   * @brief Calculate two body integrals
   *
   * @param output_vec the vector to hold the two body ints
   * @param shells the basis set to ccalculate the two body integrals in
   * @param obtype the operator just the coulomb operator
   */
  void compute_2body_ints(Vec &output_vec, const libint2::BasisSet &shells,
                          libint2::Operator obtype);

  /**
   * @brief Overlap integral matrix
   *
   */
  Mat overlap;
  /**
   * @brief Kinetic integral matrix
   *
   */
  Mat kinetic;
  /**
   * @brief Nuclear attraction integral matrix
   *
   */
  Mat nuclear;
  /**
   * @brief Two electron integral vector
   *
   */
  Vec twoelec;
};
#endif
