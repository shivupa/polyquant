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
      Polyquant_cout(shell);
    }
  }
}

void POLYQUANT_BASIS::set_ao_labels(const POLYQUANT_MOLECULE &molecule) {
  ao_labels.resize(this->basis.size());
  auto basis_idx = 0;
  for (auto &quantum_particle_basis : this->basis) {
    // H1_3fxxz cart O2_4d+2 sph
    for (auto shell : quantum_particle_basis) {
      std::string atom_label = molecule.get_label_of_center(shell.O);
      for (auto contr : shell.contr) {
        if (contr.pure) {
          int n = contr.l + 1;
          std::string n_label = std::to_string(n);
          // {"H1", "3", "f", "xxz"}
          std::string l_label(1, shell.am_symbol(contr.l));
          for (auto list_elem : ao_labels[basis_idx]) {
            if (list_elem[0] == atom_label && list_elem[1] == n_label && list_elem[2] == l_label) {
              n += 1;
              n_label = std::to_string(n);
            }
          }
          for (int m = -contr.l; m <= contr.l; m++) {
            std::string m_label = fmt::format("{:>+d}", m);
            std::vector<std::string> ao_label = {atom_label, n_label, l_label, m_label};
            ao_labels[basis_idx].push_back(ao_label);
          }

        } else {
          int n = contr.l + 1;
          std::string n_label = std::to_string(n);
          // {"H1", "3", "f", "xxz"}
          std::string l_label(1, shell.am_symbol(contr.l));
          for (auto list_elem : ao_labels[basis_idx]) {
            if (list_elem[0] == atom_label && list_elem[1] == n_label && list_elem[2] == l_label) {
              n += 1;
              n_label = std::to_string(n);
            }
          }
          for (int m = 0; m < contr.size(); m++) {
            std::string m_label = gamess_cartesian_ordering_labels[contr.l][m];
            std::vector<std::string> ao_label = {atom_label, n_label, l_label, m_label};
            ao_labels[basis_idx].push_back(ao_label);
          }
        }
      }
    }
    basis_idx++;
  }
}

