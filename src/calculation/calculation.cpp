#include "calculation/calculation.hpp"

using namespace polyquant;

POLYQUANT_CALCULATION::POLYQUANT_CALCULATION(const std::string &filename) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->setup_calculation(filename);
}

void POLYQUANT_CALCULATION::setup_calculation(const std::string &filename) {
  // parse input file
  Polyquant_section_header("Input Parameters");
  this->input_params = std::make_shared<POLYQUANT_INPUT>(filename);
  // parse symmetry file
  Polyquant_section_header("Symmetry Handler Setup");
  this->input_symmetry = std::make_shared<POLYQUANT_SYMMETRY>(this->input_params);
  // parse molecule
  Polyquant_section_header("Molecule Specification");
  this->input_molecule = std::make_shared<POLYQUANT_MOLECULE>(this->input_params, this->input_symmetry);
  // parse basis
  Polyquant_section_header("Basis Specification");
  this->input_basis = std::make_shared<POLYQUANT_BASIS>(this->input_params, this->input_symmetry, this->input_molecule);
  // parse integral
  this->input_integral = std::make_shared<POLYQUANT_INTEGRAL>(this->input_params, this->input_symmetry, this->input_basis, this->input_molecule);
}

void POLYQUANT_CALCULATION::run() {
  Polyquant_section_header("Calculation Requested");
  std::string mean_field_type = this->parse_mean_field();
  std::string post_mean_field_type = this->parse_post_mean_field();
  if (this->post_mean_field_methods.contains(post_mean_field_type)) {
    this->run_post_mean_field(post_mean_field_type);
  } else if (post_mean_field_type == "FILE" && this->input_params->input_data.contains("keywords")) {
    if (this->input_params->input_data["keywords"].contains("ci_keywords")) {
      this->run_post_mean_field(mean_field_type);
    }
  } else if (mean_field_type != "NONE") {
    this->run_mean_field(mean_field_type);
  }
}

std::string POLYQUANT_CALCULATION::parse_mean_field() {
  Polyquant_cout("Figuring out if we need to run a mean-field calculation for the particles...");
  std::string mean_field_type = "NONE";
  // check that json contains a mean field object and assign to string
  if (this->input_params->input_data.contains("model")) {
    if (this->input_params->input_data["model"].contains("method")) {
      mean_field_type = this->input_params->input_data["model"]["method"];
      std::transform(mean_field_type.begin(), mean_field_type.end(), mean_field_type.begin(), ::toupper);
    }
  }

  if (this->input_params->input_data.contains("keywords")) {
    if (this->input_params->input_data["keywords"].contains("mf_keywords")) {
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("from_file")) {
        if (!this->mean_field_methods.contains(mean_field_type)) {
          mean_field_type = "FILE";
        } else {
          Polyquant_cout("Ignoring keywords->mf_keywords->from_file because model->method is a valid mean field method. Set to NONE or some post MF method to read from file.");
        }
      }
    }
  }
  return mean_field_type;
}

std::string POLYQUANT_CALCULATION::parse_post_mean_field() {
  Polyquant_cout("Figuring out if we need to run a post mean-field calculation for the particles...");
  std::string post_mean_field_type = "NONE";
  // check that json contains a mean field object and assign to string
  if (this->input_params->input_data.contains("model")) {
    if (this->input_params->input_data["model"].contains("method")) {
      post_mean_field_type = this->input_params->input_data["model"]["method"];
      std::transform(post_mean_field_type.begin(), post_mean_field_type.end(), post_mean_field_type.begin(), ::toupper);
    }
  }
  return post_mean_field_type;
}

