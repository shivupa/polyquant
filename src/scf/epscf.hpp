#ifndef POLYQUANT_EPSCF_H
#define POLYQUANT_EPSCF_H
#include "io/molden_utilities.hpp"
#include "molecule/quantum_particles.hpp"
#include "scf/scf.hpp"
#include <filesystem>
#include <h5cpp/hdf5.hpp>
#include <libint2.hpp> // IWYU pragma: keep
#include <libint2/chemistry/sto3g_atomic_density.h>
#include <libint2/diis.h>
#include <libint2/lcao/molden.h>

namespace polyquant {

class POLYQUANT_EPSCF : public POLYQUANT_SCF {
public:
  POLYQUANT_EPSCF() = default;

  POLYQUANT_EPSCF(std::shared_ptr<POLYQUANT_INPUT> params, std::shared_ptr<POLYQUANT_MOLECULE> molecule, std::shared_ptr<POLYQUANT_BASIS> basis, std::shared_ptr<POLYQUANT_INTEGRAL> integral)
      : POLYQUANT_SCF(params, molecule, basis, integral){};

  void form_H_core() override;

  double directscf_get_shell_density_norm_exchange(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                                   const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part,
                                                   const size_t &quantum_part_idx, const size_t &quantum_part_spin_idx, const size_t &shell_a_bf_start, const size_t &shell_a_bf_size,
                                                   const size_t &shell_b_bf_start, const size_t &shell_b_bf_size);

  double directscf_get_shell_density_norm_coulomb(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                                  const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part_a,
                                                  const size_t &quantum_part_a_idx, const size_t &quantum_part_a_spin_idx, const QUANTUM_PARTICLE_SET &quantum_part_b, const size_t &quantum_part_b_idx,
                                                  const size_t &quantum_part_b_spin_idx, const size_t &shell_a_bf_start, const size_t &shell_a_bf_size, const size_t &shell_b_bf_start,
                                                  const size_t &shell_b_bf_size);

  double directscf_get_density_coulomb(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                       const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part_a,
                                       const size_t &quantum_part_a_idx, const size_t &quantum_part_a_spin_idx, const QUANTUM_PARTICLE_SET &quantum_part_b, const size_t &quantum_part_b_idx,
                                       const size_t &quantum_part_b_spin_idx, const size_t &a, const size_t &b);

  double directscf_get_density_exchange(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                        const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part,
                                        const size_t &quantum_part_idx, const size_t &quantum_part_spin_idx, const size_t &a, const size_t &b);

  void form_fock_helper_single_fock_matrix(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &fock, const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                           const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part_a,
                                           const int quantum_part_a_idx, const int quantum_part_a_spin_idx, const QUANTUM_PARTICLE_SET &quantum_part_b, const int quantum_part_b_idx,
                                           const int quantum_part_b_spin_idx);

  void form_fock_helper();

  void form_fock() override;

  void diag_fock_helper(int quantum_part_idx, int quantum_part_irrep_idx, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &F_prime, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &mo_C,
                        Eigen::Matrix<double, Eigen::Dynamic, 1> &mo_e);

  void diag_fock() override;

  void form_DM() override;

  void form_DM_helper(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &dm, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &dm_last,
                      const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &coeff, const Eigen::Matrix<double, Eigen::Dynamic, 1> &occ, const int num_basis, const int num_part);

  void form_occ_helper_aufbau(Eigen::Matrix<double, Eigen::Dynamic, 1> &part_occ, const int quantum_part_idx, const int quantum_part_spin_idx, const int quantum_part_irrep_idx, const int num_parts,
                              const double occval);

  void form_occ_helper_MOM(Eigen::Matrix<double, Eigen::Dynamic, 1> &part_occ, const int quantum_part_idx, const int quantum_part_spin_idx, const int quantum_part_irrep_idx, const int num_parts,
                           const double occval);

  void form_occ_helper_initial_npart_per_irrep();
  void form_occ_helper_initial_npart_per_irrep_from_input();
  void form_occ();

  void form_combined_orbitals();

  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> det_overlap(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &S, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &coeff1,
                                                                    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &coeff2);

  std::vector<std::vector<std::vector<int>>> permute_orbitals_vector;

  bool permute_orbitals_start = false;

  void permute_initial_MOs();

  void permute_MOs(const int quantum_part_idx, const int quantum_part_spin_idx, const int quantum_part_irrep_idx, std::vector<int> &permutation);

  void calculate_E_elec() override;

  void calculate_E_total() override;

  void check_stop() override;

  void reset_diis();

  void reset_incfock();

  void run_iteration() override;

  void guess_DM_hcore();
  void guess_DM() override;

  void resize_objects();

