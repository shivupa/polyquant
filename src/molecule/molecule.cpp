#include "molecule/molecule.hpp"

using namespace polyquant;

POLYQUANT_MOLECULE::POLYQUANT_MOLECULE(std::shared_ptr<POLYQUANT_INPUT> input_params, std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry) { setup_molecule(input_params, input_symmetry); }

void POLYQUANT_MOLECULE::set_molecular_charge() {
  if (input->input_data["molecule"].contains("molecular_charge")) {
    this->charge = input->input_data["molecule"]["molecular_charge"];
  } else {
    APP_ABORT("Can't set up molecule. The molecule section of the input is missing 'molecular_charge'.");
  }
}

void POLYQUANT_MOLECULE::set_molecular_multiplicity() {
  if (input->input_data["molecule"].contains("molecular_multiplicity")) {
    this->multiplicity = input->input_data["molecule"]["molecular_multiplicity"];
  } else {
    APP_ABORT("Can't set up molecule. The molecule section of the input is missing 'molecular_multiplicity'.");
  }
}

void POLYQUANT_MOLECULE::set_molecular_restricted() {
  if (input->input_data.contains("keywords")) {
    if (input->input_data["keywords"].contains("restricted")) {
      this->restricted = input->input_data["keywords"]["restricted"];
    } else {
      Polyquant_cout("'keywords'->'restricted' missing. Defaulting to restricted.");
      this->restricted = true;
    }
  } else {
    Polyquant_cout("The input didn't contain a section called 'keywords'. Defaulting to restricted calculation.");
    this->restricted = true;
  }
}

