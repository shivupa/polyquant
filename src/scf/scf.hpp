#include <basis/basis.hpp>
#include <integral/integral.hpp>
#include <io/io.hpp>
#include <molecule/molecule.hpp>
#include <string>

#ifndef PYCI_SCF_H
#define PYCI_SCF_H
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
  void print_sucess();
  void print_exceeded_iterations();
  void print_error();

  virtual void form_H_core();
  virtual void form_fock();
  virtual void diag_fock();
  virtual void form_DM();
  virtual void calculate_E_elec();
  virtual void calculate_E_total();
  virtual void check_stop();
  virtual void run_iteration();
  virtual void guess_DM();
  virtual void run();

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
#endif
