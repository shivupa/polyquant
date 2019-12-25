#include <iostream>
#include <nlohmann/json.hpp>
#include <slepceps.h>
#include <string>
using json = nlohmann::json;

PetscErrorCode APP_ABORT(const std::string &reason);
void Selci_cout(auto message);
void Selci_dump_json(const json &json_obj);

#ifndef PYCI_INPUT_H
#define PYCI_INPUT_H
class PYCI_INPUT {
public:
  PYCI_INPUT(const std::string &filename);
  json input_data;
};
#endif
