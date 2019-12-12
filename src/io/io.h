#include <slepceps.h>
#include <string>
#include <iostream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;



PetscErrorCode APP_ABORT(std::string& reason);

#ifndef PYCI_INPUT
#define PYCI_INPUT
class PYCI_INPUT {
public:
  PYCI_INPUT();
  json input_data;
};
#endif
