#include <basis/basis.hpp>
#include <integral/integral.hpp>
#include <io/io.hpp>
#include <iostream>
#include <libint2.hpp>
#include <molecule/molecule.hpp>
#include <string>
#include <vector>

#ifndef PYCI_CALCULATION_H
#define PYCI_CALCULATION_H
class PYCI_CALCULATION {
public:
  PYCI_CALCULATION() = default;
  PYCI_CALCULATION(const std::string &filename);
  void setup_calculation(const std::string &filename);

  PYCI_INPUT input_params;
  PYCI_MOLECULE input_molecule;
  PYCI_BASIS input_basis;
  PYCI_INTEGRAL input_integral;
};
#endif
