#ifndef POLYQUANT_BASIS_H
#define POLYQUANT_BASIS_H
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <algorithm>
#include <cpr/cpr.h> // IWYU pragma: keep
#include <filesystem>
#include <iterator>
#include <libint2.hpp> // IWYU pragma: keep
#include <numbers>
#include <stdlib.h>
#include <string>

namespace polyquant {

/**
 * @file basis.hpp
 * @brief Basis-set loading, labeling, and symmetry-adaptation interfaces.
 */

/**
 * @brief Hold per-particle Gaussian basis data and symmetry-adapted transforms.
 *
 * The basis object owns one Libint basis per quantum particle type and records
 * the AO labels, SALC transforms, and symmetry metadata needed by integral,
 * SCF, and CI code. Container indices generally follow `[particle index]`,
 * `[particle index][irrep index]`, or `[particle index][ao index]`.
 */
class POLYQUANT_BASIS {
public:
  POLYQUANT_BASIS() = default;
  /**
   * @brief Construct and immediately load all particle-type basis sets.
   *
   * This is equivalent to default construction followed by
   * `load_basis(input_params, input_symmetry, input_molecule)`.
   *
   * @param input_params Shared parsed-input object. Ownership remains with the
   * caller.
   * @param input_symmetry Shared symmetry handler used when building SALCs and
   * irrep metadata.
   * @param input_molecule Shared molecule object providing centers, particle
   * types, and point-group geometry information.
   */
  POLYQUANT_BASIS(std::shared_ptr<POLYQUANT_INPUT> input_params, std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry, std::shared_ptr<POLYQUANT_MOLECULE> input_molecule);
  /**
   * @brief Load basis sets for every quantum particle type in the input.
   *
   * This method stores shared references to the input, symmetry, and molecule
   * objects; reads `model.basis`; loads either library-backed or custom-file
   * basis data; computes AO labels; and builds either identity, point-group, or
   * `SO(3)` SALC transforms.
   *
   * @param input_params Shared parsed-input object containing `model.basis` and
   * optional `keywords.pure`.
   * @param input_symmetry Shared symmetry handler. The object is mutated to
   * store irrep names, symmetry-operation names, character tables, and direct
   * products.
   * @param input_molecule Shared molecule object that supplies center labels and
   * coordinates in bohr.
   *
   * @note This routine aborts if required `model` or `model.basis` sections are
   * missing.
   */
  void load_basis(std::shared_ptr<POLYQUANT_INPUT> input_params, std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry, std::shared_ptr<POLYQUANT_MOLECULE> input_molecule);

  /**
   * @brief Load all basis shells requested for one quantum particle type.
   *
   * @param quantum_part_key Name of the quantum particle type, for example
   * `electron` or `positron`.
   * @param qp_basis Output Libint basis that is appended to in place.
   *
   * @note This routine aborts if the input does not contain a basis section for
   * the requested particle type.
   */
  void load_quantum_particle_basis(const std::string &quantum_part_key, libint2::BasisSet &qp_basis);

  /**
   * @brief Load all center-specific basis entries for one particle and one
   * classical species.
   *
   * @param quantum_part_key Quantum particle type key.
   * @param classical_part_key Classical center label such as `H`, `O`, or a
   * ghost-center label.
   * @param classical_part Classical-particle metadata, including center indices.
   * @param qp_basis Output Libint basis appended to in place.
   */
  void load_quantum_particle_atom_basis(const std::string &quantum_part_key, const std::string &classical_part_key, const CLASSICAL_PARTICLE_SET &classical_part, libint2::BasisSet &qp_basis);

  /**
   * @brief Load one library-backed basis entry for a specific particle/center
   * pair.
   *
   * The routine first tries Libint's built-in basis library. If that fails, it
   * downloads Gaussian94-formatted basis text from Basis Set Exchange and dumps
   * the downloaded file locally before reloading it through Libint.
   *
   * @param quantum_part_key Quantum particle type key.
   * @param classical_part_key Classical center label.
   * @param center_basis_idx Index within
   * `model.basis[quantum_part_key][classical_part_key]`.
   * @param qp_basis Output Libint basis appended to in place.
   *
   * @note This may perform network I/O and write an `EMSL_LOADED_BASIS_*`
   * helper file in the working directory.
   */
  void load_quantum_particle_atom_basis_library(const std::string &quantum_part_key, const std::string &classical_part_key, const int &center_basis_idx, libint2::BasisSet &qp_basis);

  /**
   * @brief Load one custom basis entry for a specific particle/center pair.
   *
   * Currently only Gaussian94 file-backed custom bases are supported.
   *
   * @param quantum_part_key Quantum particle type key.
   * @param classical_part_key Classical center label.
   * @param center_basis_idx Index within
   * `model.basis[quantum_part_key][classical_part_key]`.
   * @param classical_part Classical-particle metadata providing the list of
   * centers that receive the custom basis.
   * @param qp_basis Output Libint basis appended to in place.
   */
  void load_quantum_particle_atom_basis_custom(const std::string &quantum_part_key, const std::string &classical_part_key, const int &center_basis_idx, const CLASSICAL_PARTICLE_SET &classical_part,
                                               libint2::BasisSet &qp_basis);

