#include <io/io.hpp>
#include <iostream>
#include <libint2.hpp>
#include <string>
#include <vector>

#ifndef PYCI_MOLECULE_H
#define PYCI_MOLECULE_H
class PYCI_MOLECULE {
public:
  PYCI_MOLECULE() = default;
  PYCI_MOLECULE(const PYCI_INPUT &input);
  void setup_molecule(const PYCI_INPUT &input);

  std::vector<libint2::Atom> to_libint_atom() const;
  std::string dump_xyz() const;

  std::vector<std::string> atom_symb;
  int num_atom;
  std::vector<std::vector<double>> atom_coord;
  std::vector<int> atom_num;
  std::vector<libint2::Atom> libint_atom;

private:
  std::map<std::string, int> _atm_symb_to_num;
};
#endif
