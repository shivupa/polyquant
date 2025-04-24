#ifndef POLYQUANT_EPCI_H
#define POLYQUANT_EPCI_H
#include "basis/basis.hpp"
#include "ci/determinant_set.hpp"
#include "integral/integral.hpp"
#include "io/davidson_logging.hpp"
#include "io/fcidump_utilities.hpp"
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
#include <cppitertools/combinations.hpp>
#include <inttypes.h>
#include <string>

namespace polyquant {

class POLYQUANT_EPCI {
public:
  POLYQUANT_EPCI() = default;
  POLYQUANT_EPCI(std::shared_ptr<POLYQUANT_EPSCF> input_scf) { this->setup(input_scf); };
  void setup(std::shared_ptr<POLYQUANT_EPSCF> input_scf);
  void calculate_integrals();
  void calculate_fc_energy();
  void diag_dm_helper(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &dm, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &orbs, Eigen::Matrix<double, Eigen::Dynamic, 1> &occs,
                      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &transforming_orbs, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &orth_X);
  void resize_for_NOs();
  void calculate_NOs();
  void calculate_S_squared();
  void setup_determinants();
  void run();
  void print_start();
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
  std::shared_ptr<POLYQUANT_INPUT> input_params;

  /**
   * @brief the input symmetry handler
   *
   */
  std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry;

  /**
   * @brief the input molecule
   *
   */
  std::shared_ptr<POLYQUANT_MOLECULE> input_molecule;

  /**
   * @brief the input basis
   *
   */
  std::shared_ptr<POLYQUANT_BASIS> input_basis;

  /**
   * @brief integrals calculated for the input molecule in the input basis
   *
   */
  std::shared_ptr<POLYQUANT_INTEGRAL> input_integral;

  /**
   * @brief the input scf calculation
   *
   */
  std::shared_ptr<POLYQUANT_EPSCF> input_epscf;
  POLYQUANT_DETSET<uint64_t> detset;
  Eigen::Matrix<double, Eigen::Dynamic, 1> energies;
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C_ci;
  // state_idx, quantum_part_type idx
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> S_squared;

  // FC_DM stored in AO basis since we need to make the FC operators fc_occ.asDiagonal() is FC_DM in MO basis
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> fc_dm;
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> fc_occ;
  // state_idx, particle_type_idx, spin_idx -> dm
  // DM stored in MO basis
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> dm1;
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> C_nso_combined;
  std::vector<std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>>> C_nso;
  // state_idx, particle_type_idx, spin_idx, irrep -> C_nso
  // state_idx, particle_type_idx, spin_idx -> C_nso_combined
  // std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> C_no;
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>>> occ_nso_combined;
  std::vector<std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>>>> occ_nso;
  // std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>>> occ_no;
  //
  std::vector<std::vector<std::vector<std::vector<int>>>> symm_label_idxs;
  std::vector<std::vector<std::vector<std::vector<std::string>>>> symm_labels;

  std::vector<int> NO_states;

  std::vector<std::tuple<int, int, int>> excitation_level;
  int max_collective_excitation_level = std::numeric_limits<int>::max();
  /**
   * @brief Energy convergence
   *
   */
  double convergence_E = 1e-6;
  /**
   * @brief Maximum iteration number
   *
   */
  int iteration_max = 500;
  int num_states = 1;
  int num_subspace_vec = 5;
  bool verbose = false;
  bool exact_diag = false;
  bool symmetrize_NOs = true;

  bool first_order_spin_penalty = false;
  bool second_order_spin_penalty = false;
  bool calc_s_sq = false;
  std::vector<double> expected_S2;
  std::vector<double> spin_penalty;
  double default_spin_penalty = 0.1;
  double det_print_threshold = 0.01;
  // this is how much the diagonal values of the hamiltonian are shifted by
  double hf_det_energy = 0.0;
  // this is how much to shift the eigenvalues (hf_det_energy + e_nuc + e_fc)
  double constant_shift = 0.0;
};
} // namespace polyquant
#endif
