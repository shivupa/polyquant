#include <calculation/calculation.hpp>

PYCI_SCF::PYCI_SCF(const PYCI_INPUT &input_params,
                   const PYCI_MOLECULE &input_molecule,
                   const PYCI_BASIS &input_basis,
                   const PYCI_INTEGRAL &input_integral) {
  this->set_input(input_params);
  this->set_molecule(input_molecule);
  this->set_basis(input_basis);
  this->set_integral(input_integral);
}

void PYCI_SCF::set_input(const PYCI_INPUT &input_params) {
  this->input_params = input_params;
}
void PYCI_SCF::set_molecule(const PYCI_MOLECULE &input_molecule) {
  this->input_molecule = input_molecule;
}
void PYCI_SCF::set_basis(const PYCI_BASIS &input_basis) {
  this->input_basis = input_basis;
}
void PYCI_SCF::set_integral(const PYCI_INTEGRAL &input_integral) {
  this->input_integral = input_integral;
}

void PYCI_SCF::print_start_iterations() {}
void PYCI_SCF::print_iteration() {}
void PYCI_SCF::print_sucess() {}
void PYCI_SCF::print_exceeded_iterations() {}
void PYCI_SCF::print_error() {}