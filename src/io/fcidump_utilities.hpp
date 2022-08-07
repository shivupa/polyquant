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
  
  void dump(int num_mo, int num_part_total,int ms2, bool restricted, ?? MO_symmetry_labels, int isym, std::string point_group, mo_one_body_ints, mo_two_body_ints,);
  /**
   * @brief main funtion to handle FCIDUMP file generation
   *
   */

private:
  void convert_orbsym();
  void dump_header(int norb, int nelec, int ms2, std::vector<int> orbsym, std::string some_uhfrhf_indication,);
  void dump_eigenvalues();
  void dump_integrals();
  std::int particle_case;
  std::vector<int> orb_sym;
};
} // namespace polyquant
#endif
