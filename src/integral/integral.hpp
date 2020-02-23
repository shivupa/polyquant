#include "xtensor-blas/xlinalg.hpp"
#include "xtensor/xadapt.hpp"
#include "xtensor/xarray.hpp"
#include "xtensor/xview.hpp"
#include <basis/basis.hpp>
#include <io/io.hpp>
#include <libint2.hpp> // IWYU pragma: keep
#include <molecule/molecule.hpp>
#include <numeric>
#include <vector>
#include <xtensor/xnpy.hpp>

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

  void calculate_overlap();
  void calculate_kinetic();
  void calculate_nuclear();
  void
  calculate_polarization_potential(const xt::xarray<double> &operator_origin,
                                   const xt::xarray<double> &operator_coeff,
                                   const xt::xarray<double> &operator_exps);
  void calculate_two_electron();

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
      xt::xarray<double> &output_matrix, const libint2::BasisSet &shells,
      libint2::Operator obtype,
      const std::vector<libint2::Atom> &atoms = std::vector<libint2::Atom>());

  double primitive_integral_operator_expanded_in_gaussians(
      const xt::xarray<double> &origin1, const double &cont_coeff1,
      const double &exp1, const xt::xarray<int> &angular_momentum_1,
      const xt::xarray<double> &origin2, const double &cont_coeff2,
      const double &exp2, const xt::xarray<int> &angular_momentum_2,
      const xt::xarray<double> &operator_origin,
      const xt::xarray<double> &operator_coeff,
      const xt::xarray<double> &operator_exps);
  /**
   * @brief Calculate one body integrals with an operator that has been expanded
   * as a sum of gaussians
   *
   * @param output_matrix the matrix to hold the one body ints
   * @param shells the basis set to calculate the one body integrals in
   * @param operator_coeff the coefficients of the gaussians that the operator
   * has been expanded in
   * @param operator_exps the exponents of the gaussians that the operator has
   * been expanded in
   */
  void compute_1body_ints_operator_expanded_in_gaussians(
      xt::xarray<double> &output_matrix, const libint2::BasisSet &shells,
      const xt::xarray<double> &operator_origin,
      const xt::xarray<double> &operator_coeff,
      const xt::xarray<double> &operator_exps);
  /**
   * @brief Calculate two body integrals
   *
   * @param output_vec the vector to hold the two body ints
   * @param shells the basis set to ccalculate the two body integrals in
   * @param obtype the operator just the coulomb operator
   */
  void compute_2body_ints(xt::xarray<double> &output_vec,
                          const libint2::BasisSet &shells,
                          libint2::Operator obtype);

  void symmetric_orthogonalization();
  /**
   * @brief Overlap integral matrix
   *
   */
  xt::xarray<double> overlap;
  /**
   * @brief Kinetic integral matrix
   *
   */
  xt::xarray<double> kinetic;
  /**
   * @brief Nuclear attraction integral matrix
   *
   */
  xt::xarray<double> nuclear;
  /**
   * @brief Polarization potential integral matrix (where the potential was
   * expanded as a sum of gaussians)
   *
   */
  xt::xarray<double> polarization_potential;
  /**
   * @brief Two electron integral vector
   *
   */
  xt::xarray<double> twoelec;
  /**
   * @brief The orthogonalization matrix
   *
   */
  xt::xarray<double> orth_X;
  /**
   * @brief the input basis
   *
   */
  PYCI_BASIS input_basis;
  /**
   * @brief the input molecule
   *
   */
  PYCI_MOLECULE input_molecule;
};
#endif
