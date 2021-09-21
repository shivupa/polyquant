#ifndef POLYQUANT_INPUT_MOLDEN_H
#define POLYQUANT_INPUT_MOLDEN_H
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
#include <iomanip>
#include <iostream>
#include <libint2.hpp> // IWYU pragma: keep
#include <libint2/cgshell_ordering.h>
#include <libint2/shgshell_ordering.h>
#include <string>
#include <vector>

namespace polyquant {

/**
 * @brief A class to assist with MOLDEN dumping
 *
 */
class POLYQUANT_MOLDEN {
public:
  POLYQUANT_MOLDEN() = default;
  ~POLYQUANT_MOLDEN(){
      if(this->molden_file.is_open()){
          this->molden_file.close();
      }
  }
  /**
   * @brief Construct a MOLDEN object using the create_file function.
   *
   * @param filename the file to write to.
   */
  POLYQUANT_MOLDEN(const std::string &fname);
  /**
   * @brief creates a MOLDEN file
   *
   * @param filename the file to write to.
   */
  void create_file(const std::string &fname);
  /**
   * @brief the molden file object
   *
   */
  std::ofstream molden_file;
  std::string filename;
  void dump(std::vector<libint2::Atom> &atoms, libint2::BasisSet &basis, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &MO_a_coeff, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_a_energy,
            std::vector<std::string> &MO_a_symmetry_labels, std::vector<double> &MO_a_occupation, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &MO_b_coeff,
            Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_b_energy, std::vector<std::string> &MO_b_symmetry_labels, std::vector<double> &MO_b_occupation);

private:
  void dump_header();
  void dump_atoms(std::vector<libint2::Atom> &atoms);
  void dump_basis(std::vector<libint2::Atom> &atoms, libint2::BasisSet &basis);
  void dump_orbitals(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &MO_a_coeff, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_a_energy, std::vector<std::string> &MO_a_symmetry_labels,
                     std::vector<double> &MO_a_occupation, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &MO_b_coeff, Eigen::Matrix<double, Eigen::Dynamic, 1> &MO_b_energy,
                     std::vector<std::string> &MO_b_symmetry_labels, std::vector<double> &MO_b_occupation);
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
