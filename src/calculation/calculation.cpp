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
  this->input_integral = POLYQUANT_INTEGRAL(
      this->input_params, this->input_basis, this->input_molecule);
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
  bool dump_for_qmcpack = false;
  if (this->input_params.input_data["keywords"].contains("dump_for_qmcpack")) {
    dump_for_qmcpack = true;
  }
  // if (do_excess_electron && do_positron) {
  // excess electron + positron + electrons
  //  APP_ABORT("POLYQUANT can't handle a model excess electron and positron "
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
    this->run_electronic_mean_field(mean_field_type, dump_for_qmcpack);
  }
  //}
}

// void POLYQUANT_CALCULATION::run_excess_positron_plus_electronic_mean_field(
//    std::string &mean_field_type) {
//  if (mean_field_type == "NONE") {
//    APP_ABORT(
//        "POLYQUANT must run a electronic mean-field calculation when treating
//        an " "excess particle (e+ or e-). At least until orbitals can be read
//        in.");
//  }
//  Polyquant_cout("We will be approximately treating an excess positron!");
//  if (mean_field_type == "RHF") {
//    POLYQUANT_RHF rhf_calc = POLYQUANT_RHF(this->input_params,
//    this->input_molecule,
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
//        "POLYQUANT must run a electronic mean-field calculation when treating
//        an " "excess particle (e+ or e-). At least until orbitals can be read
//        in.");
//  }
//  Polyquant_cout("We will be approximately treating an excess electron!");
//  if (mean_field_type == "RHF") {
//    POLYQUANT_RHF rhf_calc = POLYQUANT_RHF(this->input_params,
//    this->input_molecule,
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
  Polyquant_cout(
      "Figuring out if we need to run a mean-field calculation for the "
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
    APP_ABORT(
        "POLYQUANT mean field parsing error. I can't understand the input "
        "provided. Could you double-check it?");
  }
  return mean_field_type;
}

