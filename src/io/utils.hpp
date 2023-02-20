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
#define POLYQUANT_TEST_EPSILON_EXTREMELYTIGHT 1e-14

// /**
//  * @brief Abort the code and print a reason for aborting.
//  *
//  * @param reason a string stating the reason to abort.
//  */
void APP_ABORT(const std::string &reason);
void APP_WARN(const std::string &reason);
/**
 * @brief A helper function to print only if we are on rank 0.
 *
 * @tparam T the type of the thing to print out
 * @param message
 */
template <typename T> void Polyquant_cout(const T &message) { std::cout << std::setprecision(20) << message << std::endl; }

template <typename T> void Polyquant_section_header(const T &message) {
  fmt::print("\n{0:^{2}}┌{0:─^{3}}┐\n"
             "{0:^{2}}│{0:^{3}}│\n"
             "{0:^{2}}│{1:^{3}}│\n"
             "{0:^{2}}│{0:^{3}}│\n"
             "{0:^{2}}└{0:─^{3}}┘\n\n",
             "", message, 20, 40);
}
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
 * @brief A helper function to dump the program header.
 *
 */
void Polyquant_dump_program_header();

/**
 * @brief A helper function to dump a json object to std::out.
 *
 * @param json_obj The json object to print.
 */
void Polyquant_dump_json(const json &json_obj);

template <typename T> void Polyquant_dump_stdvec(const std::vector<T> &vec, const std::string &title) {
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << title << std::endl;
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  for (size_t i = 0; i < vec.size(); i++) {
    std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << vec[i] << std::endl;
  }
};

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

template <typename t> void Polyquant_read_vec_from_file(std::vector<t> &vec, const std::string &filename) {
  std::ifstream vecfile(filename);
  vec.clear();

  std::string line;
  while (std::getline(vecfile, line)) {
    std::istringstream linestream(line);
    double value; // could have multiple values per line here
    linestream >> value;
    vec.push_back(value);
  }
};

template <typename t> void Polyquant_dump_vecofvec_to_file(const std::vector<std::vector<t>> &vec, const std::string &filename) {
  std::ofstream vvfile;
  vvfile.open(filename);
  for (size_t i = 0; i < vec.size(); i++) {
    for (size_t j = 0; j < vec[i].size(); j++) {
      vvfile << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << vec[i][j];
    }
    vvfile << std::endl;
  }
};