void POLYQUANT_MOLECULE::symmetrize_molecule() {

  msym_error_t ret = MSYM_SUCCESS;

  // create atoms in msym structs
  std::vector<msym_element_t> elements_for_msym;
  elements_for_msym = this->to_point_msym_charges_for_symmetry();
  int length = elements_for_msym.size();

  if (input_symm->do_symmetry == false) {
    return;
  }

  auto quantum_part_idx = 0ul;
  for (auto &[quantum_part_key, quantum_part] : this->quantum_particles) {
    auto &ctx = input_symm->ctx[quantum_part_idx];

    // TODO Figure out setting symmetry thresholds here for now use default
    //  if(NULL != thresholds){
    //      if(MSYM_SUCCESS != (ret = msymSetThresholds(ctx, thresholds))) goto err;
    //  }

    // set atoms in ctx
    if (MSYM_SUCCESS != (ret = msymSetElements(ctx, length, elements_for_msym.data()))) {

      auto error = msymErrorString(ret);
      std::cout << error << std::endl;
      error = msymGetErrorDetails();
      std::cout << error << std::endl;
      APP_ABORT("Error setting atoms for symmetrizing");
    }

    /* Get elements msym elements */
    // i have no idea why this is required i need to check with their library
    // if(MSYM_SUCCESS != (ret = msymGetElements(ctx, &mlength, &melements))){
    //    APP_ABORT("Error getting atoms for symmetrizing");
    //}

    // geometrical information
    std::vector<double> com;
    com.resize(3);
    if (MSYM_SUCCESS != (ret = msymGetCenterOfMass(ctx, com.data()))) {
      APP_ABORT("Error calculating center of mass");
    }
    double radius = 0.0;
    if (MSYM_SUCCESS != (ret = msymGetRadius(ctx, &radius))) {
      APP_ABORT("Error calculation radius");
    }

    // std::cout << "SYMMMETRY TESTING : COM  " << com[0] << "   " << com[1] << "    " << com[2] << std::endl;
    // std::cout << "SYMMMETRY TESTING : radius  " << radius << std::endl;

    if (length != 1) {
      // if (!input_symm->point_group.empty()) {
      //   APP_ABORT("Symmetry handler point group is already set, but this calculation is not an atom. Currently the point group can only be manually specified for atoms as SO(3).");
      // }

      if (input_symm->point_group.empty()) {
        if (MSYM_SUCCESS != (ret = msymFindSymmetry(ctx))) {
          auto error = msymErrorString(ret);
          std::cout << error << std::endl;
          error = msymGetErrorDetails();
          std::cout << error << std::endl;
          APP_ABORT("Error Figuring out symmetry");
        }
      } else {
        std::string pg = this->input_symm->point_group;
        if (MSYM_SUCCESS != (ret = msymSetPointGroupByName(ctx, pg.c_str()))) {
          auto error = msymErrorString(ret);
          std::cout << error << std::endl;
          error = msymGetErrorDetails();
          std::cout << error << std::endl;
          APP_ABORT("Error setting PG to custom PG");
        }
      }
    } else {
      // single atom
      if (input_symm->point_group == "SO(3)") {
        std::cout << "SYMMETRY: IDENTIFIED POINT GROUP " << input_symm->point_group << std::endl;
        if (com[0] != 0.0 || com[1] != 0.0 || com[2] != 0.0) {
          APP_ABORT("For SO(3) symmetry the atom must be located at the origin.");
        }
        return;
      } else if (input_symm->point_group == "D2h" || input_symm->point_group == "") {
        std::string pg = "D2h";
        if (MSYM_SUCCESS != (ret = msymSetPointGroupByName(ctx, pg.c_str()))) {
          auto error = msymErrorString(ret);
          std::cout << error << std::endl;
          error = msymGetErrorDetails();
          std::cout << error << std::endl;
          APP_ABORT("Error setting PG to D2h");
        }
      } else {

        std::stringstream buffer;
        buffer << "Symmetric point group " << input_symm->point_group << " not identified for a single atom." << std::endl;
        APP_ABORT(buffer.str());
      }
    }
    input_symm->point_group.resize(6);
    if (MSYM_SUCCESS != (ret = msymGetPointGroupName(ctx, sizeof(char[6]), input_symm->point_group.data()))) {
      // if(MSYM_SUCCESS != (ret = msymGetPointGroupName(ctx, sizeof(char[6]), point_group))){
      auto error = msymErrorString(ret);
      std::cout << error << std::endl;
      error = msymGetErrorDetails();
      std::cout << error << std::endl;
      APP_ABORT("Error Getting Point group");
    }
    input_symm->point_group.erase(input_symm->point_group.find('\0'));
    std::cout << "SYMMMETRY: IDENTIFIED POINT GROUP " << input_symm->point_group << std::endl;
    input_symm->sub_group = input_symm->point_group;

    // TODO add a way to descend in symmetry
    // open issue for this

    // Symmetrize and Align Molecule
    double symerr = 0.0;
    if (MSYM_SUCCESS != (ret = msymSymmetrizeElements(ctx, &symerr))) {

      auto error = msymErrorString(ret);
      std::cout << error << std::endl;
      error = msymGetErrorDetails();
      std::cout << error << std::endl;
      APP_ABORT("Error Symmetrizing molecule!");
    }
    if (MSYM_SUCCESS != (ret = msymAlignAxes(ctx))) {
      APP_ABORT("Error Aligning molecule!");
    }

    int mlength;
    msym_element_t *melements = NULL;

    if (MSYM_SUCCESS != (ret = msymGetElements(ctx, &mlength, &melements))) {
      APP_ABORT("Error getting the symmetrized structure.");
    }
    if (mlength != elements_for_msym.size()) {
      APP_ABORT("Number of atoms changed during symmetrizing molecule.");
    }
    elements_for_msym.clear();
    for (auto i = 0; i < mlength; i++) {
      elements_for_msym.push_back(melements[i]);
    }
    quantum_part_idx++;
  }

  from_point_msym_charges_for_symmetry(elements_for_msym);

  //    APP_ABORT("Error getting atoms for symmetrizing");
  //}

  // if(MSYM_SUCCESS != (ret = msymGetSubgroups(ctx, &msgl, &msg))) goto err;
}

