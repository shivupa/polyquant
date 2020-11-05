#ifndef POLYQUANT_INPUT_H
#define POLYQUANT_INPUT_H
#include <Eigen/Dense>
#include <Eigen/Eigen>
#include <algorithm>
#include <fstream>
#include <h5cpp/hdf5.hpp>
#include <iomanip>
#include <iostream>
#include <libint2.hpp>       // IWYU pragma: keep
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <string>
#include <vector>
// TODO switch to #include <format> once it is supported
using json = nlohmann::json;

namespace polyquant {

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
template <typename T> void Polyquant_cout(const T &message) {
  // TODO: in these types of functions we could do a if USING_SLEPC
  // just in case its not using mpi etc
  // int my_rank;
  // MPI_Comm_rank(PETSC_COMM_WORLD, &my_rank);
  // if (my_rank == 0) {
  // std::cout << std::fixed << std::showpoint << std::setw(20)
  std::cout << std::setprecision(20) << message << std::endl;
  //}
}

int atom_symb_to_num(std::string key);

double atom_symb_to_mass(std::string key);

double quantum_symb_to_spin(std::string key);

double quantum_symb_to_mass(std::string key);

int quantum_symb_to_charge(std::string key);

/**
 * @brief A helper function to dump a json object to std::out.
 *
 * @param json_obj The json object to print.
 */
void Polyquant_dump_json(const json &json_obj);

/**
 * @brief A helper function to dump a dense vector object to std::out.
 *
 * @param vec The dense vector to print
 **/
template <typename T>
void Polyquant_dump_vec(const Eigen::Matrix<T, Eigen::Dynamic, 1> &vec,
                        const std::string &title) {
  // int my_rank;
  // MPI_Comm_rank(PETSC_COMM_WORLD, &my_rank);
  // if (my_rank == 0) {
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << title << std::endl;
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  for (size_t i = 0; i < vec.rows(); i++) {

    std::cout << std::fixed << std::showpoint << std::setw(20)
              << std::setprecision(10) << vec(i, 0) << std::endl;
  }
}

void Polyquant_dump_hdf5_for_QMCPACK(
    const std::string &filename, bool pbc, bool complex_vals, bool ecp,
    bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha,
    int num_part_beta, int num_part_total, int multiplicity, int num_atom,
    int num_species, std::vector<std::vector<double>> E_orb,
    std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff,
    std::vector<int> atomic_species_ids, std::vector<int> atomic_number,
    std::vector<int> atomic_charge, std::vector<int> core_elec,
    std::vector<std::string> atomic_names,
    std::vector<std::vector<double>> atomic_centers,
    std::vector<std::vector<libint2::Shell>> unique_shells);

/**
 * @brief A helper function to dump a dense vector object to file.
 *
 * @param vec The dense vector to write.
 **/
template <typename T>
void Polyquant_dump_vec_to_file(const Eigen::Matrix<T, Eigen::Dynamic, 1> &vec,
                                const std::string &filename) {
  // int my_rank;
  // MPI_Comm_rank(PETSC_COMM_WORLD, &my_rank);
  // if (my_rank == 0) {
  std::ofstream vecfile;
  vecfile.open(filename);
  for (Eigen::Index i = 0; i < vec.rows(); i++) {
    vecfile << std::fixed << std::showpoint << std::setw(20)
            << std::setprecision(10) << vec(i, 0) << std::endl;
  }
}

/**
 * @brief A helper function to dump a dense matrix object to std::out.
 *
 * @param mat The dense matrix to print
 **/
template <typename T>
void Polyquant_dump_mat(
    const Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> &mat,
    const std::string &title) {
  // int my_rank;
  // MPI_Comm_rank(PETSC_COMM_WORLD, &my_rank);
  // if (my_rank == 0) {
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << title << std::endl;
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  for (size_t i = 0; i < mat.rows(); i++) {
    for (size_t j = 0; j < mat.cols(); j++) {
      std::cout << std::fixed << std::showpoint << std::setw(20)
                << std::setprecision(10) << mat(i, j) << "  ";
    }
    std::cout << std::endl;
  }
}

/**
 * @brief A helper function to dump a dense matrix object to file.
 *
 * @param mat The dense matrix to write.
 **/
template <typename T>
void Polyquant_dump_mat_to_file(
    const Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> &mat,
    const std::string &filename) {
  // int my_rank;
  // MPI_Comm_rank(PETSC_COMM_WORLD, &my_rank);
  // if (my_rank == 0) {
  std::ofstream matfile;
  matfile.open(filename);
  for (Eigen::Index i = 0; i < mat.rows(); i++) {
    for (Eigen::Index j = 0; j < mat.cols(); j++) {
      matfile << std::fixed << std::showpoint << std::setw(20)
              << std::setprecision(10) << mat(i, j) << "  ";
    }
    matfile << std::endl;
  }
}

/**
 * @brief A class to hold information parsed from a QCSchema json
 *
 */
class POLYQUANT_INPUT {
public:
  POLYQUANT_INPUT() = default;
  /**
   * @brief Construct a new pyci input object using the parse_input function.
   *
   * @param filename the file to parse.
   */
  POLYQUANT_INPUT(const std::string &filename);
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
} // namespace polyquant
#endif
