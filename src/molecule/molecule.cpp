#include <molecule/molecule.hpp>
#include <io/io.hpp>
#include <iostream>

PYCI_MOLECULE::PYCI_MOLECULE(const PYCI_INPUT& input) {
    std::cout << "PYCI_MOLECULE" << std::endl;
    std::cout << input.input_data["molecule"]["geometry"].dump(4) << std::endl;
    std::cout << input.input_data["molecule"]["symbols"].dump(4) << std::endl;
    for (auto label : input.input_data["molecule"]["symbols"]){
        atom_symb.push_back(label);
    }
    num_atom = atom_symb.size();
    std::cout << num_atom << std::endl;
    for  (int i = 0; i < num_atom; ++i){
        std::vector<double> atom = {};
        for (int j = 0; j < 3; ++j ) {
            atom.push_back(input.input_data["molecule"]["geometry"][j]);
            std::cout << input.input_data["molecule"]["geometry"][j] << "\t";
        }
        atom_coord.push_back(atom);
    }
    for (auto i : atom_coord){
        for (auto j : i){
            std::cout << j << "\t";
        }
        std::cout << std::endl;
    }
    

}
