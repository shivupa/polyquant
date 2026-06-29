#ifndef POLYQUANT_EPSCF_H
#define POLYQUANT_EPSCF_H

/**
 * @file epscf.hpp
 * @brief Multicomponent SCF implementation used by Polyquant.
 */

#include "io/hdf5_utilities.hpp"
#include "io/molden_utilities.hpp"
#include "molecule/quantum_particles.hpp"
#include "scf/scf.hpp"
#include <filesystem>
#include <fmt/format.h>
#include <libint2.hpp> // IWYU pragma: keep
#include <libint2/chemistry/sto3g_atomic_density.h>
#include <libint2/diis.h>
#include <libint2/lcao/molden.h>

namespace polyquant {

/**
 * @brief Multicomponent mean-field driver for electrons and other quantum particles.
 *
 * The EPSCF implementation maintains one Fock problem per quantum particle
 * type and per spin channel, optionally resolved into symmetry irreps. It
 * supports an initial independent-density stage, DIIS extrapolation,
 * incremental Fock updates, MOM-style occupation control, and restarts from
 * saved orbital files.
 *
 * Indexing convention throughout this class follows:
 * `particle -> spin -> irrep` for symmetry-blocked quantities and
 * `particle -> spin` for combined AO-space matrices.
 */
class POLYQUANT_EPSCF : public POLYQUANT_SCF {
public:
  /**
   * @brief Construct an empty EPSCF driver.
   */
  POLYQUANT_EPSCF() = default;

  /**
   * @brief Construct an EPSCF driver bound to the shared calculation objects.
   */
  POLYQUANT_EPSCF(std::shared_ptr<POLYQUANT_INPUT> params, std::shared_ptr<POLYQUANT_SYMMETRY> symmetry, std::shared_ptr<POLYQUANT_MOLECULE> molecule, std::shared_ptr<POLYQUANT_BASIS> basis,
                  std::shared_ptr<POLYQUANT_INTEGRAL> integral)
      : POLYQUANT_SCF(params, symmetry, molecule, basis, integral) {};

  /**
   * @brief Form the one-particle core Hamiltonian for each quantum species.
   *
   * The operator is built as `T / m - q V_nuc`, using the particle mass and
   * charge stored in the molecule description.
   */
  void form_H_core() override;

  /**
   * @brief Compute the shell-block density norm used for exchange screening.
   *
   * @return Infinity norm of the relevant shell block, optionally based on the
   * density difference when incremental Fock mode is active.
   */
  double directscf_get_shell_density_norm_exchange(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                                   const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part,
                                                   const size_t &quantum_part_idx, const size_t &quantum_part_spin_idx, const size_t &shell_a_bf_start, const size_t &shell_a_bf_size,
                                                   const size_t &shell_b_bf_start, const size_t &shell_b_bf_size);

  /**
   * @brief Compute the shell-block density norm used for Coulomb screening.
   *
   * Restricted and unrestricted partner densities are folded into the returned
   * norm according to the active spin treatment.
   */
  double directscf_get_shell_density_norm_coulomb(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                                  const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part_a,
                                                  const size_t &quantum_part_a_idx, const size_t &quantum_part_a_spin_idx, const QUANTUM_PARTICLE_SET &quantum_part_b, const size_t &quantum_part_b_idx,
                                                  const size_t &quantum_part_b_spin_idx, const size_t &shell_a_bf_start, const size_t &shell_a_bf_size, const size_t &shell_b_bf_start,
                                                  const size_t &shell_b_bf_size);

  /**
   * @brief Fetch one effective density element for a Coulomb contribution.
   */
  double directscf_get_density_coulomb(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                       const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part_a,
                                       const size_t &quantum_part_a_idx, const size_t &quantum_part_a_spin_idx, const QUANTUM_PARTICLE_SET &quantum_part_b, const size_t &quantum_part_b_idx,
                                       const size_t &quantum_part_b_spin_idx, const size_t &a, const size_t &b);