void POLYQUANT_BASIS::symmetrize_basis(const POLYQUANT_MOLECULE &molecule) {

  msym_error_t ret = MSYM_SUCCESS;
  const msym_equivalence_set_t *mes = NULL;
  int mesl = 0;
  if (MSYM_SUCCESS != (ret = msymGetEquivalenceSets(molecule.ctx, &mesl, &mes))) {
    APP_ABORT("Something went wrong while finding the equivalent sets of atoms.");
  }
  // std::cout << "SYMMETRY TESTING: number of equivalent sets of atoms " << mesl << std::endl;

  std::vector<std::vector<msym_basis_function_t>> mbfs;
  mbfs.resize(this->basis.size());

  symm_op_names.resize(this->basis.size());
  irrep_names.resize(this->basis.size());
  salc_per_irrep.resize(this->basis.size());
  salcs.resize(this->basis.size());

  Polyquant_cout("Symmetrizing basis... Building SALCs");
  auto basis_idx = 0;

  for (auto &quantum_particle_basis : this->basis) {
    auto ctx = molecule.ctx;
    auto ao_idx = 0;
    for (auto shell : quantum_particle_basis) {
      for (auto sym_eq_set_idx = 0; sym_eq_set_idx < mesl; sym_eq_set_idx++) {
        for (auto atom_in_sym_eq_set_idx = 0; atom_in_sym_eq_set_idx < mes[sym_eq_set_idx].length; atom_in_sym_eq_set_idx++) {
          if (shell.O[0] == mes[sym_eq_set_idx].elements[atom_in_sym_eq_set_idx]->v[0] && shell.O[1] == mes[sym_eq_set_idx].elements[atom_in_sym_eq_set_idx]->v[1] &&
              shell.O[2] == mes[sym_eq_set_idx].elements[atom_in_sym_eq_set_idx]->v[2]) {
            // std::cout << "MATCHED SHELL TO ATOM" << std::endl;

            for (auto contr : shell.contr) {
              if (contr.pure) {
                for (int m = -contr.l; m <= contr.l; m++) {
                  msym_basis_function_t temp_bfs;
                  temp_bfs.element = mes[sym_eq_set_idx].elements[atom_in_sym_eq_set_idx];
                  temp_bfs.type = _msym_basis_function::MSYM_BASIS_TYPE_REAL_SPHERICAL_HARMONIC;
                  temp_bfs.f.rsh.n = std::stoi(ao_labels[basis_idx][ao_idx][1]);
                  temp_bfs.f.rsh.l = contr.l;
                  temp_bfs.f.rsh.m = m;
                  mbfs[basis_idx].push_back(temp_bfs);
                  ao_idx++;
                }
              } else {
                for (int m = -contr.l; m <= contr.l; m++) {
                  msym_basis_function_t temp_bfs;
                  temp_bfs.element = mes[sym_eq_set_idx].elements[atom_in_sym_eq_set_idx];
                  temp_bfs.type = _msym_basis_function::MSYM_BASIS_TYPE_CARTESIAN;
                  temp_bfs.f.rsh.n = std::stoi(ao_labels[basis_idx][ao_idx][1]);
                  temp_bfs.f.rsh.l = contr.l;
                  temp_bfs.f.rsh.m = m;
                  mbfs[basis_idx].push_back(temp_bfs);
                  ao_idx++;
                }
              }
            }
          }
        }
      }
    }
    int bfsl = mbfs[basis_idx].size();
    if (MSYM_SUCCESS != (ret = msymSetBasisFunctions(ctx, bfsl, mbfs[basis_idx].data()))) {
      APP_ABORT("Error setting basis functions.");
    }

    msym_point_group_type_t mtype;
    int mn;
    if (MSYM_SUCCESS != (ret = msymGetPointGroupType(ctx, &mtype, &mn))) {
      APP_ABORT("Error getting point group type.");
    }

    if ((MSYM_POINT_GROUP_TYPE_Dnh == mtype || MSYM_POINT_GROUP_TYPE_Cnv == mtype) && 0 == mn) {
      APP_ABORT("Equivalence sets, subgroups and symmetry elements are updated when setting basis functions on linear groups. Need to add code to update them.");
    }

    int msopsl = 0;
    const msym_symmetry_operation_t *msops = NULL;
    if (MSYM_SUCCESS != (ret = msymGetSymmetryOperations(ctx, &msopsl, &msops))) {
      APP_ABORT("Error getting symmetry operations");
    }
    // print symmetry operations
    Polyquant_cout("  Printing symmetry operations");
    for (int i = 0; i < msopsl; i++) {

      std::stringstream symm_op;
      std::stringstream symm_op_printstr;
      symm_op_printstr << "    ";
      const msym_symmetry_operation_t *sop = &msops[i];
      std::string rn = "";
      std::string cn = "";
      switch (sop->orientation) {
      case _msym_symmetry_operation::MSYM_SYMMETRY_OPERATION_ORIENTATION_HORIZONTAL:
        rn = "h";
        break;
      case _msym_symmetry_operation::MSYM_SYMMETRY_OPERATION_ORIENTATION_VERTICAL:
        rn = "v";
        cn = "'";
        break;
      case _msym_symmetry_operation::MSYM_SYMMETRY_OPERATION_ORIENTATION_DIHEDRAL:
        rn = "d";
        cn = "''";
        break;
      default:
        break;
      }
      switch (sop->type) {
      case _msym_symmetry_operation::MSYM_SYMMETRY_OPERATION_TYPE_PROPER_ROTATION:
        symm_op << "C" << sop->order << cn;
        if (sop->order == 2)
          symm_op_printstr << "C" << sop->order << cn;
        else
          symm_op_printstr << "C" << sop->order << cn << "^" << sop->power << " around (" << sop->v[0] << ", " << sop->v[1] << ", " << sop->v[2] << ")";
        break;
      case _msym_symmetry_operation::MSYM_SYMMETRY_OPERATION_TYPE_IMPROPER_ROTATION:
        symm_op << "S" << sop->order << "^" << sop->power;
        symm_op_printstr << "S" << sop->order << "^" << sop->power << " around (" << sop->v[0] << ", " << sop->v[1] << ", " << sop->v[2] << ")";
        break;
      case _msym_symmetry_operation::MSYM_SYMMETRY_OPERATION_TYPE_REFLECTION:
        symm_op << "R" << rn;
        symm_op_printstr << "R" << rn << " with normal vector (" << sop->v[0] << ", " << sop->v[1] << ", " << sop->v[2] << ")";
        break;
      case _msym_symmetry_operation::MSYM_SYMMETRY_OPERATION_TYPE_INVERSION:
        symm_op << "i";
        symm_op_printstr << "i";
        break;
      case _msym_symmetry_operation::MSYM_SYMMETRY_OPERATION_TYPE_IDENTITY:
        symm_op << "E";
        symm_op_printstr << "E";
        break;
      default:
        symm_op << "?";
        symm_op_printstr << "?";
        break;
      }
      symm_op_names[basis_idx].push_back(symm_op.str());
      Polyquant_cout(symm_op_printstr.str());
    }

    // salcs
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> combined_salcs;
    combined_salcs.resize(bfsl, bfsl);
    combined_salcs.setZero();
    // Temp data
    Eigen::Matrix<double, Eigen::Dynamic, 1> pcmem;
    pcmem.resize(bfsl);
    pcmem.setZero();

    std::vector<msym_partner_function_t> pf(bfsl);

    std::vector<int> species(bfsl);
    int msrsl = 0;
    const msym_subrepresentation_space_t *msrs = NULL;
    const msym_character_table_t *mct = NULL;

    if (MSYM_SUCCESS != (ret = msymGetSubrepresentationSpaces(ctx, &msrsl, &msrs))) {
      APP_ABORT("Error getting subrepresentation spaces");
    }
    if (MSYM_SUCCESS != (ret = msymGetSALCs(ctx, bfsl, combined_salcs.data(), species.data(), pf.data()))) {
      // auto error = msymErrorString(ret);
      // error = msymGetErrorDetails();
      APP_ABORT("Error getting salcs");
    }
    auto count = 0;
    // Polyquant_dump_mat(combined_salcs, "COMBINED SALCS");
    //  Dont really need to print symmetry table
    if (MSYM_SUCCESS != (ret = msymGetCharacterTable(ctx, &mct))) {
      APP_ABORT("Error getting character table");
    }
    auto offset = 0;
    for (auto count = 0; count < msrsl; count++) {
      salc_per_irrep[basis_idx].push_back(msrs[count].salcl);
      salcs[basis_idx].push_back(combined_salcs(Eigen::placeholders::all, Eigen::seq(offset, offset + salc_per_irrep[basis_idx][count] - 1)));
      offset += salc_per_irrep[basis_idx][count];
    }
    for (auto i = 0; i < mct->d; i++) {
      std::string temp_irrep_name = mct->s[i].name;
      irrep_names[basis_idx].push_back(temp_irrep_name);
    }

    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> character_table;
    character_table.resize(irrep_names[basis_idx].size(), symm_op_names[basis_idx].size());
    for (auto i = 0; i < irrep_names[basis_idx].size(); i++) {
      for (auto j = 0; j < symm_op_names[basis_idx].size(); j++) {
        character_table(i, j) = static_cast<double *>(mct->table)[i * symm_op_names[basis_idx].size() + j];
      }
    }
    Polyquant_dump_character_table(character_table, molecule.point_group, irrep_names[basis_idx], symm_op_names[basis_idx]);

    std::stringstream irrep_msg;
    irrep_msg << "    ";
    irrep_msg << "SALCs per Irreps\n";
    irrep_msg << "    ";
    irrep_msg << "----------------\n";
    for (auto i = 0; i < irrep_names[basis_idx].size(); i++) {
      irrep_msg << "    ";
      irrep_msg << "    ";
      irrep_msg << "Irrep ";
      irrep_msg << irrep_names[basis_idx][i];
      irrep_msg << " with ";
      irrep_msg << salc_per_irrep[basis_idx][i];
      irrep_msg << " functions.\n";
      Polyquant_dump_mat(salcs[basis_idx][i], irrep_names[basis_idx][i]);
    }
    Polyquant_cout(irrep_msg.str());
    basis_idx++;
  }
}

void POLYQUANT_BASIS::load_basis(const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule) {
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
  this->set_ao_labels(molecule);
  this->symmetrize_basis(molecule);
}
