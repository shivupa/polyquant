#include <molecule/molecule.hpp>

using namespace selci;

PYCI_MOLECULE::PYCI_MOLECULE(const PYCI_INPUT &input) { setup_molecule(input); }

void PYCI_MOLECULE::set_molecular_charge(const PYCI_INPUT &input) {
  if (input.input_data["molecule"].contains("molecular_charge")) {
    this->charge = input.input_data["molecule"]["molecular_charge"];
  } else {
    APP_ABORT("Can't set up molecule. The molecule section of the input is "
              "missing 'molecular_charge'.");
  }
}

void PYCI_MOLECULE::set_molecular_multiplicity(const PYCI_INPUT &input) {
  if (input.input_data["molecule"].contains("molecular_multiplicity")) {
    this->multiplicity = input.input_data["molecule"]["molecular_multiplicity"];
  } else {
    APP_ABORT("Can't set up molecule. The molecule section of the input is "
              "missing 'molecular_multiplicity'.");
  }
}

void PYCI_MOLECULE::set_molecular_restricted(const PYCI_INPUT &input) {
  if (input.input_data["keywords"].contains("restricted")) {
    this->multiplicity = input.input_data["molecule"]["restricted"];
  } else {
    APP_ABORT("Can't set up molecule. The keywords section of the input is "
              "missing 'restricted'.");
  }
}