  /**
   * @brief Fetch one density element for an exchange contribution.
   */
  double directscf_get_density_exchange(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                        const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part,
                                        const size_t &quantum_part_idx, const size_t &quantum_part_spin_idx, const size_t &a, const size_t &b);

  /**
   * @brief Accumulate one particle/spin Fock matrix from Coulomb and exchange terms.
   *
   * @param fock AO-space matrix updated in place.
   * @param dm Current AO-space density matrices indexed by particle and spin.
   * @param dm_last Previous AO-space density matrices used for incremental Fock updates.
   * @param quantum_part_a Target particle type whose Fock matrix is being built.
   * @param quantum_part_a_idx Index of the target particle type.
   * @param quantum_part_a_spin_idx Spin index of the target Fock block.
   * @param quantum_part_b Source particle type contributing Coulomb or exchange terms.
   * @param quantum_part_b_idx Index of the source particle type.
   * @param quantum_part_b_spin_idx Spin index of the source density block.
   */
  void form_fock_helper_single_fock_matrix(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &fock, const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                           const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part_a,
                                           const int quantum_part_a_idx, const int quantum_part_a_spin_idx, const QUANTUM_PARTICLE_SET &quantum_part_b, const int quantum_part_b_idx,
                                           const int quantum_part_b_spin_idx);

  /**
   * @brief Ensure thread-local ERI engines and Fock work buffers match the current basis pair.
   */
  void prepare_fock_workspace(const int nthreads, const size_t max_nprim, const int max_l, const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &fock);

  /**
   * @brief Dispatch Fock construction over all particle and spin blocks.
   */
  void form_fock_helper();

  /**
   * @brief Form the AO-space Fock matrices for the current iteration.
   */
  void form_fock() override;

  /**
   * @brief Diagonalize one symmetry-blocked Fock matrix.
   *
   * @param quantum_part_idx Particle-type index owning the block.
   * @param quantum_part_irrep_idx Irrep index of the symmetry block.
   * @param F_prime Orthogonalized Fock block.
   * @param mo_C Output MO coefficients in the original AO basis.
   * @param mo_e Output orbital-energy vector.
   */
  void diag_fock_helper(int quantum_part_idx, int quantum_part_irrep_idx, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &F_prime, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &mo_C,
                        Eigen::Matrix<double, Eigen::Dynamic, 1> &mo_e);

  /**
   * @brief Apply DIIS and diagonalize the current Fock matrices.
   */
  void diag_fock() override;

  /**
   * @brief Form all one-particle density matrices from the current orbitals.
   */
  void form_DM() override;

  /**
   * @brief Form one density matrix block from coefficients and occupations.
   */
  void form_DM_helper(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &dm, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &dm_last,
                      const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &coeff, const Eigen::Matrix<double, Eigen::Dynamic, 1> &occ, const int num_basis, const int num_part);

  /**
   * @brief Fill one occupation vector according to the Aufbau ordering.
   */
  void form_occ_helper_aufbau(Eigen::Matrix<double, Eigen::Dynamic, 1> &part_occ, const int quantum_part_idx, const int quantum_part_spin_idx, const int quantum_part_irrep_idx, const int num_parts,
                              const double occval);

  /**
   * @brief Fill one occupation vector using the maximum-overlap method.
   */
  void form_occ_helper_MOM(Eigen::Matrix<double, Eigen::Dynamic, 1> &part_occ, const int quantum_part_idx, const int quantum_part_spin_idx, const int quantum_part_irrep_idx, const int num_parts,
                           const double occval);

  /**
   * @brief Infer the initial particle counts per irrep from orbital energies.
   */
  void form_occ_helper_initial_npart_per_irrep();
  /**
   * @brief Validate or overwrite the irrep occupations using input-provided values.
   */
  void form_occ_helper_initial_npart_per_irrep_from_input();
  /**
   * @brief Form all occupation vectors from the stored per-irrep particle counts.
   */
  void form_occ();

