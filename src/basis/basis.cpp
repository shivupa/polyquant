#include <basis/basis.hpp>

using namespace polyquant;

POLYQUANT_BASIS::POLYQUANT_BASIS(const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->load_basis(input, molecule);
}

void POLYQUANT_BASIS::load_quantum_particle_basis(const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule, const std::string &quantum_part_key, libint2::BasisSet &qp_basis) {
  for (auto const &[classical_part_key, classical_part] : molecule.classical_particles) {
    if (input.input_data["model"]["basis"].contains(quantum_part_key)) {
      load_quantum_particle_atom_basis(input, molecule, quantum_part_key, classical_part_key, classical_part, qp_basis);
    } else {
      APP_ABORT("'model->basis' didn't contain a basis for: " + quantum_part_key);
    }
  }
}
void POLYQUANT_BASIS::load_quantum_particle_atom_basis(const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule, const std::string &quantum_part_key, const std::string &classical_part_key,
                                                       const CLASSICAL_PARTICLE_SET &classical_part, libint2::BasisSet &qp_basis) {
  if (input.input_data["model"]["basis"][quantum_part_key].contains(classical_part_key)) {
    auto center_basis_idx = 0;
    for (auto center_basis : input.input_data["model"]["basis"][quantum_part_key][classical_part_key]) {
      if (center_basis.contains("library")) {
        load_quantum_particle_atom_basis_library(input, molecule, quantum_part_key, classical_part_key, center_basis_idx, qp_basis);
      } else if (center_basis.contains("custom")) {
        load_quantum_particle_atom_basis_custom(input, molecule, quantum_part_key, classical_part_key, center_basis_idx, classical_part, qp_basis);
      } else {
        APP_ABORT("'model->basis->" + quantum_part_key + "->" + classical_part_key + "->type' must be library or custom.");
      }
      center_basis_idx++;
    }
  } else {
    Polyquant_cout("'model->basis->" + quantum_part_key + "' didn't contain a basis for: " + classical_part_key);
  }
}

