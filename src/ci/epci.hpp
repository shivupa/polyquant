#ifndef POLYQUANT_EPCI_H
#define POLYQUANT_EPCI_H
#include "basis/basis.hpp"
#include "ci/determinant_set.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "molecule/quantum_particles.hpp"
#include "scf/epscf.hpp"
#include <Eigen/Core>
#include <Spectra/DavidsonSymEigsSolver.h>
#include <Spectra/SymEigsSolver.h>
#include <Spectra/MatOp/SparseSymMatProd.h>
#include <combinations.hpp>
#include <inttypes.h>
#include <string>

namespace polyquant {

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
  void dump_ham();

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

  std::vector<std::tuple<int,int,int>> excitation_level;
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
};
} // namespace polyquant
#endif
