#include <molecule/molecule.hpp>

using namespace selci;

PYCI_MOLECULE::PYCI_MOLECULE(const PYCI_INPUT &input) { setup_molecule(input); }

void PYCI_MOLECULE::set_molecular_charge(const PYCI_INPUT &input) {
  if (input.input_data["molecule"].contains("molecular_charge")) {
    this->charge = input.input_data["molecule"]["molecular_charge"];
  } else {
    App_Abort("Can't set up molecule. The molecule section of the input is "
              "missing 'molecular_charge'.");
  }
}

void PYCI_MOLECULE::set_molecular_multiplicity(const PYCI_INPUT &input) {
  if (input.input_data["molecule"].contains("molecular_multiplicity")) {
    this->multiplicity = input.input_data["molecule"]["molecular_multiplicity"];
  } else {
    App_Abort("Can't set up molecule. The molecule section of the input is "
              "missing 'molecular_multiplicity'.");
  }
}

void PYCI_MOLECULE::parse_particles(const PYCI_INPUT &input) {
  // parse centers
  std::vector<std::vector<double>> centers;
  // Store center coordinates
  // todo check for geom and symbols
  for (int i = 0; i < this->num_atom; ++i) {
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
            if (std::all_of(input.input_data["keywords"]["molecule_keywords"]["quantum_nuclei"].begin(), input.input_data["keywords"]["molecule_keywords"]["quantum_nuclei"].end(), [](const json& el){
        return el.is_string(); }){
        for (auto quantum_label :
             input.input_data["keywords"]["molecule_keywords"]
                             ["quantum_nuclei"]) {
          if (center_labels.count(quantum_label)) {
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
        } } else 
            if (std::all_of(input.input_data["keywords"]["molecule_keywords"]["quantum_nuclei"].begin(), input.input_data["keywords"]["molecule_keywords"]["quantum_nuclei"].end(), [](const json& el){
        return el.is_number(); }){
        size_t idx = 0;
        for (auto is_quantum : input.input_data["keywords"]["molecule_keywords"]
                                               ["quantum_nuclei"]) {
          quantum_nuclei[idx] = is_quantum;
          idx++;
        }
              }
                         else {
        App_Abort("'Keywords'->'molecule_keywords'->'quantum_nuclei' are "
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
          quantum_particles[curr_label].num_parts = qp["num_particles"];
          quantum_particles[curr_label].exchange = qp["exchange"];
          quantum_particles[curr_label].electron_exchange =
              qp["electron_exchange"];
        }
      }

    } else {
      Selci_cout("No additional quantum particles found.");
    }
  }
  // create electrons
  std::string curr_label = "electron";
  if (quantum_particles.count(curr_label) == 0) {
    QUANTUM_PARTICLE_SET quantum_part;
    quantum_particles[curr_label] = quantum_part;
    quantum_particles[curr_label].spin = 0.5;
    quantum_particles[curr_label].mass = 1.0;
    quantum_particles[curr_label].charge = -1;

    auto num_parts = this->charge;
    for (auto part : classical_particles) {
      num_parts += part.charge * part.num_parts;
    }
    for (auto part : quantum_particles) {
      num_parts += part.charge * part.num_parts;
    }

    Selci_cout("Creating " + str(num_parts) + " electrons");
    quantum_particles[curr_label].num_parts = num_parts;
    quantum_particles[curr_label].exchange = true;
  }
}

void PYCI_MOLECULE::setup_molecule(const PYCI_INPUT &input) {
    if (input.input_data.contains ("molecule") {
    set_molecular_charge(input);
    set_molecular_multiplicity(input);
    parse_particles(input);

    // Calculate nuclear repulsion energy
    this->libint_atom = this->to_libint_atom();
    this->calculate_E_nuc();
    } else {
    App_Abort("Cannot set up molecule. Input json missing 'molecule' section.");
    }
  
  // Calculate total number of electrons
  this->num_elec =
      std::accumulate(this->atom_num.begin(), this->atom_num.end(), 0) -
      this->charge;
  // Calculate number of alpha/beta electrons
  this->num_elec_alpha = ((this->num_elec) + (this->multiplicity - 1)) / 2;
  this->num_elec_beta = ((this->num_elec) - (this->multiplicity - 1)) / 2;
}

std::string PYCI_MOLECULE::dump_xyz() const {
  std::string temp_xyz = "";
  temp_xyz += std::to_string(this->num_atom);
  temp_xyz += "\n";
  temp_xyz += "PYCI Dumped XYZ";
  for (auto i = 0; i < this->num_atom; i++) {

    temp_xyz += "\n";
    temp_xyz += this->atom_symb[i];
    temp_xyz += "\t";
    temp_xyz += std::to_string(this->atom_coord[i][0] * this->bohr_to_angstrom);
    temp_xyz += "\t";
    temp_xyz += std::to_string(this->atom_coord[i][1] * this->bohr_to_angstrom);
    temp_xyz += "\t";
    temp_xyz += std::to_string(this->atom_coord[i][2] * this->bohr_to_angstrom);
  }
  return temp_xyz;
}

std::vector<libint2::Atom> PYCI_MOLECULE::to_libint_atom() const {
  std::istringstream temp_xyz_stream(this->dump_xyz());
  return libint2::read_dotxyz(temp_xyz_stream);
}

void PYCI_MOLECULE::calculate_E_nuc() {
  this->E_nuc = 0.0;
  for (int i = 0; i < this->num_atom; ++i) {
    for (int j = i + 1; j < this->num_atom; ++j) {
      auto Z_i = atom_num[i];
      auto Z_j = atom_num[j];
      auto dx = (this->atom_coord[j][0] - this->atom_coord[i][0]);
      auto dy = (this->atom_coord[j][1] - this->atom_coord[i][1]);
      auto dz = (this->atom_coord[j][2] - this->atom_coord[i][2]);
      auto r_sq = std::sqrt((dx * dx) + (dy * dy) + (dz * dz));
      this->E_nuc += ((Z_i * Z_j) / r_sq);
    }
  }
}
