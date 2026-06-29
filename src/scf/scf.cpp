#include "scf/scf.hpp"

/**
 * @file scf.cpp
 * @brief Base-class storage and shared-object binding for SCF drivers.
 */

using namespace polyquant;

POLYQUANT_SCF::POLYQUANT_SCF(std::shared_ptr<POLYQUANT_INPUT> params, std::shared_ptr<POLYQUANT_SYMMETRY> symmetry, std::shared_ptr<POLYQUANT_MOLECULE> molecule,
                             std::shared_ptr<POLYQUANT_BASIS> basis, std::shared_ptr<POLYQUANT_INTEGRAL> integral) {
  this->setup_calculation(params, symmetry, molecule, basis, integral);
}
void POLYQUANT_SCF::setup_calculation(std::shared_ptr<POLYQUANT_INPUT> params, std::shared_ptr<POLYQUANT_SYMMETRY> symmetry, std::shared_ptr<POLYQUANT_MOLECULE> molecule,
                                      std::shared_ptr<POLYQUANT_BASIS> basis, std::shared_ptr<POLYQUANT_INTEGRAL> integral) {
  // The base class only records shared dependencies. Concrete setup and
  // validation live in derived SCF implementations.
  this->set_input(params);
  this->set_symmetry(symmetry);
  this->set_molecule(molecule);
  this->set_basis(basis);
  this->set_integral(integral);
}

void POLYQUANT_SCF::set_input(std::shared_ptr<POLYQUANT_INPUT> params) { this->input_params = params; }
void POLYQUANT_SCF::set_symmetry(std::shared_ptr<POLYQUANT_SYMMETRY> symmetry) { this->input_symmetry = symmetry; }
void POLYQUANT_SCF::set_molecule(std::shared_ptr<POLYQUANT_MOLECULE> molecule) { this->input_molecule = molecule; }
void POLYQUANT_SCF::set_basis(std::shared_ptr<POLYQUANT_BASIS> basis) { this->input_basis = basis; }
void POLYQUANT_SCF::set_integral(std::shared_ptr<POLYQUANT_INTEGRAL> integral) { this->input_integral = integral; }