  void setup_standard();

  void calculate_integrals();

  void run() override;

  void print_start_iterations();

  void print_iteration();

  void print_success();

  void print_exceeded_iterations();

  void print_error();

  void setup_from_file(std::string &filename);

  void print_params();

  void dump_molden();
  /**
   * @brief H_core matrix
   *
   * indexes: particle
   *
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> H_core;

  /**
   * @brief One particle density matrix
   *
   * indexes: particle, spin, symmetry block
   *
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> D;
  /**
   * @brief One particle density matrix from the previous iteration
   *
   * indexes: particle, spin, symmetry block
   *
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> D_last;

  /**
   * @brief Fock matrix
   *
   * indexes: particle, spin
   *
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> F;

  /**
   * @brief MO Coefficient matrix
   *
   * indexes: particle, spin, symmetry block
   *
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> C;
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> C_ref_mom;

  // convience. Once we run a scf in separate symmetry blocks, we can reassemble
  //  particle, spin
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> C_combined;
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> D_combined;
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> D_last_combined;
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> E_orbitals_combined;
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> occ_combined;
  std::vector<std::vector<std::vector<int>>> symm_label_idxs;
  std::vector<int> num_mo;

  std::string occupation_mode = "aufbau";
  std::deque<bool> freeze_density;

  /**
   * @brief MO per irrep
   *
   * indexes: particle, symmetry block
   *
   */
  std::vector<std::vector<int>> num_mo_per_irrep;

  /**
   * @brief npart per irrep
   *
   * indexes: particle, spin, symmetry block
   *
   */
  std::vector<std::vector<std::vector<int>>> npart_per_irrep;
  bool freeze_npart_per_irrep = false;

  /**
   * @brief MO occupations
   *
   * indexes: particle, spin, symmetry block
   *
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>>> occ;

  /**
   * @brief MO energy vector
   *
   * indexes: particle, spin, symmetry block
   *
   */
  std::vector<std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>>> E_orbitals;
  /**
   * @brief Energy of the quantum particles
   *
   * indexes: particle
   *
   */
  std::vector<double> E_particles;
  /**
   * @brief Energy of the quantum particles from the previous iteration
   *
   */
  std::vector<double> E_particles_last;
  /**
   * @brief Total energy including the static classical centers
   *
   */
  double E_total = 0.0;
  /**
   * @brief Iteration number
   *
   */
  int iteration_num = 0;
  /**
   * @brief Iteration energy difference
   *
   */
  std::vector<double> iteration_E_diff;
  /**
   * @brief Iteration rmse DM
   *
   * indexes: particle, spin
   *
   */
  std::vector<std::vector<double>> iteration_rms_error;

  /**
   * @brief DIIS extrapolators
   *
   * indexes: particle, spin, symmetry block
   *
   */
  std::vector<std::vector<std::vector<libint2::DIIS<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>>> diis;
  /**
   * @brief Stop running iterations?
   *
   */
  bool stop = false;
  /**
   * @brief Converged?
   *
   */
  bool converged = false;
  bool independent_converged = false;
  bool stop_after_independent_converged = false;
  int independent_converged_iteration_num = -1;

  bool diis_extrapolation = true;
  int diis_start = 5;
  double diis_damping = 0.0;
  double diis_mixing_fraction = 0.0;
  int diis_size = 5;
  bool incremental_fock = true;

  /**
   * @brief Threshold on rms dm error to reset incremental fock formation
   *
   * indexes: particle, spin
   *
   */
  std::vector<std::vector<double>> incremental_fock_reset_threshold;

  /**
   * @brief Number of iterations after which to reset incremental fock formation
   *
   * indexes: particle, spin
   *
   */
  std::vector<std::vector<int>> incremental_fock_reset_iteration;

  /**
   * @brief Are we using incrementally building the fock matrix?
   *
   * indexes: particle, spin
   * (ints to avoid vector bool specialization)
   */
  std::vector<std::vector<int>> incremental_fock_doing_incremental;
  int incremental_fock_reset_freq = 8;
  double incremental_fock_initial_onset_thresh = 1e-5;

  /**
   * @brief Are we using Cauchy-Schwarz screening to skip parts of the fock build?
   *
   */
  bool Cauchy_Schwarz_screening = false;

  /**
   * @brief Cauchy-Schwarz screening threshold
   *
   * indexes: particle
   *
   */
  std::vector<double> Cauchy_Schwarz_threshold;

  /**
   * @brief Exceeded iterations?
   *
   */
  bool exceeded_iterations = false;
  /**
   * @brief Energy convergence
   *
   */
  double convergence_E = 1e-10;
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
};
} // namespace polyquant
#endif
