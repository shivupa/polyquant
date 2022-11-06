#ifndef POLYQUANT_INPUT_FCIDUMP_H
#define POLYQUANT_INPUT_FCIDUMP_H
#include "integral/integral.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include <Eigen/Dense>
#include <Eigen/Eigen>
#include <algorithm>
#include <cctype>
#include <chrono>
#include <filesystem>
#include <fmt/core.h>
#include <fstream>
#include <h5cpp/hdf5.hpp> //probably don't need
#include <iomanip>
#include <iostream>
#include <libint2.hpp>       // IWYU pragma: keep
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <string>
#include <vector>

namespace polyquant {

/**
 * @brief A class to assist with FCIDUMP file generation
 *
 */
class POLYQUANT_FCIDUMP {
public:
  POLYQUANT_FCIDUMP() = default;
  ~POLYQUANT_FCIDUMP() { fcidump_file.close(); }
  /**
   * @brief Construct a FCIDUMP object using the create_file function.
   *
   * @param filename the file to write to.
   */
  POLYQUANT_FCIDUMP(const std::string &fname);
  /**
   * @brief creates a FCIDUMP file
   *
   * @param filename the file to write to.
   */
  void create_file(const std::string &fname);

  /**
   * @brief main funtion to handle FCIDUMP file generation
   *
   * @param num_mo number of molecular orbitals. This will probably need to be fed as quantum_part_a_nmo, quantum_part_b_nmo in the future
   *
   * @param num_part_total, to serve as nelec for fcidump purposes
   *
   * @param ms2 spin polarization
   *
   * @param restricted, a boolean indicated whether there is one (restricted,1) or multiple sets (unrestricted,0) of orbitals to consider
   *
   * @param quantum_part_*_idx index of particles to parse
   *
   * @param mo_symmetry_labels symmetry labels for MOs, currently all in C1 group
   *
   * @param isym currently unused, but included by some for interfacing with NECI FCIDUMP
   *
   * @param point_group string label of current symmetry group of molecule
   *
   * @param input_ints an integral object storing the system integrals, 1 body and 2 body are needed here.
   *
   * @param quantum_part_*_idx index of particles to parse
   *
   */
  void dump(int num_mo, int num_part_total, int ms2, bool restricted, std::vector<int> mo_symmetry_labels, int isym, std::string point_group, std::shared_ptr<POLYQUANT_INTEGRAL> integrals,
            double E_constant, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_a_energy, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_b_energy, int quantum_part_a_idx, int quantum_part_b_idx);

  // variables
  std::ofstream fcidump_file;
  std::string filename;
  int quantum_part_a_index;
  int quantum_part_b_index;
  int spin_types = 1;
  std::shared_ptr<POLYQUANT_INTEGRAL> input_ints;

private:
  void dump_header(int num_mo, int num_part_tot, int ms2, bool restricted, std::vector<int> mo_symmetry_labels, int isym, std::string point_group);
  void dump_one_body_ints();
  void dump_two_body_ints();
  void dump_constant(double E_constant);
  void dump_MO_e(Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_a_energy, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_b_energy);
};
} // namespace polyquant
#endif
