#ifndef POLYQUANT_INPUT_MOLDEN_H
#define POLYQUANT_INPUT_MOLDEN_H

/**
 * @file molden_utilities.hpp
 * @brief MOLDEN-format orbital and basis-set export helpers.
 */
#include "io/timer.hpp"
#include "io/utils.hpp"
#include <Eigen/Dense>
#include <Eigen/Eigen>
#include <algorithm>
#include <cctype>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <libint2.hpp> // IWYU pragma: keep
#include <libint2/cgshell_ordering.h>
#include <libint2/shgshell_ordering.h>
#include <string>
#include <vector>

namespace polyquant {

/**
 * @brief Writer for single-particle MOLDEN files.
 *
 * The writer owns an output stream and emits a complete MOLDEN file consisting
 * of header, atom list, AO basis description, and alpha/beta orbital blocks.
 * AO coefficients are reordered into the conventions expected by MOLDEN
 * consumers, with a special p-shell treatment for interoperability.
 */
class POLYQUANT_MOLDEN {
public:
  POLYQUANT_MOLDEN() = default;
  /**
   * @brief Close the file if it is still open.
   */
  ~POLYQUANT_MOLDEN() {
    if (this->molden_file.is_open()) {
      this->molden_file.close();
    }
  }
  /**
   * @brief Construct a writer and open the target MOLDEN file.
   *
   * @param fname Output filename.
   */
  POLYQUANT_MOLDEN(const std::string &fname);
  /**
   * @brief Open or truncate the target MOLDEN file.
   *
   * Existing files are overwritten.
   *
   * @param fname Output filename.
   */
  void create_file(const std::string &fname);
  /**
   * @brief Owned output stream.
   */
  std::ofstream molden_file;
  /**
   * @brief Path of the currently open MOLDEN file.
   */
  std::string filename;
  /**
   * @brief Write a complete MOLDEN file.
   *
   * @param atoms Classical centers in Libint atom format, written in atomic units.
   * @param basis AO basis set whose shell ordering defines coefficient reordering.
   * @param MO_a_coeff Alpha-orbital coefficients in AO-major order.
   * @param MO_a_energy Alpha-orbital energies.
   * @param MO_a_symmetry_labels Alpha-orbital symmetry labels.
   * @param MO_a_occupation Alpha-orbital occupations.
   * @param MO_b_coeff Beta-orbital coefficients in AO-major order.
   * @param MO_b_energy Beta-orbital energies.
   * @param MO_b_symmetry_labels Beta-orbital symmetry labels.
   * @param MO_b_occupation Beta-orbital occupations.
   */
  void dump(std::vector<libint2::Atom> &atoms, libint2::BasisSet &basis, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &MO_a_coeff, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_a_energy,
            std::vector<std::string> &MO_a_symmetry_labels, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_a_occupation, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &MO_b_coeff,
            Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_b_energy, std::vector<std::string> &MO_b_symmetry_labels, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_b_occupation);

protected:
  /**
   * @brief Write the MOLDEN file header.
   */
  void dump_header();
  /**
   * @brief Write the `[Atoms]` section in atomic units.
   *
   * @param atoms Classical centers in Libint atom format.
   */
  void dump_atoms(std::vector<libint2::Atom> &atoms);

