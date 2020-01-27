#include <algorithm>
#include <basis/basis.hpp>
#include <cpr/cpr.h> // IWYU pragma: keep
#include <io/io.hpp> // IWYU pragma: keep
#include <string>

PYCI_BASIS::PYCI_BASIS(const PYCI_INPUT &input, const PYCI_MOLECULE &molecule) {
  this->load_basis(input, molecule);
}
void PYCI_BASIS::load_basis(const PYCI_INPUT &input,
                            const PYCI_MOLECULE &molecule) {
  Selci_cout("BASIS");
  // parse basis name from data
  this->basis_name = input.input_data["model"]["basis"];
  // Selci_cout(basis_name);
  std::transform(this->basis_name.begin(), this->basis_name.end(),
                 this->basis_name.begin(), ::tolower);
  // Selci_cout(basis_name);

  // TODO move each of these to a function.

  // Libint basis object
  Selci_cout("Creating a Libint2 basis object assuming basis_name is part of "
             "the Libint2 library.");
  this->basis = libint2::BasisSet(this->basis_name, molecule.libint_atom);
  this->num_basis = libint2::nbf(this->basis);

  // Parsing custom basis
  // try to parse local files {atom_symbol}_{basis_name}.txt

  // Parsing a basis from BSE
  // Below code queries the metadata. Getting a basis is similar.
  /*
  // retrive metadata about basis sets contained in basis set exchange
  auto r = cpr::Get(cpr::Url{"https://www.basissetexchange.org/api/metadata"});
  // TODO handle a failure to retrive info
  // for now act like we have successful retrived it
  // parse data
  json basis_set_exchange_metadata = json::parse(r.text);
  // check if the basis is in the basis set exhange
  if (basis_set_exchange_metadata.find(basis_name) ==
      basis_set_exchange_metadata.end()) {
    std::string message = basis_name + " key doesn't exist";
    Selci_cout(message);
    // if not we should app abort
  } else {
    std::string message = basis_name + " key does exist";
    Selci_cout(message);
    // Selci_dump_json(basis_set_exchange_metadata[basis_name]);
  }
  */
  // std::cout << basis_set_exchange_metadata.dump(4) << std::endl;
}
