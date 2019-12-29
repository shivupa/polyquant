#include <basis/basis.hpp>
#include <integral/integral.hpp>
#include <io/io.hpp>
#include <molecule/molecule.hpp>
#include <string>

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
   * @brief integrals calculated for the input molecule in the input basis
   *
   */
  PYCI_INTEGRAL input_integral;
};
#endif
