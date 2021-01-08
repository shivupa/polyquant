#ifndef POLYQUANT_EPCI_H
#define POLYQUANT_EPCI_H
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "molecule/quantum_particles.hpp"
#include <Eigen/Core>
#include <string>
#include <combinations.hpp>
#include <inttypes.h>

namespace polyquant {

class POLYQUANT_EPCI_HAM {
public:
  POLYQUANT_EPCI_HAM()
  int rows() { return 10; }
  int cols() { return 10; }
  // y_out = M * x_in
  void perform_op(const double *x_in, double *y_out) {}
}

class POLYQUANT_EPCI {
public:
  POLYQUANT_EPCI() = default;
  POLYQUANT_EPCI(const POLYQUANT_EPSCF &input_scf) { this->setup(input_scf); }
  void setup(const POLYQUANT_EPSCF &input_scf);
  void setup_determinants();
  void run();
  void print_start_iterations();
  void print_iteration();
  void print_success();
  void print_exceeded_iterations();
  void print_error();
  void print_params();

  int iteration_num = 0;
  /**
   * @brief Iteration energy difference
   *
   */
  std::vector<double> iteration_E_diff;

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

  std::vector<int> excitation_level;
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
} // namespace polyquant
#endif