  /**
   * @brief Dump the AO basis
   *
   * Molden Expected formatting
   * \rst
   * +--------+---+---------------------------------------------------------------------------------------------------------+---------------------------------------------+
   * | symbol | l | cartesian ordering                                                                                      | spherical ordering                          |
   * +========+===+=========================================================================================================+=============================================+
   * | s      | 0 | 0                                                                                                       | s+0                                         |
   * +--------+---+---------------------------------------------------------------------------------------------------------+---------------------------------------------+
   * | p      | 1 | px, py, pz                                                                                              | p+1,p-1,p+0                                 |
   * +--------+---+---------------------------------------------------------------------------------------------------------+---------------------------------------------+
   * | d      | 2 | dxx, dyy, dzz, dxy, dxz, dyz                                                                            | d+0, d+1, d-1, d+2, d-2                     |
   * +--------+---+---------------------------------------------------------------------------------------------------------+---------------------------------------------+
   * | f      | 3 | fxxx, fyyy, fzzz, fxyy, fxxy, fxxz, fxzz, fyzz, fyyz, fxyz                                              | f+0, f+1, f-1, f+2, f-2, f+3, f-3           |
   * +--------+---+---------------------------------------------------------------------------------------------------------+---------------------------------------------+
   * | g      | 4 | gxxxx, gyyyy, gzzzz, gxxxy, gxxxz, gxyyy, gyyyz, gxzzz, gyzzz, gxxyy, gxxzz, gyyzz, gxxyz, gxyyz, gxyzz | g+0, g+1, g-1, g+2, g-2, g+3, g-3, g+4, g-4 |
   * +--------+---+---------------------------------------------------------------------------------------------------------+---------------------------------------------+
   * \endrst
   * Our internal angular momentum conventions
   * \rst
   * +--------+---+---------------------------------------------------------------------------------------------------------+---------------------------------------------+
   * | symbol | l | cartesian ordering                                                                                      | spherical ordering                          |
   * +========+===+=========================================================================================================+=============================================+
   * | s      | 0 | 0                                                                                                       | s+0                                         |
   * +--------+---+---------------------------------------------------------------------------------------------------------+---------------------------------------------+
   * | p      | 1 | px, py, pz                                                                                              | p-1, p+0, p+1                               |
   * +--------+---+---------------------------------------------------------------------------------------------------------+---------------------------------------------+
   * | d      | 2 | dxx, dyy, dzz, dxy, dxz, dyz                                                                            | d-2, d-1, d+0, d+1, d+2                     |
   * +--------+---+---------------------------------------------------------------------------------------------------------+---------------------------------------------+
   * | f      | 3 | fxxx, fyyy, fzzz, fxxy, fxxz, fxyy, fyyz, fxzz, fyzz, fxyz                                              | f-3, f-2, f-1, f+0, f+1, f+2, f+3           |
   * +--------+---+---------------------------------------------------------------------------------------------------------+---------------------------------------------+
   * | g      | 4 | gxxxx, gyyyy, gzzzz, gxxxy, gxxxz, gxyyy, gyyyz, gxzzz, gyzzz, gxxyy, gxxzz, gyyzz, gxxyz, gxyyz, gxyzz | g-4, g-3, g-2, g-1, g+0, g+1, g+2, g+3, g+4 |
   * +--------+---+---------------------------------------------------------------------------------------------------------+---------------------------------------------+
   * \endrst
   *
   * For the consumers of molden files, such as pyscf and iodata, it is assumed that p orbitals are ordered according as cartesian functions.
   *
   * \rst
   * +----------------------------------------+----------+---------+
   * | Circumstance                           | sph      | cart    |
   * +========================================+==========+=========+
   * | (A) Current FOR_SOLIDHARM_MOLDEN       | 0, 1, -1 | z, x, y |
   * +----------------------------------------+----------+---------+
   * | (B) Accepted MOLDEN (cart for p shell) | 1, -1, 0 | x, y, z |
   * +----------------------------------------+----------+---------+
   * | Current internal sph harm              | -1, 0, 1 | y, z, x |
   * +----------------------------------------+----------+---------+
   * \endrst
   *
   * For compatability, this would mean that we would need to reorder as follows
   *
   * \rst
   * +-------------------------------+---------+
   * | Reordering                    | idx     |
   * +===============================+=========+
   * | Reorder internal to match (A) | 1, 2, 0 |
   * +-------------------------------+---------+
   * | Reorder internal to match (B) | 2, 0, 1 |
   * +-------------------------------+---------+
   * \endrst
   */
  void dump_basis(std::vector<libint2::Atom> &atoms, libint2::BasisSet &basis);
  /**
   * @brief Write the `[MO]` section for alpha and beta orbitals.
   *
   * @param MO_a_coeff Alpha-orbital coefficients.
   * @param MO_a_energy Alpha-orbital energies.
   * @param MO_a_symmetry_labels Alpha-orbital symmetry labels.
   * @param MO_a_occupation Alpha-orbital occupations.
   * @param MO_b_coeff Beta-orbital coefficients.
   * @param MO_b_energy Beta-orbital energies.
   * @param MO_b_symmetry_labels Beta-orbital symmetry labels.
   * @param MO_b_occupation Beta-orbital occupations.
   */
  void dump_orbitals(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &MO_a_coeff, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_a_energy, std::vector<std::string> &MO_a_symmetry_labels,
                     Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_a_occupation, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &MO_b_coeff,
                     Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_b_energy, std::vector<std::string> &MO_b_symmetry_labels, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_b_occupation);
  /**
   * @brief AO reordering map from internal Libint ordering to MOLDEN ordering.
   */
  std::vector<long> ao_map;
  // void dump_generalparameters(bool complex_vals, bool ecp, bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha, int num_part_beta, int num_part_total, int multiplicity);
  // void dump_MOs(std::string quantum_part_name, int num_ao, int num_mo, std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>> E_orb,
  //              std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff);
  // void dump_basis(std::vector<std::string> atomic_names, std::vector<std::vector<libint2::Shell>> unique_shells);
  // void dump_mf_to_molden_for_QMCPACK(bool pbc, bool complex_vals, bool ecp, bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha, int num_part_beta, int num_part_total,
  //                                   int multiplicity, int num_atom, int num_species, std::string quantum_part_name, std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>> E_orb,
  //                                   std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff, std::vector<int> atomic_species_ids, std::vector<int> atomic_number,
  //                                   std::vector<int> atomic_charge, std::vector<int> core_elec, std::vector<std::string> atomic_names, std::vector<std::vector<double>> atomic_centers,
  //                                   std::vector<std::vector<libint2::Shell>> unique_shells);
  // void dump_post_mf_to_molden_for_QMCPACK(std::vector<std::vector<std::vector<std::vector<uint64_t>>>> dets, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C, int N_dets, int N_states,
  //                                        int N_mo);
};
} // namespace polyquant
#endif
