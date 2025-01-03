#ifndef POLYQUANT_BASIS_H
#define POLYQUANT_BASIS_H
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <algorithm>
#include <cpr/cpr.h> // IWYU pragma: keep
#include <filesystem>
#include <iterator>
#include <libint2.hpp> // IWYU pragma: keep
#include <numbers>
#include <stdlib.h>
#include <string>

namespace polyquant {

/**
 * @brief A class to hold basis information.
 *
 */
class POLYQUANT_BASIS {
public:
  POLYQUANT_BASIS() = default;
  /**
   * @brief Construct a new polyquant basis object by calling to load_basis.
   *
   * @param input the data from the input file.
   * @param molecule the molecule data.
   */
  POLYQUANT_BASIS(std::shared_ptr<POLYQUANT_INPUT> input_params, std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry, std::shared_ptr<POLYQUANT_MOLECULE> input_molecule);
  /**
   * @brief Load a basis using the libint built in basis library.
   *
   * @param input
   * @param molecule
   */
  void load_basis(std::shared_ptr<POLYQUANT_INPUT> input_params, std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry, std::shared_ptr<POLYQUANT_MOLECULE> input_molecule);

  void load_quantum_particle_basis(const std::string &quantum_part_key, libint2::BasisSet &qp_basis);
  void load_quantum_particle_atom_basis(const std::string &quantum_part_key, const std::string &classical_part_key, const CLASSICAL_PARTICLE_SET &classical_part, libint2::BasisSet &qp_basis);
  void load_quantum_particle_atom_basis_library(const std::string &quantum_part_key, const std::string &classical_part_key, const int &center_basis_idx, libint2::BasisSet &qp_basis);
  void load_quantum_particle_atom_basis_custom(const std::string &quantum_part_key, const std::string &classical_part_key, const int &center_basis_idx, const CLASSICAL_PARTICLE_SET &classical_part,
                                               libint2::BasisSet &qp_basis);
  void set_pure_from_input();
  void set_libint_shell_norm();
  void print_basis();
  void set_ao_labels();

  std::vector<std::vector<std::string>> gamess_cartesian_ordering_labels = {
      {""},
      {"x", "y", "z"},
      {"xx", "yy", "zz", "xy", "xz", "yz"},
      {"xxx", "yyy", "zzz", "xxy", "xxz", "yyx", "yyz", "zzx", "zzy", "xyz"},
      {"xxxx", "yyyy", "zzzz", "xxxy", "xxxz", "yyyx", "yyyz", "zzzx", "zzzy", "xxyy", "xxzz", "yyzz", "xxyz", "yyxz", "zzxy"},
      {"xxxxx", "yyyyy", "zzzzz", "xxxxy", "xxxxz", "yyyyx", "yyyyz", "zzzzx", "zzzzy", "xxxyy", "xxxzz", "yyyxx", "yyyzz", "zzzxx", "zzzyy", "xxxyz", "yyyxz", "zzzxy", "xxyyz", "xxzzy", "yyzzx"},
      {"xxxxxx", "yyyyyy", "zzzzzz", "xxxxxy", "xxxxxz", "yyyyyx", "yyyyyz", "zzzzzx", "zzzzzy", "xxxxyy", "xxxxzz", "yyyyxx", "yyyyzz", "zzzzxx",
       "zzzzyy", "xxxxyz", "yyyyxz", "zzzzxy", "xxxyyy", "xxxzzz", "yyyzzz", "xxxyyz", "xxxzzy", "yyyxxz", "yyyzzx", "zzzxxy", "zzzyyx", "xxyyzz"}};

  void symmetrize_basis();
  void symmetrize_basis_SO3();
  void reorder_combined_salcs(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &combined_salcs, const size_t basis_idx);
  /**
   * @brief The name of the basis to load
   *
   */
  // std::vector<std::string> basis_name;
  std::shared_ptr<POLYQUANT_INPUT> input;
  std::shared_ptr<POLYQUANT_SYMMETRY> symmetry;
  std::shared_ptr<POLYQUANT_MOLECULE> molecule;
  /**
   * @brief the libint2 basis object
   *
   */
  std::vector<libint2::BasisSet> basis;
  // basis idx , function idx, (atom lbl,
  std::vector<std::vector<std::vector<std::string>>> ao_labels;
  /**
   * @brief Number of basis functions
   *
   */
  std::vector<size_t> num_basis;

  // indexing particle idx, irrep idx
  std::vector<std::vector<int>> salc_per_irrep;
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> salcs;

  // symmetry info we will want to store for symmetrizing wfn
  std::vector<std::vector<msym_partner_function_t>> pf;
  std::vector<std::vector<int>> species;
  bool pure = true;
};
} // namespace polyquant
#endif
