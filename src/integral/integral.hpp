#ifndef POLYQUANT_INTEGRAL_H
#define POLYQUANT_INTEGRAL_H

/**
 * @file integral.hpp
 * @brief Integral generation, screening, orthogonalization, and AO->MO transforms.
 */
#include "basis/basis.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <libint2.hpp> // IWYU pragma: keep
#include <locale>
#include <numeric>
#include <vector>

namespace polyquant {

/**
 * @brief Flatten a symmetric two-index pair into triangular-storage coordinates.
 *
 * @tparam T Integral or shell index type.
 * @param i First index.
 * @param j Second index.
 * @return Triangular-storage index for the unordered pair `(i,j)`.
 */
template <typename T> inline int symmetric_matrix_triangular_idx(const T &i, const T &j) {
  if (i > j) {
    return ((i * (i + 1)) / 2) + j;
  } else {
    return ((j * (j + 1)) / 2) + i;
  }
}

/**
 * @brief Owns AO- and MO-basis integral intermediates for a Polyquant calculation.
 *
 * The object is initialized from already-parsed input, symmetry, basis, and
 * molecule objects. It then provides one-body integral builders, shell-pair
 * screening data, frozen-core effective one-body integrals, orthogonalization
 * matrices, and AO->MO transformations for two-body Coulomb integrals.
 *
 * Storage is indexed primarily by quantum-particle type, then by spin block,
 * and for symmetry-adapted quantities by irrep. Matrix elements follow the sign
 * conventions used in the rest of Polyquant, including multiplication by
 * particle charges where mixed-particle Coulomb terms are formed.
 *
 * Expensive routines scale from roughly quadratic shell loops for one-body
 * operators to quartic shell loops and quartic orbital transforms for two-body
 * operators. Callers should treat those methods as setup-time operations rather
 * than cheap accessors.
 */
class POLYQUANT_INTEGRAL {
public:
  POLYQUANT_INTEGRAL() = default;
  /**
   * @brief Construct and initialize integral storage for a calculation.
   *
   * @param input Shared calculation input parameters.
   * @param symmetry Shared symmetry data used for irrep-block orthogonalization.
   * @param basis Shared AO basis definitions and SALCs.
   * @param molecule Shared molecular and quantum-particle description.
   */
  POLYQUANT_INTEGRAL(std::shared_ptr<POLYQUANT_INPUT> input, std::shared_ptr<POLYQUANT_SYMMETRY> symmetry, std::shared_ptr<POLYQUANT_BASIS> basis, std::shared_ptr<POLYQUANT_MOLECULE> molecule);
  /**
   * @brief Finalize Libint resources owned by this integral layer.
   */
  ~POLYQUANT_INTEGRAL();
  /**
   * @brief Decimal exponent used when dropping small overlap eigenvalues.
   *
   * Canonical orthogonalization discards eigenvectors with eigenvalues below
   * `10^-eig_s2_linear_dep_threshold`.
   */
  int eig_s2_linear_dep_threshold = 6;
  /**
   * @brief Parse integral-related keywords from the input JSON tree.
   *
   * Reads overlap-screening tolerance, orthogonalization method, linear
   * dependency threshold, and verbosity controls. Invalid values abort.
   */
  void parse_integral_parameters();
  /**
   * @brief Build AO overlap matrices for each quantum-particle basis.
   *
   * The output is stored in `overlap[idx_part]` in basis-function order.
   */
  void calculate_overlap();
  /**
   * @brief Build shell-level Cauchy-Schwarz screening norms.
   *
   * The result is a shell-by-shell matrix of `sqrt((ij|ij)_inf)`-style bounds
   * used to cheaply screen later two-electron work.
   */
  void calculate_Schwarz();
  /**
   * @brief Form frozen-core effective one-body operators.
   *
   * @param fc_dm Frozen-core density matrices indexed `[idx_part][spin_idx]`.
   * @param frozen_core Number of frozen occupied orbitals per particle type.
   */
  void calculate_frozen_core_ints(std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &fc_dm, std::vector<int> &frozen_core);
  /**
   * @brief Precompute significant shell pairs for screened Coulomb work.
   *
   * @param threshold Overlap-norm cutoff. A negative value reuses
   *   `tolerance_2e`.
   */
  void calculate_unique_shell_pairs(double threshold = -1.0);
  /**
   * @brief Build AO kinetic-energy matrices for each quantum-particle basis.
   */
  void calculate_kinetic();
  /**
   * @brief Build AO nucleus-attraction matrices for each quantum-particle basis.
   *
   * Nuclear attraction is later multiplied by the quantum-particle charge when
   * constructing the one-body Hamiltonian.
   */
  void calculate_nuclear();
  /**
   * @brief Build optional polarization-potential one-body matrices.
   *
   * This hook is reserved for model potentials beyond the standard overlap,
   * kinetic, and Coulomb terms.
   */
  void calculate_polarization_potential();
  /**
   * @brief Canonicalize a four-index label pair for mixed-particle storage.
   *
   * @param quantum_part_a_idx First particle-type index.
   * @param quantum_part_b_idx Second particle-type index.
   * @param i First orbital index on particle type A.
   * @param j Second orbital index on particle type A.
   * @param k First orbital index on particle type B.
   * @param l Second orbital index on particle type B.
   * @return Sorted pair of three-element vectors describing the compressed
   *   `(ij,lk)` block ordering.
   */
  std::pair<std::vector<size_t>, std::vector<size_t>> make_sorted_ijkl_idx(const size_t &quantum_part_a_idx, const size_t &quantum_part_b_idx, const size_t &i, const size_t &j, const size_t &k,
                                                                           const size_t &l);

