#include <iomanip>
#include <iostream>
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <slepceps.h>        // IWYU pragma: keep
#include <string>
using json = nlohmann::json;

#ifndef PYCI_INPUT_H
#define PYCI_INPUT_H
namespace selci {

/**
 * @brief Abort the code and print a reason for aborting.
 *
 * @param reason a string stating the reason to abort.
 * @return PetscErrorCode
 */
PetscErrorCode APP_ABORT(const std::string &reason);

/**
 * @brief A helper function to print only if we are on rank 0.
 *
 * @tparam T the type of the thing to print out
 * @param message
 */
template <typename T> void Selci_cout(const T &message) {
  // TODO: in these types of functions we could do a if USING_SLEPC
  // just in case its not using mpi etc
  int my_rank;
  MPI_Comm_rank(PETSC_COMM_WORLD, &my_rank);
  if (my_rank == 0) {
    std::cout << std::setprecision(10) << message << std::endl;
  }
};

/**
 * @brief A helper function to dump a json object to std::out.
 *
 * @param json_obj The json object to print.
 */
void Selci_dump_json(const json &json_obj);

/**
 * @brief A class to hold information parsed from a QCSchema json
 *
 */
class PYCI_INPUT {
public:
  PYCI_INPUT() = default;
  /**
   * @brief Construct a new pyci input object using the parse_input function.
   *
   * @param filename the file to parse.
   */
  PYCI_INPUT(const std::string &filename);
  /**
   * @brief the function where a file is actually parsed.
   *
   * @param filename the file to parse.
   */
  void parse_input(const std::string &filename);
  /**
   * @brief the json object to store the input
   *
   */
  json input_data;
};
} // namespace selci
#endif