void POLYQUANT_MOLECULE::parse_particles() {
  // Store center coordinates
  // todo check for geom and symbols
  for (size_t i = 0; i < (input->input_data["molecule"]["geometry"].size() / 3); ++i) {
    std::vector<double> atom = {};
    for (int j = 0; j < 3; ++j) {
      atom.push_back(input->input_data["molecule"]["geometry"][(i * 3) + j]);
      atom[j] *= this->angstrom_to_bohr;
    }
    centers.push_back(atom);
  }
  // Store center labels
  std::vector<std::string> center_labels;
  std::vector<int> quantum_nuclei;
  for (auto label : input->input_data["molecule"]["symbols"]) {
    center_labels.push_back(label);
    quantum_nuclei.push_back(0);
  }

  // Store if we are using nuclear charge modification
  bool charge_mod = false;
  if (input->input_data["molecule"].contains("modify_nuclear_charge")) {
    charge_mod = true;
  }

  if (input->input_data.contains("keywords")) {
    // if (input->input_data["keywords"].contains("molecule_keywords")) {
    // create classical and quantum centers
    if (input->input_data["keywords"].contains("quantum_nuclei")) {
      // if a label is given change all nuclei with matching label to be
      // quantum https://github.com/nlohmann/json/issues/1564
      if (std::all_of(input->input_data["keywords"]["quantum_nuclei"].begin(), input->input_data["keywords"]["quantum_nuclei"].end(), [](const json &el) { return el.is_string(); })) {
        for (std::string quantum_label : input->input_data["keywords"]["quantum_nuclei"]) {
          // https://stackoverflow.com/questions/42871932/how-to-find-all-positions-of-an-element-using-stdfind
          auto start_it = std::begin(center_labels);
          bool found_at_least_once = false;
          while (start_it != std::end(center_labels)) {
            start_it = std::find(start_it, std::end(center_labels), quantum_label);
            if (start_it != std::end(center_labels)) {
              auto const pos = std::distance(std::begin(center_labels), start_it);
              quantum_nuclei[pos] = 1;
              ++start_it;
              found_at_least_once = true;
            }
          }
          if (!found_at_least_once) {
            Polyquant_cout("The label '" + quantum_label + "' was not found in the atomic labels. Skipping...");
          }
        }
      } else if (std::all_of(input->input_data["keywords"]["quantum_nuclei"].begin(), input->input_data["keywords"]["quantum_nuclei"].end(), [](const json &el) { return el.is_number(); })) {
        size_t idx = 0;
        for (auto is_quantum : input->input_data["keywords"]["quantum_nuclei"]) {
          quantum_nuclei[idx] = is_quantum;
          idx++;
        }
      } else {
        APP_ABORT("'Keywords'->'quantum_nuclei' are not all strings or ints.");
      }
    } else {
      Polyquant_cout(
          "The input section 'keywords' didn't contain a section called about quantum nuclei. All nuclei are going to be treated classically. No quantum particles present besides electrons.");
    }
  } else {
    Polyquant_cout("The input didn't contain a section called 'keywords'. All nuclei are going to be treated classically. No quantum particles present besides electrons.");
  }

  // classical nuclei

  // centers, center_labels, quantum_nuclei
  for (size_t i = 0; i < centers.size(); i++) {
    if (quantum_nuclei[i] == 0) {
      // classical center
      std::string curr_label = center_labels[i];
      if (classical_particles.count(curr_label) == 0) {
        CLASSICAL_PARTICLE_SET classical_part;
        classical_particles[curr_label] = classical_part;
        classical_particles[curr_label].mass = atom_symb_to_mass(center_labels[i]);
        double nuc_charge = atom_symb_to_num(center_labels[i]);
        if (charge_mod) {
          if (input->input_data["molecule"]["modify_nuclear_charge"].contains(center_labels[i])) {
            nuc_charge = input->input_data["molecule"]["modify_nuclear_charge"][center_labels[i]];
          }
        }
        classical_particles[curr_label].charge = nuc_charge;
        classical_particles[curr_label].num_parts = 0;
      }
      classical_particles[curr_label].num_parts += 1;
      classical_particles[curr_label].center_idx.push_back(i);
    } else {
      // classical center for basis
      std::string curr_label = center_labels[i];
      if (classical_particles.count(curr_label) == 0) {
        CLASSICAL_PARTICLE_SET classical_part;
        classical_particles[curr_label] = classical_part;
        classical_particles[curr_label].mass = 0.0;
        classical_particles[curr_label].charge = 0.0;
        classical_particles[curr_label].num_parts = 0;
      }
      classical_particles[curr_label].num_parts += 1;
      classical_particles[curr_label].center_idx.push_back(i);
      // quantum center
      if (quantum_particles.count(curr_label) == 0) {
        QUANTUM_PARTICLE_SET quantum_part;
        quantum_particles[curr_label] = quantum_part;
        quantum_particles[curr_label].spin = quantum_symb_to_spin(center_labels[i]);
        quantum_particles[curr_label].mass = quantum_symb_to_mass(center_labels[i]);
        quantum_particles[curr_label].charge = quantum_symb_to_charge(center_labels[i]);
        quantum_particles[curr_label].num_parts = 0;
      }
      quantum_particles[curr_label].num_parts += 1;
      quantum_particles[curr_label].center_idx.push_back(i);
    }
  }
  // iterate over quantum particles to set alpha/beta particles and mult
  for (auto &[quantum_part_key, quantum_part] : this->quantum_particles) {
    quantum_part.num_parts_alpha = (quantum_part.num_parts / 2) + (quantum_part.num_parts % 2);
    quantum_part.num_parts_beta = (quantum_part.num_parts / 2);
    if (quantum_part.num_parts_alpha + quantum_part.num_parts_beta != quantum_part.num_parts) {
      APP_ABORT("Could not automatically set quantum particle num alpha and beta.");
    }
    quantum_part.multiplicity = (int)std::round((std::abs(quantum_part.num_parts_alpha - quantum_part.num_parts_beta) * quantum_part.spin) + 1);
    if (quantum_part.num_parts == 1) {
      quantum_part.restricted = false;
    } else {
      // quantum_part.restricted = this->restricted;
      quantum_part.restricted = true;
      // TODO remove. Only needed while Restricted open shell is not implemented
      if (quantum_part.num_parts_alpha != quantum_part.num_parts_beta && quantum_part.restricted) {
        quantum_part.restricted = false;
      }
    }
  }
  // create any other quantum particles
  if (input->input_data.contains("keywords")) {
    if (input->input_data["keywords"].contains("quantum_particles")) {
      for (auto qp : input->input_data["keywords"]["quantum_particles"]) {
        std::string curr_label;
        if (qp.contains("name")) {
          curr_label = qp["name"];
        } else {
          APP_ABORT("Keywords->quantum particles is missing keyword 'name'!");
        }

        if (quantum_particles.count(curr_label) == 0) {
          QUANTUM_PARTICLE_SET quantum_part;
          quantum_particles[curr_label] = quantum_part;
          if (qp.contains("spin")) {
            quantum_particles[curr_label].spin = qp["spin"];
          } else {
            APP_ABORT("Keywords->quantum particles is missing keyword 'spin'!");
          }
          if (qp.contains("mass")) {
            quantum_particles[curr_label].mass = qp["mass"];
          } else {
            APP_ABORT("Keywords->quantum particles is missing keyword 'mass'!");
          }
          if (qp.contains("charge")) {
            quantum_particles[curr_label].charge = qp["charge"];
          } else {
            APP_ABORT("Keywords->quantum particles is missing keyword 'charge'!");
          }
          if (qp.contains("num_particles_alpha")) {
            quantum_particles[curr_label].num_parts_alpha = qp["num_particles_alpha"];
          } else {
            APP_ABORT("Keywords->quantum particles is missing keyword 'num_particles_alpha'!");
          }
          if (qp.contains("num_particles_beta")) {
            quantum_particles[curr_label].num_parts_beta = qp["num_particles_beta"];
          } else {
            APP_ABORT("Keywords->quantum particles is missing keyword 'num_particles_beta'!");
          }
          if (qp.contains("exchange")) {
            quantum_particles[curr_label].exchange = qp["exchange"];
          } else {
            APP_ABORT("Keywords->quantum particles is missing keyword 'exchange'!");
          }
          if (qp.contains("electron_exchange")) {
            quantum_particles[curr_label].electron_exchange = qp["electron_exchange"];
          } else {
            APP_ABORT("Keywords->quantum particles is missing keyword 'electron_exchange'!");
          }
          if (qp.contains("restricted")) {
            quantum_particles[curr_label].restricted = qp["restricted"];
          } else {
            APP_ABORT("Keywords->quantum particles is missing keyword 'restricted'!");
          }
          // TODO make sure a user isn't specifying num_parts or multiplicity.
          // These will be calculated
          quantum_particles[curr_label].num_parts = quantum_particles[curr_label].num_parts_alpha + quantum_particles[curr_label].num_parts_beta;
          quantum_particles[curr_label].multiplicity =
              (std::abs(quantum_particles[curr_label].num_parts_alpha - quantum_particles[curr_label].num_parts_beta) * quantum_particles[curr_label].spin) + 1;
        }
      }
    } else {
      Polyquant_cout("No additional quantum particles found.");
    }
  }
  // create electrons
  std::string curr_label = "electron";
  if (quantum_particles.count(curr_label) == 0) {
    double num_parts = -this->charge;
    for (auto part : classical_particles) {
      num_parts += part.second.charge * part.second.num_parts;
    }
    for (auto part : quantum_particles) {
      num_parts += part.second.charge * part.second.num_parts;
    }
    num_parts = std::round(num_parts);
    Polyquant_cout("Creating " + std::to_string(num_parts) + " electrons");

    QUANTUM_PARTICLE_SET quantum_part;
    quantum_particles[curr_label] = quantum_part;
    quantum_particles[curr_label].spin = quantum_symb_to_spin(curr_label);
    quantum_particles[curr_label].mass = quantum_symb_to_mass(curr_label);
    quantum_particles[curr_label].charge = quantum_symb_to_charge(curr_label);
    quantum_particles[curr_label].num_parts = num_parts;
    quantum_particles[curr_label].num_parts_beta = ((num_parts) - (this->multiplicity - 1)) / 2;
    quantum_particles[curr_label].num_parts_alpha = num_parts - quantum_particles[curr_label].num_parts_beta;
    quantum_particles[curr_label].exchange = true;
    quantum_particles[curr_label].restricted = this->restricted;
    quantum_particles[curr_label].multiplicity = this->multiplicity;
  } else {
    APP_ABORT("Electrons should not have been created yet.");
  }
}
void POLYQUANT_MOLECULE::print_molecule() {
  Polyquant_cout("");
  Polyquant_cout("Molecule parameters");
  Polyquant_cout("Classical particle types");
  auto count = 0;
  for (auto const &[classical_part_key, classical_part] : this->classical_particles) {
    count++;
    Polyquant_cout("Classical particle type  " + std::to_string(count) + ": ");
    Polyquant_cout("name: " + classical_part_key);
    Polyquant_cout("mass: " + std::to_string(classical_part.mass));
    Polyquant_cout("charge: " + std::to_string(classical_part.charge));
    Polyquant_cout("number of particles: " + std::to_string(classical_part.num_parts));
    Polyquant_cout("Center idx    x   y   z");
    for (auto idx : classical_part.center_idx) {
      Polyquant_cout(std::to_string(idx) + "    " + std::to_string(this->centers[idx][0]) + "    " + std::to_string(this->centers[idx][1]) + "    " + std::to_string(this->centers[idx][2]));
    }
    Polyquant_cout("");
  }
  Polyquant_cout("");
  Polyquant_cout("Quantum particle types");
  count = 0;
  for (auto const &[quantum_part_key, quantum_part] : this->quantum_particles) {
    count++;
    Polyquant_cout("Quantum Particle type " + std::to_string(count) + ": ");
    Polyquant_cout("name: " + quantum_part_key);
    Polyquant_cout("mass: " + std::to_string(quantum_part.mass));
    Polyquant_cout("charge: " + std::to_string(quantum_part.charge));
    Polyquant_cout("spin: " + std::to_string(quantum_part.spin));
    Polyquant_cout("expected multiplicity: " + std::to_string(quantum_part.multiplicity));
    Polyquant_cout("number of particles: " + std::to_string(quantum_part.num_parts));
    Polyquant_cout("number of particles (alpha): " + std::to_string(quantum_part.num_parts_alpha));
    Polyquant_cout("number of particles (beta): " + std::to_string(quantum_part.num_parts_beta));
    Polyquant_cout("Center idx    x   y   z");
    for (auto idx : quantum_part.center_idx) {
      Polyquant_cout(std::to_string(idx) + "    " + std::to_string(this->centers[idx][0]) + "    " + std::to_string(this->centers[idx][1]) + "    " + std::to_string(this->centers[idx][2]));
    }
    std::stringstream buffer;
    buffer << "exchange: " << std::boolalpha << quantum_part.exchange << std::endl;
    buffer << "electron exchange: " << std::boolalpha << quantum_part.electron_exchange << std::endl;
    buffer << "restricted: " << std::boolalpha << quantum_part.restricted << std::endl;
    Polyquant_cout(buffer.str());
  }
  Polyquant_cout("");
}

