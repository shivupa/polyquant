#include "io/io.hpp"

using namespace polyquant;

#if !defined(DOXYGEN_SHOULD_SKIP_THIS)
namespace polyquant {
// PetscErrorCode APP_ABORT(const std::string &reason) {
//   std::string ERROR_MESSAGE =
//       "\n\nTHIS IS A POLYQUANT++ ERROR NOT A PETSC/SLEPC ERROR. PLEASE REPORT TO "
//       "POLYQUANT++ MAINTAINERS.\n      ABORT REASON: %s\n\n\n";
//   SETERRQ1(PETSC_COMM_WORLD, PETSC_ERR_ARG_WRONG, ERROR_MESSAGE.c_str(),
//            reason.c_str());
//   return 1;
// }
void APP_ABORT(const std::string &reason) {
  std::vector<std::string> ERROR_MESSAGE = {
      "THIS IS A POLYQUANT++ ERROR. PLEASE REPORT TO ", "POLYQUANT++ MAINTAINERS.",
      "ABORT REASON:"};
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
