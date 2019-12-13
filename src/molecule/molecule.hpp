#include <string>
#include <vector>
#include <io/io.hpp>

#ifndef PYCI_MOLECULE_H
#define PYCI_MOLECULE_H
class PYCI_MOLECULE{
public:
  PYCI_MOLECULE(const PYCI_INPUT& input);
  std::vector<std::string> atom_symb;
  int num_atom;
  std::vector< std::vector< double> > atom_coord;
};
#endif
