#ifndef POLYQUANT_EPCI_H
#define POLYQUANT_EPCI_H

/**
 * @file epci.hpp
 * @brief Multicomponent CI driver built on top of converged EPSCF orbitals.
 */

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

/**
 * @brief Configuration-interaction driver for multicomponent Polyquant calculations.
 *
 * The CI driver consumes a converged @ref POLYQUANT_EPSCF object, transforms
 * integrals into the MO basis, constructs the variational determinant space,
 * solves the CI eigenproblem, and optionally produces natural spin orbitals,
 * spin diagnostics, FCIDUMP files, and MOLDEN output.
 *
 * State-indexed quantities in this class use the convention
 * `state -> particle -> spin`, while the underlying determinant space is owned
 * by @ref detset.
 */
class POLYQUANT_EPCI {
public:
  /**
   * @brief Construct an empty CI driver.
   */
  POLYQUANT_EPCI() = default;
  /**
   * @brief Construct and initialize the CI driver from a converged SCF object.
   */
  POLYQUANT_EPCI(std::shared_ptr<POLYQUANT_EPSCF> input_scf) { this->setup(input_scf); };
  /**
   * @brief Attach the converged SCF calculation and inherited shared objects.
   *
   * This also initializes frozen-core and deleted-virtual vectors and default
   * spin-penalty targets when those options are enabled.
   */
  void setup(std::shared_ptr<POLYQUANT_EPSCF> input_scf);
  /**
   * @brief Transform the required one- and two-body integrals into the active MO basis.
   */
  void calculate_integrals();
  /**
   * @brief Build frozen-core density matrices, operators, and constant energy shifts.
   */
  void calculate_fc_energy();
  /**
   * @brief Diagonalize a one-particle density matrix to obtain natural orbitals.
   *
   * @param dm Density matrix in the MO basis.
   * @param orbs Output natural-orbital coefficients in the AO basis.
   * @param occs Output natural occupations, sorted in descending order.
   * @param transforming_orbs AO-to-MO coefficient matrix used to lift the
   * eigenvectors back to the AO basis.
   */
  void diag_dm_helper(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &dm, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &orbs, Eigen::Matrix<double, Eigen::Dynamic, 1> &occs,
                      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &transforming_orbs);
  /**
   * @brief Resize state-indexed storage used for natural-orbital generation.
   */
  void resize_for_NOs();
  /**
   * @brief Build one-particle RDMs and natural spin orbitals for selected states.
   */
  void calculate_NOs();
  /**
   * @brief Evaluate `S^2` for the solved CI states when requested.
   */
  void calculate_S_squared();
  /**
   * @brief Construct the CI determinant space from the excitation controls.
   */
  void setup_determinants();
  /**
   * @brief Run the CI calculation to completion or failure.
   */
  void run();
  /**
   * @brief Print the CI banner and parameter summary.
   */
  void print_start();
  /**
   * @brief Print the start-of-iterations message.
   */
  void print_start_iterations();
  /**
   * @brief Print a CI iteration update.
   */
  void print_iteration();
  /**
   * @brief Print converged CI energies, determinant amplitudes, and natural orbitals.
   */
  void print_success();
  /**
   * @brief Print the exceeded-iterations message.
   */
  void print_exceeded_iterations();
  /**
   * @brief Abort due to an unexpected CI termination path.
   */
  void print_error();
  /**
   * @brief Print a compact CI status line.
   */
  void print_params();
  /**
   * @brief Dump natural spin orbitals to MOLDEN files.
   */
  void dump_molden();
  /**
   * @brief Write FCIDUMP files for same- and mixed-particle Hamiltonian blocks.
   */
  void fcidump(std::string &filename);

  /**
   * @brief Iteration counter used by iterative eigensolvers.
   */
  int iteration_num = 0;

  /**
   * @brief Shared parsed input parameters inherited from the SCF calculation.
   */
  std::shared_ptr<POLYQUANT_INPUT> input_params;

  /**
   * @brief Shared symmetry handler inherited from the SCF calculation.
   */
  std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry;

  /**
   * @brief Shared molecule description inherited from the SCF calculation.
   */
  std::shared_ptr<POLYQUANT_MOLECULE> input_molecule;

  /**
   * @brief Shared AO basis description inherited from the SCF calculation.
   */
  std::shared_ptr<POLYQUANT_BASIS> input_basis;

  /**
   * @brief Shared integral object containing AO and transformed MO integrals.
   */
  std::shared_ptr<POLYQUANT_INTEGRAL> input_integral;

