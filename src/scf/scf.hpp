#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include <string>

#ifndef PYCI_SCF_H
#define PYCI_SCF_H
namespace selci {

/**
 * @brief A class to set up SCF type calculations.
 *
 */
class PYCI_SCF {
public:
  PYCI_SCF() = default;
  PYCI_SCF(const PYCI_INPUT &input_params, const PYCI_MOLECULE &input_molecule,
           const PYCI_BASIS &input_basis, const PYCI_INTEGRAL &input_integral);

  void set_input(const PYCI_INPUT &input_params);
  void set_molecule(const PYCI_MOLECULE &input_molecule);
  void set_basis(const PYCI_BASIS &input_basis);
  void set_integral(const PYCI_INTEGRAL &input_integral);

  void print_start_iterations();
  void print_iteration();
  void print_success();
  void print_exceeded_iterations();
  void print_error();

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
  PYCI_INPUT input_params;

  /**
   * @brief the input molecule
   *
   */
  PYCI_MOLECULE input_molecule;

  /**
   * @brief the input basis
   *
   */
  PYCI_BASIS input_basis;

  /**
   * @brief integrals calculated for the input molecule in the input basis
   *
   */
  PYCI_INTEGRAL input_integral;
};
} // namespace selci
#endif