  /**
   * @brief Merge symmetry-blocked orbitals into energy-ordered combined arrays.
   */
  void form_combined_orbitals();

  /**
   * @brief Print combined molecular orbitals in the standard textual format.
   */
  void print_combined_orbitals(std::string title = "CONVERGED MOLECULAR ORBITALS");

  /**
   * @brief Compute the determinant overlap matrix `C1^T S C2`.
   */
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> det_overlap(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &S, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &coeff1,
                                                                    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &coeff2);

  /**
   * @brief Optional initial orbital permutations read from user input.
   *
   * Indexing is `particle -> spin -> orbital permutation`.
   */
  std::vector<std::vector<std::vector<int>>> permute_orbitals_vector;

  /**
   * @brief Whether an initial MO permutation should be applied before occupations are formed.
   */
  bool permute_orbitals_start = false;

  /**
   * @brief Apply any requested initial MO permutations.
   *
   * @throws APP_ABORT because the current implementation is intentionally disabled.
   */
  void permute_initial_MOs();
  /**
   * @brief Reorthogonalize a set of orbitals against the AO overlap metric.
   */
  void reorthogonalize_MOs(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &C_to_orth, const int quantum_part_idx);

  /**
   * @brief Permute the column ordering of one orbital block.
   */
  void permute_MOs(const int quantum_part_idx, const int quantum_part_spin_idx, const int quantum_part_irrep_idx, std::vector<int> &permutation);

  /**
   * @brief Compute the particle-resolved mean-field energies.
   */
  void calculate_E_elec() override;

  /**
   * @brief Compute the total energy including classical repulsion.
   */
  void calculate_E_total() override;

  /**
   * @brief Compute `S^2` and spin multiplicity estimates from converged orbitals.
   */
  void calculate_S_squared();

  /**
   * @brief Check all convergence criteria and update loop-control flags.
   */
  void check_stop() override;

  /**
   * @brief Reinitialize the DIIS extrapolator state for every active spin block.
   */
  void reset_diis();

  /**
   * @brief Reinitialize incremental-Fock bookkeeping for every active spin block.
   */
  void reset_incfock();

  /**
   * @brief Perform one SCF iteration: Fock, diagonalization, occupations, density.
   */
  void run_iteration() override;

  /**
   * @brief Form an initial guess by diagonalizing the core Hamiltonian.
   */
  void guess_DM_hcore();

  /**
   * @brief Select and form the initial density guess.
   */
  void guess_DM() override;

  /**
   * @brief Resize all per-particle, per-spin, and per-irrep work arrays.
   */
  void resize_objects();

  /**
   * @brief Perform the standard SCF setup sequence before iterations begin.
   */
  void setup_standard();

  /**
   * @brief Compute the one- and two-body integral ingredients needed by SCF.
   */
  void calculate_integrals();

  /**
   * @brief Run the SCF loop until convergence or iteration failure.
   */
  void run() override;

  /**
   * @brief Print the SCF section header.
   */
  void print_start_iterations();

  /**
   * @brief Print a compact iteration summary.
   */
  void print_iteration();

  /**
   * @brief Print the converged SCF result and orbital report.
   */
  void print_success();

  /**
   * @brief Print the exceeded-iterations status message.
   */
  void print_exceeded_iterations();

  /**
   * @brief Abort due to an unexpected SCF termination path.
   */
  void print_error();

  /**
   * @brief Initialize the SCF state from a saved HDF5 orbital file.
   *
   * The file is expected to contain QMCPACK-style eigensets and, when symmetry
   * is active, optionally the per-orbital symmetry labels.
   */
  void setup_from_file(std::string &filename);

  /**
   * @brief Symmetrize combined orbitals with libmsym and populate symmetry labels.
   */
  void symmetrize_orbitals(std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &C_tosym, std::vector<std::vector<std::vector<int>>> &symm_label_idxs_to_fill,
                           std::vector<std::vector<std::vector<std::string>>> &symm_labels_to_fill);

