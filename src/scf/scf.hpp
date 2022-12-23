#ifndef POLYQUANT_SCF_H
#define POLYQUANT_SCF_H
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <string>

namespace polyquant {

/**
 * @brief A class to set up SCF type calculations.
 *
 */
class POLYQUANT_SCF {
public:
  POLYQUANT_SCF() = default;
  POLYQUANT_SCF(std::shared_ptr<POLYQUANT_INPUT> params, std::shared_ptr<POLYQUANT_SYMMETRY> symmetry, std::shared_ptr<POLYQUANT_MOLECULE> molecule, std::shared_ptr<POLYQUANT_BASIS> basis,
                std::shared_ptr<POLYQUANT_INTEGRAL> integral);
  void setup_calculation(std::shared_ptr<POLYQUANT_INPUT> params, std::shared_ptr<POLYQUANT_SYMMETRY> symmetry, std::shared_ptr<POLYQUANT_MOLECULE> molecule, std::shared_ptr<POLYQUANT_BASIS> basis,
                         std::shared_ptr<POLYQUANT_INTEGRAL> integral);
  void set_input(std::shared_ptr<POLYQUANT_INPUT> params);
  void set_symmetry(std::shared_ptr<POLYQUANT_SYMMETRY> symmetry);
  void set_molecule(std::shared_ptr<POLYQUANT_MOLECULE> molecule);
  void set_basis(std::shared_ptr<POLYQUANT_BASIS> basis);
  void set_integral(std::shared_ptr<POLYQUANT_INTEGRAL> integral);

  virtual void form_H_core() = 0;
  virtual void form_fock() = 0;
  virtual void diag_fock() = 0;
  virtual void form_DM() = 0;
  virtual void calculate_E_elec() = 0;
  virtual void calculate_E_total() = 0;
  virtual void check_stop() = 0;
  virtual void run_iteration() = 0;
  virtual void guess_DM() = 0;
  virtual void run() = 0;

  bool verbose = false;

  /**
   * @brief the input parameters
   *
   */
  std::shared_ptr<POLYQUANT_INPUT> input_params;

  /**
   * @brief the input symmetry handler
   *
   */
  std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry;

  /**
   * @brief the input molecule
   *
   */
  std::shared_ptr<POLYQUANT_MOLECULE> input_molecule;

  /**
   * @brief the input basis
   *
   */
  std::shared_ptr<POLYQUANT_BASIS> input_basis;

  /**
   * @brief integrals calculated for the input molecule in the input basis
   *
   */
  std::shared_ptr<POLYQUANT_INTEGRAL> input_integral;
};
} // namespace polyquant
#endif
