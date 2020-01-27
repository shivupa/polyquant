#include <basis/basis.hpp>
#include <integral/integral.hpp>
#include <io/io.hpp>
#include <molecule/molecule.hpp>
#include <string>

#ifndef PYCI_RHF_H
#define PYCI_RHF_H
/**
 * @brief A class to set up a calculation.
 *
 */
class PYCI_RHF : PYCI_SCF {
public:
  PYCI_RHF() = default;
  /**
   * @brief Construct a new pyci calculation object using the setup_calculation
   * function.
   *
   * @param filename the input file
   */
  PYCI_RHF(const std::string &filename) : PYCI_SCF(filename);

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
  Mat H_core;
};
#endif
