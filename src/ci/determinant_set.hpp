#ifndef POLYQUANT_DETSET_H
#define POLYQUANT_DETSET_H
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "molecule/quantum_particles.hpp"
#include "scf/scf.hpp"
#include <libint2/chemistry/sto3g_atomic_density.h>
#include <libint2/diis.h>
#include <string>

namespace polyquant {

class POLYQUANT_DETSET {
public:
  POLYQUANT_DETSET() = default;
  POLYQUANT_DETSET(const POLYQUANT_INPUT &input_params,
                   const POLYQUANT_MOLECULE &input_molecule,
                   const POLYQUANT_BASIS &input_basis,
                   const POLYQUANT_INTEGRAL &input_integral const POLYQUANT_SCF
                       &input_scf){};

  void setup_detset(const POLYQUANT_INPUT &input_params,
                    const POLYQUANT_MOLECULE &input_molecule,
                    const POLYQUANT_BASIS &input_basis,
                    const POLYQUANT_INTEGRAL &input_integral const POLYQUANT_SCF
                        &input_scf){};

  std::vector<std::vector<std::bitset>> unique_dets;
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

  std::vector<std::vector<
      libint2::DIIS<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>>
      diis;
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
