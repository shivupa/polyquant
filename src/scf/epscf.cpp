#include "scf/epscf.hpp"

using namespace polyquant;

void POLYQUANT_EPSCF::form_H_core() {
  auto num_basis = this->input_basis.num_basis;
  this->H_core.resize(this->input_molecule.quantum_particles.size());
  std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_idx = 0;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    this->H_core[quantum_part_idx].setZero(num_basis, num_basis);
    this->H_core[quantum_part_idx] +=
        (1.0 / quantum_part.mass) * this->input_integral.kinetic;
    this->H_core[quantum_part_idx] +=
        (-quantum_part.charge) * this->input_integral.nuclear;
    Polyquant_dump_mat_to_file(this->H_core[quantum_part_idx],
                               "H_core_" + quantum_part_key + ".txt");
    quantum_part_idx++;
  }
}
double POLYQUANT_EPSCF::form_fock_elem(double Da_kl, double Db_kl,
                                       double eri_ijkl, double eri_ikjl,
                                       double qa, double qb, bool exchange) {
  double gamma = 0.0;
  if (exchange) {
    gamma = 1.0;
  }
  // note if the beta element is desired call the function with the beta element
  // as Da_ij
  return (qa * qb) *
         (((Da_kl + Db_kl) * eri_ijkl) - (gamma * Da_kl * eri_ikjl));
}

void POLYQUANT_EPSCF::form_fock() {
  // TODO
  auto num_basis = this->input_basis.num_basis;
  std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_a_idx = 0;
  std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_b_idx = 0;

  for (auto const &[quantum_part_a_key, quantum_part_a] :
       this->input_molecule.quantum_particles) {
    this->F[quantum_part_a_idx][0].setZero(num_basis, num_basis);
    this->F[quantum_part_a_idx][0] += this->H_core[quantum_part_a_idx];
    if (quantum_part_a.num_parts > 1 && quantum_part_a.restricted == false) {
      this->F[quantum_part_a_idx][1].setZero(num_basis, num_basis);
      this->F[quantum_part_a_idx][1] += this->H_core[quantum_part_a_idx];
    }
    quantum_part_a_idx++;
  }
  for (size_t i = 0; i < num_basis; i++) {
    for (size_t j = 0; j < num_basis; j++) {
      for (size_t k = 0; k < num_basis; k++) {
        for (size_t l = 0; l < num_basis; l++) {
          double eri_ijkl = this->input_integral.twoelec(
              this->input_integral.idx8(i, j, k, l));
          double eri_ikjl = this->input_integral.twoelec(
              this->input_integral.idx8(i, k, j, l));
          quantum_part_a_idx = 0;
          for (auto const &[quantum_part_a_key, quantum_part_a] :
               this->input_molecule.quantum_particles) {
            // Normal Fock Matrix elements
            double Da_kl = this->D[quantum_part_a_idx][0](k, l);
            double qa = quantum_part_a.charge;
            bool exchange = quantum_part_a.exchange;
            if (quantum_part_a.num_parts == 1) {
              this->F[quantum_part_a_idx][0](i, j) += form_fock_elem(
                  Da_kl, 0.0, eri_ijkl, eri_ikjl, qa, qa, exchange);
            } else if (quantum_part_a.restricted == false) {
              double Db_kl = this->D[quantum_part_a_idx][1](k, l);
              this->F[quantum_part_a_idx][0](i, j) += form_fock_elem(
                  Da_kl, Db_kl, eri_ijkl, eri_ikjl, qa, qa, exchange);
              this->F[quantum_part_a_idx][0](i, j) += form_fock_elem(
                  Db_kl, Da_kl, eri_ijkl, eri_ikjl, qa, qa, exchange);
            } else {
              this->F[quantum_part_a_idx][0](i, j) += form_fock_elem(
                  Da_kl, Da_kl, eri_ijkl, eri_ikjl, qa, qa, exchange);
            }
            // Interactions between particle types Fock Matrix elements
            if (!independent_converged) {
              continue;
            }
            quantum_part_b_idx = 0;
            for (auto const &[quantum_part_b_key, quantum_part_b] :
                 this->input_molecule.quantum_particles) {
              if (quantum_part_a_idx != quantum_part_b_idx) {
                // todo add exchange with electrons if desired?
                double elem = 0.0;
                double Da_kl = this->D[quantum_part_b_idx][0](k, l);
                double qb = quantum_part_b.charge;
                if (quantum_part_b.num_parts == 1) {
                  elem = form_fock_elem(Da_kl, 0.0, eri_ijkl, eri_ikjl, qa, qb,
                                        false);
                } else if (quantum_part_b.restricted == false) {
                  double Db_kl = this->D[quantum_part_b_idx][1](k, l);
                  elem = form_fock_elem(Da_kl, Db_kl, eri_ijkl, eri_ikjl, qa,
                                        qb, false);
                } else {
                  elem = form_fock_elem(Da_kl, Da_kl, eri_ijkl, eri_ikjl, qa,
                                        qb, false);
                }
                this->F[quantum_part_a_idx][0](i, j) += elem;
                if (quantum_part_a.num_parts > 1 &&
                    quantum_part_a.restricted == false) {
                  this->F[quantum_part_a_idx][1](i, j) += elem;
                }
              }
              quantum_part_b_idx++;
            }
            quantum_part_a_idx++;
          }
        }
      }
    }
  }
  if (this->iteration_num == 1) {
    quantum_part_a_idx = 0;
    for (auto const &[quantum_part_a_key, quantum_part_a] :
         this->input_molecule.quantum_particles) {
      Polyquant_cout("Dumping");
      Polyquant_dump_mat_to_file(this->F[quantum_part_a_idx][0],
                                 "Fock_" + quantum_part_a_key + "_alpha.txt");
      if (quantum_part_a.num_parts > 1 && quantum_part_a.restricted == false) {
        Polyquant_dump_mat_to_file(this->F[quantum_part_a_idx][1],
                                   "Fock_" + quantum_part_a_key + "_beta.txt");
      }
      quantum_part_a_idx++;
    }
  }
}

