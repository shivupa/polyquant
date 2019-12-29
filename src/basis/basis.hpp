#include <io/io.hpp>
#include <libint2.hpp> // IWYU pragma: keep
#include <molecule/molecule.hpp>
#include <string>

#ifndef PYCI_BASIS_H
#define PYCI_BASIS_H
/**
 * @brief A class to hold basis information.
 *
 */
class PYCI_BASIS {
public:
  PYCI_BASIS() = default;
  /**
   * @brief Construct a new pyci basis object by calling to load_basis.
   *
   * @param input the data from the input file.
   * @param molecule the molecule data.
   */
  PYCI_BASIS(const PYCI_INPUT &input, const PYCI_MOLECULE &molecule);
  /**
   * @brief Load a basis using the libint built in basis library.
   *
   * @param input
   * @param molecule
   */
  void load_basis(const PYCI_INPUT &input, const PYCI_MOLECULE &molecule);
  /**
   * @brief The name of the basis to load
   *
   */
  std::string basis_name;
  /**
   * @brief the libint2 basis object
   *
   */
  libint2::BasisSet basis;
};
#endif
