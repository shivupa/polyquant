#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <math/dense_matrix.hpp>
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <string>
#include <vector>
using json = nlohmann::json;

#ifndef PYCI_INPUT_H
#define PYCI_INPUT_H
namespace selci {

// /**
//  * @brief Abort the code and print a reason for aborting.
//  *
//  * @param reason a string stating the reason to abort.
//  * @return PetscErrorCode
//  */
// PetscErrorCode APP_ABORT(const std::string &reason);
void APP_ABORT(const std::string &reason);
/**
 * @brief A helper function to print only if we are on rank 0.
 *
 * @tparam T the type of the thing to print out
 * @param message
 */
template <typename T> void Selci_cout(const T &message) {
  // TODO: in these types of functions we could do a if USING_SLEPC
  // just in case its not using mpi etc
  // int my_rank;
  // MPI_Comm_rank(PETSC_COMM_WORLD, &my_rank);
  // if (my_rank == 0) {
// std::cout << std::fixed << std::showpoint << std::setw(20)
  std::cout          << std::setprecision(10) << message << std::endl;
  //}
};

/**
 * @brief A helper function to dump a json object to std::out.
 *
 * @param json_obj The json object to print.
 */
void Selci_dump_json(const json &json_obj);

/**
 * @brief A helper function to dump a dense matrix object to std::out.
 *
 * @param mat The dense matrix to print
 **/
template <typename T>
void Selci_dump_mat(const DENSE_MATRIX<T> &mat, const std::string &title) {
  // int my_rank;
  // MPI_Comm_rank(PETSC_COMM_WORLD, &my_rank);
  // if (my_rank == 0) {
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << title << std::endl;
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  auto shape = mat.shape();
  for (size_t i = 0; i < shape.first; i++) {
    for (size_t j = 0; j < shape.second; j++) {
      std::cout << std::fixed << std::showpoint << std::setw(20)
                << std::setprecision(10) << mat(i, j) << "  ";
    }
    std::cout << std::endl;
  }
};

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
