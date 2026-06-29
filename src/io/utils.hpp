#ifndef POLYQUANT_INPUTUTILS_H
#define POLYQUANT_INPUTUTILS_H

/**
 * @file utils.hpp
 * @brief Shared exceptions, formatting helpers, file-dump helpers, lookup tables, and small generic utilities.
 */
#include <Eigen/Dense>
#include <Eigen/Eigen>
#include <algorithm>
#include <cctype>
#include <chrono>
#include <fmt/format.h>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <libint2.hpp>       // IWYU pragma: keep
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <string>
#include <vector>
// TODO switch to #include <format> once it is supported
/**
 * @brief Convenience alias for the JSON type used by Polyquant IO helpers.
 */
using json = nlohmann::json;

namespace polyquant {

/**
 * @brief Exception type thrown for user-facing Polyquant fatal errors.
 *
 * `APP_ABORT` formats diagnostics to stdout and then throws this exception so
 * the CLI can exit cleanly without continuing execution.
 */
class PolyquantException : public std::exception {
  /**
   * @brief Stored diagnostic returned by `what()`.
   */
  std::string msg_;

public:
  /**
   * @brief Construct an exception with a user-facing fatal-error message.
   *
   * @param reason Diagnostic explaining why execution cannot continue.
   */
  explicit PolyquantException(const std::string &reason) : msg_(reason) {}
  /**
   * @brief Return the stored fatal-error diagnostic.
   *
   * @return Null-terminated message string owned by this exception object.
   */
  const char *what() const noexcept override { return msg_.c_str(); }
};

/**
 * @def POLYQUANT_TEST_EPSILON_LOOSE
 * @brief Loose floating-point comparison tolerance used by tests.
 */
#define POLYQUANT_TEST_EPSILON_LOOSE 1e-6
/**
 * @def POLYQUANT_TEST_EPSILON_TIGHT
 * @brief Tight floating-point comparison tolerance used by tests.
 */
#define POLYQUANT_TEST_EPSILON_TIGHT 1e-8
/**
 * @def POLYQUANT_TEST_EPSILON_VERYTIGHT
 * @brief Very tight floating-point comparison tolerance used by tests.
 */
#define POLYQUANT_TEST_EPSILON_VERYTIGHT 1e-10
/**
 * @def POLYQUANT_TEST_EPSILON_EXTREMELYTIGHT
 * @brief Extremely tight floating-point comparison tolerance used by tests.
 */
#define POLYQUANT_TEST_EPSILON_EXTREMELYTIGHT 1e-14

/**
 * @brief Print a fatal diagnostic and abort execution via exception.
 *
 * @param reason Human-readable explanation of the failure.
 */
void APP_ABORT(const std::string &reason);
/**
 * @brief Print a non-fatal warning diagnostic.
 *
 * @param reason Human-readable explanation of the warning.
 */
void APP_WARN(const std::string &reason);
/**
 * @brief Print a value using Polyquant's default precision.
 *
 * @tparam T Printable type.
 * @param message Message or object to print.
 */
template <typename T> void Polyquant_cout(const T &message) { std::cout << std::setprecision(20) << message << std::endl; }

/**
 * @brief Print a boxed section header for human-readable console logs.
 *
 * @tparam T Printable type.
 * @param message Section title text.
 */
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

/**
 * @brief Convert a chemical element symbol to its atomic number.
 *
 * Unknown keys return `0`.
 *
 * @param key Element symbol such as `"H"` or `"O"`.
 * @return Atomic number or `0` when unknown.
 */
int atom_symb_to_num(std::string key);

/**
 * @brief Convert a chemical element symbol to its isotopic mass in atomic mass units.
 *
 * Unknown keys return `0.0`.
 *
 * @param key Element symbol such as `"H"` or `"O"`.
 * @return Mass in atomic mass units or `0.0` when unknown.
 */
double atom_symb_to_mass(std::string key);

/**
 * @brief Return the default spin quantum number associated with a named quantum species.
 *
 * The current implementation returns `0.5` for every key.
 *
 * @param key Quantum species label.
 * @return Spin quantum number.
 */
double quantum_symb_to_spin(std::string key);

/**
 * @brief Convert a named quantum species to its mass in electron-mass units.
 *
 * Atomic species reuse the stored atomic-mass table; `"electron"` returns
 * `1.0`. Unknown keys return `0.0`.
 *
 * @param key Quantum species label.
 * @return Mass or `0.0` when unknown.
 */
double quantum_symb_to_mass(std::string key);

/**
 * @brief Convert a named quantum species to its integer charge.
 *
 * Atomic species reuse atomic numbers, `"electron"` returns `-1`, and unknown
 * keys return `0`.
 *
 * @param key Quantum species label.
 * @return Integer charge.
 */
int quantum_symb_to_charge(std::string key);

/**
 * @brief Print the Polyquant ASCII-art program banner.
 */
void Polyquant_dump_program_header();

/**
 * @brief Pretty-print a JSON object to standard output.
 *
 * @param json_obj JSON object to print.
 */
void Polyquant_dump_json(const json &json_obj);

/**
 * @brief Print a standard vector with a title block.
 *
 * @tparam T Scalar element type.
 * @param vec Vector to print.
 * @param title Title shown above the data.
 */
template <typename T> void Polyquant_dump_stdvec(const std::vector<T> &vec, const std::string &title) {
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << title << std::endl;
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  for (size_t i = 0; i < vec.size(); i++) {
    std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << vec[i] << std::endl;
  }
};

/**
 * @brief Print a dense Eigen vector with a title block.
 *
 * @tparam T Scalar element type.
 * @param vec Dense vector to print.
 * @param title Title shown above the data.
 */
template <typename T> void Polyquant_dump_vec(const Eigen::Matrix<T, Eigen::Dynamic, 1> &vec, const std::string &title) {
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << title << std::endl;
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  for (size_t i = 0; i < vec.rows(); i++) {
    std::cout << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << vec(i, 0) << std::endl;
  }
};

/**
 * @brief Write a string to a text file.
 *
 * Existing contents are overwritten.
 *
 * @param str String to write.
 * @param filename Output path.
 */
inline void Polyquant_dump_str_to_file(const std::string &str, const std::string &filename) {
  std::ofstream strfile;
  strfile.open(filename);
  strfile << str << std::endl;
  strfile.close();
};

/**
 * @brief Read one numeric value per line into a standard vector.
 *
 * Existing contents of `vec` are cleared first.
 *
 * @tparam t Scalar element type.
 * @param vec Destination vector.
 * @param filename Input path.
 */
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

/**
 * @brief Write a vector-of-vectors as whitespace-formatted rows.
 *
 * @tparam t Scalar element type.
 * @param vec Nested vector to write.
 * @param filename Output path.
 */
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

/**
 * @brief Read whitespace-formatted matrix rows into a vector-of-vectors.
 *
 * Existing contents of `vec` are cleared first.
 *
 * @tparam t Scalar element type.
 * @param vec Destination nested vector.
 * @param filename Input path.
 */
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
 * @brief Write a dense Eigen vector to a text file.
 *
 * @tparam T Scalar element type.
 * @param vec Dense vector to write.
 * @param filename Output path.
 */
template <typename T> void Polyquant_dump_vec_to_file(const Eigen::Matrix<T, Eigen::Dynamic, 1> &vec, const std::string &filename) {
  std::ofstream vecfile;
  vecfile.open(filename);
  for (Eigen::Index i = 0; i < vec.rows(); i++) {
    vecfile << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << vec(i, 0) << std::endl;
  }
};

/**
 * @brief Print the diagonal of an Eigen diagonal matrix.
 *
 * @tparam T Scalar element type.
 * @param mat Diagonal matrix to print.
 * @param title Title shown above the data.
 */
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
 * @brief Print a dense Eigen matrix.
 *
 * @tparam T Scalar element type.
 * @param mat Dense matrix to print.
 * @param title Title shown above the data.
 */
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
 * @brief Print a labeled character table.
 *
 * @tparam T Scalar element type.
 * @param mat Character table values.
 * @param title Base title string.
 * @param row_titles Row labels.
 * @param col_titles Column labels.
 */
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
/**
 * @brief Print an irrep direct-product lookup table.
 *
 * Negative matrix entries are rendered as `"MULT"` to indicate multiple
 * resulting irreps.
 *
 * @tparam T Integer-like matrix element type.
 * @param mat Direct-product table.
 * @param title Base title string.
 * @param row_titles Irrep labels for both rows and columns.
 */
template <typename T> void Polyquant_dump_direct_product_table(const Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> &mat, const std::string &title, const std::vector<std::string> &row_titles) {
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << title << " direct product table" << std::endl;
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << std::fixed << std::showpoint << std::setw(10) << std::setprecision(10) << ""
            << "  ";
  for (size_t j = 0; j < mat.cols(); j++) {
    std::cout << std::fixed << std::showpoint << std::setw(10) << std::setprecision(10) << row_titles[j] << "  ";
  }
  std::cout << std::endl;

  std::cout << std::fixed << std::showpoint << std::setw(10) << std::setprecision(10) << ""
            << "  ";
  for (size_t j = 0; j < mat.cols(); j++) {
    std::cout << std::fixed << std::showpoint << std::setw(10) << std::setprecision(10) << "---"
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
 * @brief Write the diagonal of an Eigen diagonal matrix to a text file.
 *
 * @tparam T Scalar element type.
 * @param mat Diagonal matrix to write.
 * @param filename Output path.
 */
template <typename T> void Polyquant_dump_diagmat_to_file(const Eigen::DiagonalMatrix<T, Eigen::Dynamic> &mat, const std::string &filename) {
  std::ofstream matfile;
  matfile.open(filename);
  for (Eigen::Index i = 0; i < mat.rows(); i++) {
    matfile << std::fixed << std::showpoint << std::setw(20) << std::setprecision(10) << mat.diagonal()(i) << "  ";
    matfile << std::endl;
  }
};
/**
 * @brief Write a sparse matrix by explicitly iterating over all entries.
 *
 * This produces a dense text representation and can therefore be expensive for
 * large matrices.
 *
 * @tparam T Scalar element type.
 * @param mat Sparse matrix to write.
 * @param filename Output path.
 */
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
 * @brief Write a dense Eigen matrix to a text file.
 *
 * @tparam T Scalar element type.
 * @param mat Dense matrix to write.
 * @param filename Output path.
 */
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
 * @brief Write a Gaussian94-style basis block to disk.
 *
 * Comment text following `!` is stripped and blank/comment-only lines are
 * omitted. The file is wrapped with the leading delimiter expected by some
 * downstream basis readers.
 *
 * @param contents Basis text to normalize and write.
 * @param filename Output path.
 */
void Polyquant_dump_basis_to_file(const std::string &contents, const std::string &filename);

/**
 * @brief Print orbital energies, occupations, symmetry labels, and coefficients.
 *
 * Output is organized by particle type, spin block, and groups of molecular
 * orbitals.
 *
 * @param C MO coefficient matrices `[idx_part][spin_idx]`.
 * @param E_orbitals Orbital energy vectors `[idx_part][spin_idx]`.
 * @param occ Orbital occupation vectors `[idx_part][spin_idx]`.
 * @param symm_labels Orbital symmetry labels `[idx_part][spin_idx][mo_idx]`.
 * @param title Heading printed before the orbital table.
 * @param ao_labels AO labels `[idx_part][ao_idx][label_component]`.
 */
void dump_orbitals(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &C, std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> &E_orbitals,
                   std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> &occ, std::vector<std::vector<std::vector<std::string>>> &symm_labels, std::string title,
                   std::vector<std::vector<std::vector<std::string>>> &ao_labels);

// TODO move these functions to some sort of algorithms folder or something
/**
 * @brief Hash a pair of vectors for unordered containers.
 *
 * @tparam T Element type.
 */
template <typename T> struct PairVectorHash {
  /**
   * @brief Combine the hashes of both vectors in a pair.
   *
   * @param v Pair of vectors to hash in order.
   * @return Combined hash value suitable for unordered containers.
   */
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
/**
 * @brief Hash a vector for unordered containers.
 *
 * @tparam T Element type.
 */
template <typename T> struct VectorHash {
  /**
   * @brief Combine the hashes of all elements in a vector.
   *
   * @param v Vector to hash in order.
   * @return Combined hash value suitable for unordered containers.
   */
  size_t operator()(const std::vector<T> &v) const {
    std::hash<T> hasher;
    size_t seed = 0;
    for (T i : v) {
      seed ^= hasher(i) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    }
    return seed;
  }
};
/**
 * @brief Hash a pair of scalar values for unordered containers.
 *
 * @tparam T Element type.
 */
template <typename T> struct PairHash {
  /**
   * @brief Combine the hashes of both values in a pair.
   *
   * @param v Pair to hash in order.
   * @return Combined hash value suitable for unordered containers.
   */
  size_t operator()(const std::pair<T, T> &v) const {
    std::hash<T> hasher;
    size_t seed = 0;
    seed ^= hasher(v.first) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    seed ^= hasher(v.second) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    return seed;
  }
};
/**
 * @brief Return indices that sort a standard vector under a comparator.
 *
 * The default comparator sorts in descending order via `std::greater<>`.
 *
 * @tparam T Element type.
 * @tparam CompType Comparator type.
 * @param in_vec Input vector.
 * @param comparison Comparator used for ordering.
 * @return Permutation indices that sort `in_vec`.
 */
template <typename T, typename CompType = std::greater<>> std::vector<int> argsort(const std::vector<T> &in_vec, CompType comparison = CompType{}) {
  std::vector<int> indices(in_vec.size());
  std::iota(indices.begin(), indices.end(), 0);
  std::sort(indices.begin(), indices.end(), [&in_vec, &comparison](int left, int right) -> bool { return comparison(in_vec[left], in_vec[right]); });
  return indices;
};
/**
 * @brief Return indices that sort an Eigen vector under a comparator.
 *
 * The default comparator sorts in descending order via `std::greater<>`.
 *
 * @tparam T Element type.
 * @tparam CompType Comparator type.
 * @param in_vec Input Eigen vector.
 * @param comparison Comparator used for ordering.
 * @return Permutation indices that sort `in_vec`.
 */
template <typename T, typename CompType = std::greater<>> std::vector<int> argsort(const Eigen::Matrix<T, Eigen::Dynamic, 1> &in_vec, CompType comparison = CompType{}) {
  std::vector<int> indices(in_vec.size());
  std::iota(indices.begin(), indices.end(), 0);
  std::sort(indices.begin(), indices.end(), [&in_vec, &comparison](int left, int right) -> bool { return comparison(in_vec(left), in_vec(right)); });
  return indices;
};
} // namespace polyquant
#endif
