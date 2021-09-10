#ifndef POLYQUANT_EPSCF_H
#define POLYQUANT_EPSCF_H
#include "molecule/quantum_particles.hpp"
#include "scf/scf.hpp"
#include <h5cpp/hdf5.hpp>
#include <libint2/chemistry/sto3g_atomic_density.h>
#include <libint2/diis.h>
#include <libint2/lcao/molden.h>

namespace polyquant {

class POLYQUANT_EPSCF : public POLYQUANT_SCF {
public:
  POLYQUANT_EPSCF() = default;

  POLYQUANT_EPSCF(const POLYQUANT_INPUT &input_params, const POLYQUANT_MOLECULE &input_molecule, const POLYQUANT_BASIS &input_basis, const POLYQUANT_INTEGRAL &input_integral)
      : POLYQUANT_SCF(input_params, input_molecule, input_basis, input_integral){};

  void form_H_core() override;

  double directscf_get_shell_density_norm_exchange(const QUANTUM_PARTICLE_SET &quantum_part, const size_t &quantum_part_idx, const size_t &quantum_part_spin_idx, const size_t &shell_a_bf_start,
                                                   const size_t &shell_a_bf_size, const size_t &shell_b_bf_start, const size_t &shell_b_bf_size);

  double directscf_get_shell_density_norm_coulomb(const QUANTUM_PARTICLE_SET &quantum_part, const size_t &quantum_part_idx, const size_t &quantum_part_spin_idx, const size_t &shell_a_bf_start,
                                                  const size_t &shell_a_bf_size, const size_t &shell_b_bf_start, const size_t &shell_b_bf_size);

  double directscf_get_density_coulomb(const QUANTUM_PARTICLE_SET &quantum_part, const size_t &quantum_part_idx, const size_t &quantum_part_spin_idx, const size_t &a, const size_t &b);

  double directscf_get_density_exchange(const QUANTUM_PARTICLE_SET &quantum_part, const size_t &quantum_part_idx, const size_t &quantum_part_spin_idx, const size_t &a, const size_t &b);

  void form_fock() override;

  void diag_fock() override;

  void form_DM() override;

  void calculate_E_elec() override;

  void calculate_E_total() override;

  void check_stop() override;

  void reset_diis();

  void reset_incfock();

  void run_iteration() override;

  void guess_DM() override;

  void run() override;

  void print_start_iterations();

  void print_iteration();

  void print_success();

  void print_exceeded_iterations();

  void print_error();

  void from_file(std::string &filename);

  void print_params();

  void dump_molden();
  /**
   * @brief H_core matrix
   *
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> H_core;

  /**
   * @brief One particle density matrix
   *
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> D;
  /**
   * @brief One particle density matrix from the previous iteration
   *
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> D_last;

  /**
   * @brief Fock matrix
   *
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> F;

  /**
   * @brief MO Coefficient matrix
   *
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> C;

  /**
   * @brief MO energy vector
   *
   */
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> E_orbitals;
  /**
   * @brief Energy of the quantum particles
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
   * @brief Iteration rmsc DM
   *
   */
  std::vector<std::vector<double>> iteration_rms_error;

  std::vector<std::vector<libint2::DIIS<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>> diis;
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
  int independent_converged_iteration_num = -1;

  bool diis_extrapolation = true;
  int diis_start = 1;
  double diis_damping = 0.0;
  double diis_mixing_fraction = 0.0;
  int diis_size = 5;
  bool incremental_fock = true;
  std::vector<std::vector<bool>> incremental_fock_reset;
  std::vector<std::vector<double>> incremental_fock_reset_threshold;
  std::vector<std::vector<int>> incremental_fock_reset_iteration;
  std::vector<std::vector<int>> incremental_fock_start;
  int incremental_fock_reset_freq = 8;
  int incremental_fock_delay_after_independent_converged = 10;
  double incremental_fock_initial_onset_thresh = 1e-4;
  bool Cauchy_Schwarz_screening = false;
  double Cauchy_Schwarz_threshold = 1e-12;

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