void POLYQUANT_MOLECULE::setup_molecule(std::shared_ptr<POLYQUANT_INPUT> input_params, std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  input = input_params;
  input_symm = input_symmetry;
  if (input->input_data.contains("molecule")) {
    set_molecular_charge();
    set_molecular_multiplicity();
    set_molecular_restricted();
    parse_particles();
    this->input_symm->create_ctx_for_particle_types(this->quantum_particles.size());
    symmetrize_molecule();
    // Calculate nuclear repulsion energy
    this->calculate_E_nuc();
    Polyquant_cout("nuclear repulsion energy: " + std::to_string(this->E_nuc));
    print_molecule();
    std::string filename = "polyquant_used_geometry.xyz";
    std::string contents = this->dump_xyz();
    Polyquant_dump_str_to_file(contents, filename);
  } else {
    APP_ABORT("Cannot set up molecule. Input json missing 'molecule' section.");
  }
}

std::string POLYQUANT_MOLECULE::dump_xyz(std::string classical_part_key) const {
  std::string header = "";
  std::string body = "";
  // calculate num atoms
  int num_atom = 0;
  for (auto classical_part : classical_particles) {
    // num_atom += classical_part.second.num_parts;
    for (auto i = 0; i < classical_part.second.num_parts; i++) {
      if (classical_part_key == "no_ghost" && classical_part.second.mass < 1) {
        continue;
      } else if (classical_part_key != "all" && classical_part_key != "no_ghost" && classical_part.first != classical_part_key) {
        continue;
      }
      num_atom++;
      body += "\n";
      body += classical_part.first;

      body += "    ";
      body += std::to_string(centers[classical_part.second.center_idx[i]][0] * this->bohr_to_angstrom);
      body += "    ";
      body += std::to_string(centers[classical_part.second.center_idx[i]][1] * this->bohr_to_angstrom);
      body += "    ";
      body += std::to_string(centers[classical_part.second.center_idx[i]][2] * this->bohr_to_angstrom);
    }
  }

  header += std::to_string(num_atom);
  header += "\n";
  header += "POLYQUANT Dumped XYZ centers = " + classical_part_key;
  auto temp_xyz = header + body;
  return temp_xyz;
}