  /**
   * @brief Initialize Libint and resize all integral containers.
   *
   * The shared input objects are stored by shared pointer; callers must keep
   * them semantically valid for the lifetime of the integral object.
   *
   * @param input Shared calculation input parameters.
   * @param symmetry Shared symmetry data.
   * @param basis Shared AO basis data.
   * @param molecule Shared molecular data.
   */
  void setup_integral(std::shared_ptr<POLYQUANT_INPUT> input, std::shared_ptr<POLYQUANT_SYMMETRY> symmetry, std::shared_ptr<POLYQUANT_BASIS> basis, std::shared_ptr<POLYQUANT_MOLECULE> molecule);
  /**
   * @brief Compress an unordered orbital pair into triangular storage.
   *
   * @tparam T Integral index type.
   * @param i First index.
   * @param j Second index.
   * @return Triangular-storage offset for the pair `(i,j)`.
   */
  template <typename T> T idx2(const T &i, const T &j) const {
    auto ij_elem = symmetric_matrix_triangular_idx(i, j);
    return ij_elem;
  }
  /**
   * @brief Compress a four-index Coulomb tensor with eightfold permutation symmetry.
   *
   * @tparam T Integral index type.
   * @param i First index.
   * @param j Second index.
   * @param k Third index.
   * @param l Fourth index.
   * @return Triangular-storage offset for the unordered pair of unordered pairs
   *   `((i,j),(k,l))`.
   */
  template <typename T> const T idx8(const T &i, const T &j, const T &k, const T &l) const { return idx2(idx2(i, j), idx2(k, l)); }

  /**
   * @brief Evaluate an AO one-body operator with Libint.
   *
   * @param output_matrix Dense AO matrix to overwrite.
   * @param shells Basis set whose shell ordering defines matrix indexing.
   * @param obtype Libint operator to evaluate.
   * @param atoms Point-charge list used for nuclear attraction operators. Each
   *   entry stores charge and Cartesian coordinates in the units expected by
   *   Libint.
   */
  void compute_1body_ints(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &output_matrix, const libint2::BasisSet &shells, libint2::Operator obtype,
                          const std::vector<std::pair<double, std::array<double, 3>>> &atoms = std::vector<std::pair<double, std::array<double, 3>>>());

