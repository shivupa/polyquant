#include <io/io.hpp>
#include <iostream>
#include <string>
#include <vector>

#ifndef PYCI_BASIS_H
#define PYCI_BASIS_H
class PYCI_BASIS {
public:
  PYCI_BASIS(const PYCI_INPUT &input);
  std::string basis_name;
  int num_atom;
  std::vector<std::vector<double>> atom_coord;
  std::vector<int> atom_num;

private:
  std::map<std::string, int> _atm_symb_to_num;
};
#endif