std::vector<libint2::Atom> POLYQUANT_MOLECULE::to_libint_atom(std::string classical_part_key) const {
  std::vector<libint2::Atom> atoms;
  for (auto classical_part : classical_particles) {
    for (auto i = 0; i < classical_part.second.num_parts; i++) {
      if (classical_part_key != "all") {
        if (classical_part_key == "no_ghost") {
          if (classical_part.second.mass < 1) {
            continue;
          }
        } else if (classical_part.first != classical_part_key) {
          continue;
        }
      }
      libint2::Atom temp_atom;
      temp_atom.atomic_number = classical_part.second.charge;
      auto center_idx = classical_part.second.center_idx[i];
      temp_atom.x = centers[center_idx][0];
      temp_atom.y = centers[center_idx][1];
      temp_atom.z = centers[center_idx][2];
      atoms.push_back(temp_atom);
    }
  }
  return atoms;
}

std::vector<std::pair<double, std::array<double, 3>>> POLYQUANT_MOLECULE::to_point_charges_for_integrals(std::string classical_part_key) const {
  std::vector<std::pair<double, std::array<double, 3>>> atom_point_charges;
  for (auto classical_part : classical_particles) {
    for (auto i = 0; i < classical_part.second.num_parts; i++) {
      if (classical_part_key != "all") {
        if (classical_part_key == "no_ghost") {
          if (classical_part.second.charge == 0.0) {
            continue;
          }
        } else if (classical_part.first != classical_part_key) {
          continue;
        }
      }
      auto center_idx = classical_part.second.center_idx[i];
      std::array<double, 3> pos = {centers[center_idx][0], centers[center_idx][1], centers[center_idx][2]};
      std::pair<double, std::array<double, 3>> temp_atom = std::make_pair(classical_part.second.charge, pos);
      atom_point_charges.push_back(temp_atom);
    }
  }
  return atom_point_charges;
}

