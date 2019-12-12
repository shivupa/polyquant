#include <molecule/molecule.hpp>
#include <io/io.hpp>
#include <iostream>

PYCI_MOLECULE::PYCI_MOLECULE(const PYCI_INPUT& input) {
    std::cout << input.input_data.dump(4) << std::endl;
}