  /**
   * @brief Print the current SCF control parameters.
   */
  void print_params();

  /**
   * @brief Write converged orbitals to MOLDEN files, one file per particle type.
   */
  void dump_molden();
  /**
   * @brief One-particle core Hamiltonian matrices.
   *
   * Indexing: `particle`.
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> H_core;

  /**
   * @brief One-particle density matrices resolved by symmetry block.
   *
   * Indexing: `particle, spin, symmetry block`.
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> D;
  /**
   * @brief Density matrices from the previous iteration.
   *
   * Indexing: `particle, spin, symmetry block`.
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> D_last;

  /**
   * @brief AO-space Fock matrices for each active particle/spin block.
   *
   * Indexing: `particle, spin`.
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> F;

  /**
   * @brief Symmetry-blocked MO coefficient matrices.
   *
   * Indexing: `particle, spin, symmetry block`.
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> C;
  /**
   * @brief MOM reference orbitals used to preserve excited-state occupations.
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> C_ref_mom;

  /**
   * @brief Energy-ordered orbitals merged across irreps.
   *
   * Indexing: `particle, spin`.
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> C_combined;
  /**
   * @brief AO-space density matrices merged across irreps.
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> D_combined;
  /**
   * @brief Previous AO-space density matrices merged across irreps.
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> D_last_combined;
  /**
   * @brief Energy-ordered orbital energies merged across irreps.
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> E_orbitals_combined;
  /**
   * @brief Energy-ordered orbital occupations merged across irreps.
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> occ_combined;
  /**
   * @brief Integer irrep labels for the combined orbitals.
   */
  std::vector<std::vector<std::vector<int>>> symm_label_idxs;
  /**
   * @brief String irrep labels for the combined orbitals.
   */
  std::vector<std::vector<std::vector<std::string>>> symm_labels;
  /**
   * @brief Number of orthogonalized molecular orbitals per particle type.
   */
  std::vector<int> num_mo;

  /**
   * @brief Occupation strategy, for example `"aufbau"` or `"MOM"`.
   */
  std::string occupation_mode = "aufbau";
  /**
   * @brief Per-particle flag to freeze the density after the first iteration.
   */
  std::deque<bool> freeze_density;

  /**
   * @brief Number of MOs retained in each irrep after orthogonalization.
   *
   * Indexing: `particle, symmetry block`.
   */
  std::vector<std::vector<int>> num_mo_per_irrep;

  /**
   * @brief Particle counts assigned to each irrep and spin channel.
   *
   * Indexing: `particle, spin, symmetry block`.
   */
  std::vector<std::vector<std::vector<int>>> npart_per_irrep;
  /**
   * @brief Whether the irrep occupation counts are frozen after initialization.
   */
  bool freeze_npart_per_irrep = false;

  /**
   * @brief Symmetry-blocked MO occupations.
   *
   * Indexing: `particle, spin, symmetry block`.
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>>> occ;

  /**
   * @brief Symmetry-blocked orbital energies.
   *
   * Indexing: `particle, spin, symmetry block`.
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>>> E_orbitals;
  /**
   * @brief Mean-field energies of each quantum particle type.
   *
   * Indexing: `particle`.
   */
  std::vector<double> E_particles;
  /**
   * @brief Estimated `S^2` value for each particle type after convergence.
   */
  std::vector<double> S_squared;
  /**
   * @brief Estimated spin multiplicity for each particle type after convergence.
   */
  std::vector<double> multiplicity;
  /**
   * @brief Particle-resolved energies from the previous iteration.
   */
  std::vector<double> E_particles_last;
  /**
   * @brief Total energy including the classical repulsion term.
   */
  double E_total = 0.0;
  /**
   * @brief Current SCF iteration counter.
   */
  int iteration_num = 0;
  /**
   * @brief Absolute relative energy change per particle type.
   */
  std::vector<double> iteration_E_diff;
  /**
   * @brief DIIS commutator norms used as density/Fock convergence measures.
   *
   * Indexing: `particle, spin`.
   */
  std::vector<std::vector<double>> iteration_rms_error;

