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
#include <fstream>
#include <h5cpp/hdf5.hpp>
#include <iomanip>
#include <iostream>
#include <libint2.hpp>       // IWYU pragma: keep
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <string>
#include <vector>

namespace polyquant {

void hdf5dump_application(hdf5::node::Group &root_group);
void hdf5dump_PBC(hdf5::node::Group &root_group);
void hdf5dump_basis(hdf5::node::Group &root_group);

void Polyquant_dump_post_mf_to_hdf5_for_QMCPACK(
    const std::string &filename,
    std::vector<std::vector<std::vector<std::vector<uint64_t>>>> dets,
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C, int N_dets,
    int N_states, int N_mo);

void Polyquant_dump_mf_to_hdf5_for_QMCPACK(
    const std::string &filename, bool pbc, bool complex_vals, bool ecp,
    bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha,
    int num_part_beta, int num_part_total, int multiplicity, int num_atom,
    int num_species, std::vector<std::string> quantum_part_names,
    std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> E_orb,
    std::vector<
        std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>
        mo_coeff,
    std::vector<int> atomic_species_ids, std::vector<int> atomic_number,
    std::vector<int> atomic_charge, std::vector<int> core_elec,
    std::vector<std::string> atomic_names,
    std::vector<std::vector<double>> atomic_centers,
    std::vector<std::vector<libint2::Shell>> unique_shells);
} // namespace polyquant
#endif
