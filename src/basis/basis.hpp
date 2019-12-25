#include <io/io.hpp>
#include <iostream>
#include <libint2.hpp>
#include <molecule/molecule.hpp>
#include <string>
#include <vector>

#ifndef PYCI_BASIS_H
#define PYCI_BASIS_H
class PYCI_BASIS {
public:
  PYCI_BASIS(const PYCI_INPUT &input, const PYCI_MOLECULE &molecule);
  std::string basis_name;
  libint2::BasisSet basis;
};
#endif
