#ifndef POLYQUANT_INPUT_HDF5_H
#define POLYQUANT_INPUT_HDF5_H
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
#include <highfive/H5Easy.hpp>
#include <highfive/H5File.hpp>
#include <iomanip>
#include <iostream>
#include <libint2.hpp>       // IWYU pragma: keep
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <string>
#include <vector>

namespace polyquant {

struct POLYQUANT_STR_TYPE : public HighFive::DataType {
  // adapted from https://github.com/BlueBrain/HighFive/issues/678#issuecomment-1402315600
  POLYQUANT_STR_TYPE(std::string val) {
    _hid = H5Tcopy(H5T_C_S1);
    if (H5Tset_size(_hid, val.size()) < 0) {
      HighFive::HDF5ErrMapper::ToException<HighFive::DataTypeException>("Unable to define datatype size to str size");
    }
    H5Tset_cset(_hid, H5T_CSET_ASCII);
    H5Tset_strpad(_hid, H5T_STR_NULLPAD);
  }
};

/**
 * @brief A class to assist with HDF5 dumping
 *
 */
class POLYQUANT_HDF5 {
public:
  POLYQUANT_HDF5() = default;
  ~POLYQUANT_HDF5() {}
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
  std::unique_ptr<HighFive::File> hdf5_file;
  std::string filename;

  template <typename T> void load_data(T &output, std::string path) { output = H5Easy::load<T>(*hdf5_file, path); }

  bool exist(std::string path) { return hdf5_file->exist(path); }
  void write_str(std::string path, std::string val);
  void dump_application();
  void dump_PBC(bool PBC);
  void dump_atoms(int num_atom, int num_species, std::vector<int> atomic_species_ids, std::vector<int> atomic_number, std::vector<int> atomic_charge, std::vector<int> core_elec,
                  std::vector<std::string> atomic_names, std::vector<std::vector<double>> atomic_centers);
  void dump_generalparameters(bool complex_vals, bool ecp, bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha, int num_part_beta, int num_part_total, int multiplicity);
  void dump_MOs(std::string quantum_part_name, int num_ao, int num_mo, std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>> E_orb,
                std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff, std::vector<std::vector<int>> mo_symm_label_idxs, std::vector<std::vector<std::string>> mo_symm_labels);
  void dump_basis(std::string quantum_part_name, std::vector<std::string> atomic_names, std::vector<std::vector<libint2::Shell>> unique_shells);
  void dump_mf_to_hdf5_for_QMCPACK(bool pbc, bool complex_vals, bool ecp, bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha, int num_part_beta, int num_part_total,
                                   int multiplicity, int num_atom, int num_species, std::string quantum_part_name, std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>> E_orb,
                                   std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff, std::vector<std::vector<int>> mo_symm_label_idxs,
                                   std::vector<std::vector<std::string>> mo_symm_labels, std::vector<int> atomic_species_ids, std::vector<int> atomic_number, std::vector<int> atomic_charge,
                                   std::vector<int> core_elec, std::vector<std::string> atomic_names, std::vector<std::vector<double>> atomic_centers,
                                   std::vector<std::vector<libint2::Shell>> unique_shells);
  void dump_post_mf_to_hdf5_for_QMCPACK(std::vector<std::vector<std::vector<std::vector<uint64_t>>>> dets, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C, int N_dets, int N_states, int N_mo);
};
} // namespace polyquant
#endif
