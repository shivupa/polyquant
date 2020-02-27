#include <scf/eprhf.hpp>

void PYCI_EPRHF::form_H_core() {
  auto num_basis = this->input_basis.num_basis;
  this->H_core = xt::zeros<double>({num_basis, num_basis});
  this->H_core += this->input_integral.kinetic;
  this->H_core += this->excess_particle_charge * this->input_integral.nuclear;
  if (this->polarization_potential) {
    this->H_core += this->input_integral.polarization_potential;
  }
  xt::dump_npy("hcore.npy", this->H_core);
}
void PYCI_EPRHF::form_fock() {
  // TODO
  auto num_basis = this->input_basis.num_basis;
  this->F = xt::zeros<double>({num_basis, num_basis});
  this->F += this->H_core;
  for (int i = 0; i < num_basis; i++) {
    for (int j = 0; j < num_basis; j++) {
      for (int k = 0; k < num_basis; k++) {
        for (int l = 0; l < num_basis; l++) {
          if (this->iteration_num < 1 || this->relax_target) {
            this->elec_RHF.F(i, j) +=
                this->elec_RHF.D(k, l) *
                ((2.0 * this->input_integral.twoelec(
                            this->input_integral.idx8(i, j, k, l)) -
                  this->input_integral.twoelec(
                      this->input_integral.idx8(i, k, j, l))));
          }
          if (exchange) {
            // check this equation.
            if (this->iteration_num < 1 || this->relax_target) {
              this->elec_RHF.F(i, j) +=
                  -this->excess_particle_charge * this->D(k, l) *
                  ((2.0 * this->input_integral.twoelec(
                              this->input_integral.idx8(i, j, k, l)) -
                    this->input_integral.twoelec(
                        this->input_integral.idx8(i, k, j, l))));
            }
            this->F(i, j) +=
                -this->excess_particle_charge * this->elec_RHF.D(k, l) *
                ((2.0 * this->input_integral.twoelec(
                            this->input_integral.idx8(i, j, k, l)) -
                  this->input_integral.twoelec(
                      this->input_integral.idx8(i, k, j, l))));
          } else {
            if (this->iteration_num < 1 || this->relax_target) {
              this->elec_RHF.F(i, j) +=
                  -this->excess_particle_charge * this->D(k, l) *
                  this->input_integral.twoelec(
                      this->input_integral.idx8(i, j, k, l));
            }
            this->F(i, j) +=
                -this->excess_particle_charge * this->elec_RHF.D(k, l) *
                ((2.0 * this->input_integral.twoelec(
                            this->input_integral.idx8(i, j, k, l))));
          }
        }
      }
    }
  }
  if (this->iteration_num <= 1) {

    xt::dump_npy("F_pos.npy", this->F);
  }
}
void PYCI_EPRHF::diag_fock() {
  auto num_basis = this->input_basis.num_basis;
  xt::xarray<double> F_prime = xt::zeros<double>({num_basis, num_basis});
  xt::xarray<double> C_prime = xt::zeros<double>({num_basis, num_basis});
  F_prime =
      xt::linalg::dot(this->input_integral.orth_X,
                      xt::linalg::dot(this->F, this->input_integral.orth_X));

  auto F_prime_eigen = xt::linalg::eigh(F_prime);
  this->E_orbitals = std::get<0>(F_prime_eigen);
  C_prime = std::get<1>(F_prime_eigen);

  this->C = xt::linalg::dot(this->input_integral.orth_X, C_prime);
}
void PYCI_EPRHF::form_DM() {
  this->D_last = this->D;
  auto num_basis = this->input_basis.num_basis;
  this->D = xt::zeros<double>({num_basis, num_basis});
  for (size_t i = 0; i < num_basis; i++) {
    for (size_t j = 0; j < num_basis; j++) {
      // we only support a single excess particle
      for (size_t k = 0; k < 1; k++) {
        this->D(i, j) += this->C(i, k) * this->C(j, k);
      }
    }
  }
}
void PYCI_EPRHF::calculate_E_elec_plus_excess_particle() {
  this->E_elec_plus_ep_last = this->E_elec_plus_ep;
  this->E_elec_plus_ep =
      xt::sum(this->elec_RHF.D * (this->elec_RHF.H_core + this->elec_RHF.F))(0);
  this->E_elec_plus_ep += 0.5 * xt::sum(this->D * (this->H_core + this->F))(0);
}
void PYCI_EPRHF::calculate_E_total() {
  this->E_total = this->E_elec_plus_ep + this->input_molecule.E_nuc;
}
void PYCI_EPRHF::check_stop() {
  this->iteration_E_diff =
      std::abs(this->E_elec_plus_ep - this->E_elec_plus_ep_last);
  this->iteration_rmsc_dm =
      std::abs(xt::sum(xt::square(this->D - this->D_last))(0));
  if ((std::abs(this->iteration_E_diff) < this->convergence_E) &&
      (this->iteration_rmsc_dm < this->convergence_DM)) {
    this->converged = true;
    this->stop = true;
  } else if (this->iteration_num == this->iteration_max) {
    this->exceeded_iterations = true;
    this->stop = true;
  }
}
void PYCI_EPRHF::run_iteration() {
  // TODO
  this->iteration_num += 1;
  this->form_fock();
  this->diag_fock();
  this->form_DM();
  if (this->relax_target) {
    this->elec_RHF.diag_fock();
    this->elec_RHF.form_DM();
  }
  this->calculate_E_elec();
}
void PYCI_EPRHF::guess_DM() {
  auto num_basis = this->input_basis.num_basis;
  this->D = xt::zeros<double>({num_basis, num_basis});
}
void PYCI_EPRHF::run() {
  // calculate integrals we need
  this->input_integral.calculate_overlap();
  this->input_integral.symmetric_orthogonalization();
  this->input_integral.calculate_kinetic();
  this->input_integral.calculate_nuclear();
  this->input_integral.calculate_two_electron();
  if (this->polarization_potential) {
    this->input_integral.calculate_polarization_potential();
  }

  // start the RHF process
  this->form_H_core();
  this->guess_DM();
  while (!this->stop) {
    Selci_cout(this->iteration_num);
    Selci_cout(this->E_elec_plus_ep);

    this->run_iteration();
    this->check_stop();
  }
  this->calculate_E_total();
  Selci_cout(this->E_total);
  if (this->stop && this->converged) {
    this->print_success();
  } else if (this->stop && this->exceeded_iterations) {
    this->print_exceeded_iterations();
  } else {
    this->print_error();
  }
}

void PYCI_EPRHF::set_electronic_system(PYCI_RHF &elec_RHF) {
  this->elec_RHF = elec_RHF;
}
void PYCI_EPRHF::set_polarization_potential() {
  this->polarization_potential = true;
}
void PYCI_EPRHF::set_relax_target() { this->relax_target = true; }

void PYCI_EPRHF::set_excess_particle_type(std::string particle_type) {
  if (particle_type == "ELECTRON") {
    this->exchange = true;
    this->excess_particle_charge = -1;
  } else if (particle_type == "POSITRON") {
    this->exchange = false;
    this->excess_particle_charge = 1;
  }
}