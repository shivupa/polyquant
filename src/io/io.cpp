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
    const std::string &filename, bool pbc, bool complex, bool ecp,
    bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha,
    int num_part_beta, int num_part_total, int multiplicity, int num_atom,
    int num_species, std::vector<std::vector<std::vector<double>>> E_orb,
    std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff,
    std::vector<int> atomic_species_ids, std::vector<int> atomic_number,
    std::vector<int> atomic_charge, std::vector<int> core_elec,
    std::vector<std::string> atomic_names,
    std::vector<std::vector<double>> atomic_centers,
    std::vector<std::vector<libint2::Shell>> unique_shells) {
  using namespace HighFive;
  // create file
  Polyquant_cout("dumping file");
  File file(filename, File::ReadWrite | File::Create | File::Truncate);
  // write generating code name
  Polyquant_cout("dumping application parameters");
  file.createGroup("application");
  const char title[][10] = {"Polyquant"};
  file.createDataSet<char[10]>("application/code", DataSpace(1)).write(title);
  // TODO add version
  // write PBC
  Polyquant_cout("dumping PBC parameters");
  file.createGroup("PBC");
  const bool PBC[] = {pbc};
  file.createDataSet<bool>("PBC/PBC", DataSpace(1)).write(PBC);

  // write COMPLEX
  Polyquant_cout("dumping general parameters");
  file.createGroup("parameters");
  const bool COMPLEX[] = {complex};
  file.createDataSet<bool>("parameters/IsComplex", DataSpace(1)).write(COMPLEX);
  // write ECP
  const bool ECP[] = {ecp};
  file.createDataSet<bool>("parameters/ECP", DataSpace(1)).write(ECP);
  // write restricted
  const bool SpinRestricted[] = {restricted};
  file.createDataSet<bool>("parameters/SpinRestricted", DataSpace(1))
      .write(SpinRestricted);
  // write num_ao
  const int numAO[] = {num_ao};
  file.createDataSet<int>("parameters/numAO", DataSpace(1)).write(numAO);
  // write num_mo
  const int numMO[] = {num_mo};
  file.createDataSet<int>("parameters/numMO", DataSpace(1)).write(numMO);
  // write bohr_unit
  const bool Unit[] = {bohr_unit};
  file.createDataSet<bool>("parameters/Unit", DataSpace(1)).write(Unit);
  // write num_part_alpha
  const int NbAlpha[] = {num_part_alpha};
  file.createDataSet<int>("parameters/NbAlpha", DataSpace(1)).write(NbAlpha);
  // write num_part_beta
  const int NbBeta[] = {num_part_beta};
  file.createDataSet<int>("parameters/NbBeta", DataSpace(1)).write(NbBeta);
  // write num_part_total
  const int NbTotElec[] = {num_part_total};
  file.createDataSet<int>("parameters/NbTotElec", DataSpace(1))
      .write(NbTotElec);
  // write multiplicity
  const int spin[] = {multiplicity};
  file.createDataSet<int>("parameters/spin", DataSpace(1)).write(spin);

  // write mo_energies
  Polyquant_cout("dumping MOs");
  file.createGroup("Super_Twist");
  H5Easy::dump(file, "Super_Twist/eigenval_0", E_orb[0]);
  H5Easy::dump(file, "Super_Twist/eigenset_0", mo_coeff[0]);
  if (!restricted) {
    H5Easy::dump(file, "Super_Twist/eigenval_1", E_orb[1]);
    H5Easy::dump(file, "Super_Twist/eigenset_1", mo_coeff[1]);
  }

  Polyquant_cout("dumping atom parameters");
  file.createGroup("atoms");
  // write num_atom
  const int number_of_atoms[] = {num_atom};
  file.createDataSet<int>("atoms/number_of_atoms", DataSpace(1))
      .write(number_of_atoms);
  const int number_of_species[] = {num_species};
  file.createDataSet<int>("atoms/number_of_species", DataSpace(1))
      .write(number_of_species);
  H5Easy::dump(file, "atoms/species_ids", atomic_species_ids);
  H5Easy::dump(file, "atoms/positions", atomic_centers);

  for (auto i = 0; i < atomic_number.size(); i++) {
    std::string group = "/atoms/species_" + std::to_string(i);
    file.createGroup(group);
    std::string loc;

    // dump atomic num
    loc = group + "/atomic_number";
    const int atom_number[] = {atomic_number[i]};
    file.createDataSet<int>(loc, DataSpace(1)).write(atom_number);

    // dump atomic charge
    loc = group + "/charge";
    const int atom_charge[] = {atomic_charge[i]};
    file.createDataSet<int>(loc, DataSpace(1)).write(atom_charge);

    // dump core elec
    loc = group + "/core";
    const int atom_core[] = {core_elec[i]};
    file.createDataSet<int>(loc, DataSpace(1)).write(atom_core);

    // dump atomic name
    loc = group + "/name";
    char name[][3] = {*atomic_names[i].c_str()};
    // strcpy(name[0], atomic_names[i].c_str());
    // file.createDataSet<char[3]>(loc, DataSpace(1)).write(name);
    file.createDataSet<char[3]>(loc, DataSpace(1)).write(name);
  }

  Polyquant_cout("dumping basis parameters");
  file.createGroup("basisset");
  const int NbElements[] = {(int)unique_shells.size()};
  file.createDataSet<int>("basisset/NbElements", DataSpace(1))
      .write(NbElements);

  std::vector<std::vector<libint2::Shell>>::size_type atom_idx = 0;
  std::vector<libint2::Shell>::size_type shell_idx;
  for (auto atom_shells : unique_shells) {
    shell_idx = 0;
    std::string group = "/basisset/atomicBasisSet" + std::to_string(atom_idx);
    file.createGroup(group);
    const int NbBasisGroups[] = {(int)atom_shells.size()};
    file.createDataSet<int>(group + "/NbBasisGroups", DataSpace(1))
        .write(NbBasisGroups);
    if (atom_shells[0].contr[0].pure) {
      const char cart_sph[][10] = {"spherical"};
      file.createDataSet<char[10]>(group + "/angular", DataSpace(1))
          .write(cart_sph);

      const char expandYlm[][7] = {"pyscf"};
      file.createDataSet<char[7]>(group + "/expandYlm", DataSpace(1))
          .write(expandYlm);
    } else {
      const char cart_sph[][10] = {"cartesian"};
      file.createDataSet<char[10]>(group + "/angular", DataSpace(1))
          .write(cart_sph);

      const char expandYlm[][7] = {"Gamess"};
      file.createDataSet<char[7]>(group + "/expandYlm", DataSpace(1))
          .write(expandYlm);
    }
    // dump atomic name
    char elementType[][3] = {*atomic_names[atom_idx].c_str()};
    file.createDataSet<char[3]>(group + "/elementType", DataSpace(1))
        .write(elementType);
    file.createDataSet<char[3]>(group + "/name", DataSpace(1))
        .write(elementType);
    char normalized[][3] = {"no"};
    file.createDataSet<char[3]>(group + "/normalized", DataSpace(1))
        .write(normalized);

    const int grid_npts[] = {1001};
    file.createDataSet<int>(group + "/grid_npts", DataSpace(1))
        .write(grid_npts);
    const double grid_rf[] = {100};
    file.createDataSet<double>(group + "/grid_rf", DataSpace(1)).write(grid_rf);
    const double grid_ri[] = {1.0e-6};
    file.createDataSet<double>(group + "/grid_ri", DataSpace(1)).write(grid_ri);
    char grid_type[][4] = {"log"};
    file.createDataSet<char[4]>(group + "/grid_type", DataSpace(1))
        .write(grid_type);
shell_idx = 0;
    for (auto shell : atom_shells) {
      
      std::string basis_group =
          group + "/basisGroup" + std::to_string(shell_idx);
      Polyquant_cout(basis_group);
      file.createGroup(basis_group);

      char btype[][9] = {"Gaussian"};
      file.createDataSet<char[9]>(basis_group + "/type", DataSpace(1)).write(btype);

      

      const int NbRadFunc[] = {(int)shell.alpha.size()};
      file.createDataSet<int>(basis_group + "/NbRadFunc", DataSpace(1))
          .write(NbRadFunc);

      const int n[] = {(int)atom_idx};
      file.createDataSet<int>(basis_group + "/n", DataSpace(1)).write(n);
      const int l[] = {shell.contr[0].l};
      file.createDataSet<int>(basis_group + "/l", DataSpace(1)).write(l);

      std::string basis_id = atomic_names[atom_idx] +std::to_string(atom_idx)  +std::to_string(shell.contr[0].l);
      char rid[][3] = {*basis_id.c_str()};
      file.createDataSet<char[3]>(basis_group + "/rid", DataSpace(1)).write(rid);
      std::vector<double> origin = {shell.O[0], shell.O[1], shell.O[2]};
      H5Easy::dump(file, basis_group + "/Shell_coord", origin);

      file.createGroup(basis_group + "/radfunctions");
      for (auto i = 0ul; i < shell.alpha.size(); ++i) {
        file.createGroup(basis_group + "/radfunctions/DataRad" +
                         std::to_string(i));

        const double exponent[] = {shell.alpha[i]};
        file.createDataSet<double>(basis_group + "/radfunctions/DataRad" +
                                       std::to_string(i) + "/exponent",
                                   DataSpace(1))
            .write(exponent);
        std::cout << shell.contr.size() << " SHIV " << shell.contr[0].coeff.at(i) << std::endl;
        const double contraction[] = {shell.contr[0].coeff.at(i)};
        file.createDataSet<double>(basis_group + "/radfunctions/DataRad" +
                                       std::to_string(i) + "/contraction",
                                   DataSpace(1))
            .write(contraction);
      }
        shell_idx++;
      }

      atom_idx++;
    }

    // create a dataset ready to contains strings of the size of the vector

    // H5Easy::File hdf5_outfile(filename, H5Easy::File::Overwrite);
    // std::vector<std::string> title = {"Polyquant"};
    // std::string title = "Polyquant";
    // H5Easy::dump(hdf5_outfile, "application/code", title.c_str());
    // H5Easy::dump(hdf5_outfile, "application/code", title);
    // int my_rank;
    // MPI_Comm_rank(PETSC_COMM_WORLD, &my_rank);
    // if (my_rank == 0) {
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
}
