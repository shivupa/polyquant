#include <iostream>
#include <nlohmann/json.hpp>
#include <slepceps.h>
#include <string>
using json = nlohmann::json;

#ifndef PYCI_INPUT_H
#define PYCI_INPUT_H
PetscErrorCode APP_ABORT(const std::string &reason);
template <typename T> void Selci_cout(const T &message) {
  // TODO: in these types of functions we could do a if USING_SLEPC
  // just in case its not using mpi etc
  int my_rank;
  MPI_Comm_rank(PETSC_COMM_WORLD, &my_rank);
  if (my_rank == 0) {
    std::cout << message << std::endl;
  }
};
void Selci_dump_json(const json &json_obj);

class PYCI_INPUT {
public:
  PYCI_INPUT(const std::string &filename);
  json input_data;
};
#endif
