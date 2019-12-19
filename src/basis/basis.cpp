#include <basis/basis.hpp>
#include <cpr/cpr.h>
#include <io/io.hpp>
#include <iostream>
#include <nlohmann/json.hpp>
#include <sstream>
using json = nlohmann::json;

PYCI_BASIS::PYCI_BASIS(const PYCI_INPUT &input) {
  std::cout << "BASIS" << std::endl;
  // parse basis name from data
  basis_name = input.input_data["model"]["basis"];
  std::cout << basis_name << std::endl;
  // retrive metadata about basis sets contained in basis set exchange
  auto r = cpr::Get(cpr::Url{"https://www.basissetexchange.org/api/metadata"});
  // TODO handle a failure to retrive info
  // for now act like we have successful retrived it
  // std::cout << r.status_code << std::endl;
  // std::cout << r.text << std::endl;
  // parse data
  json basis_set_exchange_metadata = json::parse(r.text);
  // check if the basis is in the basis set exhange
  if (basis_set_exchange_metadata.find(basis_name) ==
      basis_set_exchange_metadata.end()) {
    std::cout << basis_name << " key doesn't exist" << std::endl;
    // if not we should app abort
  } else {
    std::cout << basis_name << " key does exist" << std::endl;
    std::cout << basis_name << basis_set_exchange_metadata[basis_name]
              << std::endl;
  }
  // std::cout << basis_set_exchange_metadata.dump(4) << std::endl;
  // RestClient::Response r =
  //     RestClient::get("https://www.basissetexchange.org/api/metadata");
  // std::cout << "r.code" << std::endl;
  // std::cout << r.code << std::endl;
  // std::cout << "r.body" << std::endl;
  // std::cout << r.body << std::endl;
  // std::cout << "r.headers" << std::endl;
  // std::cout << r.headers << std::endl;
}