void POLYQUANT_EPSCF::diag_fock() {
  auto num_basis = this->input_basis.num_basis;
  std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_idx = 0;
  this->E_orbitals.resize(this->input_molecule.quantum_particles.size());
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      this->E_orbitals[quantum_part_idx].resize(2);
    } else {
      this->E_orbitals[quantum_part_idx].resize(1);
    }

    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> F_prime(num_basis,
                                                                  num_basis);
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C_prime(num_basis,
                                                                  num_basis);
    F_prime = this->input_integral.orth_X * this->F[quantum_part_idx][0] *
              this->input_integral.orth_X;
    Eigen::SelfAdjointEigenSolver<
        Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>
        eigensolver(F_prime);
    this->E_orbitals[quantum_part_idx][0] = eigensolver.eigenvalues();
    C_prime = eigensolver.eigenvectors();
    this->C[quantum_part_idx][0] = this->input_integral.orth_X * C_prime;
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      F_prime = this->input_integral.orth_X * this->F[quantum_part_idx][1] *
                this->input_integral.orth_X;
      Eigen::SelfAdjointEigenSolver<
          Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>
          eigensolver_beta(F_prime);
      this->E_orbitals[quantum_part_idx][1] = eigensolver_beta.eigenvalues();
      C_prime = eigensolver_beta.eigenvectors();
      this->C[quantum_part_idx][1] = this->input_integral.orth_X * C_prime;
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::form_DM() {
  auto num_basis = this->input_basis.num_basis;
  std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_idx = 0;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    this->D_last[quantum_part_idx][0] = this->D[quantum_part_idx][0];
    this->D[quantum_part_idx][0].setZero(num_basis, num_basis);
    for (size_t i = 0; i < num_basis; i++) {
      for (size_t j = 0; j < num_basis; j++) {
        for (int k = 0; k < quantum_part.num_parts_alpha; k++) {
          this->D[quantum_part_idx][0](i, j) +=
              this->C[quantum_part_idx][0](i, k) *
              this->C[quantum_part_idx][0](j, k);
        }
      }
    }
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      this->D_last[quantum_part_idx][1] = this->D[quantum_part_idx][1];
      this->D[quantum_part_idx][1].setZero(num_basis, num_basis);
      for (size_t i = 0; i < num_basis; i++) {
        for (size_t j = 0; j < num_basis; j++) {
          for (int k = 0; k < quantum_part.num_parts_alpha; k++) {
            this->D[quantum_part_idx][1](i, j) +=
                this->C[quantum_part_idx][1](i, k) *
                this->C[quantum_part_idx][1](j, k);
          }
        }
      }
    }
    quantum_part_idx++;
  }
}
void POLYQUANT_EPSCF::calculate_E_elec() {
  std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_idx = 0;
  this->E_particles.resize(this->input_molecule.quantum_particles.size());
  this->E_particles_last.resize(this->input_molecule.quantum_particles.size());
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    this->E_particles_last[quantum_part_idx] =
        this->E_particles[quantum_part_idx];
    if (quantum_part.num_parts == 1) {
      this->E_particles[quantum_part_idx] =
          0.5 * (this->D[quantum_part_idx][0].array() *
                 (this->H_core[quantum_part_idx] + this->F[quantum_part_idx][0])
                     .array())
                    .sum();
    } else if (quantum_part.restricted == false) {
      this->E_particles[quantum_part_idx] =
          0.5 * (((this->D[quantum_part_idx][0] + this->D[quantum_part_idx][1])
                      .array() *
                  (this->H_core[quantum_part_idx]).array()) +
                 ((this->D[quantum_part_idx][0]).array() *
                  (this->F[quantum_part_idx][0]).array()) +
                 ((this->D[quantum_part_idx][1]).array() *
                  (this->F[quantum_part_idx][1]).array()))
                    .sum();
    } else {
      this->E_particles[quantum_part_idx] =
          (this->D[quantum_part_idx][0].array() *
           (this->H_core[quantum_part_idx] + this->F[quantum_part_idx][0])
               .array())
              .sum();
    }
    quantum_part_idx++;
  }
}
void POLYQUANT_EPSCF::calculate_E_total() {
  // Polyquant_cout(this->input_molecule.E_nuc);
  this->E_total = 0.0;
  for (auto &E_part : E_particles) {
    this->E_total += E_part;
  }
  this->E_total += this->input_molecule.E_nuc;
}
void POLYQUANT_EPSCF::check_stop() {
  this->converged = true;
  this->stop = true;
  this->iteration_E_diff.resize(this->input_molecule.quantum_particles.size());
  this->iteration_rmsc_dm.resize(this->input_molecule.quantum_particles.size());
  std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_idx = 0;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    std::stringstream buffer;
    buffer << std::setprecision(20) << "Convergence status for "
           << quantum_part_key << std::endl;
    auto E_diff = this->E_particles[quantum_part_idx] -
                  this->E_particles_last[quantum_part_idx];
    this->iteration_E_diff[quantum_part_idx] = std::abs(E_diff);
    buffer << "delta E = " << E_diff << " converged = " << std::boolalpha
           << (this->iteration_E_diff[quantum_part_idx] < this->convergence_E)
           << std::endl;

    if (this->iteration_E_diff[quantum_part_idx] >= this->convergence_E) {
      this->converged = false;
      this->stop = false;
    }
    if (quantum_part.num_parts == 1) {
      this->iteration_rmsc_dm[quantum_part_idx].resize(1);
      this->iteration_rmsc_dm[quantum_part_idx][0] = std::abs(
          ((this->D[quantum_part_idx][0] - this->D_last[quantum_part_idx][0])
               .array()
               .pow(2))
              .sum());
      buffer << "rmsc dm = " << this->iteration_rmsc_dm[quantum_part_idx][0]
             << " converged = " << std::boolalpha
             << (this->iteration_rmsc_dm[quantum_part_idx][0] <
                 this->convergence_DM)
             << std::endl;
      if (this->iteration_rmsc_dm[quantum_part_idx][0] >=
          this->convergence_DM) {
        this->converged = false;
        this->stop = false;
      }

    } else if (quantum_part.restricted == false) {
      this->iteration_rmsc_dm[quantum_part_idx].resize(2);
      this->iteration_rmsc_dm[quantum_part_idx][0] = std::abs(
          ((this->D[quantum_part_idx][0] - this->D_last[quantum_part_idx][0])
               .array()
               .pow(2))
              .sum());
      this->iteration_rmsc_dm[quantum_part_idx][1] = std::abs(
          ((this->D[quantum_part_idx][1] - this->D_last[quantum_part_idx][1])
               .array()
               .pow(2))
              .sum());
      buffer << "rmsc dm (alpha) = "
             << this->iteration_rmsc_dm[quantum_part_idx][0]
             << " converged = " << std::boolalpha
             << (this->iteration_rmsc_dm[quantum_part_idx][0] <
                 this->convergence_DM)
             << std::endl;
      buffer << "rmsc dm (beta) = "
             << this->iteration_rmsc_dm[quantum_part_idx][1]
             << " converged = " << std::boolalpha
             << (this->iteration_rmsc_dm[quantum_part_idx][1] <
                 this->convergence_DM)
             << std::endl;

      if (this->iteration_rmsc_dm[quantum_part_idx][0] >=
          this->convergence_DM) {
        this->converged = false;
        this->stop = false;
      }
      if (this->iteration_rmsc_dm[quantum_part_idx][1] >=
          this->convergence_DM) {
        this->converged = false;
        this->stop = false;
      }
    } else {
      this->iteration_rmsc_dm[quantum_part_idx].resize(1);
      this->iteration_rmsc_dm[quantum_part_idx][0] = std::abs(
          ((this->D[quantum_part_idx][0] - this->D_last[quantum_part_idx][0])
               .array()
               .pow(2))
              .sum());
      buffer << "rmsc dm = " << this->iteration_rmsc_dm[quantum_part_idx][0]
             << " converged = " << std::boolalpha
             << (this->iteration_rmsc_dm[quantum_part_idx][0] <
                 this->convergence_DM)
             << std::endl;
      if (this->iteration_rmsc_dm[quantum_part_idx][0] >=
          this->convergence_DM) {
        this->converged = false;
        this->stop = false;
      }
    }
    quantum_part_idx++;
    Polyquant_cout(buffer.str());
  }
  if (!this->independent_converged && this->converged && this->stop) {
    Polyquant_cout("Independent densities converged. Turning on interactions.");
    this->converged = false;
    this->stop = false;
    this->independent_converged = true;
  }
  if (this->iteration_num == this->iteration_max) {
    this->exceeded_iterations = true;
    this->stop = true;
  }
}
void POLYQUANT_EPSCF::run_iteration() {
  this->iteration_num += 1;
  this->form_fock();
  this->diag_fock();
  this->form_DM();
  this->calculate_E_elec();
}
void POLYQUANT_EPSCF::guess_DM() {
  // SAD
  // TODO SAP
  // TODO move into separate functions
  auto num_basis = this->input_basis.num_basis;
  this->D.resize(this->input_molecule.quantum_particles.size());
  this->D_last.resize(this->input_molecule.quantum_particles.size());
  this->C.resize(this->input_molecule.quantum_particles.size());
  this->F.resize(this->input_molecule.quantum_particles.size());
  std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_idx = 0;
  this->E_particles.resize(this->input_molecule.quantum_particles.size());
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    if (quantum_part.num_parts == 1) {
      this->D[quantum_part_idx].resize(1);
      this->D_last[quantum_part_idx].resize(1);
      this->C[quantum_part_idx].resize(1);
      this->F[quantum_part_idx].resize(1);
      this->D[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->D_last[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->C[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->F[quantum_part_idx][0].setZero(num_basis, num_basis);
    } else if (quantum_part.restricted == false) {
      this->D[quantum_part_idx].resize(2);
      this->D_last[quantum_part_idx].resize(2);
      this->C[quantum_part_idx].resize(2);
      this->F[quantum_part_idx].resize(2);
      this->F[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->F[quantum_part_idx][1].setZero(num_basis, num_basis);
      this->C[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->C[quantum_part_idx][1].setZero(num_basis, num_basis);
      this->D[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->D[quantum_part_idx][1].setZero(num_basis, num_basis);
      this->D_last[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->D_last[quantum_part_idx][1].setZero(num_basis, num_basis);
    } else {
      this->D[quantum_part_idx].resize(1);
      this->D_last[quantum_part_idx].resize(1);
      this->C[quantum_part_idx].resize(1);
      this->F[quantum_part_idx].resize(1);
      this->F[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->D[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->D_last[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->C[quantum_part_idx][0].setZero(num_basis, num_basis);
      // SAD for Restricted systems
      // if (quantum_part_key == "electron") {
      //   // compute number of atomic orbitals
      //   size_t nao = 0;
      //   for (const auto &atom : this->input_molecule.to_libint_atom()) {
      //     const auto Z = atom.atomic_number;
      //     nao += libint2::sto3g_num_ao(Z);
      //   }

      //   // compute the minimal basis density
      //   size_t ao_offset = 0; // first AO of this atom
      //   for (const auto &atom : this->input_molecule.to_libint_atom()) {
      //     const auto Z = atom.atomic_number;
      //     const auto &occvec = libint2::sto3g_ao_occupation_vector(Z);
      //     for (const auto &occ : occvec) {
      //       this->D[quantum_part_idx][0](ao_offset, ao_offset) = occ;
      //       ++ao_offset;
      //     }
      //   }
      // }
    }

    quantum_part_idx++;
  }
}
void POLYQUANT_EPSCF::run() {
  // calculate integrals we need
  this->input_integral.calculate_overlap();
  this->input_integral.symmetric_orthogonalization();
  this->input_integral.calculate_kinetic();
  this->input_integral.calculate_nuclear();
  this->input_integral.calculate_two_electron();
  // start the SCF process
  this->form_H_core();
  this->guess_DM();
  while (!this->stop) {
    Polyquant_cout("Iteration " + std::to_string(this->iteration_num) + " :");
    auto E_parts = 0.0;
    std::map<std::string, QUANTUM_PARTICLE_SET>::size_type quantum_part_idx = 0;
    for (auto const &[quantum_part_key, quantum_part] :
         this->input_molecule.quantum_particles) {
      Polyquant_cout("E(" + quantum_part_key + ") : " +
                     std::to_string(this->E_particles[quantum_part_idx]));
      E_parts += this->E_particles[quantum_part_idx];
      quantum_part_idx++;
    }
    Polyquant_cout("E(particles) : " + std::to_string(E_parts));
    this->run_iteration();
    this->check_stop();
  }
  this->calculate_E_total();
  if (this->stop && this->converged) {
    this->print_success();
  } else if (this->stop && this->exceeded_iterations) {
    this->print_exceeded_iterations();
  } else {
    this->print_error();
  }
  Polyquant_cout(this->E_total);
}