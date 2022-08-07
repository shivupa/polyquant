#ifndef POLYQUANT_INPUT_FCIDUMP_H
#define POLYQUANT_INPUT_FCIDUMP_H
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
   * @brief the fcidump file object
   *
   */
  std::ofstream fcidump_file;
  std::string filename;
  
  void dump(int num_mo, int num_part_total,int ms2, bool restricted, std::vector<int> MO_symmetry_labels, int isym, std::string point_group, std::vector<std::vector<Eigen::Matrix<double,Eigen::dynamic, Eigen::Dynamic>>> mo_one_body_ints, std::vector<std::vector<std::vector<std::vector<Eigen::Matrix<double,Eigen::Dynamic, Eigen::Dynamic>>>>>mo_two_body_ints, int quantum_part_a_idx,int quantum_part_b_idx );
  /**
   * @brief main funtion to handle FCIDUMP file generation
   *
   * @param num_mo number of molecular orbitals. This will probably need to be fed as quantum_part_a_nmo, quantum_part_b_nmo in the future
   *
   * @param num_part_total, to serve as nelec for fcidump purposes
   *
   * @param ms2 spin polarization
   *
   * @param restricted, a boolean indicated whether there is one (restricted,0) or multiple sets (unrestricted,1) of orbitals to consider
   *
   * @param quantum_part_*_idx index of particles to parse
   *
   * @param MO_symmetry_labels symmetry labels for MOs, currently all in C1 group
   *
   * @param isym currently unused, but included by some for interfacing with NECI FCIDUMP
   *
   * @param point_group string label of current symmetry group of molecule
   *
   * @param mo_one_body_ints one-body integrals as stored in source code
   *
   * @param mo_two_body_ints two-body integrals as stored in source code
   *
   * @param quantum_part_*_idx index of particles to parse
   * 
   */

   // variables
  std::ofstream fcidump_file;
  std::string filename;
  int quantum_part_a_index;
  int quantum_part_b_index;
private:
  void dump_header(int num_mo, int num_part_tot, int ms2, bool restricted, std::vector<int> MO_symmetry_labels, int isym, std::string point_group);
  void dump_one_body_ints(std::vector<std::vector<double,Eigen::Dynamic,Eigen::Dynamic>>mo_one_body_ints);
  void dump_two_body_ints(std::vector<std::vector,std::vector<std::vector<double,Eigen::Dynamic,Eigen::Dynamic>>>> mo_two_body_ints);
  void dump_other_vals();
};
} // namespace polyquant
#endif
