#ifndef POLYQUANT_INPUTUTILS_H
#define POLYQUANT_INPUTUTILS_H
#include <Eigen/Dense>
#include <Eigen/Eigen>
#include <algorithm>
#include <cctype>
#include <chrono>
#include <fmt/core.h>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <libint2.hpp>       // IWYU pragma: keep
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <string>
#include <vector>
// TODO switch to #include <format> once it is supported
using json = nlohmann::json;

namespace polyquant {

#define POLYQUANT_TEST_EPSILON_LOOSE 0.000001
#define POLYQUANT_TEST_EPSILON_TIGHT 0.00000001
#define POLYQUANT_TEST_EPSILON_MACHINEPREC 1e-16

// /**
//  * @brief Abort the code and print a reason for aborting.
//  *
//  * @param reason a string stating the reason to abort.
//  */
void APP_ABORT(const std::string &reason);
/**
 * @brief A helper function to print only if we are on rank 0.
 *
 * @tparam T the type of the thing to print out
 * @param message
 */
template <typename T> void Polyquant_cout(const T &message) { std::cout << std::setprecision(20) << message << std::endl; }

// replace with C++20 std::source_location::function_name once supported
// std::string source_loc(){
//    return __PRETTY_FUNCTION__;
//};

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
template <typename T> void Polyquant_dump_vec(const Eigen::Matrix<T, Eigen::Dynamic, 1> &vec, const std::string &title) {
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << title << std::endl;
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  for (size_t i = 0; i < vec.rows(); i++) {
    std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << vec(i, 0) << std::endl;
  }
};

/**
 * @brief A helper function to dump a string to file.
 *
 * @param str the string to write
 **/
inline void Polyquant_dump_str_to_file(const std::string &str, const std::string &filename) {
  std::ofstream strfile;
  strfile.open(filename);
  strfile << str << std::endl;
};

/**
 * @brief A helper function to dump a dense vector object to file.
 *
 * @param vec The dense vector to write.
 **/
template <typename T> void Polyquant_dump_vec_to_file(const Eigen::Matrix<T, Eigen::Dynamic, 1> &vec, const std::string &filename) {
  std::ofstream vecfile;
  vecfile.open(filename);
  for (Eigen::Index i = 0; i < vec.rows(); i++) {
    vecfile << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << vec(i, 0) << std::endl;
  }
};

/**
 * @brief A helper function to dump a dense matrix object to std::out.
 *
 * @param mat The dense matrix to print
 **/
template <typename T> void Polyquant_dump_mat(const Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> &mat, const std::string &title) {
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << title << std::endl;
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  for (size_t i = 0; i < mat.rows(); i++) {
    for (size_t j = 0; j < mat.cols(); j++) {
      std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << mat(i, j) << "  ";
    }
    std::cout << std::endl;
  }
};
/**
 * @brief A helper function to dump a dense matrix object to file.
 *
 * @param mat The dense matrix to write.
 **/
template <typename T> void Polyquant_dump_mat_to_file(const Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> &mat, const std::string &filename) {
  std::ofstream matfile;
  matfile.open(filename);
  for (Eigen::Index i = 0; i < mat.rows(); i++) {
    for (Eigen::Index j = 0; j < mat.cols(); j++) {
      matfile << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << mat(i, j) << "  ";
    }
    matfile << std::endl;
  }
};
/**
 * @brief A helper function to dump a string to file.
 *
 * @param mat The dense matrix to write.
 **/
void Polyquant_dump_basis_to_file(const std::string &contents, const std::string &filename);

void dump_orbitals(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &C, std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> &E_orbitals,
                   std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> &occ);

/**
 * @brief A hasher for a pair of vectors
 * for more info see https://stackoverflow.com/a/29855973
 *
 * @param v the std::pair of std::vector<T> to hash
 **/
template <typename T> struct PairVectorHash {
  size_t operator()(const std::pair<std::vector<T>, std::vector<T>> &v) const {
    std::hash<T> hasher;
    size_t seed = 0;
    for (T i : v.first) {
      seed ^= hasher(i) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    }
    for (T i : v.second) {
      seed ^= hasher(i) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    }
    return seed;
  }
};
template <typename T> struct VectorHash {
  size_t operator()(const std::vector<T> &v) const {
    std::hash<T> hasher;
    size_t seed = 0;
    for (T i : v) {
      seed ^= hasher(i) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    }
    return seed;
  }
};
template <typename T> struct PairHash {
  size_t operator()(const std::pair<T, T> &v) const {
    std::hash<T> hasher;
    size_t seed = 0;
    seed ^= hasher(v.first) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    seed ^= hasher(v.second) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    return seed;
  }
};
} // namespace polyquant
#endif
