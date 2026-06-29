#ifndef POLYQUANT_SCF_H
#define POLYQUANT_SCF_H

/**
 * @file scf.hpp
 * @brief Abstract base class for self-consistent-field solvers.
 */

#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <string>

namespace polyquant {

/**
 * @brief Base interface for Polyquant SCF implementations.
 *
 * The base class stores shared ownership of the parsed input, symmetry,
 * molecule, basis, and integral objects required by a concrete SCF driver.
 * Derived classes are responsible for allocating their working arrays and for
 * implementing the full SCF lifecycle from initial guess through convergence.
 */
class POLYQUANT_SCF {
public:
  /**
   * @brief Construct an empty SCF driver.
   */
  POLYQUANT_SCF() = default;
  /**
   * @brief Construct and bind the common calculation inputs.
   *
   * @param params Parsed input parameters.
   * @param symmetry Symmetry helper shared with the calculation.
   * @param molecule Molecule description shared with the calculation.
   * @param basis AO basis data shared with the calculation.
   * @param integral Integral engine object shared with the calculation.
   */
  POLYQUANT_SCF(std::shared_ptr<POLYQUANT_INPUT> params, std::shared_ptr<POLYQUANT_SYMMETRY> symmetry, std::shared_ptr<POLYQUANT_MOLECULE> molecule, std::shared_ptr<POLYQUANT_BASIS> basis,
                std::shared_ptr<POLYQUANT_INTEGRAL> integral);
  /**
   * @brief Attach the common calculation objects needed by the SCF solver.
   *
   * Derived classes generally call this once before any setup or `run()`.
   */
  void setup_calculation(std::shared_ptr<POLYQUANT_INPUT> params, std::shared_ptr<POLYQUANT_SYMMETRY> symmetry, std::shared_ptr<POLYQUANT_MOLECULE> molecule, std::shared_ptr<POLYQUANT_BASIS> basis,
                         std::shared_ptr<POLYQUANT_INTEGRAL> integral);
  /**
   * @brief Store the parsed input object.
   */
  void set_input(std::shared_ptr<POLYQUANT_INPUT> params);
  /**
   * @brief Store the symmetry helper.
   */
  void set_symmetry(std::shared_ptr<POLYQUANT_SYMMETRY> symmetry);
  /**
   * @brief Store the molecule object.
   */
  void set_molecule(std::shared_ptr<POLYQUANT_MOLECULE> molecule);
  /**
   * @brief Store the basis object.
   */
  void set_basis(std::shared_ptr<POLYQUANT_BASIS> basis);
  /**
   * @brief Store the integral object.
   */
  void set_integral(std::shared_ptr<POLYQUANT_INTEGRAL> integral);

  /**
   * @brief Build the one-particle core Hamiltonian for each particle type.
   */
  virtual void form_H_core() = 0;
  /**
   * @brief Build the current Fock matrices from the active density matrices.
   */
  virtual void form_fock() = 0;
  /**
   * @brief Diagonalize the current Fock matrices to obtain orbitals and orbital energies.
   */
  virtual void diag_fock() = 0;
  /**
   * @brief Form the one-particle density matrices from the current orbitals and occupations.
   */
  virtual void form_DM() = 0;
  /**
   * @brief Compute the electronic or particle-resolved mean-field energies.
   */
  virtual void calculate_E_elec() = 0;
  /**
   * @brief Compute the total energy including classical contributions.
   */
  virtual void calculate_E_total() = 0;
  /**
   * @brief Update convergence flags and determine whether the SCF loop should stop.
   */
  virtual void check_stop() = 0;
  /**
   * @brief Execute one SCF iteration.
   */
  virtual void run_iteration() = 0;
  /**
   * @brief Build an initial density guess.
   */
  virtual void guess_DM() = 0;
  /**
   * @brief Run the complete SCF procedure to completion or failure.
   */
  virtual void run() = 0;

  /**
   * @brief Enable verbose matrix and vector dumps for debugging.
   */
  bool verbose = false;

  /**
   * @brief Shared parsed input parameters.
   */
  std::shared_ptr<POLYQUANT_INPUT> input_params;

  /**
   * @brief Shared symmetry handler.
   */
  std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry;

  /**
   * @brief Shared molecule description.
   */
  std::shared_ptr<POLYQUANT_MOLECULE> input_molecule;

  /**
   * @brief Shared AO basis description.
   */
  std::shared_ptr<POLYQUANT_BASIS> input_basis;

  /**
   * @brief Shared integral engine for the current molecule and basis.
   */
  std::shared_ptr<POLYQUANT_INTEGRAL> input_integral;
};
} // namespace polyquant
#endif