void POLYQUANT_MOLECULE::from_point_msym_charges_for_symmetry(std::vector<msym_element_t> &symm_chrgs) {
  auto symm_chrg_idx = 0;
  for (auto classical_part : classical_particles) {
    if (classical_part.second.charge == 0.0) {
      APP_WARN("When symmetrizing molecules ghost atoms are treated as Deuteriums. This shifts the center of mass, and the point group is of the supermolecule made of the atoms and the ghost atom.");
      // continue;
    }
    for (auto i = 0; i < classical_part.second.num_parts; i++) {
      auto center_idx = classical_part.second.center_idx[i];

      msym_element_t temp_atom = symm_chrgs[symm_chrg_idx];
      if (temp_atom.name[0] != 'D') {
        auto nlet_in_name = classical_part.first.size() < 5 ? classical_part.first.size() : 4;
        for (auto letter_idx = 0; letter_idx < nlet_in_name; letter_idx++) {
          if (temp_atom.name[letter_idx] != classical_part.first[letter_idx]) {
            APP_ABORT("Atom names are symmetrize don't match. Something happened during reorder.");
          }
        }
      } else {
        Polyquant_cout("Adjusting Ghost atom");
      }

      centers[center_idx][0] = temp_atom.v[0];
      centers[center_idx][1] = temp_atom.v[1];
      centers[center_idx][2] = temp_atom.v[2];
      symm_chrg_idx++;
    }
  }
}