void PYCI_MOLECULE::parse_particles(const PYCI_INPUT &input) {
  // Store center coordinates
  // todo check for geom and symbols

  for (nlohmann::basic_json<>::size_type i = 0;
       i < input.input_data["molecule"]["geometry"].size() % 3; ++i) {
    std::vector<double> atom = {};
    for (int j = 0; j < 3; ++j) {
      atom.push_back(input.input_data["molecule"]["geometry"][(i * 3) + j]);
      atom[j] *= this->angstrom_to_bohr;
    }
    centers.push_back(atom);
  }
  // Store center labels
  std::vector<std::string> center_labels;
  std::vector<int> quantum_nuclei;
  for (auto label : input.input_data["molecule"]["symbols"]) {
    center_labels.push_back(label);
    quantum_nuclei.push_back(0);
  }

  if (input.input_data.contains("keywords")) {
    // if (input.input_data["keywords"].contains("molecule_keywords")) {
    // create classical and quantum centers
    if (input.input_data["keywords"].contains("quantum_nuclei")) {
      // if a label is given change all nuclei with matching label to be
      // quantum https://github.com/nlohmann/json/issues/1564
      if (std::all_of(
              input
                  .input_data["keywords"]["molecule_keywords"]["quantum_nuclei"]
                  .begin(),
              input
                  .input_data["keywords"]["molecule_keywords"]["quantum_nuclei"]
                  .end(),
              [](const json &el) { return el.is_string(); })) {
        for (std::string quantum_label :
             input.input_data["keywords"]["molecule_keywords"]
                             ["quantum_nuclei"]) {
          if (std::find(center_labels.begin(), center_labels.end(),
                        quantum_label) != center_labels.end()) {
            // https://stackoverflow.com/questions/42871932/how-to-find-all-positions-of-an-element-using-stdfind
            auto start_it = begin(center_labels);
            bool found_at_least_once = false;
            while (start_it != end(center_labels)) {
              start_it = std::find(start_it, end(center_labels), quantum_label);
              if (start_it != end(center_labels)) {
                auto const pos = std::distance(begin(center_labels), start_it);
                quantum_nuclei[pos] = 1;
                ++start_it;
                found_at_least_once = true;
              }
            }
            if (!found_at_least_once) {
              Selci_cout("The label '" + quantum_label +
                         "' was not found in the atomic labels. Skipping...");
            }
          }
        }
      } else if (std::all_of(input
                                 .input_data["keywords"]["molecule_keywords"]
                                            ["quantum_nuclei"]
                                 .begin(),
                             input
                                 .input_data["keywords"]["molecule_keywords"]
                                            ["quantum_nuclei"]
                                 .end(),
                             [](const json &el) { return el.is_number(); })) {
        size_t idx = 0;
        for (auto is_quantum : input.input_data["keywords"]["molecule_keywords"]
                                               ["quantum_nuclei"]) {
          quantum_nuclei[idx] = is_quantum;
          idx++;
        }
      } else {
        APP_ABORT("'Keywords'->'molecule_keywords'->'quantum_nuclei' are "
                  "not all strings or ints.");
      }

      // } else {
      //   Selci_cout("The input section 'keywords'->'molecule keywords'
      //   did not "
      //              "contain a section about quantum nuclei. All nuclei
      //              will be " "treated classically!");
      // }
    } else {
      Selci_cout(
          "The input section 'keywords' didn't contain a section called "
          "about quantum nuclei. All nuclei are going to be treated "
          "classically. No quantum particles present besides electrons.");
    }
  } else {
    Selci_cout("The input didn't contain a section called 'keywords'. All "
               "nuclei are going to be treated classically. No quantum "
               "particles present besides electrons.");
  }

  // classical nuclei

  // centers, center_labels, quantum_nuclei

  for (auto i = 0; i < centers.size(); i++) {
    if (quantum_nuclei[i] == 0) {
      // classical center
      std::string curr_label = center_labels[i];
      if (classical_particles.count(curr_label) == 0) {
        CLASSICAL_PARTICLE_SET classical_part;
        classical_particles[curr_label] = classical_part;
        classical_particles[curr_label].mass =
            this->atom_symb_to_mass(center_labels[i]);
        classical_particles[curr_label].charge =
            this->atom_symb_to_num(center_labels[i]);
        classical_particles[curr_label].num_parts = 0;
      }
      classical_particles[curr_label].num_parts += 1;
      classical_particles[curr_label].center_idx.push_back(i);
    } else {
      // quantum center
      std::string curr_label = center_labels[i];
      if (quantum_particles.count(curr_label) == 0) {
        QUANTUM_PARTICLE_SET quantum_part;
        quantum_particles[curr_label] = quantum_part;
        quantum_particles[curr_label].spin =
            this->quantum_symb_to_spin(center_labels[i]);
        quantum_particles[curr_label].mass =
            this->quantum_symb_to_mass(center_labels[i]);
        quantum_particles[curr_label].charge =
            this->quantum_symb_to_charge(center_labels[i]);
        quantum_particles[curr_label].num_parts = 0;
      }
      quantum_particles[curr_label].num_parts += 1;
      quantum_particles[curr_label].center_idx.push_back(i);
    }
  }
  // iterate over quantum particles to set alpha/beta particles and mult
  for (auto quantum_part : quantum_particles) {
    quantum_part.second.num_parts_alpha = (quantum_part.second.num_parts / 2) +
                                          (quantum_part.second.num_parts % 2);
    quantum_part.second.num_parts_beta = (quantum_part.second.num_parts / 2);
    if (quantum_part.second.num_parts_alpha +
            quantum_part.second.num_parts_beta !=
        quantum_part.second.num_parts) {
      APP_ABORT(
          "Could not automatically set quantum particle num alpha and beta.");
    }
    quantum_part.second.multiplicity =
        (std::abs(quantum_part.second.num_parts_alpha -
                  quantum_part.second.num_parts_beta) *
         quantum_part.second.spin) +
        1;
    if (quantum_part.second.num_parts == 1){
      quantum_part.second.restricted = false;
    } else {
      quantum_part.second.restricted = this->restricted;
      // TODO remove. Only needed while Restricted open shell is not implemented
      if(quantum_part.second.num_parts_alpha != quantum_part.second.num_parts_beta && quantum_part.second.restricted){
        quantum_part.second.restricted = false;
      }
    }
  }
  // create any other quantum particles
  if (input.input_data.contains("keywords")) {
    if (input.input_data["keywords"].contains("quantum_particles")) {
      for (auto qp : input.input_data["keywords"]["quantum_particles"]) {
        std::string curr_label = qp["name"];
        if (quantum_particles.count(curr_label) == 0) {
          QUANTUM_PARTICLE_SET quantum_part;
          quantum_particles[curr_label] = quantum_part;
          quantum_particles[curr_label].spin = qp["spin"];
          quantum_particles[curr_label].mass = qp["mass"];
          quantum_particles[curr_label].charge = qp["charge"];
          quantum_particles[curr_label].num_parts_alpha =
              qp["num_particles_alpha"];
          quantum_particles[curr_label].num_parts_beta =
              qp["num_particles_beta"];
          // TODO make sure a user isn't specifying num_parts or multiplicity.
          // These will be calculated
          quantum_particles[curr_label].num_parts =
              quantum_particles[curr_label].num_parts_alpha +
              quantum_particles[curr_label].num_parts_beta;
          quantum_particles[curr_label].multiplicity =
              (std::abs(quantum_particles[curr_label].num_parts_alpha -
                        quantum_particles[curr_label].num_parts_beta) *
               quantum_particles[curr_label].spin) +
              1;
          quantum_particles[curr_label].exchange = qp["exchange"];
          quantum_particles[curr_label].electron_exchange =
              qp["electron_exchange"];
              quantum_particles[curr_label].restricted =
              qp["restricted"];
        }
      }

    } else {
      Selci_cout("No additional quantum particles found.");
    }
  }
  // create electrons
  std::string curr_label = "electron";
  if (quantum_particles.count(curr_label) == 0) {

    auto num_parts = -this->charge;
    for (auto part : classical_particles) {
      num_parts += part.second.charge * part.second.num_parts;
    }
    for (auto part : quantum_particles) {
      num_parts += part.second.charge * part.second.num_parts;
    }
    Selci_cout("Creating " + std::to_string(num_parts) + " electrons");

    QUANTUM_PARTICLE_SET quantum_part;
    quantum_particles[curr_label] = quantum_part;
    quantum_particles[curr_label].spin = this->quantum_symb_to_spin(curr_label);
    quantum_particles[curr_label].mass = this->quantum_symb_to_mass(curr_label);
    quantum_particles[curr_label].charge =
        this->quantum_symb_to_charge(curr_label);
    quantum_particles[curr_label].num_parts = num_parts;
    quantum_particles[curr_label].num_parts_alpha =
        ((num_parts) + (this->multiplicity - 1)) / 2;
    quantum_particles[curr_label].num_parts_beta =
        ((num_parts) - (this->multiplicity - 1)) / 2;
    quantum_particles[curr_label].exchange = true;
  } else {
    APP_ABORT("Electrons should not have been created yet.");
  }
}