  /**
   * @brief DIIS extrapolators for each active particle/spin block.
   *
   * Indexing: `particle, spin`.
   */
  std::vector<std::vector<libint2::DIIS<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> diis;
  /**
   * @brief Whether the SCF loop should stop.
   */
  bool stop = false;
  /**
   * @brief Whether all active convergence criteria are currently satisfied.
   */
  bool converged = false;
  /**
   * @brief Whether the initial independent-density stage has been completed.
   */
  bool independent_converged = false;
  /**
   * @brief Whether to stop after converging the independent-density stage.
   */
  bool stop_after_independent_converged = false;
  /**
   * @brief Iteration on which the independent-density stage converged.
   */
  int independent_converged_iteration_num = -1;

  /**
   * @brief Enable DIIS Fock extrapolation.
   */
  bool diis_extrapolation = true;
  /**
   * @brief Iteration number at which DIIS extrapolation begins.
   */
  int diis_start = 5;
  /**
   * @brief DIIS damping parameter passed to libint2::DIIS.
   */
  double diis_damping = 0.0;
  /**
   * @brief Linear mixing fraction passed to libint2::DIIS.
   */
  double diis_mixing_fraction = 0.0;
  /**
   * @brief Maximum DIIS subspace size.
   */
  int diis_size = 5;
  /**
   * @brief Enable incremental Fock construction based on density changes.
   */
  bool incremental_fock = true;

  /**
   * @brief RMS-error threshold that triggers a full Fock rebuild.
   *
   * Indexing: `particle, spin`.
   */
  std::vector<std::vector<double>> incremental_fock_reset_threshold;

  /**
   * @brief Iteration index of the last full Fock reset.
   *
   * Indexing: `particle, spin`.
   */
  std::vector<std::vector<int>> incremental_fock_reset_iteration;

  /**
   * @brief Whether a given particle/spin block is currently in incremental mode.
   *
   * Indexing: `particle, spin`.
   * Stored as integers to avoid `std::vector<bool>` specialization behavior.
   */
  std::vector<std::vector<int>> incremental_fock_doing_incremental;
  /**
   * @brief Maximum number of incremental iterations before forcing a rebuild.
   */
  int incremental_fock_reset_freq = 8;
  /**
   * @brief RMS-error threshold below which incremental Fock mode may begin.
   */
  double incremental_fock_initial_onset_thresh = 1e-5;

  /**
   * @brief Enable Cauchy-Schwarz screening during Fock construction.
   */
  bool Cauchy_Schwarz_screening = false;

  /**
   * @brief Screening threshold used for each particle's Coulomb build.
   *
   * Indexing: `particle`.
   */
  std::vector<double> Cauchy_Schwarz_threshold;

  /**
   * @brief Thread-local libint2 engines reused during Fock construction.
   */
  std::vector<libint2::Engine> fock_engines;
  /**
   * @brief Thread-local temporary Fock accumulators.
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> fock_thread_matrices;
  /**
   * @brief Largest primitive count used by the currently prepared Fock workspace.
   */
  size_t fock_workspace_max_nprim = 0;
  /**
   * @brief Largest angular momentum used by the currently prepared Fock workspace.
   */
  int fock_workspace_max_l = -1;

  /**
   * @brief Whether the SCF loop hit the maximum iteration count.
   */
  bool exceeded_iterations = false;
  /**
   * @brief Relative energy convergence threshold.
   */
  double convergence_E = 1e-10;
  /**
   * @brief Convergence threshold applied to the DIIS commutator norm metric.
   */
  double convergence_DM = 1e-8;
  /**
   * @brief Maximum number of SCF iterations allowed.
   */
  int iteration_max = 500;
};
} // namespace polyquant
#endif
