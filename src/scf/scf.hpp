#ifndef POLYQUANT_SCF_H
#define POLYQUANT_SCF_H
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/utils.hpp"
#include "io/timer.hpp"
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
  POLYQUANT_SCF(const POLYQUANT_INPUT &input_params,
                const POLYQUANT_MOLECULE &input_molecule,
                const POLYQUANT_BASIS &input_basis,
                const POLYQUANT_INTEGRAL &input_integral);
  void setup_calculation(const POLYQUANT_INPUT &input_params,
                         const POLYQUANT_MOLECULE &input_molecule,
                         const POLYQUANT_BASIS &input_basis,
                         const POLYQUANT_INTEGRAL &input_integral);
  void set_input(const POLYQUANT_INPUT &input_params);
  void set_molecule(const POLYQUANT_MOLECULE &input_molecule);
  void set_basis(const POLYQUANT_BASIS &input_basis);
  void set_integral(const POLYQUANT_INTEGRAL &input_integral);

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
};
} // namespace polyquant
#endif
