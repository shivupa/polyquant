#ifndef POLYQUANT_INPUT_FCIDUMP_H
#define POLYQUANT_INPUT_FCIDUMP_H

/**
 * @file fcidump_utilities.hpp
 * @brief FCIDUMP-format integral export helpers.
 */
#include "integral/integral.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include <Eigen/Dense>
#include <Eigen/Eigen>
#include <algorithm>
#include <cctype>
#include <chrono>
#include <filesystem>
#include <fmt/format.h>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <libint2.hpp>       // IWYU pragma: keep
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <string>
#include <vector>

namespace polyquant {

/**
 * @brief Writer for FCIDUMP one- and two-electron integral files.
 *
 * The writer owns an output stream and serializes MO-basis one-body terms,
 * compressed two-body Coulomb terms, orbital energies, and the constant energy
 * contribution using the conventions expected by FCIDUMP readers.
 */
class POLYQUANT_FCIDUMP {
public:
  POLYQUANT_FCIDUMP() = default;
  /**
   * @brief Close the FCIDUMP file stream.
   */
  ~POLYQUANT_FCIDUMP() { fcidump_file.close(); }
  /**
   * @brief Construct a writer and open the target FCIDUMP file.
   *
   * @param fname Output filename.
   */
  POLYQUANT_FCIDUMP(const std::string &fname);
  /**
   * @brief Open or truncate the target FCIDUMP file.
   *
   * Existing files are overwritten.
   *
   * @param fname Output filename.
   */
  void create_file(const std::string &fname);

  /**
   * @brief Write a complete FCIDUMP block for one particle-pair interaction.
   *
   * For same-particle blocks this includes the FCI header, constant term,
   * orbital energies, one-body integrals, and two-body integrals. Mixed-particle
   * blocks skip same-particle-only sections and emit only the relevant two-body
   * contribution.
   *
   * @param num_mo Number of molecular orbitals in the dumped block.
   * @param num_part_total Particle count written as the FCIDUMP electron count field.
   * @param ms2 Spin polarization metadata.
   * @param restricted Whether one restricted or two unrestricted spin spaces are used.
   * @param mo_symmetry_labels Orbital symmetry labels.
   * @param isym FCIDUMP symmetry metadata field.
   * @param point_group Point-group label.
   * @param integrals Integral object containing MO one- and two-body tensors.
   * @param E_constant Constant energy contribution.
   * @param MO_a_energy Alpha-orbital energies.
   * @param MO_b_energy Beta-orbital energies.
   * @param quantum_part_a_idx First particle-type index.
   * @param quantum_part_b_idx Second particle-type index.
   */
  void dump(int num_mo, int num_part_total, int ms2, bool restricted, std::vector<int> mo_symmetry_labels, int isym, std::string point_group, std::shared_ptr<POLYQUANT_INTEGRAL> integrals,
            double E_constant, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_a_energy, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_b_energy, int quantum_part_a_idx, int quantum_part_b_idx);

  /**
   * @brief Owned FCIDUMP output stream.
   */
  std::ofstream fcidump_file;
  /**
   * @brief Path of the currently open FCIDUMP file.
   */
  std::string filename;
  /**
   * @brief First particle-type index currently being dumped.
   */
  int quantum_part_a_index;
  /**
   * @brief Second particle-type index currently being dumped.
   */
  int quantum_part_b_index;
  /**
   * @brief Number of spin blocks written per particle type: 1 restricted, 2 unrestricted.
   */
  int spin_types = 1;
  /**
   * @brief Integral source used during the current dump.
   */
  std::shared_ptr<POLYQUANT_INTEGRAL> input_ints;

private:
  /**
   * @brief Write the FCIDUMP header block.
   */
  void dump_header(int num_mo, int num_part_tot, int ms2, bool restricted, std::vector<int> mo_symmetry_labels, int isym, std::string point_group);
  /**
   * @brief Write same-particle one-body MO integrals.
   */
  void dump_one_body_ints();
  /**
   * @brief Write compressed MO two-body integrals.
   */
  void dump_two_body_ints();
  /**
   * @brief Write the constant energy term.
   *
   * @param E_constant Constant contribution.
   */
  void dump_constant(double E_constant);
  /**
   * @brief Write orbital energies in FCIDUMP extension records.
   *
   * @param MO_a_energy Alpha-orbital energies.
   * @param MO_b_energy Beta-orbital energies.
   */
  void dump_MO_e(Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_a_energy, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_b_energy);
};
} // namespace polyquant
#endif
