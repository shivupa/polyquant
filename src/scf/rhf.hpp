#include <basis/basis.hpp>
#include <integral/integral.hpp>
#include <io/io.hpp>
#include <molecule/molecule.hpp>
#include <scf/scf.hpp>
#include <string>
#include <xtensor/xadapt.hpp>
#include <xtensor/xarray.hpp>
#include <xtensor/xnpy.hpp>
#include <xtensor/xview.hpp>

#ifndef PYCI_RHF_H
#define PYCI_RHF_H

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
  xt::xarray<double> H_core;

  /**
   * @brief One particle density matrix
   *
   */
  xt::xarray<double> D;

  /**
   * @brief Fock matrix
   *
   */
  xt::xarray<double> F;
};
#endif
