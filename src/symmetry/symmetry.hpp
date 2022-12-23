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
 * @brief A class to store information about symmetry
 *
 */
class POLYQUANT_SYMMETRY {
public:
  POLYQUANT_SYMMETRY() = default;
  ~POLYQUANT_SYMMETRY() { msymReleaseContext(ctx); }
  /**
   * @brief Construct a new polyquant symmetry handler object given an input object with
   * a call to setup_symmetry.
   *
   * @param input a POLYQUANT_INPUT instance
   */
  POLYQUANT_SYMMETRY(std::shared_ptr<POLYQUANT_INPUT> input_params);

  /**
   * @brief Set the up symmetry handler object.
   *
   * @param input a POLYQUANT_INPUT instance
   */
  void setup_symmetry(std::shared_ptr<POLYQUANT_INPUT> input_params);
  void set_symmetry_from_input();

  std::shared_ptr<POLYQUANT_INPUT> input;
  std::string point_group;
  std::string sub_group;
  msym_context ctx;
  bool do_symmetry = true;

  // indexing particle idx, irrep idx
  std::vector<std::vector<std::string>> symm_op_names;
  std::vector<std::vector<std::string>> irrep_names;

  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> character_table;
  Eigen::Matrix<int, Eigen::Dynamic, Eigen::Dynamic> direct_product_table;
};
} // namespace polyquant
#endif
