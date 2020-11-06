#include <basis/basis.hpp>

using namespace polyquant;

POLYQUANT_BASIS::POLYQUANT_BASIS(const POLYQUANT_INPUT &input,
                                 const POLYQUANT_MOLECULE &molecule) {
  this->load_basis(input, molecule);
}
void POLYQUANT_BASIS::load_basis(const POLYQUANT_INPUT &input,
                                 const POLYQUANT_MOLECULE &molecule) {
  Polyquant_cout("BASIS");
  bool pure = true;
  if (input.input_data.contains("keywords")) {
    if (input.input_data["keywords"].contains("pure")) {
      pure = input.input_data["keywords"]["pure"];
    }
  }

  this->basis = libint2::BasisSet();
  // parse basis name from data
  if (input.input_data.contains("model")) {
    if (input.input_data["model"].contains("basis")) {
      for (auto const &[classical_part_key, classical_part] :
           molecule.classical_particles) {
        if (input.input_data["model"]["basis"].contains(classical_part_key)) {
          for (auto center_basis :
               input.input_data["model"]["basis"][classical_part_key]) {
            if (center_basis.contains("library")) {
              // library basis with atom type specified
              if (center_basis["library"].contains("atom")) {
                auto libint_atoms = molecule.to_libint_atom(classical_part_key);
                for (auto &libint_atom : libint_atoms) {
                  libint_atom.atomic_number =
                      atom_symb_to_num(center_basis["library"]["atom"]);
                }
                libint2::BasisSet atom_basis = libint2::BasisSet(
                    center_basis["library"]["type"], libint_atoms, true);
                // std::move(atom_basis.begin(), atom_basis.end(),
                // std::back_inserter(this->basis));
                // this->basis.back().move({{atoms[a].x, atoms[a].y,
                // atoms[a].z}});
                this->basis.insert(this->basis.end(), atom_basis.begin(),
                                   atom_basis.end());
                this->basis.set_pure(pure);
                // std::move(atom_basis.begin(), atom_basis.end(),
                //           std::back_inserter(this->basis));
              } else {
                auto libint_atoms = molecule.to_libint_atom(classical_part_key);
                for (auto &libint_atom : libint_atoms) {
                  libint_atom.atomic_number =
                      atom_symb_to_num(classical_part_key);
                }
                libint2::BasisSet atom_basis = libint2::BasisSet(
                    center_basis["library"]["type"], libint_atoms, true);
                this->basis.insert(this->basis.end(), atom_basis.begin(),
                                   atom_basis.end());
                this->basis.set_pure(pure);
              }
            } else if (center_basis.contains("custom")) {
              if (center_basis["custom"].contains("type")) {
                if (center_basis["custom"]["type"] == "even-tempered") {
                  // TODO
                  //{"type" : "even-tempered","end"
                  //: 2.8284271247461903e-3,"start" : 32e-1,"num_funcs" :
                  // 7,"angular_mom" : 0}
                  Polyquant_cout("Even tempered basis not implemented yet.");
                } else if (center_basis["custom"]["type"] == "file") {
                  auto atom_basis = libint2::BasisSet::read_g94_basis_library(
                      center_basis["custom"]["filename"]);
                  // std::copy(atom_basis.begin(), atom_basis.end(),
                  //           std::back_inserter(this->basis));
                  for (auto center_idx : classical_part.center_idx) {
                    // check all elements
                    for (auto Z = 1; Z < 100; Z++) {
                      for (auto s : atom_basis.at(Z)) {

                        this->basis.push_back(std::move(s));
                        this->basis.back().move(
                            {{molecule.centers[center_idx][0],
                              molecule.centers[center_idx][1],
                              molecule.centers[center_idx][2]}});
                      }
                    }
                  }
                  this->basis.set_pure(pure);
                }
              } else {
                APP_ABORT("'model->basis->" + classical_part_key +
                          "->custom' needs a type key.");
              }
            } else {
              APP_ABORT("'model->basis->" + classical_part_key +
                        "->type' must be library or custom.");
            }
          }

          Polyquant_cout("Added basis for " + classical_part_key);
          this->num_basis = libint2::nbf(this->basis);
          Polyquant_cout("Number of basis functions: " +
                         std::to_string(this->num_basis));

        } else {
          Polyquant_cout("'model->basis' didn't contain a basis for: " +
                         classical_part_key);
        }
      }
    } else {
      APP_ABORT(
          "Cannot set up basis. Input json missing 'model->basis' section.");
    }
  } else {
    APP_ABORT("Cannot set up basis. Input json missing 'model' section.");
  }
  // TODO dump basis
  // Polyquant_cout("");
  // Polyquant_cout(this->basis);

  // this->basis_name = input.input_data["model"]["basis"];
  // // Polyquant_cout(basis_name);
  // std::transform(this->basis_name.begin(), this->basis_name.end(),
  //                this->basis_name.begin(), ::tolower);
  // // Polyquant_cout(basis_name);

  // TODO move each of these to a function.

  // Libint basis object
  // try {
  //   try {
  //     Polyquant_cout(
  //         "Trying to create a Libint2 basis object assuming basis_name "
  //         "is part of "
  //         "the Libint2 library.");
  //     this->basis = libint2::BasisSet(this->basis_name,
  //                                     molecule.to_libint_atom(), true);
  //     this->num_basis = libint2::nbf(this->basis);
  //     for (auto s : this->basis) {
  //       Polyquant_cout(s);
  //     }
  //   } catch (...) {
  //     Polyquant_cout("That didn't work. Trying to load a basis from load a
  //     basis "
  //                "from the "
  //                "current working directory. The value of \"basis\" in the
  //                " "json file " "is taken to be the filename. Loading
  //                filename:");
  //     Polyquant_cout(this->basis_name);
  //     std::string cwd = std::filesystem::current_path();
  //     setenv("LIBINT_DATA_PATH", cwd.c_str(), 1);
  //     this->basis = libint2::BasisSet(this->basis_name,
  //                                     molecule.to_libint_atom(), true);
  //     this->num_basis = libint2::nbf(this->basis);
  //     Polyquant_cout(this->num_basis);
  //   }
  // } catch (...) {
  //   APP_ABORT("Polyquant couldn't parse basis.");
  // }

  // Parsing custom basis
  // try to parse local files {atom_symbol}_{basis_name}.txt

  // Parsing a basis from BSE
  // Below code queries the metadata. Getting a basis is similar.
  /*
  // retrive metadata about basis sets contained in basis set exchange
  auto r =
  cpr::Get(cpr::Url{"https://www.basissetexchange.org/api/metadata"});
  // TODO handle a failure to retrive info
  // for now act like we have successful retrived it
  // parse data
  json basis_set_exchange_metadata = json::parse(r.text);
  // check if the basis is in the basis set exhange
  if (basis_set_exchange_metadata.find(basis_name) ==
      basis_set_exchange_metadata.end()) {
    std::string message = basis_name + " key doesn't exist";
    Polyquant_cout(message);
    // if not we should app abort
  } else {
    std::string message = basis_name + " key does exist";
    Polyquant_cout(message);
    // Polyquant_dump_json(basis_set_exchange_metadata[basis_name]);
  }
  */
  // std::cout << basis_set_exchange_metadata.dump(4) << std::endl;
}
