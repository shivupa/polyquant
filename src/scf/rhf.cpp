#include <scf/rhf.hpp>

void PYCI_RHF::form_H_core() {
  auto num_basis = this->input_basis.num_basis;
  this->H_core = xt::zeros<double>({num_basis, num_basis});
  this->H_core += this->input_integral.kinetic;
  this->H_core += this->input_integral.nuclear;
  xt::dump_npy("hcore.npy", this->H_core);
}
void PYCI_RHF::form_fock() {
  auto num_basis = this->input_basis.num_basis;
  this->F = xt::zeros<double>({num_basis, num_basis});
  this->F = this->H_core;
  for (int i = 0; i < num_basis; i++) {
    for (int j = 0; j < num_basis; j++) {
      for (int k = 0; k < num_basis; k++) {
        for (int l = 0; l < num_basis; l++) {
          F(i, j) += this->D(k, l) *
                     ((2.0 * this->input_integral.twoelec(
                                 this->input_integral.idx8(i, j, k, l)) -
                       this->input_integral.twoelec(
                           this->input_integral.idx8(i, k, j, l))));
        }
      }
    }
  }
  xt::dump_npy("F.npy", this->F);
}
void PYCI_RHF::diag_fock() {}
void PYCI_RHF::form_DM() {}
void PYCI_RHF::calculate_E_elec() {}
void PYCI_RHF::calculate_E_total() {}
void PYCI_RHF::check_stop() {}
void PYCI_RHF::run_iteration() {}
void PYCI_RHF::guess_DM() {
  auto num_basis = this->input_basis.num_basis;
  this->D = xt::zeros<double>({num_basis, num_basis});
}
void PYCI_RHF::run() {
  this->form_H_core();
  this->guess_DM();
  this->form_fock();
  this->diag_fock();
}