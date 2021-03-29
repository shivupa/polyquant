#include "scf/epscf.hpp"

using namespace polyquant;

void POLYQUANT_EPSCF::form_H_core() {
  auto num_basis = this->input_basis.num_basis;
  this->H_core.resize(this->input_molecule.quantum_particles.size());
  auto quantum_part_idx = 0ul;
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
  auto quantum_part_a_idx = 0ul;
  auto quantum_part_b_idx = 0ul;
  for (auto const &[quantum_part_a_key, quantum_part_a] :
       this->input_molecule.quantum_particles) {
    if (!this->incremental_fock ||
        incremental_fock_reset[quantum_part_a_idx][0]) {
        std::stringstream ss;
        ss << "Resetting Incremental Fock build for Particle " << quantum_part_a_idx << " spin " << 0 << std::endl;
      Polyquant_cout(ss.str());
      this->F[quantum_part_a_idx][0].setZero(num_basis, num_basis);
      this->F[quantum_part_a_idx][0] += this->H_core[quantum_part_a_idx];
      if (this->incremental_fock) {
        this->incremental_fock_reset_threshold[quantum_part_a_idx][0] =
            this->iteration_rms_error[quantum_part_a_idx][0];
        this->incremental_fock_reset_iteration[quantum_part_a_idx][0] =
            this->iteration_num;
      }
    }
    if (quantum_part_a.num_parts > 1 && quantum_part_a.restricted == false) {
      if (!this->incremental_fock ||
          incremental_fock_reset[quantum_part_a_idx][1]) {
        std::stringstream ss;
        ss << "Resetting Incremental Fock build for Particle " << quantum_part_a_idx << " spin " << 1 << std::endl;
      Polyquant_cout(ss.str());
        this->F[quantum_part_a_idx][1].setZero(num_basis, num_basis);
        this->F[quantum_part_a_idx][1] += this->H_core[quantum_part_a_idx];
        if (this->incremental_fock) {
          this->incremental_fock_reset_threshold[quantum_part_a_idx][1] =
              this->iteration_rms_error[quantum_part_a_idx][0];
          this->incremental_fock_reset_iteration[quantum_part_a_idx][1] =
              this->iteration_num;
        }
      }
    }
    quantum_part_a_idx++;
  }
  // Polyquant_cout("forming fock");
  {
#pragma omp parallel for
    for (size_t i = 0; i < num_basis; i++) {
      for (size_t j = 0; j < num_basis; j++) {
        for (size_t k = 0; k < num_basis; k++) {
          for (size_t l = 0; l < num_basis; l++) {
            double eri_ijkl = this->input_integral.twoelec(
                this->input_integral.idx8(i, j, k, l));
            double eri_ikjl = this->input_integral.twoelec(
                this->input_integral.idx8(i, k, j, l));
            for (auto quantum_part_a_idx = 0;
                 quantum_part_a_idx <
                 this->input_molecule.quantum_particles.size();
                 quantum_part_a_idx++) {
              auto quantum_part_a_it =
                  this->input_molecule.quantum_particles.begin();
              std::advance(quantum_part_a_it, quantum_part_a_idx);
              auto quantum_part_a = quantum_part_a_it->second;
              // Normal Fock Matrix elements
              double Da_kl = 0.0;
              if (this->incremental_fock &&
                  !incremental_fock_reset[quantum_part_a_idx][0]) {
                Da_kl = this->D[quantum_part_a_idx][0](k, l) -
                        this->D_last[quantum_part_a_idx][0](k, l);
              } else {
                Da_kl = this->D[quantum_part_a_idx][0](k, l);
              }
              double qa = quantum_part_a.charge;
              bool exchange = quantum_part_a.exchange;
              if (quantum_part_a.num_parts == 1) {
                this->F[quantum_part_a_idx][0](i, j) += form_fock_elem(
                    Da_kl, 0.0, eri_ijkl, eri_ikjl, qa, qa, exchange);
              } else if (quantum_part_a.num_parts > 1 &&
                         quantum_part_a.restricted == false) {
                double Db_kl = 0.0;
                if (this->incremental_fock &&
                    !incremental_fock_reset[quantum_part_a_idx][0]) {
                  Db_kl = this->D[quantum_part_a_idx][1](k, l) -
                          this->D_last[quantum_part_a_idx][1](k, l);
                } else {
                  Db_kl = this->D[quantum_part_a_idx][1](k, l);
                }
                this->F[quantum_part_a_idx][0](i, j) += form_fock_elem(
                    Da_kl, Db_kl, eri_ijkl, eri_ikjl, qa, qa, exchange);
                double Da_kl = 0.0;
                if (this->incremental_fock &&
                    !incremental_fock_reset[quantum_part_a_idx][1]) {
                  Da_kl = this->D[quantum_part_a_idx][0](k, l) -
                          this->D_last[quantum_part_a_idx][0](k, l);
                  Db_kl = this->D[quantum_part_a_idx][1](k, l) -
                          this->D_last[quantum_part_a_idx][1](k, l);
                } else {
                  Da_kl = this->D[quantum_part_a_idx][0](k, l);
                  Db_kl = this->D[quantum_part_a_idx][1](k, l);
                }
                this->F[quantum_part_a_idx][1](i, j) += form_fock_elem(
                    Db_kl, Da_kl, eri_ijkl, eri_ikjl, qa, qa, exchange);
              } else {
                this->F[quantum_part_a_idx][0](i, j) += form_fock_elem(
                    Da_kl, Da_kl, eri_ijkl, eri_ikjl, qa, qa, exchange);
              }
              // Interactions between particle types Fock Matrix elements
              if (!independent_converged) {
                continue;
              }
              for (auto quantum_part_b_idx = 0;
                   quantum_part_b_idx <
                   this->input_molecule.quantum_particles.size();
                   quantum_part_b_idx++) {
                auto quantum_part_b_it =
                    this->input_molecule.quantum_particles.begin();
                std::advance(quantum_part_b_it, quantum_part_b_idx);
                auto quantum_part_b = quantum_part_b_it->second;
                if (quantum_part_a_idx == quantum_part_b_idx) {
                  continue;
                }
                // todo add exchange with electrons if desired?
                double qb = quantum_part_b.charge;
                if (quantum_part_b.num_parts == 1) {
                  double Da_kl = 0.0;
                  if (this->incremental_fock &&
                      !incremental_fock_reset[quantum_part_a_idx][0]) {
                    Da_kl = this->D[quantum_part_b_idx][0](k, l) -
                            this->D_last[quantum_part_b_idx][0](k, l);
                  } else {
                    Da_kl = this->D[quantum_part_b_idx][0](k, l);
                  }
                  this->F[quantum_part_a_idx][0](i, j) += form_fock_elem(
                      Da_kl, 0.0, eri_ijkl, eri_ikjl, qa, qb, false);
                  if (quantum_part_a.num_parts > 1 &&
                      quantum_part_a.restricted == false) {
                    double Da_kl = 0.0;
                    if (this->incremental_fock &&
                        !incremental_fock_reset[quantum_part_a_idx][1]) {
                      Da_kl = this->D[quantum_part_b_idx][0](k, l) -
                              this->D_last[quantum_part_b_idx][0](k, l);
                    } else {
                      Da_kl = this->D[quantum_part_b_idx][0](k, l);
                    }
                    this->F[quantum_part_a_idx][1](i, j) += form_fock_elem(
                        Da_kl, 0.0, eri_ijkl, eri_ikjl, qa, qb, false);
                  }
                } else if (quantum_part_b.restricted == false) {
                  double Da_kl = 0.0;
                  double Db_kl = 0.0;
                  if (this->incremental_fock &&
                      !incremental_fock_reset[quantum_part_a_idx][0]) {
                    Da_kl = this->D[quantum_part_b_idx][0](k, l) -
                            this->D_last[quantum_part_b_idx][0](k, l);
                    Db_kl = this->D[quantum_part_b_idx][1](k, l) -
                            this->D_last[quantum_part_b_idx][1](k, l);
                  } else {
                    Da_kl = this->D[quantum_part_b_idx][0](k, l);
                    Db_kl = this->D[quantum_part_b_idx][1](k, l);
                  }
                  this->F[quantum_part_a_idx][0](i, j) += form_fock_elem(
                      Da_kl, Db_kl, eri_ijkl, eri_ikjl, qa, qb, false);
                  if (quantum_part_a.num_parts > 1 &&
                      quantum_part_a.restricted == false) {
                    double Da_kl = 0.0;
                    double Db_kl = 0.0;
                    if (this->incremental_fock &&
                        !incremental_fock_reset[quantum_part_a_idx][1]) {
                      Da_kl = this->D[quantum_part_b_idx][0](k, l) -
                              this->D_last[quantum_part_b_idx][0](k, l);
                      Db_kl = this->D[quantum_part_b_idx][1](k, l) -
                              this->D_last[quantum_part_b_idx][1](k, l);
                    } else {
                      Da_kl = this->D[quantum_part_b_idx][0](k, l);
                      Db_kl = this->D[quantum_part_b_idx][1](k, l);
                    }
                    this->F[quantum_part_a_idx][1](i, j) += form_fock_elem(
                        Da_kl, Db_kl, eri_ijkl, eri_ikjl, qa, qb, false);
                  }
                } else {
                  double Da_kl = 0.0;
                  if (this->incremental_fock &&
                      !incremental_fock_reset[quantum_part_a_idx][0]) {
                    double Da_kl = this->D[quantum_part_b_idx][0](k, l) -
                                   this->D_last[quantum_part_b_idx][0](k, l);
                  } else {
                    double Da_kl = this->D[quantum_part_b_idx][0](k, l);
                  }
                  this->F[quantum_part_a_idx][0](i, j) += form_fock_elem(
                      Da_kl, Da_kl, eri_ijkl, eri_ikjl, qa, qb, false);
                  if (quantum_part_a.num_parts > 1 &&
                      quantum_part_a.restricted == false) {
                    double Da_kl = 0.0;
                    if (this->incremental_fock &&
                        !incremental_fock_reset[quantum_part_a_idx][1]) {
                      Da_kl = this->D[quantum_part_b_idx][0](k, l) -
                              this->D_last[quantum_part_b_idx][0](k, l);
                    } else {
                      Da_kl = this->D[quantum_part_b_idx][0](k, l);
                    }
                    this->F[quantum_part_a_idx][1](i, j) += form_fock_elem(
                        Da_kl, Da_kl, eri_ijkl, eri_ikjl, qa, qb, false);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  // compute energy with non-extrapolated Fock matrix
  this->calculate_E_elec();
  //
  if (this->iteration_num == 1) {
    quantum_part_a_idx = 0;
    for (auto const &[quantum_part_a_key, quantum_part_a] :
         this->input_molecule.quantum_particles) {
      Polyquant_cout("Dumping Fock Matrix");
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
  auto quantum_part_idx = 0ul;
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
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> F_diis =
        this->F[quantum_part_idx][0];
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> FD_commutator =
        this->F[quantum_part_idx][0] * this->D[quantum_part_idx][0] *
            this->input_integral.overlap -
        this->input_integral.overlap * this->D[quantum_part_idx][0] *
            this->F[quantum_part_idx][0];
    this->iteration_rms_error[quantum_part_idx][0] =
        FD_commutator.norm() / (num_basis * num_basis);
    if (this->incremental_fock && this->iteration_num > 1) {
      if (this->iteration_rms_error[quantum_part_idx][0] <
              this->incremental_fock_reset_threshold[quantum_part_idx][0] ||
          this->iteration_num -
                  this->incremental_fock_reset_iteration[quantum_part_idx][0] >
              this->incremental_fock_reset_freq) {
        this->incremental_fock_reset[quantum_part_idx][0] = true;
      } else {
        this->incremental_fock_reset[quantum_part_idx][0] = false;
      }
    }
    if (this->diis_extrapolation) {
      this->diis[quantum_part_idx][0].extrapolate(F_diis, FD_commutator);
    }
    F_prime =
        this->input_integral.orth_X * F_diis * this->input_integral.orth_X;
    Eigen::SelfAdjointEigenSolver<
        Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>
        eigensolver(F_prime);
    this->E_orbitals[quantum_part_idx][0] = eigensolver.eigenvalues();
    C_prime = eigensolver.eigenvectors();
    this->C[quantum_part_idx][0] = this->input_integral.orth_X * C_prime;
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> F_diis =
          this->F[quantum_part_idx][1];
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> FD_commutator =
          this->F[quantum_part_idx][1] * this->D[quantum_part_idx][1] *
              this->input_integral.overlap -
          this->input_integral.overlap * this->D[quantum_part_idx][1] *
              this->F[quantum_part_idx][1];
      this->iteration_rms_error[quantum_part_idx][1] =
          FD_commutator.norm() / (num_basis * num_basis);
      if (this->incremental_fock && this->iteration_num > 1) {
        if (this->iteration_rms_error[quantum_part_idx][1] <
                this->incremental_fock_reset_threshold[quantum_part_idx][1] ||
            this->iteration_num -
                    this->incremental_fock_reset_iteration[quantum_part_idx]
                                                          [1] >
                this->incremental_fock_reset_freq) {
          this->incremental_fock_reset[quantum_part_idx][1] = true;
        } else {
          this->incremental_fock_reset[quantum_part_idx][1] = false;
        }
      }
      if (this->diis_extrapolation) {
        this->diis[quantum_part_idx][1].extrapolate(F_diis, FD_commutator);
      }
      F_prime =
          this->input_integral.orth_X * F_diis * this->input_integral.orth_X;
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
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    this->D_last[quantum_part_idx][0] = this->D[quantum_part_idx][0];
    this->D[quantum_part_idx][0].setZero(num_basis, num_basis);
#pragma omp parallel for
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
#pragma omp parallel for
      for (size_t i = 0; i < num_basis; i++) {
        for (size_t j = 0; j < num_basis; j++) {
          for (int k = 0; k < quantum_part.num_parts_beta; k++) {
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
  auto quantum_part_idx = 0ul;
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
  auto quantum_part_idx = 0ul;
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
      buffer << "rms err [F,D] = "
             << this->iteration_rms_error[quantum_part_idx][0]
             << " converged = " << std::boolalpha
             << (this->iteration_rms_error[quantum_part_idx][0] <
                 this->convergence_DM)
             << std::endl;
      if (this->iteration_rms_error[quantum_part_idx][0] >=
          this->convergence_DM) {
        this->converged = false;
        this->stop = false;
      }

    } else if (quantum_part.restricted == false) {
      buffer << "rms err (alpha) [F,D] = "
             << this->iteration_rms_error[quantum_part_idx][0]
             << " converged = " << std::boolalpha
             << (this->iteration_rms_error[quantum_part_idx][0] <
                 this->convergence_DM)
             << std::endl;
      buffer << "rms err (beta) [F,D] = "
             << this->iteration_rms_error[quantum_part_idx][1]
             << " converged = " << std::boolalpha
             << (this->iteration_rms_error[quantum_part_idx][1] <
                 this->convergence_DM)
             << std::endl;

      if (this->iteration_rms_error[quantum_part_idx][0] >=
          this->convergence_DM) {
        this->converged = false;
        this->stop = false;
      }
      if (this->iteration_rms_error[quantum_part_idx][1] >=
          this->convergence_DM) {
        this->converged = false;
        this->stop = false;
      }
    } else {
      buffer << "rms err [F,D] = "
             << this->iteration_rms_error[quantum_part_idx][0]
             << " converged = " << std::boolalpha
             << (this->iteration_rms_error[quantum_part_idx][0] <
                 this->convergence_DM)
             << std::endl;
      if (this->iteration_rms_error[quantum_part_idx][0] >=
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
    // reset DIIS since we now have interactions so extrapolating with
    // noninteracting
    Polyquant_cout("Resetting DIIS and incremental fock building.");
    this->reset_diis();
    this->reset_incfock();
  }
  if (this->iteration_num == this->iteration_max) {
    this->exceeded_iterations = true;
    this->stop = true;
  }
}

void POLYQUANT_EPSCF::reset_diis() {
  if (this->diis_extrapolation) {
    this->diis.clear();
    this->diis.resize(this->input_molecule.quantum_particles.size());
    libint2::DIIS<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>
        tempdiis(this->diis_start, this->diis_size, this->diis_damping, 1, 1,
                 this->diis_mixing_fraction);
    auto quantum_part_idx = 0ul;
    for (auto const &[quantum_part_key, quantum_part] :
         this->input_molecule.quantum_particles) {
      if (quantum_part.num_parts == 1) {
        this->diis[quantum_part_idx].resize(1);
        this->diis[quantum_part_idx].push_back(tempdiis);
      } else if (quantum_part.restricted == false) {
        this->diis[quantum_part_idx].resize(2);
        this->diis[quantum_part_idx].push_back(tempdiis);
        this->diis[quantum_part_idx].push_back(tempdiis);
      } else {
        this->diis[quantum_part_idx].resize(1);
        this->diis[quantum_part_idx].push_back(tempdiis);
      }
      quantum_part_idx++;
    }
  }
}
void POLYQUANT_EPSCF::reset_incfock() {
  if (this->incremental_fock) {
      incremental_fock_reset.clear();
      incremental_fock_reset_threshold.clear();
      incremental_fock_reset_iteration.clear();
    incremental_fock_reset.resize(
        this->input_molecule.quantum_particles.size());
    incremental_fock_reset_threshold.resize(
        this->input_molecule.quantum_particles.size());
    incremental_fock_reset_iteration.resize(
        this->input_molecule.quantum_particles.size());
    auto quantum_part_idx = 0ul;
    for (auto const &[quantum_part_key, quantum_part] :
         this->input_molecule.quantum_particles) {
      if (quantum_part.num_parts == 1) {
        this->incremental_fock_reset[quantum_part_idx].resize(1);
        this->incremental_fock_reset[quantum_part_idx][0] = true;
        this->incremental_fock_reset_threshold[quantum_part_idx].resize(1);
        this->incremental_fock_reset_threshold[quantum_part_idx][0] = this->incremental_fock_initial_onset_thresh;
        this->incremental_fock_reset_iteration[quantum_part_idx].resize(1);
        this->incremental_fock_reset_iteration[quantum_part_idx][0] = this->iteration_num;
      } else if (quantum_part.restricted == false) {
        this->incremental_fock_reset[quantum_part_idx].resize(2);
        this->incremental_fock_reset[quantum_part_idx][0] = true;
        this->incremental_fock_reset[quantum_part_idx][1] = true;
        this->incremental_fock_reset_threshold[quantum_part_idx].resize(2);
        this->incremental_fock_reset_threshold[quantum_part_idx][0] = this->incremental_fock_initial_onset_thresh;
        this->incremental_fock_reset_threshold[quantum_part_idx][1] = this->incremental_fock_initial_onset_thresh;
        this->incremental_fock_reset_iteration[quantum_part_idx].resize(2);
        this->incremental_fock_reset_iteration[quantum_part_idx][0] = this->iteration_num;
        this->incremental_fock_reset_iteration[quantum_part_idx][2] = this->iteration_num;
      } else {
        this->incremental_fock_reset[quantum_part_idx].resize(1);
        this->incremental_fock_reset[quantum_part_idx][0] = true;
        this->incremental_fock_reset_threshold[quantum_part_idx].resize(1);
        this->incremental_fock_reset_threshold[quantum_part_idx][0] = this->incremental_fock_initial_onset_thresh;
        this->incremental_fock_reset_iteration[quantum_part_idx].resize(1);
        this->incremental_fock_reset_iteration[quantum_part_idx][0] = this->iteration_num;
      }
      quantum_part_idx++;
    }
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
  // TODO SAD or
  // TODO SAP
  // TODO move into separate functions
  auto num_basis = this->input_basis.num_basis;
  this->D.resize(this->input_molecule.quantum_particles.size());
  this->D_last.resize(this->input_molecule.quantum_particles.size());
  this->C.resize(this->input_molecule.quantum_particles.size());
  this->F.resize(this->input_molecule.quantum_particles.size());
  this->iteration_rms_error.resize(
      this->input_molecule.quantum_particles.size());
  
  this->reset_diis();
  this->reset_incfock();

  auto quantum_part_idx = 0ul;
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
      this->iteration_rms_error[quantum_part_idx].resize(1);
      this->iteration_rms_error[quantum_part_idx][0] = 0.0;
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
      this->iteration_rms_error[quantum_part_idx].resize(2);
      this->iteration_rms_error[quantum_part_idx][0] = 0.0;
      this->iteration_rms_error[quantum_part_idx][1] = 0.0;
    } else {
      this->D[quantum_part_idx].resize(1);
      this->D_last[quantum_part_idx].resize(1);
      this->C[quantum_part_idx].resize(1);
      this->F[quantum_part_idx].resize(1);
      this->F[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->D[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->D_last[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->C[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->iteration_rms_error[quantum_part_idx].resize(1);
      this->iteration_rms_error[quantum_part_idx][0] = 0.0;
    }
    quantum_part_idx++;
  }
}
void POLYQUANT_EPSCF::print_start_iterations() {
  Polyquant_cout("Starting Iterations");
}
void POLYQUANT_EPSCF::print_iteration() {
  Polyquant_cout("Iteration " + std::to_string(this->iteration_num) + " :");
  auto quantum_part_idx = 0ul;
  auto E_parts = 0.0;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    Polyquant_cout("E(" + quantum_part_key + ") : " +
                   std::to_string(this->E_particles[quantum_part_idx]));
    E_parts += this->E_particles[quantum_part_idx];
    quantum_part_idx++;
  }
  Polyquant_cout("E(particles) : " + std::to_string(E_parts));
}
void POLYQUANT_EPSCF::print_success() { Polyquant_cout("SCF SUCCESS"); }
void POLYQUANT_EPSCF::print_exceeded_iterations() {
  Polyquant_cout("Exceeded Iterations");
}
void POLYQUANT_EPSCF::print_error() { APP_ABORT("Something wrong!"); }
void POLYQUANT_EPSCF::print_params() {
  Polyquant_cout("Running SCF");
  std::stringstream buffer;
  buffer << "Maximum iterations = " << iteration_max << std::endl;
  buffer << "convergence_E = " << std::scientific << this->convergence_E
         << std::endl;
  buffer << "convergence_DM = " << std::scientific << this->convergence_DM
         << std::endl;
  Polyquant_cout(buffer.str());
}
void POLYQUANT_EPSCF::run() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->print_params();
  // calculate integrals we need
  this->input_integral.calculate_overlap();
  this->input_integral.symmetric_orthogonalization();
  this->input_integral.calculate_kinetic();
  this->input_integral.calculate_nuclear();
  this->input_integral.calculate_two_electron();
  //if (this->incremental_fock) {
  //  this->input_integral.calculate_Schwarz();
  //}
  // start the SCF process
  this->form_H_core();
  this->guess_DM();
  this->print_start_iterations();
  while (!this->stop) {
    this->print_iteration();
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

void POLYQUANT_EPSCF::from_file(std::string &filename) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->print_params();
  // calculate integrals we need
  this->input_integral.calculate_overlap();
  this->input_integral.symmetric_orthogonalization();
  this->input_integral.calculate_kinetic();
  this->input_integral.calculate_nuclear();
  this->input_integral.calculate_two_electron();
  // start the SCF process
  this->form_H_core();
  this->guess_DM();
  hdf5::file::File hdf5_file =
      hdf5::file::open(filename, hdf5::file::AccessFlags::READONLY);
  auto root_group = hdf5_file.root();
  Polyquant_cout("Reading coefficients from file : " + filename);
  if (!root_group.exists("Super_Twist")) {
    APP_ABORT(
        "Reading coefficients failed. No Super_Twist group in HDF5 file.");
  }
  auto Super_Twist_group = root_group.get_group("Super_Twist");

  auto num_basis = this->input_basis.num_basis;
  auto idx = 0;
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    auto Dataset =
        Super_Twist_group.get_dataset("eigenset_" + std::to_string(idx));
    hdf5::dataspace::Simple Dataspace(Dataset.dataspace());
    auto Dimensions = Dataspace.current_dimensions();
    Polyquant_cout("Reading eigenset_" + std::to_string(idx));
    Polyquant_cout("    Dimensions " + std::to_string(Dimensions[0]) + " " +
                   std::to_string(Dimensions[1]) + " for quantum particle " +
                   std::to_string(quantum_part_idx));
    std::vector<double> data(Dataspace.size());
    Dataset.read(data);
#pragma omp parallel for
    for (auto i = 0; i < num_basis; i++) {
      for (auto j = 0; j < num_basis; j++) {
        this->C[quantum_part_idx][0](j, i) = data[i * num_basis + j];
      }
    }
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      Dataset =
          Super_Twist_group.get_dataset("eigenset_" + std::to_string(idx + 1));
      Dataspace = Dataset.dataspace();
      Dimensions = Dataspace.current_dimensions();
      Polyquant_cout("Reading eigenset_" + std::to_string(idx + 1));
      Polyquant_cout("    Dimensions " + std::to_string(Dimensions[0]) + " " +
                     std::to_string(Dimensions[1]) + " for quantum particle " +
                     std::to_string(quantum_part_idx));
      Dataset.read(data);
#pragma omp parallel for
      for (auto i = 0; i < num_basis; i++) {
        for (auto j = 0; j < num_basis; j++) {
          this->C[quantum_part_idx][1](j, i) = data[i * num_basis + j];
        }
      }
    }
    idx += 2;
    quantum_part_idx++;
  }
  this->form_DM();
  Polyquant_cout("Running a single SCF iteration");
  this->run_iteration();
  this->calculate_E_total();
  Polyquant_cout(this->E_total);
}
