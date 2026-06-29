#ifndef POLYQUANT_INPUT_HDF5_H
#define POLYQUANT_INPUT_HDF5_H

/**
 * @file hdf5_utilities.hpp
 * @brief HDF5 writers for QMCPACK-oriented mean-field and multideterminant data.
 */
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
#include <highfive/H5Easy.hpp>
#include <highfive/H5File.hpp>
#include <iomanip>
#include <iostream>
#include <libint2.hpp>       // IWYU pragma: keep
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <string>
#include <vector>

namespace polyquant {

/**
 * @brief Fixed-length ASCII string datatype helper for HighFive/HDF5.
 *
 * The current HDF5 string-writing path uses null-padded fixed-length ASCII
 * datasets sized to the exact input string length.
 */
struct POLYQUANT_STR_TYPE : public HighFive::DataType {
  // adapted from https://github.com/BlueBrain/HighFive/issues/678#issuecomment-1402315600
  /**
   * @brief Construct a fixed-length ASCII HDF5 string datatype.
   *
   * @param val String whose byte length determines the fixed HDF5 type size.
   */
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
 * @brief Utility wrapper around a writable HDF5 file.
 *
 * The class owns a `HighFive::File` handle and provides structured dump
 * routines for the QMCPACK-style groups used by Polyquant. Existing files are
 * opened in read/write mode and datasets are generally overwritten in place.
 *
 * Paths are hard-coded to the dataset layout expected by the rest of the code,
 * especially `/application`, `/parameters`, `/atoms`, `/basisset`,
 * `/Super_Twist`, and `/MultiDet`.
 */
class POLYQUANT_HDF5 {
public:
  POLYQUANT_HDF5() = default;
  ~POLYQUANT_HDF5() {}
  /**
   * @brief Construct an HDF5 wrapper and open or create the target file.
   *
   * @param fname HDF5 filename.
   */
  POLYQUANT_HDF5(const std::string &fname);
  /**
   * @brief Open an existing file for read/write or create it if missing.
   *
   * @param fname HDF5 filename.
   */
  void create_file(const std::string &fname);
  /**
   * @brief Owned HighFive file handle.
   */
  std::unique_ptr<HighFive::File> hdf5_file;
  /**
   * @brief Path of the currently open HDF5 file.
   */
  std::string filename;

  /**
   * @brief Load a dataset value from the open HDF5 file.
   *
   * @tparam T Output type accepted by H5Easy.
   * @param output Destination object.
   * @param path Absolute HDF5 dataset path.
   */
  template <typename T> void load_data(T &output, std::string path) { output = H5Easy::load<T>(*hdf5_file, path); }