  /**
   * @brief Evaluate shellwise Schwarz screening bounds for two-body Coulomb work.
   *
   * @param output_matrix Shell-pair matrix of screening norms to overwrite.
   * @param shells_a First basis set.
   * @param shells_b Second basis set.
   * @param obtype Two-body Libint operator, expected to be Coulomb.
   */
  void compute_Schwarz_ints(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &output_matrix, const libint2::BasisSet &shells_a, const libint2::BasisSet &shells_b, libint2::Operator obtype);
  /**
   * @brief Build screened shell-pair lookup tables and Libint shell-pair metadata.
   *
   * @param bs1 Basis set used for both bra and ket shell spaces.
   * @param threshold Overlap-norm threshold used to keep off-center pairs.
   * @return Tuple containing the significant shell index map and matching
   *   precomputed `libint2::ShellPair` objects.
   */
  std::tuple<std::unordered_map<size_t, std::vector<size_t>>, std::vector<std::vector<std::shared_ptr<libint2::ShellPair>>>> compute_shellpairs(const libint2::BasisSet &bs1, const double threshold);

  /**
   * @brief Contract frozen-core densities into an effective one-body operator.
   *
   * @param output_matrix Dense AO matrix to accumulate into.
   * @param fc_dm Frozen-core density matrices for particle type B.
   * @param quantum_part_a_idx Bra particle-type index.
   * @param quantum_part_a_spin_idx Bra spin-block index.
   * @param quantum_part_b_idx Ket particle-type index.
   * @param quantum_part_b_spin_idx Ket spin-block index.
   * @param obtype Two-body Libint operator, expected to be Coulomb.
   */
  void compute_frozen_core_ints(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &output_matrix, std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &fc_dm,
                                const size_t quantum_part_a_idx, const size_t quantum_part_a_spin_idx, const size_t quantum_part_b_idx, const size_t quantum_part_b_spin_idx, libint2::Operator obtype);
  /*
   * Disabled prototype for calculating one-body integrals with an operator
   * expanded as a sum of Gaussians.
   */
  // void compute_1body_ints_operator_expanded_in_gaussians(
  //     Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &output_matrix,
  //     const libint2::BasisSet &shells, const Eigen::Matrix<double,
  //     Eigen::Dynamic, Eigen::Dynamic> &operator_origin, const
  //     Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &operator_coeff,
  //     const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>
  //     &operator_exps);
  /**
   * @brief Evaluate AO two-body integrals in compressed eightfold-symmetric form.
   *
   * @param output_vec Flattened storage for unique `(ij|kl)` values, indexed
   *   by `idx8(i,j,k,l)` in AO basis-function order.
   * @param shells Basis set defining AO ordering.
   * @param obtype Two-body Libint operator, expected to be Coulomb.
   */
  void compute_2body_ints(Eigen::Matrix<double, Eigen::Dynamic, 1> &output_vec, const libint2::BasisSet &shells, libint2::Operator obtype);

  /**
   * @brief Orthogonalization algorithm selected from input.
   */
  std::string orth_method = "canonical";
  /**
   * @brief Recognized orthogonalization method names accepted in the input.
   */
  std::vector<std::string> known_orth_method = {"canonical", "symmetric"};
  /**
   * @brief Dispatch orthogonalizer construction according to `orth_method`.
   */
  void calculate_orthogonalization();
  /**
   * @brief Build symmetric orthogonalizers in each particle/irrep block.
   *
   * This path preserves all SALC columns and therefore does not remove linear
   * dependencies.
   */
  void symmetric_orthogonalization();
  /**
   * @brief Build canonical orthogonalizers in each particle/irrep block.
   *
   * Eigenvectors below the configured overlap threshold are discarded to remove
   * linear dependencies.
   */
  void canonical_orthogonalization();

