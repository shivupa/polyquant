#include <calculation/calculation.hpp>
#include <scf/rhf.hpp>

PYCI_CALCULATION::PYCI_CALCULATION(const std::string &filename) {
  this->setup_calculation(filename);
}
void PYCI_CALCULATION::setup_calculation(const std::string &filename) {
  // parse input file
  this->input_params = PYCI_INPUT(filename);
  // parse molecule
  this->input_molecule = PYCI_MOLECULE(this->input_params);
  // parse basis
  this->input_basis = PYCI_BASIS(this->input_params, this->input_molecule);
  // parse integral
  this->input_integral = PYCI_INTEGRAL(this->input_params, this->input_basis,
                                       this->input_molecule);
}

void PYCI_CALCULATION::run() {
  Selci_cout("Figuring out if we need to run a mean-field calculation...");
  std::string mean_field_type = "NONE";
  // check that json contains a mean field object and assign to string
  if (this->input_params.input_data.contains("keywords")) {
    if (this->input_params.input_data["keywords"].contains("mean_field")) {
      mean_field_type = this->input_params.input_data["keywords"]["mean_field"];
      std::transform(mean_field_type.begin(), mean_field_type.end(),
                     mean_field_type.begin(), ::toupper);
    }
  }
  if (this->mean_field_methods.contains(mean_field_type)) {
    Selci_cout("Running mean field calculation of type: ");
    Selci_cout(mean_field_type);
    this->run_mean_field(mean_field_type);
  } else if (mean_field_type == "NONE") {
    Selci_cout("Not running mean field calculation.");
  } else {
    Selci_cout("Unrecognized mean field calculation type: ");
    Selci_cout(mean_field_type);
    // APP ABORT HERE
  }
}

void PYCI_CALCULATION::run_mean_field(std::string &mean_field_type) {
  if (mean_field_type == "RHF") {
    PYCI_RHF rhf_calc = PYCI_RHF(this->input_params, this->input_molecule,
                                 this->input_basis, this->input_integral);
    rhf_calc.form_H_core();
  }
}