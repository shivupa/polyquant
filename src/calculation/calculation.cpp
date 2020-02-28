#include <calculation/calculation.hpp>

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
  bool do_excess_electron = false;
  bool do_positron = false;
  Selci_cout(
      "Figuring out if we have positrons or (model) excess electrons...");
  // parse input to see if we intend to do a model excess electron or positron
  // calculation
  if (this->input_params.input_data.contains("keywords")) {
    if (this->input_params.input_data["keywords"].contains("excess_electron")) {
      do_excess_electron =
          this->input_params.input_data["keywords"]["excess_electron"];
    }
    if (this->input_params.input_data["keywords"].contains("positron")) {
      do_positron = this->input_params.input_data["keywords"]["positron"];
    }
  }
  std::cout << do_excess_electron << std::endl;
  std::cout << do_positron << std::endl;
  std::string mean_field_type = this->parse_electronic_mean_field();
  if (do_excess_electron && do_positron) {
    // excess electron + positron + electrons
    APP_ABORT("SELCI can't handle a model excess electron and positron "
              "calculation. It isn't readily apparent if this is a physically "
              "meaningful calculation type.");
  } else if (do_excess_electron) {
    // excess electron + electrons
    this->run_excess_electron_plus_electronic_mean_field(mean_field_type);
  } else if (do_positron) {
    // positron + electrons
    this->run_excess_positron_plus_electronic_mean_field(mean_field_type);
  } else {
    // only electrons
    if (mean_field_type != "NONE") {
      this->run_electronic_mean_field(mean_field_type);
    }
  }
}

void PYCI_CALCULATION::run_excess_positron_plus_electronic_mean_field(
    std::string &mean_field_type) {
  if (mean_field_type == "NONE") {
    APP_ABORT(
        "SELCI must run a electronic mean-field calculation when treating an "
        "excess particle (e+ or e-). At least until orbitals can be read in.");
  }
  Selci_cout("We will be approximately treating an excess positron!");
  if (mean_field_type == "RHF") {
    PYCI_RHF rhf_calc = PYCI_RHF(this->input_params, this->input_molecule,
                                 this->input_basis, this->input_integral);
    rhf_calc.run();
    PYCI_EPRHF eprhf_calc = PYCI_EPRHF(this->input_params, this->input_molecule,
                                       this->input_basis, this->input_integral);
    eprhf_calc.set_electronic_system(rhf_calc);
    eprhf_calc.set_excess_particle_type("POSITRON");
    if (this->input_params.input_data.contains("keywords")) {
      if (this->input_params.input_data["keywords"].contains(
              "polarization_potential")) {
        if (this->input_params
                .input_data["keywords"]["polarization_potential"]) {
          eprhf_calc.set_polarization_potential();
        }
      }
      if (this->input_params.input_data["keywords"].contains("relax_target")) {
        if (this->input_params.input_data["keywords"]["relax_target"]) {
          eprhf_calc.set_relax_target();
        }
      }
    }

    eprhf_calc.run();
  }
}

void PYCI_CALCULATION::run_excess_electron_plus_electronic_mean_field(
    std::string &mean_field_type) {
  if (mean_field_type == "NONE") {
    APP_ABORT(
        "SELCI must run a electronic mean-field calculation when treating an "
        "excess particle (e+ or e-). At least until orbitals can be read in.");
  }
  Selci_cout("We will be approximately treating an excess electron!");
  if (mean_field_type == "RHF") {
    PYCI_RHF rhf_calc = PYCI_RHF(this->input_params, this->input_molecule,
                                 this->input_basis, this->input_integral);
    rhf_calc.run();
    PYCI_EPRHF eprhf_calc = PYCI_EPRHF(this->input_params, this->input_molecule,
                                       this->input_basis, this->input_integral);
    eprhf_calc.set_electronic_system(rhf_calc);
    eprhf_calc.set_excess_particle_type("ELECTRON");
    if (this->input_params.input_data.contains("keywords")) {
      if (this->input_params.input_data["keywords"].contains(
              "polarization_potential")) {
        if (this->input_params
                .input_data["keywords"]["polarization_potential"]) {
          eprhf_calc.set_polarization_potential();
          ;
        }
      }
      if (this->input_params.input_data["keywords"].contains("relax_target")) {
        if (this->input_params.input_data["keywords"]["relax_target"]) {
          eprhf_calc.set_relax_target();
          ;
        }
      }
    }

    eprhf_calc.run();
  }
}

std::string PYCI_CALCULATION::parse_electronic_mean_field() {
  Selci_cout("Figuring out if we need to run a mean-field calculation for the "
             "electrons...");
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
    Selci_cout("Will run a mean field calculation of type: ");
    Selci_cout(mean_field_type);
  } else if (mean_field_type == "NONE") {
    Selci_cout("Not running mean field calculation.");
  } else {
    Selci_cout("Unrecognized mean field calculation type: ");
    Selci_cout(mean_field_type);
    // APP ABORT HERE
    APP_ABORT("SELCI mean field parsing error. I can't understand the input "
              "provided. Could you double-check it?");
  }
  return mean_field_type;
}

void PYCI_CALCULATION::run_electronic_mean_field(std::string &mean_field_type) {
  if (mean_field_type == "RHF") {
    PYCI_RHF rhf_calc = PYCI_RHF(this->input_params, this->input_molecule,
                                 this->input_basis, this->input_integral);
    rhf_calc.run();
  }
}