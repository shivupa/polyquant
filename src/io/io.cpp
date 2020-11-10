#include "io/io.hpp"

using namespace polyquant;

#if !defined(DOXYGEN_SHOULD_SKIP_THIS)
namespace polyquant {
// PetscErrorCode APP_ABORT(const std::string &reason) {
//   std::string ERROR_MESSAGE =
//       "\n\nTHIS IS A POLYQUANT++ ERROR NOT A PETSC/SLEPC ERROR. PLEASE REPORT
//       TO " "POLYQUANT++ MAINTAINERS.\n      ABORT REASON: %s\n\n\n";
//   SETERRQ1(PETSC_COMM_WORLD, PETSC_ERR_ARG_WRONG, ERROR_MESSAGE.c_str(),
//            reason.c_str());
//   return 1;
// }
void APP_ABORT(const std::string &reason) {
  std::vector<std::string> ERROR_MESSAGE = {
      "THIS IS A POLYQUANT++ ERROR. PLEASE REPORT TO ",
      "POLYQUANT++ MAINTAINERS.", "ABORT REASON:"};
  ERROR_MESSAGE.push_back(reason);
  for (auto line : ERROR_MESSAGE) {
    Polyquant_cout(line);
  }
  exit(1);
}

void Polyquant_dump_json(const json &json_obj) {
  // int my_rank;
  // MPI_Comm_rank(PETSC_COMM_WORLD, &my_rank);
  // if (my_rank == 0) {
  std::cout << json_obj.dump(4) << std::endl;
  //}
}

void Polyquant_dump_hdf5_for_QMCPACK(
    const std::string &filename, bool pbc, bool complex_vals, bool ecp,
    bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha,
    int num_part_beta, int num_part_total, int multiplicity, int num_atom,
    int num_species, std::vector<std::vector<double>> E_orb,
    std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff,
    std::vector<int> atomic_species_ids, std::vector<int> atomic_number,
    std::vector<int> atomic_charge, std::vector<int> core_elec,
    std::vector<std::string> atomic_names,
    std::vector<std::vector<double>> atomic_centers,
    std::vector<std::vector<libint2::Shell>> unique_shells) {
  using namespace hdf5;
  auto simple_space = hdf5::dataspace::Simple({1});
  auto bool_type = datatype::create<bool>();
  auto int_type = datatype::create<int>();
  auto double_type = datatype::create<double>();
  auto vec_int_type = datatype::create<std::vector<int>>();
  // create file
  Polyquant_cout("dumping file");
  file::File f = file::create(filename, file::AccessFlags::TRUNCATE);
  node::Group root_group = f.root();
  // write generating code name
  Polyquant_cout("dumping application parameters");
  auto application_group = root_group.create_group("application");
  {
    std::vector<std::string> title = {"Polyquant"};
    auto str_type = datatype::String::fixed(9);
    str_type.padding(datatype::StringPad::NULLPAD);
    str_type.encoding(datatype::CharacterEncoding::ASCII);
    auto dtpl = hdf5::property::DatasetTransferList();
    auto application_title_dataset =
        application_group.create_dataset("code", str_type, simple_space);
    application_title_dataset.write(title, str_type, simple_space, simple_space,
                                    dtpl);
    //// TODO add version
  }
  // write PBC
  Polyquant_cout("dumping PBC parameters");
  auto PBC_group = root_group.create_group("PBC");
  {
    //       auto bool_type = datatype::create<datatype::EBool>();
    //  auto dtpl = hdf5::property::DatasetTransferList();
    auto PBC_dataset = PBC_group.create_dataset("PBC", bool_type, simple_space);
    //            PBC_dataset.write(pbc,bool_type,simple_space,simple_space,dtpl);
    PBC_dataset.write(pbc, bool_type, simple_space);
  }
  // write General parameters
  Polyquant_cout("dumping general parameters");
  auto parameters_group = root_group.create_group("parameters");
  {
    // write COMPLEX
    auto IsComplex_dataset =
        parameters_group.create_dataset("IsComplex", bool_type, simple_space);
    IsComplex_dataset.write(complex_vals, bool_type, simple_space);
    // write ECP
    auto ECP_dataset =
        parameters_group.create_dataset("ECP", bool_type, simple_space);
    ECP_dataset.write(ecp, bool_type, simple_space);
    // write restricted
    auto SpinRestricted_dataset = parameters_group.create_dataset(
        "SpinRestricted", bool_type, simple_space);
    SpinRestricted_dataset.write(restricted, bool_type, simple_space);
    // write num_ao
    auto numAO_dataset =
        parameters_group.create_dataset("numAO", int_type, simple_space);
    numAO_dataset.write(num_ao, int_type, simple_space);
    // write num_mo
    auto numMO_dataset =
        parameters_group.create_dataset("numMO", int_type, simple_space);
    numMO_dataset.write(num_mo, int_type, simple_space);
    // write bohr_unit
    auto bohr_unit_dataset =
        parameters_group.create_dataset("Unit", bool_type, simple_space);
    bohr_unit_dataset.write(bohr_unit, bool_type, simple_space);
    // write num_part_alpha
    auto NbAlpha_dataset =
        parameters_group.create_dataset("NbAlpha", int_type, simple_space);
    NbAlpha_dataset.write(num_part_alpha, int_type, simple_space);
    // write num_part_beta
    auto NbBeta_dataset =
        parameters_group.create_dataset("NbBeta", int_type, simple_space);
    NbBeta_dataset.write(num_part_beta, int_type, simple_space);
    // write num_part_total
    auto NbTotElec_dataset =
        parameters_group.create_dataset("NbTotElec", int_type, simple_space);
    NbTotElec_dataset.write(num_part_total, int_type, simple_space);
    // write multiplicity
    auto Spin_dataset =
        parameters_group.create_dataset("spin", int_type, simple_space);
    Spin_dataset.write(multiplicity, int_type, simple_space);
  }
  // write MO parameters
  Polyquant_cout("dumping MOs");
  auto super_twist_group = root_group.create_group("Super_Twist");
  {
    // write alpha orbital energies
    auto E_orb_alpha_dataset = super_twist_group.create_dataset(
        "eigenval_0", datatype::create<std::vector<double>>(),
        hdf5::dataspace::Simple({1, E_orb[0].size()}));
    E_orb_alpha_dataset.write(E_orb[0]);
    // write alpha orbital coeffs
    std::vector<double> flattened_mo_alpha_coeff;
    for (auto i = 0ul; i < num_ao; i++) {
      for (auto j = 0ul; j < num_mo; j++) {
        flattened_mo_alpha_coeff.push_back(mo_coeff[0](i, j));
      }
    }
    auto mo_alpha_coeff_dataset = super_twist_group.create_dataset(
        "eigenset_0", datatype::create<std::vector<double>>(),
        hdf5::dataspace::Simple({num_ao, num_mo}));
    mo_alpha_coeff_dataset.write(flattened_mo_alpha_coeff);

    if (!restricted && num_part_total > 1) {
      // write beta orbital energies
      auto E_orb_beta_dataset = super_twist_group.create_dataset(
          "eigenval_1", datatype::create<std::vector<double>>(),
          hdf5::dataspace::Simple({1, E_orb[1].size()}));
      E_orb_beta_dataset.write(E_orb[1]);
      // write beta orbital coeffs
      std::vector<double> flattened_mo_beta_coeff;
      for (auto i = 0ul; i < num_ao; i++) {
        for (auto j = 0ul; j < num_mo; j++) {
          flattened_mo_beta_coeff.push_back(mo_coeff[1](i, j));
        }
      }
      auto mo_beta_coeff_dataset = super_twist_group.create_dataset(
          "eigenset_1", datatype::create<std::vector<double>>(),
          hdf5::dataspace::Simple({num_ao, num_mo}));
      mo_alpha_coeff_dataset.write(flattened_mo_beta_coeff);
    }
  }
  // write MO parameters
  Polyquant_cout("dumping atom parameters");
  auto atoms_group = root_group.create_group("atoms");
  {
    // write num_atom
    auto num_atom_dataset =
        atoms_group.create_dataset("number_of_atoms", int_type, simple_space);
    num_atom_dataset.write(num_atom, int_type, simple_space);
    // write num_species
    auto num_species_dataset =
        atoms_group.create_dataset("number_of_species", int_type, simple_space);
    num_species_dataset.write(num_species, int_type, simple_space);
    // write species ids
    auto atomic_species_ids_dataset = atoms_group.create_dataset(
        "species_ids", vec_int_type, dataspace::create(atomic_species_ids));
    atomic_species_ids_dataset.write(atomic_species_ids);
    // write atomic positions
    std::vector<double> flattened_atomic_positions;
    for (auto atomic_position : atomic_centers) {
      flattened_atomic_positions.insert(flattened_atomic_positions.end(),
                                        atomic_position.begin(),
                                        atomic_position.end());
    }
    auto atomic_positions_dataset = atoms_group.create_dataset(
        "positions", datatype::create<std::vector<double>>(),
        hdf5::dataspace::Simple(
            {atomic_centers.size(), atomic_centers[0].size()}));
    atomic_positions_dataset.write(flattened_atomic_positions);

    for (auto i = 0ul; i < atomic_number.size(); i++) {
      auto species_group =
          atoms_group.create_group("species_" + std::to_string(i));
      // dump atomic num
      auto atomic_number_dataset =
          species_group.create_dataset("atomic_number", int_type, simple_space);
      atomic_number_dataset.write(atomic_number[i], int_type, simple_space);
      // dump atomic charge
      auto atomic_charge_dataset =
          species_group.create_dataset("charge", int_type, simple_space);
      atomic_charge_dataset.write(atomic_charge[i], int_type, simple_space);
      // dump core elec
      auto atomic_core_elec_dataset =
          species_group.create_dataset("core", int_type, simple_space);
      atomic_core_elec_dataset.write(core_elec[i], int_type, simple_space);
      // dump atomic name
      auto str_type = datatype::String::fixed(atomic_names[i].size());
      str_type.padding(datatype::StringPad::NULLPAD);
      str_type.encoding(datatype::CharacterEncoding::ASCII);
      auto dtpl = hdf5::property::DatasetTransferList();
      auto atomic_name_dataset =
          species_group.create_dataset("name", str_type, simple_space);
      atomic_name_dataset.write(atomic_names[i], str_type, simple_space,
                                simple_space, dtpl);
    }
  }
  Polyquant_cout("dumping basis parameters");
  auto basis_group = root_group.create_group("basisset");
  {
    // dump number of basis types
    auto NbElements_dataset =
        basis_group.create_dataset("NbElements", int_type, simple_space);
    NbElements_dataset.write(unique_shells.size(), int_type, simple_space);
    // dump basis name
    std::string basis_name = "LCAOBSet";
    auto str_type = datatype::String::fixed(basis_name.size());
    str_type.padding(datatype::StringPad::NULLPAD);
    str_type.encoding(datatype::CharacterEncoding::ASCII);
    auto dtpl = hdf5::property::DatasetTransferList();
    auto basis_name_dataset =
        basis_group.create_dataset("name", str_type, simple_space);
    basis_name_dataset.write(basis_name, str_type, simple_space, simple_space,
                             dtpl);
    // loop over shells
    auto atom_idx = 0ul;
    auto shell_idx = 0ul;
    for (auto atom_shells : unique_shells) {
      shell_idx = 0ul;
      auto atom_basis_group =
          basis_group.create_group("atomicBasisSet" + std::to_string(atom_idx));
      // dump number of basis types
      auto NbBasisGroups_dataset = atom_basis_group.create_dataset(
          "NbBasisGroups", int_type, simple_space);
      NbBasisGroups_dataset.write(atom_shells.size(), int_type, simple_space);

      if (atom_shells[0].contr[0].pure) {
        // dump cartesian or spherical
        std::string cart_sph = "spherical";
        auto str_type = datatype::String::fixed(cart_sph.size());
        str_type.padding(datatype::StringPad::NULLPAD);
        str_type.encoding(datatype::CharacterEncoding::ASCII);
        auto dtpl = hdf5::property::DatasetTransferList();
        auto cart_sph_dataset =
            atom_basis_group.create_dataset("angular", str_type, simple_space);
        cart_sph_dataset.write(cart_sph, str_type, simple_space, simple_space,
                               dtpl);
        // dump expansion type
        std::string expandYlm = "natural";
        str_type = datatype::String::fixed(expandYlm.size());
        str_type.padding(datatype::StringPad::NULLPAD);
        str_type.encoding(datatype::CharacterEncoding::ASCII);
        dtpl = hdf5::property::DatasetTransferList();
        auto expandYlm_dataset = atom_basis_group.create_dataset(
            "expandYlm", str_type, simple_space);
        expandYlm_dataset.write(expandYlm, str_type, simple_space, simple_space,
                                dtpl);
      } else {
        // dump cartesian or spherical
        std::string cart_sph = "cartesian";
        auto str_type = datatype::String::fixed(cart_sph.size());
        str_type.padding(datatype::StringPad::NULLPAD);
        str_type.encoding(datatype::CharacterEncoding::ASCII);
        auto dtpl = hdf5::property::DatasetTransferList();
        auto cart_sph_dataset =
            atom_basis_group.create_dataset("angular", str_type, simple_space);
        cart_sph_dataset.write(cart_sph, str_type, simple_space, simple_space,
                               dtpl);
        // dump expansion type
        std::string expandYlm = "Gamess";
        str_type = datatype::String::fixed(expandYlm.size());
        str_type.padding(datatype::StringPad::NULLPAD);
        str_type.encoding(datatype::CharacterEncoding::ASCII);
        dtpl = hdf5::property::DatasetTransferList();
        auto expandYlm_dataset = atom_basis_group.create_dataset(
            "expandYlm", str_type, simple_space);
        expandYlm_dataset.write(expandYlm, str_type, simple_space, simple_space,
                                dtpl);
      }
      // dump atom type and name
      auto str_type = datatype::String::fixed(atomic_names[atom_idx].size());
      str_type.padding(datatype::StringPad::NULLPAD);
      str_type.encoding(datatype::CharacterEncoding::ASCII);
      auto dtpl = hdf5::property::DatasetTransferList();
      auto atom_basis_elementType_dataset = atom_basis_group.create_dataset(
          "elementType", str_type, simple_space);
      atom_basis_elementType_dataset.write(atomic_names[atom_idx], str_type,
                                           simple_space, simple_space, dtpl);
      auto atom_basis_name_dataset =
          atom_basis_group.create_dataset("name", str_type, simple_space);
      atom_basis_name_dataset.write(atomic_names[atom_idx], str_type,
                                    simple_space, simple_space, dtpl);
      // dump normalization
      std::string normalized = "no";
      str_type = datatype::String::fixed(normalized.size());
      str_type.padding(datatype::StringPad::NULLPAD);
      str_type.encoding(datatype::CharacterEncoding::ASCII);
      dtpl = hdf5::property::DatasetTransferList();
      auto atom_basis_normalization_dataset =
          atom_basis_group.create_dataset("normalized", str_type, simple_space);
      atom_basis_normalization_dataset.write(normalized, str_type, simple_space,
                                             simple_space, dtpl);
      // dump grid data
      int grid_npts = 1001;
      auto grid_npts_dataset =
          atom_basis_group.create_dataset("grid_npts", int_type, simple_space);
      grid_npts_dataset.write(grid_npts, int_type, simple_space);
      int grid_rf = 100;
      auto grid_rf_dataset =
          atom_basis_group.create_dataset("grid_rf", int_type, simple_space);
      grid_rf_dataset.write(grid_rf, int_type, simple_space);
      double grid_ri = 1.0e-6;
      auto grid_ri_dataset =
          atom_basis_group.create_dataset("grid_ri", double_type, simple_space);
      grid_rf_dataset.write(grid_ri, double_type, simple_space);

      std::string grid_type = "log";
      str_type = datatype::String::fixed(grid_type.size());
      str_type.padding(datatype::StringPad::NULLPAD);
      str_type.encoding(datatype::CharacterEncoding::ASCII);
      dtpl = hdf5::property::DatasetTransferList();
      auto grid_type_dataset =
          atom_basis_group.create_dataset("grid_type", str_type, simple_space);
      grid_type_dataset.write(grid_type, str_type, simple_space, simple_space,
                              dtpl);
      shell_idx = 0ul;
      for (auto shell : atom_shells) {
        auto shell_group = atom_basis_group.create_group(
            "basisGroup" + std::to_string(shell_idx));
        // dump number of radial functions
        auto NbRadFunc_dataset =
            shell_group.create_dataset("NbRadFunc", int_type, simple_space);
        NbRadFunc_dataset.write(shell.alpha.size(), int_type, simple_space);
        // write n and l
        auto n_dataset =
            shell_group.create_dataset("n", int_type, simple_space);
        n_dataset.write(atom_idx, int_type, simple_space);
        auto l_dataset =
            shell_group.create_dataset("l", int_type, simple_space);
        l_dataset.write(shell.contr[0].l, int_type, simple_space);
        // dump basis type
        std::string basis_type = "Gaussian";
        str_type = datatype::String::fixed(basis_type.size());
        str_type.padding(datatype::StringPad::NULLPAD);
        str_type.encoding(datatype::CharacterEncoding::ASCII);
        dtpl = hdf5::property::DatasetTransferList();
        auto basis_type_dataset =
            shell_group.create_dataset("type", str_type, simple_space);
        basis_type_dataset.write(basis_type, str_type, simple_space,
                                 simple_space, dtpl);
        // dump basis function id
        std::string basis_id = atomic_names[atom_idx] +
                               std::to_string(shell_idx) +
                               std::to_string(shell.contr[0].l);
        str_type = datatype::String::fixed(basis_id.size());
        str_type.padding(datatype::StringPad::NULLPAD);
        str_type.encoding(datatype::CharacterEncoding::ASCII);
        dtpl = hdf5::property::DatasetTransferList();
        auto basis_id_dataset =
            shell_group.create_dataset("rid", str_type, simple_space);
        basis_id_dataset.write(basis_id, str_type, simple_space, simple_space,
                               dtpl);
        // dump basis function location
        std::vector<double> origin = {shell.O[0], shell.O[1], shell.O[2]};
        auto basis_position_dataset = shell_group.create_dataset(
            "Shell_coord", datatype::create<std::vector<double>>(),
            dataspace::create(origin));
        basis_position_dataset.write(origin);
        auto rad_func_group = shell_group.create_group("radfunctions");
        for (auto i = 0ul; i < shell.alpha.size(); ++i) {
          auto curr_func_group =
              rad_func_group.create_group("DataRad" + std::to_string(i));
          // dump exponent and contraction coefficient
          double exponent = shell.alpha[i];
          auto exponent_dataset = curr_func_group.create_dataset(
              "exponent", double_type, simple_space);
          exponent_dataset.write(exponent, double_type, simple_space);
          double contraction = shell.contr[0].coeff.at(i);
          // REMOVE NORMALIZATION FACTOR FROM LIBINT
          // SEE SHELL.H
          // https://github.com/evaleev/libint/blob/3bf3a07b58650fe2ed4cd3dc6517d741562e1249/include/libint2/shell.h#L263
          const auto sqrt_Pi_cubed = double{5.56832799683170784528481798212};
          const auto two_alpha = 2 * exponent;
          const auto two_alpha_to_am32 =
              std::pow(two_alpha, shell.contr[0].l + 1) * std::sqrt(two_alpha);
          const auto normalization_factor =
              std::sqrt(std::pow(2, shell.contr[0].l) * two_alpha_to_am32 /
                        (sqrt_Pi_cubed *
                         libint2::math::df_Kminus1[2 * shell.contr[0].l]));
          contraction /= normalization_factor;
          // double contraction = shell.contr.coeff.at(i);
          auto contraction_dataset = curr_func_group.create_dataset(
              "contraction", double_type, simple_space);
          contraction_dataset.write(contraction, double_type, simple_space);
        }
        shell_idx++;
      }
      atom_idx++;
    }
  }
}

std::map<std::string, int> _atm_symb_to_num = {
    {"H", 1},   {"He", 2},  {"Li", 3},  {"Be", 4},  {"B", 5},
    {"C", 6},   {"N", 7},   {"O", 8},   {"F", 9},   {"Ne", 10},
    {"Na", 11}, {"Mg", 12}, {"Al", 13}, {"Si", 14}, {"P", 15},
    {"S", 16},  {"Cl", 17}, {"Ar", 18}, {"K", 19},
};

std::map<std::string, int> _atm_symb_to_mass = {
    {"H", 1.00782503223},  {"He", 4.00260325413},  {"Li", 7.0160034366},
    {"Be", 9.012183065},   {"B", 11.00930536},     {"C", 12.0},
    {"N", 14.00307400443}, {"O", 15.99491461957},  {"F", 18.99840316273},
    {"Ne", 19.9924401762}, {"Na", 22.989769282},   {"Mg", 23.985041697},
    {"Al", 26.98153853},   {"Si", 27.97692653465}, {"P", 30.97376199842},
    {"S", 31.9720711744},  {"Cl", 34.968852682},   {"Ar", 39.9623831237},
    {"K", 38.9637064864},
};

int atom_symb_to_num(std::string key) {
  if (_atm_symb_to_num.count(key)) {
    return _atm_symb_to_num[key];
  } else {
    return 0;
  }
}

double atom_symb_to_mass(std::string key) {
  if (_atm_symb_to_mass.count(key)) {
    return _atm_symb_to_mass[key];
  } else {
    return 0.0;
  }
}

double quantum_symb_to_spin(std::string key) {
  // if (_atm_symb_to_mass.count(key)) {
  //   return _atm_symb_to_mass[key];
  // } else {
  (void)(key); // <- mute the unused parameter error. Eventually we might want
               // to assign this variable based on a key, but for now
               // everything gets 0.5
  return 0.50;
  // }
}

double quantum_symb_to_mass(std::string key) {
  if (_atm_symb_to_mass.count(key)) {
    return _atm_symb_to_mass[key];
  } else if (key == "electron") {
    return 1.0;
  } else {
    return 0.0;
  }
}

int quantum_symb_to_charge(std::string key) {
  if (_atm_symb_to_num.count(key)) {
    return _atm_symb_to_num[key];
  } else if (key == "electron") {
    return -1.0;
  } else {
    return 0;
  }
}

} // namespace polyquant
#endif // DOXYGEN_SHOULD_SKIP_THIS