template <typename t> void Polyquant_read_vecofvec_from_file(std::vector<std::vector<t>> &vec, const std::string &filename) {
  std::ifstream vecfile(filename);
  vec.clear();

  std::string line;
  while (std::getline(vecfile, line)) {
    std::istringstream linestream(line);
    double value; // could have multiple values per line here
    std::vector<t> tempvec;
    tempvec.clear();
    while (linestream >> value)
      tempvec.push_back(value);
    vec.push_back(tempvec);
  }
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
 * @brief A helper function to dump a dense diagonal matrix object to std::out.
 *
 * @param mat The dense matrix to print
 **/
template <typename T> void Polyquant_dump_diagmat(const Eigen::DiagonalMatrix<T, Eigen::Dynamic> &mat, const std::string &title) {
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << title << std::endl;
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  for (size_t i = 0; i < mat.rows(); i++) {
    std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << mat.diagonal()(i) << "  ";
    std::cout << std::endl;
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

template <typename T>
void Polyquant_dump_character_table(const Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> &mat, const std::string &title, const std::vector<std::string> &row_titles,
                                    const std::vector<std::string> &col_titles) {
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << title << " character table" << std::endl;
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << ""
            << "  ";
  for (size_t j = 0; j < mat.cols(); j++) {
    std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << col_titles[j] << "  ";
  }
  std::cout << std::endl;

  for (size_t i = 0; i < mat.rows(); i++) {
    std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << row_titles[i] << "  ";
    for (size_t j = 0; j < mat.cols(); j++) {
      std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << mat(i, j) << "  ";
    }
    std::cout << std::endl;
  }
};
template <typename T> void Polyquant_dump_direct_product_table(const Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> &mat, const std::string &title, const std::vector<std::string> &row_titles) {
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << title << " direct product table" << std::endl;
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << ""
            << "  ";
  for (size_t j = 0; j < mat.cols(); j++) {
    std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << row_titles[j] << "  ";
  }
  std::cout << std::endl;

  std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << ""
            << "  ";
  for (size_t j = 0; j < mat.cols(); j++) {
    std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << "---"
              << "  ";
  }
  std::cout << std::endl;

  for (size_t i = 0; i < mat.rows(); i++) {
    std::cout << std::fixed << std::showpoint << std::setw(10) << std::setprecision(10) << row_titles[i] << " |";
    for (size_t j = 0; j < mat.cols(); j++) {
      if (mat(i, j) >= 0) {
        std::cout << std::fixed << std::showpoint << std::setw(10) << std::setprecision(10) << row_titles[mat(i, j)] << "  ";
      } else {
        std::cout << std::fixed << std::showpoint << std::setw(10) << std::setprecision(10) << "MULT"
                  << "  ";
      }
    }
    std::cout << std::endl;
  }
};

/**
 * @brief A helper function to dump a dense diagonalmatrix object to file.
 *
 * @param mat The dense matrix to write.
 **/
template <typename T> void Polyquant_dump_diagmat_to_file(const Eigen::DiagonalMatrix<T, Eigen::Dynamic> &mat, const std::string &filename) {
  std::ofstream matfile;
  matfile.open(filename);
  for (Eigen::Index i = 0; i < mat.rows(); i++) {
    matfile << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << mat.diagonal()(i) << "  ";
    matfile << std::endl;
  }
};
/**
 * @brief A helper function to dump a sparse matrix object to file.
 *
 * @param mat The sparse matrix to write.
 **/
template <typename T> void Polyquant_dump_sparse_mat_to_file(const Eigen::SparseMatrix<T, Eigen::RowMajor> &mat, const std::string &filename) {
  std::ofstream matfile;
  matfile.open(filename);
  for (Eigen::Index i = 0; i < mat.rows(); i++) {
    for (Eigen::Index j = 0; j < mat.cols(); j++) {
      matfile << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << mat.coeff(i, j) << "  ";
    }
    matfile << std::endl;
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
                   std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> &occ, std::vector<std::vector<std::vector<std::string>>> &symm_labels, std::string title,
                   std::vector<std::vector<std::vector<std::string>>> &ao_labels);

// TODO move these functions to some sort of algorithms folder or something
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

/**
 * Argsort for std vector
 * @param vector input
 * @return sorted indicies std vector
 */
template <typename T> std::vector<int> argsort(const std::vector<T> &in_vec, bool ascending = true) {
  std::vector<int> indices(in_vec.size());
  std::iota(indices.begin(), indices.end(), 0);
  std::sort(indices.begin(), indices.end(), [&in_vec, &ascending](int left, int right) -> bool {
    // sort indices according to corresponding array element
    if (ascending) {
      return in_vec[left] < in_vec[right];
    } else {
      return in_vec[left] > in_vec[right];
    }
  });
  return indices;
};
/**
 * Argsort for Eigen vector
 * @param vector input
 * @return sorted indicies std vector
 */
template <typename T> std::vector<int> argsort(const Eigen::Matrix<T, Eigen::Dynamic, 1> &in_vec, bool ascending = true) {
  std::vector<int> indices(in_vec.size());
  std::iota(indices.begin(), indices.end(), 0);
  std::sort(indices.begin(), indices.end(), [&in_vec, &ascending](int left, int right) -> bool {
    // sort indices according to corresponding array element
    if (ascending) {
      return in_vec(left) < in_vec(right);
    } else {
      return in_vec(left) > in_vec(right);
    }
  });
  return indices;
};
;
} // namespace polyquant
#endif