void POLYQUANT_BASIS::load_quantum_particle_atom_basis_library(const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule, const std::string &quantum_part_key,
                                                               const std::string &classical_part_key, const int &center_basis_idx, libint2::BasisSet &qp_basis) {
  auto center_basis = input.input_data["model"]["basis"][quantum_part_key][classical_part_key][center_basis_idx];
  try {
    // library basis with atom type specified
    if (center_basis["library"].contains("atom")) {
      auto libint_atoms = molecule.to_libint_atom(classical_part_key);
      for (auto &libint_atom : libint_atoms) {
        libint_atom.atomic_number = atom_symb_to_num(center_basis["library"]["atom"]);
      }
      auto temp_atom_basis = libint2::BasisSet(center_basis["library"]["type"], libint_atoms, true);
      std::vector<libint2::Shell> combined_functions;
      combined_functions.insert(combined_functions.end(), qp_basis.begin(), qp_basis.end());
      combined_functions.insert(combined_functions.end(), temp_atom_basis.begin(), temp_atom_basis.end());
      qp_basis = libint2::BasisSet(combined_functions);
      qp_basis.set_pure(pure);
    } else {
      auto libint_atoms = molecule.to_libint_atom(classical_part_key);
      for (auto &libint_atom : libint_atoms) {
        libint_atom.atomic_number = atom_symb_to_num(classical_part_key);
      }
      libint2::BasisSet temp_atom_basis = libint2::BasisSet(center_basis["library"]["type"], libint_atoms, true);
      std::vector<libint2::Shell> combined_functions;
      combined_functions.insert(combined_functions.end(), qp_basis.begin(), qp_basis.end());
      combined_functions.insert(combined_functions.end(), temp_atom_basis.begin(), temp_atom_basis.end());
      qp_basis = libint2::BasisSet(combined_functions);
      qp_basis.set_pure(pure);
    }
  } catch (...) {
    Polyquant_cout("Trying to read basis from EMSL");
    auto libint_atoms = molecule.to_libint_atom(classical_part_key);
    if (center_basis["library"].contains("atom")) {
      for (auto &libint_atom : libint_atoms) {
        libint_atom.atomic_number = atom_symb_to_num(center_basis["library"]["atom"]);
      }
    }
    std::string basis_url = "https://www.basissetexchange.org/api/basis/";
    basis_url += center_basis["library"]["type"];
    basis_url += "/format/gaussian94";
    auto r = cpr::Get(cpr::Url{basis_url}, cpr::VerifySsl{false});
    std::string filename = "EMSL_LOADED_BASIS_";
    filename += quantum_part_key;
    filename += "_";
    filename += classical_part_key;
    filename += ".g94";
    Polyquant_dump_basis_to_file(r.text, filename);
    auto temp_atom_basis = libint2::BasisSet::read_g94_basis_library(filename);
    std::vector<libint2::Shell> combined_functions;
    combined_functions.insert(combined_functions.end(), qp_basis.begin(), qp_basis.end());
    for (auto &libint_atom : libint_atoms) {
      // check all elements
      for (auto s : temp_atom_basis.at(libint_atom.atomic_number)) {
        Polyquant_cout("Adding basis");
        combined_functions.push_back(std::move(s));
        combined_functions.back().move({{libint_atom.x, libint_atom.y, libint_atom.z}});
      }
    }
    qp_basis = libint2::BasisSet(combined_functions);
    qp_basis.set_pure(pure);
  }
}
void POLYQUANT_BASIS::load_quantum_particle_atom_basis_custom(const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule, const std::string &quantum_part_key,
                                                              const std::string &classical_part_key, const int &center_basis_idx, const CLASSICAL_PARTICLE_SET &classical_part,
                                                              libint2::BasisSet &qp_basis) {
  libint2::BasisSet atom_basis = libint2::BasisSet();
  auto center_basis = input.input_data["model"]["basis"][quantum_part_key][classical_part_key][center_basis_idx];
  if (center_basis["custom"].contains("type")) {
    if (center_basis["custom"]["type"] == "even-tempered") {
      // TODO
      //{"type" : "even-tempered","end"
      //: 2.8284271247461903e-3,"start" : 32e-1,"num_funcs" :
      // 7,"angular_mom" : 0}
      APP_ABORT("Even tempered basis not implemented yet.");
    } else if (center_basis["custom"]["type"] == "file") {
      auto atom_basis = libint2::BasisSet::read_g94_basis_library(center_basis["custom"]["filename"]);
      // std::copy(atom_basis.begin(), atom_basis.end(),
      //           std::back_inserter(this->basis));
      // auto const classical_part =
      // molecule.classical_particles[classical_part_key];
      std::vector<libint2::Shell> combined_functions;
      combined_functions.insert(combined_functions.end(), qp_basis.begin(), qp_basis.end());
      for (auto center_idx : classical_part.center_idx) {
        // check all elements
        for (auto Z = 1; Z < 100; Z++) {
          for (auto s : atom_basis.at(Z)) {
            combined_functions.push_back(std::move(s));
            combined_functions.back().move({{molecule.centers[center_idx][0], molecule.centers[center_idx][1], molecule.centers[center_idx][2]}});
          }
        }
      }
      qp_basis = libint2::BasisSet(combined_functions);
      qp_basis.set_pure(this->pure);
    }
  } else {
    APP_ABORT("'model->basis->" + quantum_part_key + "->" + classical_part_key + "->custom' needs a type key.");
  }
}

void POLYQUANT_BASIS::set_pure_from_input(const POLYQUANT_INPUT &input) {
  if (input.input_data.contains("keywords")) {
    if (input.input_data["keywords"].contains("pure")) {
      this->pure = input.input_data["keywords"]["pure"];
    }
  }
}

void POLYQUANT_BASIS::set_libint_shell_norm() {
  libint2::Shell::do_enforce_unit_normalization(true);
  std::stringstream buffer;
  buffer << "(Of developer interest only) Enforcing unit normalization in Libint: " << std::boolalpha << libint2::Shell::do_enforce_unit_normalization() << std::endl;
  Polyquant_cout(buffer.str());
}

void POLYQUANT_BASIS::print_basis() {
  for (auto &quantum_particle_basis : this->basis) {
    // TODO proper shell dumping for output file...
    for (auto shell : quantum_particle_basis) {
      std::cout << shell << std::endl;
    }
  }
}

void POLYQUANT_BASIS::load_basis(const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule) {
  Polyquant_cout("BASIS");
  this->set_pure_from_input(input);
  this->set_libint_shell_norm();
  // parse basis name from data
  if (input.input_data.contains("model")) {
    if (input.input_data["model"].contains("basis")) {
      for (auto const &[quantum_part_key, quantum_part] : molecule.quantum_particles) {
        libint2::BasisSet qp_basis = libint2::BasisSet();
        load_quantum_particle_basis(input, molecule, quantum_part_key, qp_basis);
        this->basis.emplace_back(qp_basis);
        Polyquant_cout("Added basis for " + quantum_part_key);
        size_t nb = qp_basis.nbf();
        Polyquant_cout("Number of basis functions: " + std::to_string(nb));
        this->num_basis.emplace_back(nb);
      }
    } else {
      APP_ABORT("Cannot set up basis. Input json missing 'model->basis' section.");
    }
  } else {
    APP_ABORT("Cannot set up basis. Input json missing 'model' section.");
  }
  this->print_basis();
}