POLYQUANT_INPUT::POLYQUANT_INPUT(const std::string &filename) {
  this->parse_input(filename);
}

void POLYQUANT_INPUT::parse_input(const std::string &filename) {
  std::ifstream inputfile(filename);
  this->input_data = json::parse(inputfile);

  Polyquant_cout("Reading Input File: " + filename);

  Polyquant_cout("Input file: ");
  Polyquant_dump_json(this->input_data);
  Polyquant_cout("End input file");
}
/*
std::ifstream inputfile(filename);
std::string line;
std::string value;
std::string key;
while(std::getline(inputfile, line)){
  std::istringstream linebuffer(line);
  key = "";
  value = "";
  linebuffer >> key >> value;
  std::transform(key.begin(), key.end(), key.begin(), ::tolower);
  std::transform(value.begin(), value.end(), value.begin(), ::tolower);

  if (key[0] == '#'){
    std::cout << "FOUND COMMENT" << std::endl;
    std::cout << line << std::endl;
  } else if (key[0] == '!') {
    std::cout << "FOUND INPUT BLOCK" << std::endl;
    std::cout << line << std::endl;
    std::getline(inputfile, line);
    std::istringstream linebuffer(line);
    key = "";
    value = "";
    linebuffer >> key >> value;
    std::transform(key.begin(), key.end(), key.begin(), ::tolower);
    std::transform(value.begin(), value.end(), value.begin(), ::tolower);
    while (key[0] != '!' && value != "end"){
      std::getline(inputfile, line);
      std::istringstream linebuffer(line);
      key = "";
      value = "";
      linebuffer >> key >> value;
      std::transform(key.begin(), key.end(), key.begin(), ::tolower);
      std::transform(value.begin(), value.end(), value.begin(), ::tolower);

      std::cout << line << std::endl;
    }
    std::cout << "END INPUT BLOCK" << std::endl;

  } else{
    APP_ABORT("Error Parsing input file. Are there commands outside of an
input block?");
  }
}
*/