void POLYQUANT_CALCULATION::run_mean_field(std::string &mean_field_type) {
  if (!this->mean_field_methods.contains(mean_field_type) && mean_field_type != "FILE") {
    APP_ABORT("POLYQUANT mean field parsing error. I can't understand the input provided. Could you double-check it?");
  }
  Polyquant_cout("Will run a mean field calculation of type: ");
  Polyquant_cout(mean_field_type);
  scf_calc = std::make_shared<POLYQUANT_EPSCF>(this->input_params, this->input_symmetry, this->input_molecule, this->input_basis, this->input_integral);
  bool dump_for_qmcpack = false;
  bool skip_scf = false;
  std::deque<bool> freeze_density_from_input;
  std::string hdf5_filename = "Default.h5";
  std::vector<std::vector<std::vector<int>>> permute_orbitals_vector;

  if (this->input_params->input_data.contains("verbose")) {
    scf_calc->verbose = this->input_params->input_data["verbose"];
  }
  if (this->input_params->input_data.contains("keywords")) {
    if (this->input_params->input_data["keywords"].contains("mf_keywords")) {
      if (this->input_params->input_data["keywords"].contains("dump_for_qmcpack")) {
        dump_for_qmcpack = this->input_params->input_data["keywords"]["dump_for_qmcpack"];
      }
      if (this->input_params->input_data["keywords"].contains("hdf5_filename_qmcpack")) {
        hdf5_filename = this->input_params->input_data["keywords"]["hdf5_filename_qmcpack"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("convergence_E")) {
        scf_calc->convergence_E = this->input_params->input_data["keywords"]["mf_keywords"]["convergence_E"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("convergence_DM")) {
        scf_calc->convergence_DM = this->input_params->input_data["keywords"]["mf_keywords"]["convergence_DM"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("iteration_max")) {
        scf_calc->iteration_max = this->input_params->input_data["keywords"]["mf_keywords"]["iteration_max"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("diis_extrapolation")) {
        scf_calc->diis_extrapolation = this->input_params->input_data["keywords"]["mf_keywords"]["diis_extrapolation"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("diis_start")) {
        scf_calc->diis_start = this->input_params->input_data["keywords"]["mf_keywords"]["diis_start"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("diis_damping")) {
        scf_calc->diis_damping = this->input_params->input_data["keywords"]["mf_keywords"]["diis_damping"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("diis_mixing_fraction")) {
        scf_calc->diis_mixing_fraction = this->input_params->input_data["keywords"]["mf_keywords"]["diis_mixing_fraction"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("diis_size")) {
        scf_calc->diis_size = this->input_params->input_data["keywords"]["mf_keywords"]["diis_size"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("incremental_fock")) {
        scf_calc->incremental_fock = this->input_params->input_data["keywords"]["mf_keywords"]["incremental_fock"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("incremental_fock_reset_freq")) {
        scf_calc->incremental_fock_reset_freq = this->input_params->input_data["keywords"]["mf_keywords"]["incremental_fock_reset_freq"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("incremental_fock_initial_onset_thresh")) {
        scf_calc->incremental_fock_initial_onset_thresh = this->input_params->input_data["keywords"]["mf_keywords"]["incremental_fock_initial_onset_thresh"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("Cauchy_Schwarz_screening")) {
        scf_calc->Cauchy_Schwarz_screening = this->input_params->input_data["keywords"]["mf_keywords"]["Cauchy_Schwarz_screening"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("Cauchy_Schwarz_threshold")) {
        APP_ABORT("Cauchy_Schwarz_threshold cannot be set by the user!");
        // scf_calc->Cauchy_Schwarz_threshold = this->input_params->input_data["keywords"]["mf_keywords"]["Cauchy_Schwarz_threshold"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("force_independent_converged")) {
        scf_calc->independent_converged = this->input_params->input_data["keywords"]["mf_keywords"]["force_independent_converged"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("occupation_mode")) {
        scf_calc->occupation_mode = this->input_params->input_data["keywords"]["mf_keywords"]["occupation_mode"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("stop_after_independent_converged")) {
        scf_calc->stop_after_independent_converged = this->input_params->input_data["keywords"]["mf_keywords"]["stop_after_independent_converged"];
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("freeze_density")) {
        auto freeze_dens_inp = this->input_params->input_data["keywords"]["mf_keywords"]["freeze_density"];
        freeze_density_from_input.resize(0);
        if (freeze_dens_inp.type() == json::value_t::array) {
          for (auto i = 0; i < this->input_molecule->quantum_particles.size(); i++) {
            freeze_density_from_input.push_back(freeze_dens_inp[i]);
          }
        }
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("npart_per_irrep")) {
        auto npart_per_irrep_inp = this->input_params->input_data["keywords"]["mf_keywords"]["npart_per_irrep"];
        scf_calc->npart_per_irrep.resize(npart_per_irrep_inp.size());
        for (auto i = 0; i < npart_per_irrep_inp.size(); i++) {
          scf_calc->npart_per_irrep[i].resize(npart_per_irrep_inp[i].size());
          for (auto j = 0; j < npart_per_irrep_inp[i].size(); j++) {
            scf_calc->npart_per_irrep[i][j].resize(npart_per_irrep_inp[i][j].size());
            for (auto k = 0; k < npart_per_irrep_inp[i][j].size(); k++) {
              scf_calc->npart_per_irrep[i][j][k] = npart_per_irrep_inp[i][j][k];
            }
          }
        }
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("from_file")) {
        if (this->input_params->input_data["keywords"]["mf_keywords"]["from_file"]) {
          dump_for_qmcpack = true;
          mean_field_type = "FILE";
          if (this->input_params->input_data["keywords"]["mf_keywords"].contains("from_file_skipiterations")) {
            skip_scf = this->input_params->input_data["keywords"]["mf_keywords"]["from_file_skipiterations"];
          }
        } else {
          dump_for_qmcpack = true;
          mean_field_type = "SCF";
        }
      } else if (mean_field_type == "FILE") {
        Polyquant_cout("keywords->mf_keywords->from_file not present, but mean_field_type is FILE. Resetting mean_field_type to SCF");
        mean_field_type = "SCF";
        // TODO if there is ever more than one mean field type then this will
        // have to change.
      }
      if (this->input_params->input_data["keywords"]["mf_keywords"].contains("permute_orbs")) {
        permute_orbitals_vector.resize(this->input_params->input_data["keywords"]["mf_keywords"]["permute_orbs"].size());
        auto part_idx = 0;
        for (auto &particle_MO_order : this->input_params->input_data["keywords"]["mf_keywords"]["permute_orbs"]) {
          auto spin_idx = 0;
          permute_orbitals_vector[part_idx].resize(particle_MO_order.size());
          for (auto &spin_MO_order : particle_MO_order) {
            for (auto &MO_idx : spin_MO_order) {
              permute_orbitals_vector[part_idx][spin_idx].push_back(MO_idx);
            }
            spin_idx++;
          }
          part_idx++;
        }
      }
    }
  }
  if (mean_field_type == "SCF") {
    scf_calc->setup_standard();
    if (freeze_density_from_input.size() == this->input_molecule->quantum_particles.size()) {
      for (auto i = 0; i < this->input_molecule->quantum_particles.size(); i++) {
        this->scf_calc->freeze_density[i] = freeze_density_from_input[i];
      }
    }
    if (permute_orbitals_vector.size() != 0) {
      this->scf_calc->permute_orbitals_vector = permute_orbitals_vector;
      this->scf_calc->permute_orbitals_start = true;
    }
    scf_calc->run();
    if (dump_for_qmcpack) {
      dump_mf_for_qmcpack(hdf5_filename);
    }
  } else if (mean_field_type == "FILE") {
    if (permute_orbitals_vector.size() != 0) {
      this->scf_calc->permute_orbitals_vector = permute_orbitals_vector;
      this->scf_calc->permute_orbitals_start = true;
    }
    scf_calc->setup_from_file(hdf5_filename);
    if (freeze_density_from_input.size() == this->input_molecule->quantum_particles.size()) {
      for (auto i = 0; i < this->input_molecule->quantum_particles.size(); i++) {
        this->scf_calc->freeze_density[i] = freeze_density_from_input[i];
      }
    }
    if (!skip_scf) {
      scf_calc->run();
      if (dump_for_qmcpack) {
        dump_mf_for_qmcpack(hdf5_filename);
      }
    }
  }
}

void POLYQUANT_CALCULATION::run_post_mean_field(std::string &post_mean_field_type) {
  if (!this->post_mean_field_methods.contains(post_mean_field_type) && post_mean_field_type != "FILE") {
    APP_ABORT("POLYQUANT post mean field parsing error. I can't understand the input provided. Could you double-check it?");
  }
  Polyquant_cout("Will run a post mean field calculation of type: ");
  Polyquant_cout(post_mean_field_type);
  std::string mean_field_type = "FILE";
  std::string fcidump_filename;

  if (post_mean_field_type == "FILE") {
    APP_ABORT("FROM_FILE for ci not implemented.");
  }
  this->run_mean_field(mean_field_type);
  ci_calc = std::make_shared<POLYQUANT_EPCI>(this->scf_calc);

  bool dump_for_qmcpack = false;
  std::string hdf5_filename = "Default.h5";
  if (this->input_params->input_data.contains("verbose")) {
    ci_calc->verbose = this->input_params->input_data["verbose"];
  }
  if (this->input_params->input_data.contains("keywords")) {
    if (this->input_params->input_data["keywords"].contains("ci_keywords")) {
      if (this->input_params->input_data["keywords"].contains("dump_for_qmcpack")) {
        dump_for_qmcpack = this->input_params->input_data["keywords"]["dump_for_qmcpack"];
      }
      if (this->input_params->input_data["keywords"].contains("hdf5_filename_qmcpack")) {
        hdf5_filename = this->input_params->input_data["keywords"]["hdf5_filename_qmcpack"];
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("convergence_E")) {
        ci_calc->convergence_E = this->input_params->input_data["keywords"]["ci_keywords"]["convergence_E"];
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("num_states")) {
        ci_calc->num_states = this->input_params->input_data["keywords"]["ci_keywords"]["num_states"];
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("num_subspace_vec")) {
        ci_calc->num_subspace_vec = this->input_params->input_data["keywords"]["ci_keywords"]["num_subspace_vec"];
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("cache_size")) {
        ci_calc->cache_size = this->input_params->input_data["keywords"]["ci_keywords"]["cache_size"];
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("slow_diag")) {
        ci_calc->detset.slow_diag = this->input_params->input_data["keywords"]["ci_keywords"]["slow_diag"];
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("build_matrix")) {
        ci_calc->detset.build_matrix = this->input_params->input_data["keywords"]["ci_keywords"]["build_matrix"];
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("exact_diag")) {
        ci_calc->exact_diag = this->input_params->input_data["keywords"]["ci_keywords"]["exact_diag"];
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("det_print_threshold")) {
        ci_calc->det_print_threshold = this->input_params->input_data["keywords"]["ci_keywords"]["det_print_threshold"];
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("NO_states")) {
        auto NO_states = this->input_params->input_data["keywords"]["ci_keywords"]["NO_states"];
        ci_calc->NO_states.clear();
        if (NO_states.type() == json::value_t::array) {
          for (auto i = 0; i < NO_states.size(); i++) {
            ci_calc->NO_states.push_back(NO_states[i]);
          }
        }
      } else {
        ci_calc->NO_states.push_back(0);
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("excitation_level")) {
        auto ex_lvl = this->input_params->input_data["keywords"]["ci_keywords"]["excitation_level"];
        if (ex_lvl.type() == json::value_t::array) {
          std::vector<std::tuple<int, int, int>> ex_lvl_obj;
          for (auto i = 0; i < this->input_molecule->quantum_particles.size(); i++) {
            std::tuple<int, int, int> ex_lvl_tup = {ex_lvl[i][0], ex_lvl[i][1], ex_lvl[i][2]};
            ex_lvl_obj.push_back(ex_lvl_tup);
          }
          ci_calc->excitation_level = ex_lvl_obj;
        } else {
          std::vector<std::tuple<int, int, int>> ex_lvl_obj;
          std::tuple<int, int, int> ex_lvl_tup = {ex_lvl, ex_lvl, ex_lvl};
          for (auto i = 0; i < this->input_molecule->quantum_particles.size(); i++) {
            ex_lvl_obj.push_back(ex_lvl_tup);
          }
          ci_calc->excitation_level = ex_lvl_obj;
        }
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("max_collective_excitation_level")) {
        ci_calc->max_collective_excitation_level = this->input_params->input_data["keywords"]["ci_keywords"]["max_collective_excitation_level"];
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("fcidump_filename")) {
        fcidump_filename = this->input_params->input_data["keywords"]["ci_keywords"]["fcidump_filename"];
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("screening_threshold")) {
        ci_calc->detset.screening_threshold = this->input_params->input_data["keywords"]["ci_keywords"]["screening_threshold"];
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("frozen_core")) {
        auto FC = this->input_params->input_data["keywords"]["ci_keywords"]["frozen_core"];
        if (FC.type() == json::value_t::array) {
          ci_calc->detset.frozen_core = FC.get<std::vector<int>>();
        } else if (FC.type() == json::value_t::boolean) {
          APP_ABORT("TODO Set FC based on chemical system");
        } else {
          APP_ABORT("keywords->ci_keywords->frozen_core of an invalid type. Must be boolean or list of numbers.");
        }
      }
      if (this->input_params->input_data["keywords"]["ci_keywords"].contains("deleted_virtual")) {
        auto DV = this->input_params->input_data["keywords"]["ci_keywords"]["deleted_virtual"];
        if (DV.type() == json::value_t::array) {
          ci_calc->detset.deleted_virtual = DV.get<std::vector<int>>();
        } else {
          APP_ABORT("keywords->ci_keywords->deleted_virtual of an invalid type. Must be boolean or list of numbers.");
        }
      }
    }
  }
  if (post_mean_field_type == "FCIDUMP") {
    this->ci_calc->calculate_integrals();
    this->ci_calc->fcidump(fcidump_filename);
  } else if (post_mean_field_type == "CI") {
    this->ci_calc->run();
    if (dump_for_qmcpack) {
      dump_post_mf_for_qmcpack(hdf5_filename);
      dump_post_mf_NOs_for_qmcpack(hdf5_filename);
    }
  } else if (post_mean_field_type == "FILE") {
    this->ci_calc->setup(this->scf_calc);
    // ci_calc->from_file(hdf5_filename);
    APP_ABORT("FROM_FILE for ci not implemented.");
  }
}

void POLYQUANT_CALCULATION::dump_mf_for_qmcpack(std::string &filename) {
  bool pbc = false;
  bool ecp = false;
  bool complex_vals = false;
  bool bohr_unit = true;
  int num_atom = this->input_molecule->centers.size();
  int num_species = this->input_molecule->classical_particles.size();
  // This is dumb why not get it from the basis...
  bool pure = true;
  if (this->input_params->input_data.contains("keywords")) {
    if (this->input_params->input_data["keywords"].contains("pure")) {
      pure = this->input_params->input_data["keywords"]["pure"];
    }
  }
  std::string pure_or_cart = "spherical";
  if (!pure) {
    std::string pure_or_cart = "cartesian";
  }
  std::vector<int> atomic_species_ids;
  std::vector<int> atomic_number;
  std::vector<int> atomic_charge;
  std::vector<int> core_elec;
  std::vector<std::string> atomic_names;
  std::vector<std::vector<double>> atomic_centers = this->input_molecule->centers;
  atomic_species_ids.resize(this->input_molecule->centers.size());
  std::map<std::string, CLASSICAL_PARTICLE_SET>::size_type classical_part_idx = 0;
  for (auto const &[classical_part_key, classical_part] : this->input_molecule->classical_particles) {
    for (auto idx : classical_part.center_idx) {
      atomic_species_ids[idx] = classical_part_idx;
    }
    atomic_number.push_back((int)classical_part.charge);
    atomic_charge.push_back((int)classical_part.charge);
    core_elec.push_back(0);
    atomic_names.push_back(classical_part_key);
    classical_part_idx++;
  }
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    std::string quantum_part_name = quantum_part_key;
    bool restricted = quantum_part.restricted;
    int num_ao = this->input_basis->num_basis[quantum_part_idx];
    int num_mo = this->scf_calc->num_mo[quantum_part_idx];
    int num_part_alpha = quantum_part.num_parts_alpha;
    int num_part_beta = quantum_part.num_parts_beta;
    int num_part_total = quantum_part.num_parts;
    int multiplicity = quantum_part.multiplicity;
    libint2::BasisSet basis = this->input_basis->basis[quantum_part_idx];
    //  "cartesian"
    // auto i = 0ul;
    // for (auto shell : basis) {
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
    unique_shells.resize(this->input_molecule->classical_particles.size());
    classical_part_idx = 0;
    double EPSILON = 1e-6;
    for (auto const &[classical_part_key, classical_part] : this->input_molecule->classical_particles) {
      // Polyquant_cout(classical_part_key);
      for (auto shell : basis) {
        // Polyquant_cout( std::to_string(shell.O[0]) + " " +
        // std::to_string(this->input_molecule->centers[classical_part.center_idx[0]][0])
        // + " " + std::to_string(shell.O[0]
        // -this->input_molecule->centers[classical_part.center_idx[0]][0])
        // ); Polyquant_cout( std::to_string(shell.O[1]) + " " +
        // std::to_string(this->input_molecule->centers[classical_part.center_idx[0]][1])
        // + " " + std::to_string(shell.O[1]
        // -this->input_molecule->centers[classical_part.center_idx[0]][1])
        // ); Polyquant_cout( std::to_string(shell.O[2]) + " " +
        //  std::to_string(this->input_molecule->centers[classical_part.center_idx[0]][2])
        // + " " + std::to_string(shell.O[2]
        // -this->input_molecule->centers[classical_part.center_idx[0]][2])
        // );
        if (std::abs(shell.O[0] - this->input_molecule->centers[classical_part.center_idx[0]][0]) < EPSILON &&
            std::abs(shell.O[1] - this->input_molecule->centers[classical_part.center_idx[0]][1]) < EPSILON &&
            std::abs(shell.O[2] - this->input_molecule->centers[classical_part.center_idx[0]][2]) < EPSILON) {
          // Polyquant_cout("Unique shell on center: " +
          //                std::to_string(classical_part.center_idx[0]) +
          //                " named: " + classical_part_key);
          // Polyquant_cout(shell);
          unique_shells[classical_part_idx].push_back(shell);
        }
      }
      classical_part_idx++;
    }
    std::string particle_filename = quantum_part_key + "_" + filename;
    Polyquant_cout("Dumping HDF5 to filename: " + particle_filename);
    POLYQUANT_HDF5 hdf5_f(particle_filename);
    hdf5_f.dump_mf_to_hdf5_for_QMCPACK(pbc, ecp, complex_vals, restricted, num_ao, num_mo, bohr_unit, num_part_alpha, num_part_beta, num_part_total, multiplicity, num_atom, num_species,
                                       quantum_part_name, scf_calc->E_orbitals_combined[quantum_part_idx], scf_calc->C_combined[quantum_part_idx], atomic_species_ids, atomic_number, atomic_charge,
                                       core_elec, atomic_names, atomic_centers, unique_shells);
    quantum_part_idx++;
  }
}

void POLYQUANT_CALCULATION::dump_post_mf_NOs_for_qmcpack(std::string &filename) {
  bool pbc = false;
  bool ecp = false;
  bool complex_vals = false;
  bool bohr_unit = true;
  int num_atom = this->input_molecule->centers.size();
  int num_species = this->input_molecule->classical_particles.size();
  // This is dumb why not get it from the basis...
  bool pure = true;
  if (this->input_params->input_data.contains("keywords")) {
    if (this->input_params->input_data["keywords"].contains("pure")) {
      pure = this->input_params->input_data["keywords"]["pure"];
    }
  }
  std::string pure_or_cart = "spherical";
  if (!pure) {
    std::string pure_or_cart = "cartesian";
  }
  std::vector<int> atomic_species_ids;
  std::vector<int> atomic_number;
  std::vector<int> atomic_charge;
  std::vector<int> core_elec;
  std::vector<std::string> atomic_names;
  std::vector<std::vector<double>> atomic_centers = this->input_molecule->centers;
  atomic_species_ids.resize(this->input_molecule->centers.size());
  std::map<std::string, CLASSICAL_PARTICLE_SET>::size_type classical_part_idx = 0;
  for (auto const &[classical_part_key, classical_part] : this->input_molecule->classical_particles) {
    for (auto idx : classical_part.center_idx) {
      atomic_species_ids[idx] = classical_part_idx;
    }
    atomic_number.push_back((int)classical_part.charge);
    atomic_charge.push_back((int)classical_part.charge);
    core_elec.push_back(0);
    atomic_names.push_back(classical_part_key);
    classical_part_idx++;
  }
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    std::string quantum_part_name = quantum_part_key;
    bool restricted = quantum_part.restricted;
    int num_ao = this->input_basis->num_basis[quantum_part_idx];
    int num_mo = this->scf_calc->num_mo[quantum_part_idx];
    int num_part_alpha = quantum_part.num_parts_alpha;
    int num_part_beta = quantum_part.num_parts_beta;
    int num_part_total = quantum_part.num_parts;
    int multiplicity = quantum_part.multiplicity;
    libint2::BasisSet basis = this->input_basis->basis[quantum_part_idx];
    //  "cartesian"
    // auto i = 0ul;
    // for (auto shell : basis) {
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
    unique_shells.resize(this->input_molecule->classical_particles.size());
    classical_part_idx = 0;
    double EPSILON = 1e-6;
    for (auto const &[classical_part_key, classical_part] : this->input_molecule->classical_particles) {
      // Polyquant_cout(classical_part_key);
      for (auto shell : basis) {
        // Polyquant_cout( std::to_string(shell.O[0]) + " " +
        // std::to_string(this->input_molecule->centers[classical_part.center_idx[0]][0])
        // + " " + std::to_string(shell.O[0]
        // -this->input_molecule->centers[classical_part.center_idx[0]][0])
        // ); Polyquant_cout( std::to_string(shell.O[1]) + " " +
        // std::to_string(this->input_molecule->centers[classical_part.center_idx[0]][1])
        // + " " + std::to_string(shell.O[1]
        // -this->input_molecule->centers[classical_part.center_idx[0]][1])
        // ); Polyquant_cout( std::to_string(shell.O[2]) + " " +
        //  std::to_string(this->input_molecule->centers[classical_part.center_idx[0]][2])
        // + " " + std::to_string(shell.O[2]
        // -this->input_molecule->centers[classical_part.center_idx[0]][2])
        // );
        if (std::abs(shell.O[0] - this->input_molecule->centers[classical_part.center_idx[0]][0]) < EPSILON &&
            std::abs(shell.O[1] - this->input_molecule->centers[classical_part.center_idx[0]][1]) < EPSILON &&
            std::abs(shell.O[2] - this->input_molecule->centers[classical_part.center_idx[0]][2]) < EPSILON) {
          // Polyquant_cout("Unique shell on center: " +
          //                std::to_string(classical_part.center_idx[0]) +
          //                " named: " + classical_part_key);
          // Polyquant_cout(shell);
          unique_shells[classical_part_idx].push_back(shell);
        }
      }
      classical_part_idx++;
    }

    for (int state_vec_idx = 0; state_vec_idx < ci_calc->NO_states.size(); state_vec_idx++) {
      auto state_idx = ci_calc->NO_states[state_vec_idx];
      std::stringstream particle_filename;
      particle_filename << "NSO_State_" << state_idx << "_part_" << quantum_part_key << "_" << filename;
      Polyquant_cout("Dumping HDF5 to filename: " + particle_filename.str());
      POLYQUANT_HDF5 hdf5_f(particle_filename.str());
      hdf5_f.dump_mf_to_hdf5_for_QMCPACK(pbc, ecp, complex_vals, restricted, num_ao, num_mo, bohr_unit, num_part_alpha, num_part_beta, num_part_total, multiplicity, num_atom, num_species,
                                         quantum_part_name, ci_calc->occ_nso[state_vec_idx][quantum_part_idx], ci_calc->C_nso[state_vec_idx][quantum_part_idx], atomic_species_ids, atomic_number,
                                         atomic_charge, core_elec, atomic_names, atomic_centers, unique_shells);
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_CALCULATION::dump_post_mf_for_qmcpack(std::string &filename) {
  std::vector<std::vector<std::vector<std::vector<uint64_t>>>> dets;
  dets.resize(this->input_molecule->quantum_particles.size());
  for (int idx_part = 0; idx_part < this->input_molecule->quantum_particles.size(); idx_part++) {
    dets[idx_part].resize(2);
  }
  for (auto i = 0; i < this->ci_calc->detset.N_dets; i++) {
    auto i_unfold = this->ci_calc->detset.det_idx_unfold(i);
    for (int idx_part = 0; idx_part < this->input_molecule->quantum_particles.size(); idx_part++) {
      auto curr_det_a = this->ci_calc->detset.get_det_withfcorbs(idx_part, 0, i_unfold[2 * idx_part + 0]);
      auto curr_det_b = this->ci_calc->detset.get_det_withfcorbs(idx_part, 1, i_unfold[2 * idx_part + 1]);
      dets[idx_part][0].push_back(curr_det_a);
      dets[idx_part][1].push_back(curr_det_b);
    }
  }
  std::string particle_filename = "Multidet_" + filename;
  Polyquant_cout("Dumping post MF HDF5 to filename: " + particle_filename);
  POLYQUANT_HDF5 hdf5_f(particle_filename);
  std::vector<int> max_orb_with_fc;
  max_orb_with_fc.resize(this->ci_calc->detset.max_orb.size());
  for (auto i = 0; i < this->ci_calc->detset.max_orb.size(); i++) {
    max_orb_with_fc[i] += this->ci_calc->detset.max_orb[i] + this->ci_calc->detset.frozen_core[i];
  }
  int max_orb_maxval = *std::max_element(max_orb_with_fc.begin(), max_orb_with_fc.end());
  hdf5_f.dump_post_mf_to_hdf5_for_QMCPACK(dets, this->ci_calc->C_ci, this->ci_calc->detset.N_dets, this->ci_calc->num_states, max_orb_maxval);
}