void PYCI_MOLECULE::setup_molecule(const PYCI_INPUT &input) {
  if (input.input_data.contains("molecule")) {
    set_molecular_charge(input);
    set_molecular_multiplicity(input);
    parse_particles(input);

    // Calculate nuclear repulsion energy
    this->calculate_E_nuc();
  } else {
    APP_ABORT("Cannot set up molecule. Input json missing 'molecule' section.");
  }
}

std::string PYCI_MOLECULE::dump_xyz() const {
  std::string header = "";
  std::string body = "";
  // calculate num atoms
  int num_atom = 0;
  for (auto classical_part : classical_particles) {
    num_atom += classical_part.second.num_parts;
    for (auto i = 0; i < classical_part.second.num_parts; i++) {
      body += "\n";
      body += classical_part.first;
      body += std::to_string(centers[classical_part.second.center_idx[i]][0] *
                             this->bohr_to_angstrom);
      body += "    ";
      body += std::to_string(centers[classical_part.second.center_idx[i]][1] *
                             this->bohr_to_angstrom);
      body += "    ";
      body += std::to_string(centers[classical_part.second.center_idx[i]][2] *
                             this->bohr_to_angstrom);
    }
  }

  header += std::to_string(num_atom);
  header += "\n";
  header += "PYCI Dumped XYZ";
  auto temp_xyz = header + body;
  return temp_xyz;
}

std::vector<libint2::Atom> PYCI_MOLECULE::to_libint_atom() const {
  std::istringstream temp_xyz_stream(this->dump_xyz());
  return libint2::read_dotxyz(temp_xyz_stream);
}

void PYCI_MOLECULE::calculate_E_nuc() {
  this->E_nuc = 0.0;
  for (auto classical_part_1 : classical_particles) {
    for (auto i = 0; i < classical_part_1.second.num_parts; i++) {
      for (auto classical_part_2 : classical_particles) {
        for (auto j = 0; j < classical_part_2.second.num_parts; j++) {
          auto Z_i = classical_part_1.second.charge;
          auto Z_j = classical_part_2.second.charge;
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
}