  /**
   * @brief Check whether a dataset or group exists in the open file.
   *
   * @param path Absolute HDF5 path.
   * @return `true` if the path exists.
   */
  bool exist(std::string path) { return hdf5_file->exist(path); }
  /**
   * @brief Write a fixed-length ASCII string dataset.
   *
   * Existing datasets are overwritten. Very long strings abort because the
   * current implementation uses a fixed-size local buffer.
   *
   * @param path Absolute dataset path.
   * @param val String value to write.
   */
  void write_str(std::string path, std::string val);
  /**
   * @brief Write the generating application identifier.
   */
  void dump_application();
  /**
   * @brief Write periodic-boundary-condition metadata.
   *
   * @param PBC Whether the system is periodic.
   */
  void dump_PBC(bool PBC);
  /**
   * @brief Write atomic species metadata and Cartesian coordinates.
   *
   * @param num_atom Number of centers.
   * @param num_species Number of distinct classical species.
   * @param atomic_species_ids Species index for each center.
   * @param atomic_number Atomic number for each species.
   * @param atomic_charge Nuclear charge for each species.
   * @param core_elec Core-electron counts per species.
   * @param atomic_names Species names.
   * @param atomic_centers Cartesian positions in bohr.
   */
  void dump_atoms(int num_atom, int num_species, std::vector<int> atomic_species_ids, std::vector<int> atomic_number, std::vector<int> atomic_charge, std::vector<int> core_elec,
                  std::vector<std::string> atomic_names, std::vector<std::vector<double>> atomic_centers);
  /**
   * @brief Write general electronic or quantum-particle metadata.
   *
   * @param complex_vals Whether complex coefficients are stored.
   * @param ecp Whether pseudopotentials are present.
   * @param restricted Whether the orbital set is spin restricted.
   * @param num_ao Number of atomic orbitals.
   * @param num_mo Number of molecular orbitals.
   * @param bohr_unit Whether lengths are expressed in bohr.
   * @param num_part_alpha Number of alpha particles.
   * @param num_part_beta Number of beta particles.
   * @param num_part_total Total number of particles.
   * @param multiplicity Spin multiplicity-like metadata field.
   */
  void dump_generalparameters(bool complex_vals, bool ecp, bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha, int num_part_beta, int num_part_total, int multiplicity);
  /**
   * @brief Write molecular-orbital energies, coefficients, and symmetry labels.
   *
   * Data are stored under `/Super_Twist` with one dataset per spin block.
   *
   * @param quantum_part_name Particle-type label used for logging.
   * @param num_ao Number of atomic orbitals.
   * @param num_mo Number of molecular orbitals.
   * @param E_orb Orbital energies by spin block.
   * @param mo_coeff MO coefficient matrices by spin block.
   * @param mo_symm_label_idxs Integer symmetry labels by spin block.
   * @param mo_symm_labels String symmetry labels by spin block.
   */
  void dump_MOs(std::string quantum_part_name, int num_ao, int num_mo, std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>> E_orb,
                std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff, std::vector<std::vector<int>> mo_symm_label_idxs, std::vector<std::vector<std::string>> mo_symm_labels);
  /**
   * @brief Write basis-set metadata and normalized radial function data.
   *
   * The shell coefficients are renormalized to match the conventions expected
   * by QMCPACK/PySCF-style readers.
   *
   * @param quantum_part_name Particle-type label.
   * @param atomic_names Classical species names.
   * @param unique_shells Unique shell lists grouped by classical species.
   */
  void dump_basis(std::string quantum_part_name, std::vector<std::string> atomic_names, std::vector<std::vector<libint2::Shell>> unique_shells);
  /**
   * @brief Write a complete mean-field QMCPACK-style HDF5 file.
   *
   * This is a convenience wrapper around `dump_application`, `dump_PBC`,
   * `dump_generalparameters`, `dump_MOs`, `dump_atoms`, and `dump_basis`.
   */
  void dump_mf_to_hdf5_for_QMCPACK(bool pbc, bool complex_vals, bool ecp, bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha, int num_part_beta, int num_part_total,
                                   int multiplicity, int num_atom, int num_species, std::string quantum_part_name, std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>> E_orb,
                                   std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff, std::vector<std::vector<int>> mo_symm_label_idxs,
                                   std::vector<std::vector<std::string>> mo_symm_labels, std::vector<int> atomic_species_ids, std::vector<int> atomic_number, std::vector<int> atomic_charge,
                                   std::vector<int> core_elec, std::vector<std::string> atomic_names, std::vector<std::vector<double>> atomic_centers,
                                   std::vector<std::vector<libint2::Shell>> unique_shells);
  /**
   * @brief Write multideterminant CI data for QMCPACK.
   *
   * Determinants are stored under `/MultiDet/CI_*` and CI coefficients under
   * `/MultiDet/Coeff*`.
   *
   * @param dets Bit-packed determinants indexed `[idx_part][spin_idx][det_idx][word_idx]`.
   * @param C CI coefficient matrix with columns as states.
   * @param N_dets Number of determinants.
   * @param N_states Number of CI states written.
   * @param N_mo Maximum orbital index metadata value.
   */
  void dump_post_mf_to_hdf5_for_QMCPACK(std::vector<std::vector<std::vector<std::vector<uint64_t>>>> dets, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C, int N_dets, int N_states, int N_mo);
};
} // namespace polyquant
#endif
