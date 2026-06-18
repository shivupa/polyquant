#ifndef POLYQUANT_INTEGRAL_H
#define POLYQUANT_INTEGRAL_H
#include "basis/basis.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <libint2.hpp> // IWYU pragma: keep
#include <locale>
#include <numeric>
#include <vector>

namespace polyquant {

template <typename T> inline int symmetric_matrix_triangular_idx(const T &i, const T &j) {
  if (i > j) {
    return ((i * (i + 1)) / 2) + j;
  } else {
    return ((j * (j + 1)) / 2) + i;
  }
}

/**
 * @brief A class to calculate integrals for a given molecule in a given basis.
 *
 */
class POLYQUANT_INTEGRAL {
public:
  POLYQUANT_INTEGRAL() = default;
  /**
   * @brief Construct a new polyquant integral object by calling to
   * setup_integral
   *
   * @param input the input parameters
   * @param basis the basis to calculate integrals in
   * @param molecule the molecule to calculate integrals for
   */
  POLYQUANT_INTEGRAL(std::shared_ptr<POLYQUANT_INPUT> input, std::shared_ptr<POLYQUANT_SYMMETRY> symmetry, std::shared_ptr<POLYQUANT_BASIS> basis, std::shared_ptr<POLYQUANT_MOLECULE> molecule);
  ~POLYQUANT_INTEGRAL();
  int eig_s2_linear_dep_threshold = 6;
  void parse_integral_parameters();
  void calculate_overlap();
  void calculate_Schwarz();
  void calculate_frozen_core_ints(std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &fc_dm, std::vector<int> &frozen_core);
  void calculate_unique_shell_pairs(double threshold = -1.0);
  void calculate_kinetic();
  void calculate_nuclear();
  void calculate_polarization_potential();
  //  void calculate_two_electron();
  std::pair<std::vector<size_t>, std::vector<size_t>> make_sorted_ijkl_idx(const size_t &quantum_part_a_idx, const size_t &quantum_part_b_idx, const size_t &i, const size_t &j, const size_t &k,
                                                                           const size_t &l);

  /**
   * @brief Create the matricies and vector to hold the integrals and call to
   * the functions to calculate them.
   *
   * @param input the input parameters
   * @param basis the basis to calculate integrals in
   * @param molecule the molecule to calculate integrals for
   */
  void setup_integral(std::shared_ptr<POLYQUANT_INPUT> input, std::shared_ptr<POLYQUANT_SYMMETRY> symmetry, std::shared_ptr<POLYQUANT_BASIS> basis, std::shared_ptr<POLYQUANT_MOLECULE> molecule);
  /**
   * @brief Calculate the combined index for the vector containing the upper
   * triangle of a symmetric matrix from two indicies of the unflattened matrix.
   *
   * @param i index for the symmetric matrix
   * @param j index for the symmetric matrix
   * @return int combined index for the flattened upper triangle of the
   * symmetric matrix
   */
  template <typename T> const T idx2(const T &i, const T &j) const {
    std::pair<T, T> ij_idx;
    ij_idx = std::make_pair(i, j);
    auto ij_elem = symmetric_matrix_triangular_idx(i, j);
    return ij_elem;
  }
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
  template <typename T> const T idx8(const T &i, const T &j, const T &k, const T &l) const { return idx2(idx2(i, j), idx2(k, l)); }

  /**
   * @brief Calculate one body integrals
   *
   * @param output_matrix the matrix to hold the one body ints
   * @param shells the basis set to calculate the one body integrals in
   * @param obtype the operator to calculate the integrals for
   * @param atoms if the operator is nuclear attraction coulomb, the we need to
   * know where the nuclei are
   */
  void compute_1body_ints(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &output_matrix, const libint2::BasisSet &shells, libint2::Operator obtype,
                          const std::vector<std::pair<double, std::array<double, 3>>> &atoms = std::vector<std::pair<double, std::array<double, 3>>>());

