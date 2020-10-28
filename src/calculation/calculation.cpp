#include "calculation/calculation.hpp"

using namespace polyquant;

POLYQUANT_CALCULATION::POLYQUANT_CALCULATION(const std::string &filename) {
  this->setup_calculation(filename);
}
void POLYQUANT_CALCULATION::setup_calculation(const std::string &filename) {
  // parse input file
  Polyquant_cout("SETTING UP INPUT FILE");
  this->input_params = POLYQUANT_INPUT(filename);
  // parse molecule
  Polyquant_cout("SETTING UP MOLECULE");
  this->input_molecule = POLYQUANT_MOLECULE(this->input_params);
  // parse basis
  Polyquant_cout("SETTING UP BASIS");
  this->input_basis = POLYQUANT_BASIS(this->input_params, this->input_molecule);
  // parse integral
  Polyquant_cout("SETTING UP INTEGRAL");
  this->input_integral = POLYQUANT_INTEGRAL(this->input_params, this->input_basis,
                                       this->input_molecule);
}

void POLYQUANT_CALCULATION::run() {
  // bool do_excess_electron = false;
  // bool do_positron = false;
  // Polyquant_cout(
  //    "Figuring out if we have positrons or (model) excess electrons...");
  // parse input to see if we intend to do a model excess electron or positron
  // calculation
  if (this->input_params.input_data.contains("keywords")) {
    // if
    // (this->input_params.input_data["keywords"].contains("excess_electron")) {
    //  do_excess_electron =
    //      this->input_params.input_data["keywords"]["excess_electron"];
    //}
    // if (this->input_params.input_data["keywords"].contains("positron")) {
    //  do_positron = this->input_params.input_data["keywords"]["positron"];
    //}
  }
  // std::cout << do_excess_electron << std::endl;
  // std::cout << do_positron << std::endl;
  std::string mean_field_type = this->parse_electronic_mean_field();
  // if (do_excess_electron && do_positron) {
  // excess electron + positron + electrons
  //  APP_ABORT("SELCI can't handle a model excess electron and positron "
  //           "calculation. It isn't readily apparent if this is a physically "
  //           "meaningful calculation type.");
  //} else if (do_excess_electron) {
  //  // excess electron + electrons
  //  this->run_excess_electron_plus_electronic_mean_field(mean_field_type);
  //} else if (do_positron) {
  //  // positron + electrons
  //  this->run_excess_positron_plus_electronic_mean_field(mean_field_type);
  //} else {
  // only electrons
  if (mean_field_type != "NONE") {
    this->run_electronic_mean_field(mean_field_type);
  }
  //}
}

// void POLYQUANT_CALCULATION::run_excess_positron_plus_electronic_mean_field(
//    std::string &mean_field_type) {
//  if (mean_field_type == "NONE") {
//    APP_ABORT(
//        "SELCI must run a electronic mean-field calculation when treating an "
//        "excess particle (e+ or e-). At least until orbitals can be read
//        in.");
//  }
//  Polyquant_cout("We will be approximately treating an excess positron!");
//  if (mean_field_type == "RHF") {
//    POLYQUANT_RHF rhf_calc = POLYQUANT_RHF(this->input_params, this->input_molecule,
//                                 this->input_basis, this->input_integral);
//    rhf_calc.run();
//    POLYQUANT_EPRHF eprhf_calc = POLYQUANT_EPRHF(this->input_params,
//    this->input_molecule,
//                                       this->input_basis,
//                                       this->input_integral);
//    eprhf_calc.set_electronic_system(rhf_calc);
//    eprhf_calc.set_excess_particle_type("POSITRON");
//    if (this->input_params.input_data.contains("keywords")) {
//      if (this->input_params.input_data["keywords"].contains(
//              "polarization_potential")) {
//        if (this->input_params
//                .input_data["keywords"]["polarization_potential"]) {
//          eprhf_calc.set_polarization_potential();
//        }
//      }
//      if (this->input_params.input_data["keywords"].contains("relax_target"))
//      {
//        if (this->input_params.input_data["keywords"]["relax_target"]) {
//          eprhf_calc.set_relax_target();
//        }
//      }
//    }
//
//    eprhf_calc.run();
//  }
//}

// void POLYQUANT_CALCULATION::run_excess_electron_plus_electronic_mean_field(
//    std::string &mean_field_type) {
//  if (mean_field_type == "NONE") {
//    APP_ABORT(
//        "SELCI must run a electronic mean-field calculation when treating an "
//        "excess particle (e+ or e-). At least until orbitals can be read
//        in.");
//  }
//  Polyquant_cout("We will be approximately treating an excess electron!");
//  if (mean_field_type == "RHF") {
//    POLYQUANT_RHF rhf_calc = POLYQUANT_RHF(this->input_params, this->input_molecule,
//                                 this->input_basis, this->input_integral);
//    rhf_calc.run();
//    POLYQUANT_EPRHF eprhf_calc = POLYQUANT_EPRHF(this->input_params,
//    this->input_molecule,
//                                       this->input_basis,
//                                       this->input_integral);
//    eprhf_calc.set_electronic_system(rhf_calc);
//    eprhf_calc.set_excess_particle_type("ELECTRON");
//    if (this->input_params.input_data.contains("keywords")) {
//      if (this->input_params.input_data["keywords"].contains(
//              "polarization_potential")) {
//        if (this->input_params
//                .input_data["keywords"]["polarization_potential"]) {
//          eprhf_calc.set_polarization_potential();
//          ;
//        }
//      }
//      if (this->input_params.input_data["keywords"].contains("relax_target"))
//      {
//        if (this->input_params.input_data["keywords"]["relax_target"]) {
//          eprhf_calc.set_relax_target();
//          ;
//        }
//      }
//    }
//
//    eprhf_calc.run();
//  }
//}

std::string POLYQUANT_CALCULATION::parse_electronic_mean_field() {
  Polyquant_cout("Figuring out if we need to run a mean-field calculation for the "
             "electrons...");
  std::string mean_field_type = "NONE";
  // check that json contains a mean field object and assign to string
  if (this->input_params.input_data.contains("model")) {
    if (this->input_params.input_data["model"].contains("method")) {
      mean_field_type = this->input_params.input_data["model"]["method"];
      std::transform(mean_field_type.begin(), mean_field_type.end(),
                     mean_field_type.begin(), ::toupper);
    }
  }
  if (this->mean_field_methods.contains(mean_field_type)) {
    Polyquant_cout("Will run a mean field calculation of type: ");
    Polyquant_cout(mean_field_type);
  } else if (mean_field_type == "NONE") {
    Polyquant_cout("Not running mean field calculation.");
  } else {
    Polyquant_cout("Unrecognized mean field calculation type: ");
    Polyquant_cout(mean_field_type);
    // APP ABORT HERE
    APP_ABORT("SELCI mean field parsing error. I can't understand the input "
              "provided. Could you double-check it?");
  }
  return mean_field_type;
}

void POLYQUANT_CALCULATION::run_electronic_mean_field(std::string &mean_field_type) {
  if (mean_field_type == "SCF") {
    POLYQUANT_EPSCF rhf_calc = POLYQUANT_EPSCF(this->input_params, this->input_molecule,
                                     this->input_basis, this->input_integral);
    rhf_calc.run();
  }
}
