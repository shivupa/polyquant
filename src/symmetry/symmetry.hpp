#ifndef POLYQUANT_SYMMETRY_H
#define POLYQUANT_SYMMETRY_H
#include "io/input.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include "molecule/classical_particles.hpp"
#include "molecule/quantum_particles.hpp"
#include <algorithm>
#include <iostream>
#include <libmsym/msym.h>
#include <numeric>
#include <string>
#include <vector>

namespace polyquant {

/**
 * @file symmetry.hpp
 * @brief Symmetry metadata and libmsym context management for Polyquant.
 */

/**
 * @brief Store symmetry mode, libmsym handles, and irrep metadata.
 *
 * This interface stores the user-selected symmetry mode together with the
 * libmsym contexts and irrep bookkeeping consumed by basis, SCF, and CI code.
 * Symmetry-dependent arrays use the convention `[particle index][irrep index]`.
 */
class POLYQUANT_SYMMETRY {
public:
  POLYQUANT_SYMMETRY() = default;
  /**
   * @brief Release any libmsym contexts owned by this object.
   *
   * The class owns every handle stored in `ctx`. Destruction invalidates those
   * libmsym contexts and any external references to them.
   */
  ~POLYQUANT_SYMMETRY() {
    for (auto c : ctx) {
      msymReleaseContext(c);
    }
  }
  /**
   * @brief Construct a symmetry handler from parsed input data.
   *
   * This is equivalent to default construction followed by
   * `setup_symmetry(input_params)`.
   *
   * @param input_params Shared parsed-input object that remains owned by the
   * caller and is referenced by this symmetry handler.
   */
  POLYQUANT_SYMMETRY(std::shared_ptr<POLYQUANT_INPUT> input_params);

  /**
   * @brief Initialize symmetry settings from the input object.
   *
   * Reads the symmetry-related keys from the input, updates `point_group`,
   * `sub_group`, and `do_symmetry`, and stores a shared reference to the input
   * for later access by downstream setup code.
   *
   * @param input_params Shared parsed-input object that must remain valid for
   * the lifetime of any later code that reads `input`.
   */
  void setup_symmetry(std::shared_ptr<POLYQUANT_INPUT> input_params);

  /**
   * @brief Parse symmetry mode and point-group overrides from the input JSON.
   *
   * Supported behavior is:
   * - no explicit symmetry keyword: keep the default enabled setting;
   * - `keywords.symmetry = false`: force `C1` no-symmetry mode;
   * - `keywords.point_group = "automatic"`: leave automatic detection to later
   *   setup stages;
   * - `keywords.point_group = "SO(3)"`: request spherical symmetry metadata.
   *
   * @note If `keywords.point_group` is present while symmetry is disabled, this
   * function aborts through `APP_ABORT`.
   */
  void set_symmetry_from_input();

  /**
   * @brief Allocate one libmsym context per quantum particle type.
   *
   * Each created context is owned by this object and released in the
   * destructor.
   *
   * @param n Number of particle-type-specific libmsym contexts to allocate.
   */
  void create_ctx_for_particle_types(int n);

  /**
   * @brief Shared parsed-input object used to derive symmetry settings.
   *
   * Ownership is shared with the caller. This class does not deep-copy the JSON
   * input.
   */
  std::shared_ptr<POLYQUANT_INPUT> input;

  /**
   * @brief Active top-level point group.
   *
   * Typical values include automatically determined Abelian groups, `SO(3)` for
   * spherical SCF runs, or `C1` when symmetry is disabled.
   */
  std::string point_group;

  /**
   * @brief Active subgroup used by downstream symmetry consumers.
   *
   * This currently mirrors `point_group` for manually selected `SO(3)` and
   * forced `C1` fallback mode.
   */
  std::string sub_group;

  /**
   * @brief libmsym contexts keyed by particle index.
   *
   * Each entry owns one `msym_context` handle for a particle type.
   */
  std::vector<msym_context> ctx;

  /**
   * @brief Whether point-group or spherical symmetry should be used.
   *
   * When false, the handler falls back to `C1` and symmetry-dependent code
   * should treat the calculation as having a single irrep.
   */
  bool do_symmetry = true;

  /**
   * @brief Symmetry-operation labels keyed by `[particle index][irrep index]`.
   */
  std::vector<std::vector<std::string>> symm_op_names;

  /**
   * @brief Irreducible-representation labels keyed by `[particle index][irrep index]`.
   */
  std::vector<std::vector<std::string>> irrep_names;

  /**
   * @brief Character table for the active finite point group.
   *
   * Rows and columns follow the libmsym-derived symmetry ordering used to build
   * `direct_product_table`.
   */
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> character_table;

  /**
   * @brief Direct-product table of irrep indices.
   *
   * Entry `(i, j)` gives the irrep index produced by the direct product of
   * irreps `i` and `j`. This is used by determinant and orbital symmetry logic.
   */
  Eigen::Matrix<int, Eigen::Dynamic, Eigen::Dynamic> direct_product_table;
};
} // namespace polyquant
#endif
