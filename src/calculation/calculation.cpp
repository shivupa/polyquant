#include "calculation/calculation.hpp"

using namespace polyquant;

POLYQUANT_CALCULATION::POLYQUANT_CALCULATION(const std::string &filename) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
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
  // if (this->input_params.input_data.contains("keywords")) {
  // if
  // (this->input_params.input_data["keywords"].contains("excess_electron")) {
  //  do_excess_electron =
  //      this->input_params.input_data["keywords"]["excess_electron"];
  //}
  // if (this->input_params.input_data["keywords"].contains("positron")) {
  //  do_positron = this->input_params.input_data["keywords"]["positron"];
  //}
  //}
  // std::cout << do_excess_electron << std::endl;
  // std::cout << do_positron << std::endl;
  std::string mean_field_type = this->parse_mean_field();
  std::string post_mean_field_type = this->parse_post_mean_field();
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
  if (this->post_mean_field_methods.contains(post_mean_field_type)) {
    this->run_post_mean_field(mean_field_type);
  } else if (post_mean_field_type == "FILE" &&
             this->input_params.input_data.contains("keywords")) {
    if (this->input_params.input_data["keywords"].contains("ci_keywords")) {
      this->run_post_mean_field(mean_field_type);
    }
  } else if (mean_field_type != "NONE") {
    this->run_mean_field(mean_field_type);
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

std::string POLYQUANT_CALCULATION::parse_mean_field() {
  Polyquant_cout("Figuring out if we need to run a mean-field calculation for "
                 "the particles...");
  std::string mean_field_type = "NONE";
  // check that json contains a mean field object and assign to string
  if (this->input_params.input_data.contains("model")) {
    if (this->input_params.input_data["model"].contains("method")) {
      mean_field_type = this->input_params.input_data["model"]["method"];
      std::transform(mean_field_type.begin(), mean_field_type.end(),
                     mean_field_type.begin(), ::toupper);
    }
  }

  if (this->input_params.input_data.contains("keywords")) {
    if (this->input_params.input_data["keywords"].contains("mf_keywords")) {
      if (this->input_params.input_data["keywords"]["mf_keywords"].contains(
              "from_file")) {
        if (!this->mean_field_methods.contains(mean_field_type)) {
          mean_field_type = "FILE";
        } else {
          Polyquant_cout("Ignoring keywords->mf_keywords->from_file because "
                         "model->method is a valid mean field method. Set to "
                         "NONE or some post MF method to read from file.");
        }
      }
    }
  }
  return mean_field_type;
}

std::string POLYQUANT_CALCULATION::parse_post_mean_field() {
  Polyquant_cout("Figuring out if we need to run a post mean-field calculation "
                 "for the particles...");
  std::string post_mean_field_type = "NONE";
  // check that json contains a mean field object and assign to string
  if (this->input_params.input_data.contains("model")) {
    if (this->input_params.input_data["model"].contains("method")) {
      post_mean_field_type = this->input_params.input_data["model"]["method"];
      std::transform(post_mean_field_type.begin(), post_mean_field_type.end(),
                     post_mean_field_type.begin(), ::toupper);
    }
  }
  return post_mean_field_type;
}

void POLYQUANT_CALCULATION::run_mean_field(std::string &mean_field_type) {
  if (!this->mean_field_methods.contains(mean_field_type) &&
      mean_field_type != "FILE") {
    APP_ABORT(
        "POLYQUANT mean field parsing error. I can't understand the input "
        "provided. Could you double-check it?");
  }
  Polyquant_cout("Will run a mean field calculation of type: ");
  Polyquant_cout(mean_field_type);

  scf_calc.setup_calculation(this->input_params, this->input_molecule,
                             this->input_basis, this->input_integral);
  bool dump_for_qmcpack = false;
  std::string hdf5_filename = "Default.h5";
  if (this->input_params.input_data.contains("keywords")) {
    if (this->input_params.input_data["keywords"].contains("mf_keywords")) {
      if (this->input_params.input_data["keywords"]["mf_keywords"].contains(
              "dump_for_qmcpack")) {
        dump_for_qmcpack =
            this->input_params
                .input_data["keywords"]["mf_keywords"]["dump_for_qmcpack"];
      }
      if (this->input_params.input_data["keywords"]["mf_keywords"].contains(
              "hdf5_filename_qmcpack")) {
        hdf5_filename =
            this->input_params
                .input_data["keywords"]["mf_keywords"]["hdf5_filename_qmcpack"];
      }
      if (this->input_params.input_data["keywords"]["mf_keywords"].contains(
              "convergence_E")) {
        scf_calc.convergence_E =
            this->input_params
                .input_data["keywords"]["mf_keywords"]["convergence_E"];
      }
      if (this->input_params.input_data["keywords"]["mf_keywords"].contains(
              "convergence_DM")) {
        scf_calc.convergence_DM =
            this->input_params
                .input_data["keywords"]["mf_keywords"]["convergence_DM"];
      }
      if (this->input_params.input_data["keywords"]["mf_keywords"].contains(
              "iteration_max")) {
        scf_calc.iteration_max =
            this->input_params
                .input_data["keywords"]["mf_keywords"]["iteration_max"];
      }
      if (this->input_params.input_data["keywords"]["mf_keywords"].contains(
              "from_file")) {
        dump_for_qmcpack = true;
        hdf5_filename = this->input_params
                            .input_data["keywords"]["mf_keywords"]["from_file"];
      } else if (mean_field_type == "FILE") {
        Polyquant_cout(
            "keywords->mf_keywords->from_file not present, but mean_field_type "
            "is FILE. Resetting mean_field_type to SCF");
        mean_field_type = "SCF";
        // TODO if there is ever more than one mean field type then this will
        // have to change.
      }
    }
  }
  if (mean_field_type == "SCF") {
    scf_calc.run();
  } else if (mean_field_type == "FILE") {
    scf_calc.from_file(hdf5_filename);
  }
  if (dump_for_qmcpack) {
    dump_mf_for_qmcpack(hdf5_filename);
  }
}
void POLYQUANT_CALCULATION::run_post_mean_field(
    std::string &post_mean_field_type) {
  if (!this->post_mean_field_methods.contains(post_mean_field_type) &&
      post_mean_field_type != "FILE") {
    APP_ABORT(
        "POLYQUANT post mean field parsing error. I can't understand the input "
        "provided. Could you double-check it?");
  }
  Polyquant_cout("Will run a post mean field calculation of type: ");
  Polyquant_cout(post_mean_field_type);
  std::string mean_field_type = "FILE";
  this->run_mean_field(mean_field_type);

  bool dump_for_qmcpack = false;
  std::string hdf5_filename = "Default.h5";
  if (post_mean_field_type == "CI") {
    if (this->input_params.input_data.contains("keywords")) {
      if (this->input_params.input_data["keywords"].contains("ci_keywords")) {
        if (this->input_params.input_data["keywords"]["ci_keywords"].contains(
                "dump_for_qmcpack")) {
          dump_for_qmcpack =
              this->input_params
                  .input_data["keywords"]["ci_keywords"]["dump_for_qmcpack"];
        }
        if (this->input_params.input_data["keywords"]["ci_keywords"].contains(
                "hdf5_filename_qmcpack")) {
          hdf5_filename =
              this->input_params.input_data["keywords"]["ci_keywords"]
                                           ["hdf5_filename_qmcpack"];
        }
        if (this->input_params.input_data["keywords"]["ci_keywords"].contains(
                "convergence_E")) {
          ci_calc.convergence_E =
              this->input_params
                  .input_data["keywords"]["ci_keywords"]["convergence_E"];
        }
        if (this->input_params.input_data["keywords"]["ci_keywords"].contains(
                "num_states")) {
          ci_calc.num_states =
              this->input_params
                  .input_data["keywords"]["ci_keywords"]["num_states"];
        }
        if (this->input_params.input_data["keywords"]["ci_keywords"].contains(
                "num_subspace_vec")) {
          ci_calc.num_subspace_vec =
              this->input_params
                  .input_data["keywords"]["ci_keywords"]["num_subspace_vec"];
        }
        if (this->input_params.input_data["keywords"]["ci_keywords"].contains(
                "excitation_level")) {
          auto ex_lvl =
              this->input_params
                  .input_data["keywords"]["ci_keywords"]["excitation_level"];
          if (ex_lvl.type() == json::value_t::array) {
            std::vector<std::tuple<int, int, int>> ex_lvl_obj;
            for (auto i = 0; i < this->input_molecule.quantum_particles.size();
                 i++) {
              std::tuple<int, int, int> ex_lvl_tup = {
                  ex_lvl[i][0], ex_lvl[i][1], ex_lvl[i][2]};
              ex_lvl_obj.push_back(ex_lvl_tup);
            }
            ci_calc.excitation_level = ex_lvl_obj;
          } else {
            std::vector<std::tuple<int, int, int>> ex_lvl_obj;
            std::tuple<int, int, int> ex_lvl_tup = {ex_lvl, ex_lvl, ex_lvl};
            for (auto i = 0; i < this->input_molecule.quantum_particles.size();
                 i++) {
              ex_lvl_obj.push_back(ex_lvl_tup);
            }
            ci_calc.excitation_level = ex_lvl_obj;
          }
        }
      }
    }
    if (post_mean_field_type == "CI") {
      this->ci_calc.setup(this->scf_calc);
      this->ci_calc.run();
    } else if (post_mean_field_type == "FILE") {
      this->ci_calc.setup(this->scf_calc);
      // ci_calc.from_file(hdf5_filename);
      APP_ABORT("FROM_FILE for ci not implemented.");
    }
    if (dump_for_qmcpack) {
      dump_post_mf_for_qmcpack(hdf5_filename);
    }
  }
}
void POLYQUANT_CALCULATION::dump_mf_for_qmcpack(std::string &filename) {
  std::vector<int> atomic_species_ids;
  std::vector<int> atomic_number;
  std::vector<int> atomic_charge;
  std::vector<int> core_elec;
  std::vector<std::string> atomic_names;
  std::vector<std::vector<double>> atomic_centers =
      this->input_molecule.centers;
  atomic_species_ids.resize(this->input_molecule.centers.size());
  std::map<std::string, CLASSICAL_PARTICLE_SET>::size_type classical_part_idx =
      0;
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

  auto electron_idx = 0ul;
  auto count = 0ul;
  std::vector<std::string> quantum_part_names;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    quantum_part_names.push_back(quantum_part_key);
    if (quantum_part_key == "electron") {
      electron_idx = count;
    }
    count++;
  }
  Polyquant_cout("Dumping HDF5 to filename: " + filename);
  bool pbc = false;
  bool ecp = false;
  bool complex_vals = false;
  bool restricted =
      this->input_molecule.quantum_particles["electron"].restricted;
  int num_ao = this->input_basis.num_basis;
  int num_mo = this->input_basis.num_basis;
  bool bohr_unit = true;
  int num_part_alpha =
      this->input_molecule.quantum_particles["electron"].num_parts_alpha;
  int num_part_beta =
      this->input_molecule.quantum_particles["electron"].num_parts_beta;
  int num_part_total =
      this->input_molecule.quantum_particles["electron"].num_parts;
  int multiplicity =
      this->input_molecule.quantum_particles["electron"].multiplicity;
  int num_atom = this->input_molecule.centers.size();
  int num_species = this->input_molecule.classical_particles.size();

  libint2::BasisSet basis = this->input_basis.basis;
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
      if (std::abs(
              shell.O[0] -
              this->input_molecule.centers[classical_part.center_idx[0]][0]) <
              EPSILON &&
          std::abs(
              shell.O[1] -
              this->input_molecule.centers[classical_part.center_idx[0]][1]) <
              EPSILON &&
          std::abs(
              shell.O[2] -
              this->input_molecule.centers[classical_part.center_idx[0]][2]) <
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
      filename, pbc, ecp, complex_vals, restricted, num_ao, num_mo, bohr_unit,
      num_part_alpha, num_part_beta, num_part_total, multiplicity, num_atom,
      num_species, quantum_part_names, scf_calc.E_orbitals, scf_calc.C,
      atomic_species_ids, atomic_number, atomic_charge, core_elec, atomic_names,
      atomic_centers, unique_shells);
  //}
}