void POLYQUANT_CALCULATION::run_electronic_mean_field(
    std::string &mean_field_type, bool &dump_for_qmcpack) {
  if (mean_field_type == "SCF") {
    POLYQUANT_EPSCF scf_calc =
        POLYQUANT_EPSCF(this->input_params, this->input_molecule,
                        this->input_basis, this->input_integral);
    scf_calc.run();
    if (dump_for_qmcpack) {
      std::vector<int> atomic_species_ids;
      std::vector<int> atomic_number;
      std::vector<int> atomic_charge;
      std::vector<int> core_elec;
      std::vector<std::string> atomic_names;
      std::vector<std::vector<double>> atomic_centers =
          this->input_molecule.centers;
      atomic_species_ids.resize(this->input_molecule.centers.size());
      std::map<std::string, CLASSICAL_PARTICLE_SET>::size_type
          classical_part_idx = 0;
      for (auto const &[classical_part_key, classical_part] :
           this->input_molecule.classical_particles) {
        for (auto idx : classical_part.center_idx) {
          atomic_species_ids[idx] = classical_part_idx;
        }
        atomic_number.push_back((int)classical_part.charge);
        atomic_charge.push_back((int)classical_part.charge);
        core_elec.push_back(0);
        atomic_names.push_back(classical_part_key);
        classical_part_idx++;
      }

      std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_idx =
          0;
      for (auto const &[quantum_part_key, quantum_part] :
           this->input_molecule.quantum_particles) {
        Polyquant_cout("Dumping HDF5 for quantum particle type: " +
                       quantum_part_key);
        std::string hdf5_filename = quantum_part_key + ".h5";
        bool pbc = false;
        bool ecp = false;
        bool complex_vals = false;
        bool restricted = quantum_part.restricted;
        int num_ao = this->input_basis.num_basis;
        int num_mo = this->input_basis.num_basis;
        bool bohr_unit = true;
        int num_part_alpha = quantum_part.num_parts_alpha;
        int num_part_beta = quantum_part.num_parts_beta;
        int num_part_total = quantum_part.num_parts;
        int multiplicity = quantum_part.multiplicity;
        int num_atom = this->input_molecule.centers.size();
        int num_species = this->input_molecule.classical_particles.size();
        std::vector<std::vector<double>> E_orb;
        if (!restricted) {
          E_orb.resize(2);
          E_orb[0].resize(num_ao);
          E_orb[1].resize(num_ao);
        } else {
          E_orb.resize(1);
          E_orb[0].resize(num_ao);
        }
        for (auto i = 0; i < num_ao; i++) {
          E_orb[0][i] = scf_calc.E_orbitals[quantum_part_idx][0][i];
          if (!restricted && num_part_total > 1) {
            E_orb[1][i] = scf_calc.E_orbitals[quantum_part_idx][1][i];
          }
        }

        std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>
            mo_coeff = scf_calc.C[quantum_part_idx];

        libint2::BasisSet basis = this->input_basis.basis;
        // std::vector<long> basis_shell2atom =
        // this->input_basis.basis.shell2atom(
        // this->input_molecule.to_libint_atom("no_ghost"));
        bool pure = true;
        if (this->input_params.input_data.contains("keywords")) {
          if (this->input_params.input_data["keywords"].contains("pure")) {
            pure = this->input_params.input_data["keywords"]["pure"];
          }
        }
        std::string pure_or_cart = "spherical";
        if (!pure) {
          std::string pure_or_cart = "cartesian";
        }
        //  "cartesian"

        // auto i = 0ul;
        // for (auto shell : basis) {
        //   std::cout << shell << std::endl;
        //   i++;
        // }
        // auto idx =
        //     std::find(basis_shell2atom.begin(), basis_shell2atom.end(), -1);
        // if (idx != basis_shell2atom.end()) {
        //   Polyquant_cout("Basis shell doesn't correspond to a classical "
        //                  "center! This shouldn't happen. Basis shell:");
        //   std::string idx_string(1, *idx);
        //   Polyquant_cout("Shell:" + idx_string);
        //   Polyquant_cout(basis[*idx]);
        //   // APP_ABORT("Shell doesn't correspond to center");
        // }

        std::vector<std::vector<libint2::Shell>> unique_shells;
        unique_shells.resize(this->input_molecule.classical_particles.size());
        classical_part_idx = 0;
        double EPSILON = 1e-6;
        for (auto const &[classical_part_key, classical_part] :
             this->input_molecule.classical_particles) {
          // Polyquant_cout(classical_part_key);
          for (auto shell : this->input_basis.basis) {
            // Polyquant_cout( std::to_string(shell.O[0]) + " " +
            // std::to_string(this->input_molecule.centers[classical_part.center_idx[0]][0])
            // + " " + std::to_string(shell.O[0]
            // -this->input_molecule.centers[classical_part.center_idx[0]][0])
            // ); Polyquant_cout( std::to_string(shell.O[1]) + " " +
            // std::to_string(this->input_molecule.centers[classical_part.center_idx[0]][1])
            // + " " + std::to_string(shell.O[1]
            // -this->input_molecule.centers[classical_part.center_idx[0]][1])
            // ); Polyquant_cout( std::to_string(shell.O[2]) + " " +
            // std::to_string(this->input_molecule.centers[classical_part.center_idx[0]][2])
            // + " " + std::to_string(shell.O[2]
            // -this->input_molecule.centers[classical_part.center_idx[0]][2])
            // );
            if (std::abs(shell.O[0] -
                         this->input_molecule
                             .centers[classical_part.center_idx[0]][0]) <
                    EPSILON &&
                std::abs(shell.O[1] -
                         this->input_molecule
                             .centers[classical_part.center_idx[0]][1]) <
                    EPSILON &&
                std::abs(shell.O[2] -
                         this->input_molecule
                             .centers[classical_part.center_idx[0]][2]) <
                    EPSILON) {

              // Polyquant_cout("Unique shell on center: " +
              //                std::to_string(classical_part.center_idx[0]) +
              //                " named: " + classical_part_key);
              // Polyquant_cout(shell);
              unique_shells[classical_part_idx].push_back(shell);
            }
          }
          classical_part_idx++;
        }

        Polyquant_dump_hdf5_for_QMCPACK(
            hdf5_filename, pbc, ecp, complex_vals, restricted, num_ao, num_mo,
            bohr_unit, num_part_alpha, num_part_beta, num_part_total,
            multiplicity, num_atom, num_species, E_orb, mo_coeff,
            atomic_species_ids, atomic_number, atomic_charge, core_elec,
            atomic_names, atomic_centers, unique_shells);
        quantum_part_idx++;
      }
    }
  }
}
