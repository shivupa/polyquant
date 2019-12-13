#include <io/io.hpp>
#include <string>
#include <vector>
#include <iostream>

#ifndef PYCI_MOLECULE_H
#define PYCI_MOLECULE_H
class PYCI_MOLECULE {
public:
  PYCI_MOLECULE(const PYCI_INPUT &input);
  std::vector<std::string> atom_symb;
  int num_atom;
  std::vector<std::vector<double>> atom_coord;
  std::vector<int> atom_num;

private:
  std::map<std::string, int> _atm_symb_to_num;
};
#endif
