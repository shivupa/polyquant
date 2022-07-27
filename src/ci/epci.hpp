#ifndef POLYQUANT_EPCI_H
#define POLYQUANT_EPCI_H
#include "basis/basis.hpp"
#include "ci/determinant_set.hpp"
#include "integral/integral.hpp"
#include "io/davidson_logging.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include "molecule/quantum_particles.hpp"
#include "scf/epscf.hpp"
#include <Eigen/Core>
#include <Spectra/DavidsonSymEigsSolver.h>
#include <Spectra/LoggerBase.h>
#include <Spectra/MatOp/SparseSymMatProd.h>
#include <Spectra/SymEigsSolver.h>
#include <combinations.hpp>
#include <inttypes.h>
#include <string>

namespace polyquant {

class POLYQUANT_EPCI {
public:
  POLYQUANT_EPCI() = default;
  POLYQUANT_EPCI(const POLYQUANT_EPSCF &input_scf) { this->setup(input_scf); };
  void setup(const POLYQUANT_EPSCF &input_scf);
  void calculate_integrals();
  void calculate_fc_energy();
  void diag_dm_helper(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &dm, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &orbs, Eigen::Matrix<double, Eigen::Dynamic, 1> &occs);
  void calculate_NOs();
  void setup_determinants();
  void run();
  void print_start_iterations();
  void print_iteration();
  void print_success();
  void print_exceeded_iterations();
  void print_error();
  void print_params();
  void dump_molden();
  void fcidump(std::string &filename);

  int iteration_num = 0;

  /**
   * @brief the input parameters
   *
   */
  POLYQUANT_INPUT input_params;

  /**
   * @brief the input molecule
   *
   */
  POLYQUANT_MOLECULE input_molecule;

  /**
   * @brief the input basis
   *
   */
  POLYQUANT_BASIS input_basis;

  /**
   * @brief integrals calculated for the input molecule in the input basis
   *
   */
  POLYQUANT_INTEGRAL input_integral;

  /**
   * @brief the input scf calculation
   *
   */
  POLYQUANT_EPSCF input_epscf;
  POLYQUANT_DETSET<uint64_t> detset;
  Eigen::Matrix<double, Eigen::Dynamic, 1> energies;
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C_ci;

  // FC_DM stored in AO basis since we need to make the FC operators fc_occ.asDiagonal() is FC_DM in MO basis
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> fc_dm;
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> fc_occ;
  // state_idx, particle_type_idx, spin_idx -> dm
  // DM stored in MO basis
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> dm1;
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> C_nso;
  // std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> C_no;
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>>> occ_nso;
  // std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>>> occ_no;

  std::vector<int> NO_states;

  std::vector<std::tuple<int, int, int>> excitation_level;
  std::vector<int> frozen_core;
  std::vector<int> deleted_virtual;
  /**
   * @brief Energy convergence
   *
   */
  double convergence_E = 1e-6;
  /**
   * @brief Root mean squared change in DM convergence
   *
   */
  double convergence_DM = 1e-8;
  /**
   * @brief Maximum iteration number
   *
   */
  int iteration_max = 500;
  int num_states = 1;
  int num_subspace_vec = 5;
  bool verbose = false;
  size_t cache_size = std::numeric_limits<size_t>::max();
};
} // namespace polyquant
#endif
