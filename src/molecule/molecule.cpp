#include "molecule.h"
#include <iostream>

PYCI_MOLECULE::PYCI_MOLECULE( PYCI_INPUT input) {
    std::cout << input.parsed_input.dump(4) << std::endl;
}
