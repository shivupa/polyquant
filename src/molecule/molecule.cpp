#include <io/io.hpp>
#include <iostream>
#include <molecule/molecule.hpp>

PYCI_MOLECULE::PYCI_MOLECULE(const PYCI_INPUT &input) {
  _atm_symb_to_num = {
    {"H",1},
    {"He",2},
    {"Li",3},
    {"Be",4},
    {"B",5},
    {"C",6},
    {"N",7},
    {"O",8},
    {"F",9},
    {"Ne",10},
    {"Na",11},
    {"Mg",12},
    {"Al",13},
    {"Si",14},
    {"P",15},
    {"S",16},
    {"Cl",17},
    {"Ar",18}
  };
  std::cout << "PYCI_MOLECULE" << std::endl;
  std::cout << input.input_data["molecule"].dump(4) << std::endl;
  // Store atom symbols
  for (auto label : input.input_data["molecule"]["symbols"]) {
    atom_symb.push_back(label);
    atom_num.push_back(_atm_symb_to_num[label]);
    std::cout <<  _atm_symb_to_num[label]<< std::endl;
  }
  // Store number of atoms
  num_atom = atom_symb.size();
  // Store atom coordinates
  for (int i = 0; i < num_atom; ++i) {
    std::vector<double> atom = {};
    for (int j = 0; j < 3; ++j) {
      atom.push_back(input.input_data["molecule"]["geometry"][(i * 3) + j]);
    }
    atom_coord.push_back(atom);
  }

  for (auto i : atom_coord) {
    for (auto j : i) {
      std::cout << j << "\t";
    }
    std::cout << std::endl;
  }
}
