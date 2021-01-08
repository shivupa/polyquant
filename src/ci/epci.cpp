#include "scf/epscf.hpp"

using namespace polyquant;

void POLYQUANT_EPCI::setup(const POLYQUANT_EPSCF &input_scf) {
  this->input_epscf = input_scf;
  this->input_params = this->input_epscf.input_params;
  this->input_molecule = this->input_epscf.input_molecule;
  this->input_basis = this->input_epscf.input_basis;
  this->input_integral = this->input_epscf.input_integral;
  this->input_integral.calculate_mo_1_body_integrals(this->input_epscf.C);
  this->input_integral.calculate_mo_2_body_integrals(this->input_epscf.C);
  
  auto num_basis = this->input_basis.num_basis;
  this->detset.max_orb = num_basis;
}

void POLYQUANT_EPCI::setup_determinants(){
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  this->create_det(

  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {


  }
}

void POLYQUANT_EPCI::print_start_iterations() {
  Polyquant_cout("Starting Iterations");
}
void POLYQUANT_EPCI::print_iteration() { Polyquant_cout("Iteration "); }
void POLYQUANT_EPCI::print_success() { Polyquant_cout("SCF SUCCESS"); }
void POLYQUANT_EPCI::print_exceeded_iterations() {
  Polyquant_cout("Exceeded Iterations");
}
void POLYQUANT_EPCI::print_error() { APP_ABORT("Something wrong!"); }
void POLYQUANT_EPCI::print_params() { Polyquant_cout("Running CI"); }

void POLYQUANT_EPCI::run() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

}