std::string POLYQUANT_MOLECULE::get_label_of_center(const std::array<double, 3> &center_pos) const {
  std::string label = "";

  for (auto classical_part : classical_particles) {
    for (auto i = 0; i < classical_part.second.num_parts; i++) {
      auto center_idx = classical_part.second.center_idx[i];
      auto match_threshold = 1e-12;
      if (std::abs(centers[center_idx][0] - center_pos[0]) < match_threshold && std::abs(centers[center_idx][1] - center_pos[1]) < match_threshold &&
          std::abs(centers[center_idx][2] - center_pos[2]) < match_threshold) {
        label = classical_part.first + std::to_string(i);
        return label;
      }
    }
  }
  if (label == "") {
    APP_ABORT("Could not find a label for the center provided.");
  }
  return label;
}
std::vector<msym_element_t> POLYQUANT_MOLECULE::to_point_msym_charges_for_symmetry(std::string classical_part_key) const {
  std::vector<msym_element_t> atom_point_charges;
  for (auto classical_part : classical_particles) {
    for (auto i = 0; i < classical_part.second.num_parts; i++) {
      if (classical_part_key != "all") {
        if (classical_part_key == "no_ghost") {
          if (classical_part.second.mass == 0.0) {
            continue;
          }
        } else if (classical_part.first != classical_part_key) {
          continue;
        }
      }
      auto center_idx = classical_part.second.center_idx[i];

      msym_element_t temp_atom;
      temp_atom.v[0] = centers[center_idx][0];
      temp_atom.v[1] = centers[center_idx][1];
      temp_atom.v[2] = centers[center_idx][2];
      temp_atom.n = (int)(classical_part.second.charge);
      temp_atom.m = (int)(classical_part.second.mass);

      if (classical_part.first == "X" || classical_part.second.mass == 0) {
        temp_atom.name[0] = 'D';
        temp_atom.name[1] = '\0';
      } else {
        auto nlet_in_name = classical_part.first.size() < 5 ? classical_part.first.size() : 4;
        for (auto letter_idx = 0; letter_idx < nlet_in_name; letter_idx++) {
          temp_atom.name[letter_idx] = classical_part.first[letter_idx];
        }
      }
      atom_point_charges.push_back(temp_atom);
    }
  }
  return atom_point_charges;
}

void POLYQUANT_MOLECULE::calculate_E_nuc() {
  this->E_nuc = 0.0;
  for (auto classical_part_1 : classical_particles) {
    for (auto i = 0; i < classical_part_1.second.num_parts; i++) {
      for (auto classical_part_2 : classical_particles) {
        for (auto j = 0; j < classical_part_2.second.num_parts; j++) {
          auto Z_i = classical_part_1.second.charge;
          auto Z_j = classical_part_2.second.charge;
          if (Z_i == 0 || Z_j == 0) {
            continue;
          }
          auto center_idx_1 = classical_part_1.second.center_idx[i];
          auto center_idx_2 = classical_part_2.second.center_idx[j];

          if (center_idx_1 != center_idx_2) {
            auto dx = (centers[center_idx_2][0] - centers[center_idx_1][0]);
            auto dy = (centers[center_idx_2][1] - centers[center_idx_1][1]);
            auto dz = (centers[center_idx_2][2] - centers[center_idx_1][2]);
            auto r_sq = std::sqrt((dx * dx) + (dy * dy) + (dz * dz));
            this->E_nuc += ((Z_i * Z_j) / r_sq);
          }
        }
      }
    }
  }
  this->E_nuc *= 0.5;
}
