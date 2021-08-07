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
//#include <math.h>
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
  POLYQUANT_BASIS(const POLYQUANT_INPUT &input,
                  const POLYQUANT_MOLECULE &molecule);
  /**
   * @brief Load a basis using the libint built in basis library.
   *
   * @param input
   * @param molecule
   */
  void load_basis(const POLYQUANT_INPUT &input,
                  const POLYQUANT_MOLECULE &molecule);

  void load_quantum_particle_basis(const POLYQUANT_INPUT &input,
                                   const POLYQUANT_MOLECULE &molecule,
                                   const std::string &quantum_part_key,
                                   libint2::BasisSet &qp_basis);
  void
  load_quantum_particle_atom_basis(const POLYQUANT_INPUT &input,
                                   const POLYQUANT_MOLECULE &molecule,
                                   const std::string &quantum_part_key,
                                   const std::string &classical_part_key,
                                   const CLASSICAL_PARTICLE_SET &classical_part,
                                   libint2::BasisSet &qp_basis);
  void load_quantum_particle_atom_basis_library(
      const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule,
      const std::string &quantum_part_key,
      const std::string &classical_part_key, const int &center_basis_idx,
      libint2::BasisSet &qp_basis);
  void load_quantum_particle_atom_basis_custom(
      const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule,
      const std::string &quantum_part_key,
      const std::string &classical_part_key, const int &center_basis_idx,
      const CLASSICAL_PARTICLE_SET &classical_part,
      libint2::BasisSet &qp_basis);
  void set_pure_from_input(const POLYQUANT_INPUT &input);
  void set_libint_shell_norm();
  void apply_pyscf_normalization();
  /**
   * @brief The name of the basis to load
   *
   */
  // std::vector<std::string> basis_name;
  /**
   * @brief the libint2 basis object
   *
   */
  std::vector<libint2::BasisSet> basis;
  /**
   * @brief Number of basis functions
   *
   */
  std::vector<size_t> num_basis;
  bool pure = true;
};
} // namespace polyquant
#endif
