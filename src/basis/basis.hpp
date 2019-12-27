#include <io/io.hpp>
#include <libint2.hpp> // IWYU pragma: keep
#include <molecule/molecule.hpp>
#include <string>

#ifndef PYCI_BASIS_H
#define PYCI_BASIS_H
class PYCI_BASIS {
public:
  PYCI_BASIS() = default;
  PYCI_BASIS(const PYCI_INPUT &input, const PYCI_MOLECULE &molecule);
  void load_basis(const PYCI_INPUT &input, const PYCI_MOLECULE &molecule);
  std::string basis_name;
  libint2::BasisSet basis;
};
#endif
