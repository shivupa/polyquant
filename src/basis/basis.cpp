#include <basis/basis.hpp>
#include <cpr/cpr.h>
#include <io/io.hpp>
#include <iostream>

PYCI_BASIS::PYCI_BASIS(const PYCI_INPUT &input) {
  std::cout << "BASIS" << std::endl;
  std::cout << input.input_data.dump(4) << std::endl;
  auto r = cpr::Get(cpr::Url{"https://www.basissetexchange.org/api/metadata"});
  std::cout << r.status_code << std::endl;
  std::cout << r.text << std::endl;
  // RestClient::Response r =
  //     RestClient::get("https://www.basissetexchange.org/api/metadata");
  // std::cout << "r.code" << std::endl;
  // std::cout << r.code << std::endl;
  // std::cout << "r.body" << std::endl;
  // std::cout << r.body << std::endl;
  // std::cout << "r.headers" << std::endl;
  // std::cout << r.headers << std::endl;
}
