#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "molecule/quantum_particles.hpp"
#include "scf/scf.hpp"
#include <libint2/chemistry/sto3g_atomic_density.h>
#include <string>

#ifndef PYCI_RHF_H
#define PYCI_RHF_H
namespace selci {

class PYCI_RHF : PYCI_SCF {
public:
  PYCI_RHF() = default;
  PYCI_RHF(const PYCI_INPUT &input_params, const PYCI_MOLECULE &input_molecule,
           const PYCI_BASIS &input_basis, const PYCI_INTEGRAL &input_integral)
      : PYCI_SCF(input_params, input_molecule, input_basis, input_integral){};

  void form_H_core() override;
  void form_fock() override;
  void diag_fock() override;
  void form_DM() override;
  void calculate_E_elec() override;
  void calculate_E_total() override;
  void check_stop() override;
  void run_iteration() override;
  void guess_DM() override;
  void run() override;

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
  /**
   * @brief Exceeded iterations?
   *
   */
  bool exceeded_iterations = false;
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
};
} // namespace selci
#endif
