#include <basis/basis.hpp>
#include <io/io.hpp>
#include <iostream>
#include <slepceps.h>
#include <string>
#include <vector>

#ifndef PYCI_INTEGRAL_H
#define PYCI_INTEGRAL_H
class PYCI_INTEGRAL {
public:
  PYCI_INTEGRAL(const PYCI_INPUT &input, const PYCI_BASIS &basis);

  Mat S; // Overlap matrix
};
#endif