  /**
   * @brief AO overlap matrices indexed `[idx_part]`.
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> overlap;
  /**
   * @brief AO kinetic-energy matrices indexed `[idx_part]`.
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> kinetic;
  /**
   * @brief AO nuclear-attraction matrices indexed `[idx_part]`.
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> nuclear;
  /**
   * @brief Shell-level Schwarz screening matrices indexed `[idx_part]`.
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> Schwarz;
  /**
   * @brief Frozen-core effective one-body operators `[idx_part][spin_idx]`.
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> frozen_core_ints;
  /**
   * @brief Orthogonalizers indexed `[idx_part][irrep_idx]`.
   *
   * Each matrix maps AO coefficients into a symmetry-adapted orthonormal basis.
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> orth_X;

  /**
   * @brief One-body MO Hamiltonian blocks `[idx_part][spin_idx]`.
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> mo_one_body_ints;
  /**
   * @brief Compressed MO two-body Coulomb blocks.
   *
   * Stored as `[idx_part_a][spin_a][idx_part_b][spin_b]`, where each matrix
   * uses triangular pair indices on both axes.
   */
  std::vector<std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>>> mo_two_body_ints;

  /**
   * @brief Significant shell-pair maps and Libint shell-pair metadata by particle type.
   */
  std::vector<std::tuple<std::unordered_map<size_t, std::vector<size_t>>, std::vector<std::vector<std::shared_ptr<libint2::ShellPair>>>>> unique_shell_pairs;

  /**
   * @brief Transform AO one-body operators into the truncated MO basis.
   *
   * @param mo_coeff Molecular-orbital coefficients `[idx_part][spin_idx]`.
   * @param frozen_core Number of frozen occupied orbitals per particle type.
   * @param deleted_virtual Number of truncated virtual orbitals per particle type.
   */
  void calculate_mo_1_body_integrals(std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &mo_coeff, std::vector<int> frozen_core, std::vector<int> deleted_virtual);

  /**
   * @brief Transform a mixed-particle AO Coulomb tensor into compressed MO form.
   *
   * @param quantum_part_a_idx First particle-type index.
   * @param quantum_part_b_idx Second particle-type index.
   * @param mo_coeffs_a MO coefficients for particle type A.
   * @param mo_coeffs_b MO coefficients for particle type B.
   * @param num_part_alpha Number of alpha particles for particle type A/B block selection.
   * @param num_part_beta Number of beta particles for particle type A/B block selection.
   * @param frozen_core Frozen occupied counts per particle type.
   * @param deleted_virtual Truncated virtual counts per particle type.
   * @return Dense matrix whose row and column indices are compressed MO pairs.
   */
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> transform_mo_2_body_integrals(const size_t &quantum_part_a_idx, const size_t &quantum_part_b_idx,
                                                                                      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &mo_coeffs_a,
                                                                                      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &mo_coeffs_b, int num_part_alpha, int num_part_beta,
                                                                                      std::vector<int> frozen_core, std::vector<int> deleted_virtual);
  /**
   * @brief Transform all stored AO two-body operators into compressed MO blocks.
   *
   * @param mo_coeffs Molecular-orbital coefficients `[idx_part][spin_idx]`.
   * @param frozen_core Number of frozen occupied orbitals per particle type.
   * @param deleted_virtual Number of truncated virtual orbitals per particle type.
   */
  void calculate_mo_2_body_integrals(std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &mo_coeffs, std::vector<int> frozen_core, std::vector<int> deleted_virtual);
  /**
   * @brief Enable text dumps of computed matrices to the working directory.
   */
  bool verbose = false;
  /**
   * @brief Shared parsed input parameters retained for the object lifetime.
   */
  std::shared_ptr<POLYQUANT_INPUT> input_params;
  /**
   * @brief Shared symmetry data used to size irrep-resolved orthogonalizers.
   */
  std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry;
  /**
   * @brief Shared AO basis and SALC data used by all integral builders.
   */
  std::shared_ptr<POLYQUANT_BASIS> input_basis;
  /**
   * @brief Shared molecular and particle data used for charges and loop structure.
   */
  std::shared_ptr<POLYQUANT_MOLECULE> input_molecule;

  /**
   * @brief Default shell-pair screening tolerance for two-electron work.
   */
  double tolerance_2e = std::numeric_limits<double>::epsilon();
};
} // namespace polyquant
#endif