  /**
   * @brief Converged SCF solution used as the CI reference.
   */
  std::shared_ptr<POLYQUANT_EPSCF> input_epscf;
  /**
   * @brief Determinant-space representation and Hamiltonian/sigma builder.
   */
  POLYQUANT_DETSET<uint64_t> detset;
  /**
   * @brief Converged CI state energies including the constant shift.
   */
  Eigen::Matrix<double, Eigen::Dynamic, 1> energies;
  /**
   * @brief CI eigenvectors in the determinant basis.
   *
   * Rows index determinants and columns index requested states.
   */
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C_ci;
  /**
   * @brief State- and particle-resolved `S^2` expectation values.
   *
   * Indexing: `state_idx, quantum_part_type_idx`.
   */
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> S_squared;

  /**
   * @brief Frozen-core density matrices in the AO basis.
   *
   * Indexing: `particle_type_idx, spin_idx`.
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> fc_dm;
  /**
   * @brief Frozen-core occupations in the MO basis.
   *
   * Indexing: `particle_type_idx, spin_idx`.
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> fc_occ;
  /**
   * @brief CI one-particle RDMs in the MO basis.
   *
   * Indexing: `state_idx, particle_type_idx, spin_idx`.
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> dm1;
  /**
   * @brief Natural spin-orbital coefficient matrices in the AO basis.
   *
   * Indexing: `state_idx, particle_type_idx, spin_idx`.
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> C_nso;
  /**
   * @brief Natural spin-orbital occupations.
   *
   * Indexing: `state_idx, particle_type_idx, spin_idx`.
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>>> occ_nso;
  /**
   * @brief Integer symmetry labels associated with natural spin orbitals.
   *
   * Indexing: `state_idx, particle_type_idx, spin_idx, orbital_idx`.
   */
  std::vector<std::vector<std::vector<std::vector<int>>>> symm_label_idxs;
  /**
   * @brief String symmetry labels associated with natural spin orbitals.
   *
   * Indexing: `state_idx, particle_type_idx, spin_idx, orbital_idx`.
   */
  std::vector<std::vector<std::vector<std::vector<std::string>>>> symm_labels;

  /**
   * @brief State indices for which natural orbitals should be generated.
   */
  std::vector<int> NO_states;

  /**
   * @brief Per-particle excitation limits `(alpha, beta, unused/combined slot)`.
   *
   * The third slot is carried through the input representation and used by the
   * determinant-space builder when enforcing collective excitation limits.
   */
  std::vector<std::tuple<int, int, int>> excitation_level;
  /**
   * @brief Maximum total excitation level across all particle and spin channels.
   */
  int max_collective_excitation_level = std::numeric_limits<int>::max();
  /**
   * @brief Convergence threshold passed to the Davidson eigensolver.
   */
  double convergence_E = 1e-6;
  /**
   * @brief Maximum Davidson iteration count.
   */
  int iteration_max = 500;
  /**
   * @brief Number of CI eigenstates to solve for.
   */
  int num_states = 1;
  /**
   * @brief Initial Davidson subspace size.
   */
  int num_subspace_vec = 5;
  /**
   * @brief Enable verbose determinant and matrix dumps.
   */
  bool verbose = false;
  /**
   * @brief Use dense exact diagonalization instead of Davidson.
   *
   * This is only practical for small determinant spaces.
   */
  bool exact_diag = false;
  /**
   * @brief Symmetrize natural orbitals with libmsym before printing or dumping.
   */
  bool symmetrize_NOs = true;

  /**
   * @brief Apply a first-order spin-penalty operator.
   */
  bool first_order_spin_penalty = false;
  /**
   * @brief Apply a second-order spin-penalty operator.
   */
  bool second_order_spin_penalty = false;
  /**
   * @brief Evaluate `S^2` for the solved CI states.
   */
  bool calc_s_sq = false;
  /**
   * @brief Target `S^2` values used by spin-penalty options.
   */
  std::vector<double> expected_S2;
  /**
   * @brief Penalty prefactors used by spin-penalty options.
   */
  std::vector<double> spin_penalty;
  /**
   * @brief Default spin-penalty prefactor when none is provided explicitly.
   */
  double default_spin_penalty = 0.1;
  /**
   * @brief Threshold for printing determinant amplitudes in the CI summary.
   */
  double det_print_threshold = 0.01;
  /**
   * @brief Energy removed from the determinant Hamiltonian diagonal before solving.
   */
  double hf_det_energy = 0.0;
  /**
   * @brief Constant shift added back to reported CI energies.
   *
   * This includes the classical repulsion and frozen-core energy offsets, and
   * may also include a reference determinant shift for Davidson stability.
   */
  double constant_shift = 0.0;
};
} // namespace polyquant
#endif
