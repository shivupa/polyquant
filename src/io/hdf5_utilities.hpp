#ifndef POLYQUANT_INPUT_HDF5_H
#define POLYQUANT_INPUT_HDF5_H
#include "io/lfu_cache.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include <Eigen/Dense>
#include <Eigen/Eigen>
#include <algorithm>
#include <cctype>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <h5cpp/hdf5.hpp>
#include <iomanip>
#include <iostream>
#include <libint2.hpp>       // IWYU pragma: keep
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <string>
#include <vector>
#include <fmt/core.h>

namespace polyquant {

/**
 * @brief A class to assist with HDF5 dumping
 *
 */
class POLYQUANT_HDF5 {
public:
  POLYQUANT_HDF5() = default;
  /**
   * @brief Construct a HDF5 object using the create_file function.
   *
   * @param filename the file to write to.
   */
  POLYQUANT_HDF5(const std::string &fname);
  /**
   * @brief creates a HDF5 file
   *
   * @param filename the file to write to.
   */
  void create_file(const std::string &fname);
  /**
   * @brief the hdf5 file object
   *
   */
  hdf5::file::File hdf5_file;
  std::string filename;

  void dump_application();
  void dump_PBC(bool PBC);
  void dump_atoms(int num_atom, int num_species, std::vector<int> atomic_species_ids, std::vector<int> atomic_number, std::vector<int> atomic_charge, std::vector<int> core_elec,
                  std::vector<std::string> atomic_names, std::vector<std::vector<double>> atomic_centers);
  void dump_generalparameters(bool complex_vals, bool ecp, bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha, int num_part_beta, int num_part_total, int multiplicity);
  void dump_MOs(std::string quantum_part_name, int num_ao, int num_mo, std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>> E_orb,
                std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff);
  void dump_basis(std::string quantum_part_name, std::vector<std::string> atomic_names, std::vector<std::vector<libint2::Shell>> unique_shells);
  void dump_mf_to_hdf5_for_QMCPACK(bool pbc, bool complex_vals, bool ecp, bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha, int num_part_beta, int num_part_total,
                                   int multiplicity, int num_atom, int num_species, std::string quantum_part_name, std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>> E_orb,
                                   std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff, std::vector<int> atomic_species_ids, std::vector<int> atomic_number,
                                   std::vector<int> atomic_charge, std::vector<int> core_elec, std::vector<std::string> atomic_names, std::vector<std::vector<double>> atomic_centers,
                                   std::vector<std::vector<libint2::Shell>> unique_shells);
  void dump_post_mf_to_hdf5_for_QMCPACK(std::vector<std::vector<std::vector<std::vector<uint64_t>>>> dets, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C, int N_dets, int N_states, int N_mo);

private:
  hdf5::node::Group root_group;

  hdf5::dataspace::Simple simple_space = hdf5::dataspace::Simple({1});
  hdf5::datatype::Datatype bool_type = hdf5::datatype::create<bool>();
  hdf5::datatype::Datatype int_type = hdf5::datatype::create<int>();
  hdf5::datatype::Datatype double_type = hdf5::datatype::create<double>();
  hdf5::datatype::Datatype vec_int_type = hdf5::datatype::create<std::vector<int>>();
  hdf5::datatype::Datatype vec_double_type = hdf5::datatype::create<std::vector<double>>();
};
} // namespace polyquant
#endif
