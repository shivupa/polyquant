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
};
#endif
