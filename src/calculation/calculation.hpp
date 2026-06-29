#ifndef POLYQUANT_CALCULATION_H
#define POLYQUANT_CALCULATION_H

/**
 * @file calculation.hpp
 * @brief Top-level calculation orchestration and output-dump interfaces.
 */
#include "basis/basis.hpp"
#include "ci/epci.hpp"
#include "integral/integral.hpp"
#include "io/hdf5_utilities.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include "scf/epscf.hpp"
#include "symmetry/symmetry.hpp"
#include <algorithm>
#include <string>
#include <unordered_set>

namespace polyquant {

/**
 * @brief Orchestrates input parsing, subsystem setup, mean-field execution, and post-mean-field workflows.
 *
 * A calculation owns shared handles to the parsed input, symmetry, molecule,
 * basis, and integral subsystems, then lazily constructs SCF and CI drivers as
 * required by the requested model. The orchestration layer also exposes helper
 * routines for writing QMCPACK-oriented HDF5 outputs after mean-field or CI
 * runs.
 *
 * The high-level dispatch is:
 * input JSON -> symmetry -> molecule -> basis -> integrals -> SCF or file-based
 * orbitals -> optional CI/FCIDUMP/QMCPACK outputs.
 */
class POLYQUANT_CALCULATION {
public:
  POLYQUANT_CALCULATION() = default;
  /**
   * @brief Construct and fully initialize the calculation context from an input file.
   *
   * @param filename Path to the Polyquant JSON input file.
   */
  POLYQUANT_CALCULATION(const std::string &filename);
  /**
   * @brief Parse input and construct the shared core subsystems in dependency order.
   *
   * Side effects include reading the input file, printing section headers, and
   * constructing Libint/libmsym-backed objects through the downstream
   * subsystems.
   *
   * @param filename Path to the Polyquant JSON input file.
   */
  void setup_calculation(const std::string &filename);
  /**
   * @brief Dispatch the requested calculation workflow.
   *
   * This examines the requested mean-field and post-mean-field methods and
   * chooses one of three paths: post-mean-field, file-backed post-mean-field,
   * or ordinary mean-field execution.
   */
  void run();
  /**
   * @brief Run or resume a mean-field workflow.
   *
   * Supports native SCF execution or HDF5-backed orbital import via the special
   * `"FILE"` mode. May also emit QMCPACK HDF5 output files.
   *
   * @param mean_field_type Uppercase mean-field method selector.
   */
  void run_mean_field(std::string &mean_field_type);
  /**
   * @brief Run a post-mean-field workflow such as CI or FCIDUMP export.
   *
   * This method ensures a mean-field reference is available, configures the CI
   * driver from `keywords->ci_keywords`, and then either runs CI iterations or
   * exports integral data.
   *
   * @param post_mean_field_type Uppercase post-mean-field selector.
   */
  void run_post_mean_field(std::string &post_mean_field_type);

  // void
  // run_excess_electron_plus_electronic_mean_field(std::string
  // &mean_field_type); void
  // run_excess_positron_plus_electronic_mean_field(std::string
  // &mean_field_type);
  /**
   * @brief Determine the requested mean-field mode from the input JSON.
   *
   * @return Uppercase method name, `"FILE"` for HDF5-backed orbital import, or
   *   `"NONE"` when no mean-field work is requested.
   */
  std::string parse_mean_field();
  /**
   * @brief Determine the requested post-mean-field mode from the input JSON.
   *
   * @return Uppercase method name or `"NONE"` when no post-mean-field work is
   *   requested.
   */
  std::string parse_post_mean_field();
  /**
   * @brief Dump mean-field orbitals and metadata to QMCPACK-style HDF5 files.
   *
   * One file is written per quantum-particle type with the particle name
   * prepended to `filename`.
   *
   * @param filename Base HDF5 filename suffix from the input.
   */
  void dump_mf_for_qmcpack(std::string &filename);
  /**
   * @brief Dump CI natural-spin-orbital data to QMCPACK-style HDF5 files.
   *
   * One file is written for each requested CI state and quantum-particle type.
   *
   * @param filename Base HDF5 filename suffix from the input.
   */
  void dump_post_mf_NOs_for_qmcpack(std::string &filename);
  /**
   * @brief Dump multideterminant CI coefficients and occupancies for QMCPACK.
   *
   * @param filename Base HDF5 filename suffix from the input.
   */
  void dump_post_mf_for_qmcpack(std::string &filename);
  /**
   * @brief Shared parsed input parameters retained for the orchestration lifetime.
   */
  std::shared_ptr<POLYQUANT_INPUT> input_params;

  /**
   * @brief Shared molecular and particle specification.
   */
  std::shared_ptr<POLYQUANT_MOLECULE> input_molecule;

  /**
   * @brief Shared AO basis and SALC data.
   */
  std::shared_ptr<POLYQUANT_BASIS> input_basis;

  /**
   * @brief Shared integral driver and cached AO/MO integral storage.
   */
  std::shared_ptr<POLYQUANT_INTEGRAL> input_integral;

  /**
   * @brief Shared symmetry handler used across molecule, basis, SCF, and CI layers.
   */
  std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry;

  /**
   * @brief Mean-field driver allocated when SCF or file-backed orbitals are needed.
   */
  std::shared_ptr<POLYQUANT_EPSCF> scf_calc;

  /**
   * @brief CI driver allocated when post-mean-field work is requested.
   */
  std::shared_ptr<POLYQUANT_EPCI> ci_calc;

  /**
   * @brief Recognized native mean-field methods accepted by the dispatcher.
   */
  const std::unordered_set<std::string> mean_field_methods = {"SCF"};
  /**
   * @brief Recognized post-mean-field methods accepted by the dispatcher.
   */
  const std::unordered_set<std::string> post_mean_field_methods = {"CI", "FCIDUMP"};
};
} // namespace polyquant
#endif
