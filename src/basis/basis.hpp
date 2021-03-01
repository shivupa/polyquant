#ifndef POLYQUANT_BASIS_H
#define POLYQUANT_BASIS_H
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include <algorithm>
// #include <cpr/cpr.h> // IWYU pragma: keep
#include <filesystem>
#include <iterator>
#include <libint2.hpp> // IWYU pragma: keep
#include <numbers>
//#include <math.h>
#include <stdlib.h>
#include <string>

namespace polyquant {

/**
 * @brief A class to hold basis information.
 *
 */
class POLYQUANT_BASIS {
public:
  POLYQUANT_BASIS() = default;
  /**
   * @brief Construct a new pyci basis object by calling to load_basis.
   *
   * @param input the data from the input file.
   * @param molecule the molecule data.
   */
  POLYQUANT_BASIS(const POLYQUANT_INPUT &input,
                  const POLYQUANT_MOLECULE &molecule);
  /**
   * @brief Load a basis using the libint built in basis library.
   *
   * @param input
   * @param molecule
   */
  void load_basis(const POLYQUANT_INPUT &input,
                  const POLYQUANT_MOLECULE &molecule);
  /**
   * @brief The name of the basis to load
   *
   */
  // std::vector<std::string> basis_name;
  /**
   * @brief the libint2 basis object
   *
   */
  libint2::BasisSet basis;
  /**
   * @brief Number of basis functions
   *
   */
  size_t num_basis;
};
} // namespace polyquant
#endif
