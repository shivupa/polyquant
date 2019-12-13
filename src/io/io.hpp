#include <iostream>
#include <nlohmann/json.hpp>
#include <slepceps.h>
#include <string>
using json = nlohmann::json;

PetscErrorCode APP_ABORT(const std::string &reason);

#ifndef PYCI_INPUT_H
#define PYCI_INPUT_H
class PYCI_INPUT {
public:
  PYCI_INPUT(const std::string &filename);
  json input_data;
};
#endif
