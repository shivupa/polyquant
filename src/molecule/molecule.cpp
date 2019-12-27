#include <io/io.hpp>
#include <iostream>
#include <molecule/molecule.hpp>

PYCI_MOLECULE::PYCI_MOLECULE(const PYCI_INPUT &input) { setup_molecule(input); }

void PYCI_MOLECULE::setup_molecule(const PYCI_INPUT &input) {
  this->_atm_symb_to_num = {
      {"H", 1},   {"He", 2},  {"Li", 3}, {"Be", 4},  {"B", 5},   {"C", 6},
      {"N", 7},   {"O", 8},   {"F", 9},  {"Ne", 10}, {"Na", 11}, {"Mg", 12},
      {"Al", 13}, {"Si", 14}, {"P", 15}, {"S", 16},  {"Cl", 17}, {"Ar", 18}};
  // Store atom symbols
  for (auto label : input.input_data["molecule"]["symbols"]) {
    this->atom_symb.push_back(label);
    this->atom_num.push_back(_atm_symb_to_num[label]);
  }
  // Store number of atoms
  this->num_atom = this->atom_symb.size();
  // Store atom coordinates
  for (int i = 0; i < this->num_atom; ++i) {
    std::vector<double> atom = {};
    for (int j = 0; j < 3; ++j) {
      atom.push_back(input.input_data["molecule"]["geometry"][(i * 3) + j]);
    }
    this->atom_coord.push_back(atom);
  }
  // Selci_cout(this->dump_xyz());
  this->libint_atom = this->to_libint_atom();
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
    temp_xyz += std::to_string(this->atom_coord[i][0]);
    temp_xyz += "\t";
    temp_xyz += std::to_string(this->atom_coord[i][1]);
    temp_xyz += "\t";
    temp_xyz += std::to_string(this->atom_coord[i][2]);
  }
  return temp_xyz;
}

std::vector<libint2::Atom> PYCI_MOLECULE::to_libint_atom() const {
  std::istringstream temp_xyz_stream(this->dump_xyz());
  return libint2::read_dotxyz(temp_xyz_stream);
}