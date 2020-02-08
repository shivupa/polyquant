#include <algorithm>
#include <basis/basis.hpp>
#include <integral/integral.hpp>
#include <io/io.hpp>
#include <molecule/molecule.hpp>
#include <string>
#include <unordered_set>

#ifndef PYCI_CALCULATION_H
#define PYCI_CALCULATION_H
/**
 * @brief A class to set up a calculation.
 *
 */
class PYCI_CALCULATION {
public:
  PYCI_CALCULATION() = default;
  /**
   * @brief Construct a new pyci calculation object using the setup_calculation
   * function.
   *
   * @param filename the input file
   */
  PYCI_CALCULATION(const std::string &filename);
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

  /**
   * @brief the input parameters
   *
   */
  PYCI_INPUT input_params;

  /**
   * @brief the input molecule
   *
   */
  PYCI_MOLECULE input_molecule;

  /**
   * @brief the input basis
   *
   */
  PYCI_BASIS input_basis;

  /**
   * @brief the input integrals
   *
   */
  PYCI_INTEGRAL input_integral;

  /**
   * @brief Mean-field calculation types that pyci knows about
   *
   */
  const std::unordered_set<std::string> mean_field_methods = {"RHF"};

  /**
   * @brief Post mean-field types that pyci knows about
   *
   */
  const std::unordered_set<std::string> post_mean_field_methods = {"CIPSI"};
};
#endif