  /**
   * @brief Calculate Schwarz integrals (diagonal 2 body ints)
   *
   * @param output_matrix the matrix to hold the diagonal two body ints
   * @param shells the basis set to calculate the one body integrals in
   * @param obtype the operator to calculate the integrals for
   */
  void compute_Schwarz_ints(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &output_matrix, const libint2::BasisSet &shells_a, const libint2::BasisSet &shells_b, libint2::Operator obtype);
  std::tuple<std::unordered_map<size_t, std::vector<size_t>>, std::vector<std::vector<std::shared_ptr<libint2::ShellPair>>>> compute_shellpairs(const libint2::BasisSet &bs1, const double threshold);

  void compute_frozen_core_ints(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &output_matrix, std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &fc_dm,
                                const size_t quantum_part_a_idx, const size_t quantum_part_a_spin_idx, const size_t quantum_part_b_idx, const size_t quantum_part_b_spin_idx, libint2::Operator obtype);
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
  // void compute_1body_ints_operator_expanded_in_gaussians(
  //     Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &output_matrix,
  //     const libint2::BasisSet &shells, const Eigen::Matrix<double,
  //     Eigen::Dynamic, Eigen::Dynamic> &operator_origin, const
  //     Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &operator_coeff,
  //     const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>
  //     &operator_exps);
  /**
   * @brief Calculate two body integrals
   *
   * @param output_vec the vector to hold the two body ints
   * @param shells the basis set to ccalculate the two body integrals in
   * @param obtype the operator just the coulomb operator
   */
  void compute_2body_ints(Eigen::Matrix<double, Eigen::Dynamic, 1> &output_vec, const libint2::BasisSet &shells, libint2::Operator obtype);

  std::string orth_method = "canonical";
  std::vector<std::string> known_orth_method = {"canonical", "symmetric"};
  void calculate_orthogonalization();
  void symmetric_orthogonalization();
  void canonical_orthogonalization();

  /**
   * @brief Overlap integral matrix
   *
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> overlap;
  /**
   * @brief Kinetic integral matrix
   *
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> kinetic;
  /**
   * @brief Nuclear attraction integral matrix
   *
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> nuclear;
  /**
   * @brief Schwarz screening integrals (ij|ij)
   *
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> Schwarz;
  /**
   * @brief Frozen core effective one body integrals
   *
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> frozen_core_ints;
  /**
   * @brief The orthogonalization matrix
   *
   * [idx_part][irrep_idx]
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> orth_X;

  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> mo_one_body_ints;
  /**
   * @brief The two electron MO integrals stored as
   * [idx_part][spin_idx][idx_part][spin_idx]
   *
   */
  std::vector<std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>>> mo_two_body_ints;

  std::vector<std::tuple<std::unordered_map<size_t, std::vector<size_t>>, std::vector<std::vector<std::shared_ptr<libint2::ShellPair>>>>> unique_shell_pairs;

  void calculate_mo_1_body_integrals(std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &mo_coeff, std::vector<int> frozen_core, std::vector<int> deleted_virtual);

  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> transform_mo_2_body_integrals(const size_t &quantum_part_a_idx, const size_t &quantum_part_b_idx,
                                                                                      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &mo_coeffs_a,
                                                                                      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &mo_coeffs_b, int num_part_alpha, int num_part_beta,
                                                                                      std::vector<int> frozen_core, std::vector<int> deleted_virtual);
  void calculate_mo_2_body_integrals(std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &mo_coeffs, std::vector<int> frozen_core, std::vector<int> deleted_virtual);
  bool verbose = false;
  /**
   * @brief the input parameters
   *
   */
  std::shared_ptr<POLYQUANT_INPUT> input_params;
  std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry;
  /**
   * @brief the input basis
   *
   */
  std::shared_ptr<POLYQUANT_BASIS> input_basis;
  /**
   * @brief the input molecule
   *
   */
  std::shared_ptr<POLYQUANT_MOLECULE> input_molecule;

  double tolerance_2e = std::numeric_limits<double>::epsilon();
};
} // namespace polyquant
#endif