  /**
   * @brief Read the optional `keywords.pure` flag.
   *
   * When true, Libint shells are treated as pure spherical harmonics where the
   * basis data supports that representation.
   */
  void set_pure_from_input();

  /**
   * @brief Enable Libint unit normalization for shell contractions.
   *
   * This mutates Libint global shell-normalization behavior for the current
   * process and prints the resulting setting for developer-facing logs.
   */
  void set_libint_shell_norm();

  /**
   * @brief Print every loaded shell to the standard Polyquant output stream.
   *
   * This is primarily developer-facing diagnostic output.
   */
  void print_basis();

  /**
   * @brief Build human-readable AO labels for each basis function.
   *
   * AO labels are stored as four-part vectors
   * `[center label, principal-like shell counter, angular label, component]`.
   * For spherical shells the final component is an `m` label such as `+0`; for
   * cartesian shells it uses labels names such as `xxz` in the same order as GAMESS.
   */
  void set_ao_labels();

  /**
   * @brief GAMESS-order cartesian component labels keyed by angular momentum.
   *
   * We use the GAMESS ordering because it plays well with QMCPACK's expected ordering.
   */
  std::vector<std::vector<std::string>> gamess_cartesian_ordering_labels = {
      {""},
      {"x", "y", "z"},
      {"xx", "yy", "zz", "xy", "xz", "yz"},
      {"xxx", "yyy", "zzz", "xxy", "xxz", "yyx", "yyz", "zzx", "zzy", "xyz"},
      {"xxxx", "yyyy", "zzzz", "xxxy", "xxxz", "yyyx", "yyyz", "zzzx", "zzzy", "xxyy", "xxzz", "yyzz", "xxyz", "yyxz", "zzxy"},
      {"xxxxx", "yyyyy", "zzzzz", "xxxxy", "xxxxz", "yyyyx", "yyyyz", "zzzzx", "zzzzy", "xxxyy", "xxxzz", "yyyxx", "yyyzz", "zzzxx", "zzzyy", "xxxyz", "yyyxz", "zzzxy", "xxyyz", "xxzzy", "yyzzx"},
      {"xxxxxx", "yyyyyy", "zzzzzz", "xxxxxy", "xxxxxz", "yyyyyx", "yyyyyz", "zzzzzx", "zzzzzy", "xxxxyy", "xxxxzz", "yyyyxx", "yyyyzz", "zzzzxx",
       "zzzzyy", "xxxxyz", "yyyyxz", "zzzzxy", "xxxyyy", "xxxzzz", "yyyzzz", "xxxyyz", "xxxzzy", "yyyxxz", "yyyzzx", "zzzxxy", "zzzyyx", "xxyyzz"}};

  /**
   * @brief Build symmetry-adapted linear combinations for the loaded basis.
   *
   * This routine chooses between identity `C1`, spherical `SO(3)`, or libmsym
   * point-group SALC construction based on the active symmetry mode.
   */
  void symmetrize_basis();

  /**
   * @brief Build `SO(3)` SALCs for spherical basis functions.
   *
   * This mode requires pure spherical functions and aborts for cartesian
   * shells.
   */
  void symmetrize_basis_SO3();

  /**
   * @brief Reorder the combined SALC matrix to Polyquant's AO ordering if
   * needed.
   *
   * @param combined_salcs Dense SALC matrix with rows in AO order and columns
   * in SALC order.
   * @param basis_idx Particle-type basis index associated with the SALC block.
   */
  void reorder_combined_salcs(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &combined_salcs, const size_t basis_idx);

  /**
   * @brief Shared parsed-input object used while loading and labeling bases.
   */
  std::shared_ptr<POLYQUANT_INPUT> input;

  /**
   * @brief Shared symmetry handler mutated during SALC construction.
   */
  std::shared_ptr<POLYQUANT_SYMMETRY> symmetry;

  /**
   * @brief Shared molecule object that provides centers and particle metadata.
   */
  std::shared_ptr<POLYQUANT_MOLECULE> molecule;

  /**
   * @brief Libint basis objects keyed by particle index.
   */
  std::vector<libint2::BasisSet> basis;

  /**
   * @brief AO labels keyed by `[particle index][ao index][label component]`.
   */
  std::vector<std::vector<std::vector<std::string>>> ao_labels;
  /**
   * @brief Number of AO basis functions keyed by particle index.
   */
  std::vector<size_t> num_basis;

  /**
   * @brief Number of SALCs in each irrep keyed by `[particle index][irrep index]`.
   */
  std::vector<std::vector<int>> salc_per_irrep;

  /**
   * @brief SALC coefficient matrices keyed by `[particle index][irrep index]`.
   *
   * Each matrix has AO rows and SALC columns.
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> salcs;

  /**
   * @brief libmsym partner-function metadata keyed by `[particle index][ao index]`.
   */
  std::vector<std::vector<msym_partner_function_t>> pf;

  /**
   * @brief libmsym species identifiers keyed by `[particle index][ao index]`.
   */
  std::vector<std::vector<int>> species;

  /**
   * @brief Whether newly loaded shells should use pure spherical functions.
   */
  bool pure = true;
};
} // namespace polyquant
#endif
