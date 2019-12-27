#include <calculation/calculation.hpp>
#include <io/io.hpp>

PYCI_CALCULATION::PYCI_CALCULATION(const std::string &filename) {
  this->setup_calculation(filename);
}
void PYCI_CALCULATION::setup_calculation(const std::string &filename) {
  // parse input file
  this->input_params = PYCI_INPUT(filename);
  // parse molecule
  this->input_molecule = PYCI_MOLECULE(input_params);
  // parse basis
  this->input_basis = PYCI_BASIS(input_params, input_molecule);
  // calculate integrals
  this->input_integral =
      PYCI_INTEGRAL(input_params, input_basis, input_molecule);
}