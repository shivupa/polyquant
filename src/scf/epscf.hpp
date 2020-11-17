#ifndef POLYQUANT_EPSCF_H
#define POLYQUANT_EPSCF_H
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "molecule/quantum_particles.hpp"
#include "scf/scf.hpp"
#include <libint2/chemistry/sto3g_atomic_density.h>
#include <string>

namespace polyquant {

class POLYQUANT_EPSCF : POLYQUANT_SCF {
public:
  POLYQUANT_EPSCF() = default;
  POLYQUANT_EPSCF(const POLYQUANT_INPUT &input_params,
                  const POLYQUANT_MOLECULE &input_molecule,
                  const POLYQUANT_BASIS &input_basis,
                  const POLYQUANT_INTEGRAL &input_integral)
      : POLYQUANT_SCF(input_params, input_molecule, input_basis,
                      input_integral){};

  void form_H_core() override;
  double form_fock_elem(double Da_kl, double Db_kl, double eri_ijkl,
                        double eri_ikjl, double qa, double qb, bool exchange);
  void form_fock() override;
  void diag_fock() override;
  void form_DM() override;
  void calculate_E_elec() override;
  void calculate_E_total() override;
  void check_stop() override;
  void run_iteration() override;
  void guess_DM() override;
  void run() override;
  void print_params();
  /**
   * @brief H_core matrix
   *
   */
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> H_core;

  /**
   * @brief One particle density matrix
   *
   */
  std::vector<
      std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>
      D;
  /**
   * @brief One particle density matrix from the previous iteration
   *
   */
  std::vector<
      std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>
      D_last;

  /**
   * @brief Fock matrix
   *
   */
  std::vector<
      std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>
      F;

  /**
   * @brief MO Coefficient matrix
   *
   */
  std::vector<
      std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>
      C;

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
  std::vector<std::vector<double>> iteration_rmsc_dm;
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
