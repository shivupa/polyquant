#include "io/utils.hpp"

using namespace polyquant;

// LCOV_EXCL_START
#if !defined(DOXYGEN_SHOULD_SKIP_THIS)
namespace polyquant {
void APP_ABORT(const std::string &reason) {
  std::vector<std::string> ERROR_MESSAGE = {"THIS IS A POLYQUANTERROR. PLEASE REPORT TO ", "POLYQUANT MAINTAINERS. ABORT REASON:"};
  ERROR_MESSAGE.push_back(reason);
  for (auto line : ERROR_MESSAGE) {
    Polyquant_cout(line);
  }
  exit(1);
}

void Polyquant_dump_json(const json &json_obj) {
  std::cout << json_obj.dump(4) << std::endl;
}

void Polyquant_dump_basis_to_file(const std::string &contents, const std::string &filename) {
  auto ss = std::stringstream{contents};
  std::ofstream outfile;
  outfile.open(filename);
  outfile << "****" << std::endl;
  for (std::string line; std::getline(ss, line, '\n');) {
    std::string stripped_line = line.substr(0, line.find("!", 0));
    bool all_space = std::all_of(stripped_line.begin(), stripped_line.end(), isspace);
    if (all_space) {
      continue;
    } else {
      outfile << stripped_line << std::endl;
    }
  }
  outfile.close();
}
// LCOV_EXCL_STOP

std::map<std::string, int> _atm_symb_to_num = { {"H", 1},   {"He", 2},  {"Li", 3},  {"Be", 4},  {"B", 5}, {"C", 6},   {"N", 7},   {"O", 8},   {"F", 9},   {"Ne", 10}, {"Na", 11}, {"Mg", 12}, {"Al", 13}, {"Si", 14}, {"P", 15}, {"S", 16},  {"Cl", 17}, {"Ar", 18}, {"K", 19}, };

std::map<std::string, double> _atm_symb_to_mass = { {"H", 1.00782503223},  {"He", 4.00260325413},  {"Li", 7.0160034366}, {"Be", 9.012183065},   {"B", 11.00930536},     {"C", 12.0}, {"N", 14.00307400443}, {"O", 15.99491461957},  {"F", 18.99840316273}, {"Ne", 19.9924401762}, {"Na", 22.989769282},   {"Mg", 23.985041697}, {"Al", 26.98153853},   {"Si", 27.97692653465}, {"P", 30.97376199842}, {"S", 31.9720711744},  {"Cl", 34.968852682},   {"Ar", 39.9623831237}, {"K", 38.9637064864}, };

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
