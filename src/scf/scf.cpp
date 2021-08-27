#include "scf/scf.hpp"

using namespace polyquant;

POLYQUANT_SCF::POLYQUANT_SCF(const POLYQUANT_INPUT &input_params, const POLYQUANT_MOLECULE &input_molecule, const POLYQUANT_BASIS &input_basis, const POLYQUANT_INTEGRAL &input_integral) {
  this->setup_calculation(input_params, input_molecule, input_basis, input_integral);
}
void POLYQUANT_SCF::setup_calculation( const POLYQUANT_INPUT &input_params, const POLYQUANT_MOLECULE &input_molecule, const POLYQUANT_BASIS &input_basis, const POLYQUANT_INTEGRAL &input_integral) {
  this->set_input(input_params);
  this->set_molecule(input_molecule);
  this->set_basis(input_basis);
  this->set_integral(input_integral);
}

void POLYQUANT_SCF::set_input(const POLYQUANT_INPUT &input_params) {
  this->input_params = input_params;
}
void POLYQUANT_SCF::set_molecule(const POLYQUANT_MOLECULE &input_molecule) {
  this->input_molecule = input_molecule;
}
void POLYQUANT_SCF::set_basis(const POLYQUANT_BASIS &input_basis) {
  this->input_basis = input_basis;
}
void POLYQUANT_SCF::set_integral(const POLYQUANT_INTEGRAL &input_integral) {
  this->input_integral = input_integral;
}
