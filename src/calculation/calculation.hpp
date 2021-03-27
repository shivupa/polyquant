#ifndef POLYQUANT_CALCULATION_H
#define POLYQUANT_CALCULATION_H
#include "basis/basis.hpp"
#include "ci/epci.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "scf/epscf.hpp"
#include <algorithm>
#include <string>
#include <unordered_set>

namespace polyquant {

/**
 * @brief A class to set up a calculation.
 *
 */
class POLYQUANT_CALCULATION {
public:
  POLYQUANT_CALCULATION() = default;
  /**
   * @brief Construct a new polyquant calculation object using the
   * setup_calculation function.
   *
   * @param filename the input file
   */
  POLYQUANT_CALCULATION(const std::string &filename);
  /**
   * @brief Set up the calculation
   *
   * @param filename
   */
  void setup_calculation(const std::string &filename);
  /**
   * @brief Run the calculation
   *
   */
  void run();
  /**
   * @brief Run the mean-field calculation
   *
   * @param mean field method
   */
  void run_mean_field(std::string &mean_field_type);
  void run_post_mean_field(std::string &post_mean_field_type);

  // void
  // run_excess_electron_plus_electronic_mean_field(std::string
  // &mean_field_type); void
  // run_excess_positron_plus_electronic_mean_field(std::string
  // &mean_field_type);

  std::string parse_mean_field();
  std::string parse_post_mean_field();
  void dump_mf_for_qmcpack(std::string &filename);
  void dump_post_mf_for_qmcpack(std::string &filename);
  /**
   * @brief the input parameters
   *
   */
  POLYQUANT_INPUT input_params;

  /**
   * @brief the input molecule
   *
   */
  POLYQUANT_MOLECULE input_molecule;

  /**
   * @brief the input basis
   *
   */
  POLYQUANT_BASIS input_basis;

  /**
   * @brief the input integrals
   *
   */
  POLYQUANT_INTEGRAL input_integral;

  /**
   * @brief the MF calculation
   *
   */
  POLYQUANT_EPSCF scf_calc;

  /**
   * @brief the CI calculation
   *
   */
  POLYQUANT_EPCI ci_calc;

  /**
   * @brief Mean-field calculation types that polyquant knows about
   *
   */
  const std::unordered_set<std::string> mean_field_methods = {"SCF"};
  /**
   * @brief Post mean-field types that polyquant knows about
   *
   */
  const std::unordered_set<std::string> post_mean_field_methods = {"CI"};
};
} // namespace polyquant
#endif
