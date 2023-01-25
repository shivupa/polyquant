#include "scf/epscf.hpp"

using namespace polyquant;

void POLYQUANT_EPSCF::form_H_core() {
  this->H_core.resize(this->input_molecule->quantum_particles.size());
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    // this->H_core[quantum_part_idx].resize(this->input_symmetry->irrep_names[quantum_part_idx].size());
    // Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> h;
    auto num_basis = this->input_basis->num_basis[quantum_part_idx];
    this->H_core[quantum_part_idx].setZero(num_basis, num_basis);
    this->H_core[quantum_part_idx] += (1.0 / quantum_part.mass) * this->input_integral->kinetic[quantum_part_idx];
    this->H_core[quantum_part_idx] += (-quantum_part.charge) * this->input_integral->nuclear[quantum_part_idx];
    // this->H_core[quantum_part_idx][irrep_idx].noalias() = this->input_basis->salcs[quantum_part_idx][irrep_idx].transpose() * h * this->input_basis->salcs[quantum_part_idx][irrep_idx];
    if (verbose == true) {
      std::stringstream filename;
      filename << "H_core_";
      filename << quantum_part_key;
      filename << ".txt";
      Polyquant_dump_mat_to_file(this->H_core[quantum_part_idx], filename.str());
    }
    quantum_part_idx++;
  }
}

double POLYQUANT_EPSCF::directscf_get_shell_density_norm_exchange(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                                                  const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last,
                                                                  const QUANTUM_PARTICLE_SET &quantum_part, const size_t &quantum_part_idx, const size_t &quantum_part_spin_idx,
                                                                  const size_t &shell_a_bf_start, const size_t &shell_a_bf_size, const size_t &shell_b_bf_start, const size_t &shell_b_bf_size) {
  double norm = 0.0;
  if (!this->Cauchy_Schwarz_screening) {
    return norm;
  }
  if (this->incremental_fock && incremental_fock_doing_incremental[quantum_part_idx][quantum_part_spin_idx]) {
    norm = (dm[quantum_part_idx][quantum_part_spin_idx] - dm_last[quantum_part_idx][quantum_part_spin_idx])
               .block(shell_a_bf_start, shell_b_bf_start, shell_a_bf_size, shell_b_bf_size)
               .lpNorm<Eigen::Infinity>();
  } else {
    norm = dm[quantum_part_idx][quantum_part_spin_idx].block(shell_a_bf_start, shell_b_bf_start, shell_a_bf_size, shell_b_bf_size).lpNorm<Eigen::Infinity>();
  }
  return norm;
}

double POLYQUANT_EPSCF::directscf_get_shell_density_norm_coulomb(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                                                 const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last,
                                                                 const QUANTUM_PARTICLE_SET &quantum_part_a, const size_t &quantum_part_a_idx, const size_t &quantum_part_a_spin_idx,
                                                                 const QUANTUM_PARTICLE_SET &quantum_part_b, const size_t &quantum_part_b_idx, const size_t &quantum_part_b_spin_idx,
                                                                 const size_t &shell_a_bf_start, const size_t &shell_a_bf_size, const size_t &shell_b_bf_start, const size_t &shell_b_bf_size) {
  double norm = 0.0;
  if (!this->Cauchy_Schwarz_screening) {
    return norm;
  }
  if (quantum_part_b.num_parts == 1) {
    if (this->incremental_fock && incremental_fock_doing_incremental[quantum_part_a_idx][quantum_part_a_spin_idx]) {
      norm = (dm[quantum_part_b_idx][quantum_part_b_spin_idx] - dm_last[quantum_part_b_idx][quantum_part_b_spin_idx])
                 .block(shell_a_bf_start, shell_b_bf_start, shell_a_bf_size, shell_b_bf_size)
                 .lpNorm<Eigen::Infinity>();
    } else {
      norm = dm[quantum_part_b_idx][quantum_part_b_spin_idx].block(shell_a_bf_start, shell_b_bf_start, shell_a_bf_size, shell_b_bf_size).lpNorm<Eigen::Infinity>();
    }
  } else if (quantum_part_b.num_parts > 1 && quantum_part_b.restricted == true) {
    if (this->incremental_fock && incremental_fock_doing_incremental[quantum_part_a_idx][quantum_part_a_spin_idx]) {
      norm = (2.0 * (dm[quantum_part_b_idx][quantum_part_b_spin_idx] - dm_last[quantum_part_b_idx][quantum_part_b_spin_idx]))
                 .block(shell_a_bf_start, shell_b_bf_start, shell_a_bf_size, shell_b_bf_size)
                 .lpNorm<Eigen::Infinity>();
    } else {
      norm = (2.0 * dm[quantum_part_b_idx][quantum_part_b_spin_idx]).block(shell_a_bf_start, shell_b_bf_start, shell_a_bf_size, shell_b_bf_size).lpNorm<Eigen::Infinity>();
    }
  } else if (quantum_part_b.num_parts > 1 && quantum_part_b.restricted == false) {
    if (this->incremental_fock && incremental_fock_doing_incremental[quantum_part_a_idx][quantum_part_a_spin_idx]) {
      norm = ((dm[quantum_part_b_idx][quantum_part_b_spin_idx] - dm_last[quantum_part_b_idx][quantum_part_b_spin_idx]) +
              (dm[quantum_part_b_idx][1 - quantum_part_b_spin_idx] - dm_last[quantum_part_b_idx][1 - quantum_part_b_spin_idx]))
                 .block(shell_a_bf_start, shell_b_bf_start, shell_a_bf_size, shell_b_bf_size)
                 .lpNorm<Eigen::Infinity>();
    } else {
      norm = (dm[quantum_part_b_idx][quantum_part_b_spin_idx] + dm[quantum_part_b_idx][1 - quantum_part_b_spin_idx])
                 .block(shell_a_bf_start, shell_b_bf_start, shell_a_bf_size, shell_b_bf_size)
                 .lpNorm<Eigen::Infinity>();
    }
  }
  return norm;
}

double POLYQUANT_EPSCF::directscf_get_density_coulomb(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                                      const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part_a,
                                                      const size_t &quantum_part_a_idx, const size_t &quantum_part_a_spin_idx, const QUANTUM_PARTICLE_SET &quantum_part_b,
                                                      const size_t &quantum_part_b_idx, const size_t &quantum_part_b_spin_idx, const size_t &a, const size_t &b) {
  double D_val = 0.0;
  if (this->incremental_fock && incremental_fock_doing_incremental[quantum_part_a_idx][quantum_part_a_spin_idx]) {
    D_val = (dm[quantum_part_b_idx][quantum_part_b_spin_idx](a, b) - dm_last[quantum_part_b_idx][quantum_part_b_spin_idx](a, b));
    if (quantum_part_b.num_parts > 1 && quantum_part_b.restricted == true) {
      D_val += D_val;
    } else if (quantum_part_b.num_parts > 1 && quantum_part_b.restricted == false) {
      D_val += (dm[quantum_part_b_idx][1 - quantum_part_b_spin_idx](a, b) - dm_last[quantum_part_b_idx][1 - quantum_part_b_spin_idx](a, b));
    }
  } else {
    D_val = dm[quantum_part_b_idx][quantum_part_b_spin_idx](a, b);
    if (quantum_part_b.num_parts > 1 && quantum_part_b.restricted == true) {
      D_val += D_val;
    } else if (quantum_part_b.num_parts > 1 && quantum_part_b.restricted == false) {
      D_val += dm[quantum_part_b_idx][1 - quantum_part_b_spin_idx](a, b);
    }
  }
  return D_val;
}

double POLYQUANT_EPSCF::directscf_get_density_exchange(const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                                       const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part,
                                                       const size_t &quantum_part_idx, const size_t &quantum_part_spin_idx, const size_t &a, const size_t &b) {
  double D_val = 0.0;
  if (this->incremental_fock && incremental_fock_doing_incremental[quantum_part_idx][quantum_part_spin_idx]) {
    D_val = (dm[quantum_part_idx][quantum_part_spin_idx](a, b) - dm_last[quantum_part_idx][quantum_part_spin_idx](a, b));
  } else {
    D_val = dm[quantum_part_idx][quantum_part_spin_idx](a, b);
  }
  return D_val;
}

void POLYQUANT_EPSCF::form_fock_helper_single_fock_matrix(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &fock,
                                                          const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm,
                                                          const std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &dm_last, const QUANTUM_PARTICLE_SET &quantum_part_a,
                                                          const int quantum_part_a_idx, const int quantum_part_a_spin_idx, const QUANTUM_PARTICLE_SET &quantum_part_b, const int quantum_part_b_idx,
                                                          const int quantum_part_b_spin_idx) {
  auto shells_a = this->input_basis->basis[quantum_part_a_idx];
  auto num_shell_a = this->input_basis->basis[quantum_part_a_idx].size();
  auto shell2bf_a = this->input_basis->basis[quantum_part_a_idx].shell2bf();
  auto shells_b = this->input_basis->basis[quantum_part_b_idx];
  auto num_shell_b = this->input_basis->basis[quantum_part_b_idx].size();
  auto shell2bf_b = this->input_basis->basis[quantum_part_b_idx].shell2bf();

  // loop over shells
  auto nthreads = omp_get_max_threads();
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> FA;
  auto max_nprim = shells_a.max_nprim() > shells_b.max_nprim() ? shells_a.max_nprim() : shells_b.max_nprim();
  auto max_l = shells_a.max_l() > shells_b.max_l() ? shells_a.max_l() : shells_b.max_l();
  std::vector<libint2::Engine> engines;
  engines.resize(nthreads);
  FA.resize(nthreads);
  engines[0] = libint2::Engine(libint2::Operator::coulomb, max_nprim, max_l, 0);
  engines[0].set_precision(this->input_integral->tolerance_2e);
  for (int i = 0; i < nthreads; i++) {
    engines[i] = engines[0];
    FA[i].resizeLike(fock);
    FA[i].setZero();
  }
#pragma omp parallel
  {
    int shellcounter = 0;
    for (size_t shell_i = 0; shell_i < num_shell_a; shell_i++) {
      auto thread_id = omp_get_thread_num();
      auto shell_i_bf_start = shell2bf_a[shell_i];
      auto shell_i_bf_size = shells_a[shell_i].size();
      auto shellpairdata_ij_iter = std::get<1>(this->input_integral->unique_shell_pairs[quantum_part_a_idx]).at(shell_i).begin();
      for (auto &shell_j : std::get<0>(this->input_integral->unique_shell_pairs[quantum_part_a_idx])[shell_i]) {
        auto shell_j_bf_start = shell2bf_a[shell_j];
        auto shell_j_bf_size = shells_a[shell_j].size();
        const auto *shellpairdata_ij = shellpairdata_ij_iter->get();
        shellpairdata_ij_iter++;
        auto D_shell_ij_norm = directscf_get_shell_density_norm_coulomb(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, quantum_part_a, quantum_part_a_idx,
                                                                        quantum_part_a_spin_idx, shell_i_bf_start, shell_i_bf_size, shell_j_bf_start, shell_j_bf_size);
        for (size_t shell_k = 0; shell_k < num_shell_b; shell_k++) {
          auto shell_k_bf_start = shell2bf_b[shell_k];
          auto shell_k_bf_size = shells_b[shell_k].size();
          auto D_shell_ik_norm = 0.0;
          auto D_shell_jk_norm = 0.0;
          if (quantum_part_a_idx == quantum_part_b_idx && quantum_part_a_spin_idx == quantum_part_b_spin_idx) {
            // TODO technically we should assert quantum_part_a_irrep_idx == quantum_part_b_irrep_idx
            D_shell_ik_norm = directscf_get_shell_density_norm_exchange(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, shell_i_bf_start, shell_i_bf_size, shell_k_bf_start,
                                                                        shell_k_bf_size);
            D_shell_jk_norm = directscf_get_shell_density_norm_exchange(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, shell_j_bf_start, shell_j_bf_size, shell_k_bf_start,
                                                                        shell_k_bf_size);
          }
          auto shellpairdata_kl_iter = std::get<1>(this->input_integral->unique_shell_pairs[quantum_part_b_idx]).at(shell_k).begin();
          for (auto &shell_l : std::get<0>(this->input_integral->unique_shell_pairs[quantum_part_b_idx])[shell_k]) {
            shellcounter++;
            if (shellcounter % nthreads != thread_id) {
              continue;
            }
            auto shell_l_bf_start = shell2bf_b[shell_l];
            auto shell_l_bf_size = shells_b[shell_l].size();
            const auto *shellpairdata_kl = shellpairdata_kl_iter->get();
            shellpairdata_kl_iter++;
            auto D_shell_kl_norm = directscf_get_shell_density_norm_coulomb(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, quantum_part_b, quantum_part_b_idx,
                                                                            quantum_part_b_spin_idx, shell_k_bf_start, shell_k_bf_size, shell_l_bf_start, shell_l_bf_size);
            // for now ignore exchange contributions if quantum_part_a_idx != quantum_part_b_idx in the future we may want to have exchange between particles that are in the same basis space
            // but this is unsupported for now
            auto D_shell_il_norm = 0.0;
            auto D_shell_jl_norm = 0.0;
            if (quantum_part_a_idx == quantum_part_b_idx && quantum_part_a_spin_idx == quantum_part_b_spin_idx) {
              auto D_shell_il_norm = directscf_get_shell_density_norm_exchange(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, shell_i_bf_start, shell_i_bf_size,
                                                                               shell_l_bf_start, shell_l_bf_size);
              auto D_shell_jl_norm = directscf_get_shell_density_norm_exchange(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, shell_j_bf_start, shell_j_bf_size,
                                                                               shell_l_bf_start, shell_l_bf_size);
            }
            if (this->Cauchy_Schwarz_screening) {
              if (std::max({D_shell_ij_norm, D_shell_ik_norm, D_shell_il_norm, D_shell_jk_norm, D_shell_jl_norm, D_shell_kl_norm}) *
                      this->input_integral->Schwarz[quantum_part_a_idx](shell_i, shell_j) * this->input_integral->Schwarz[quantum_part_b_idx](shell_k, shell_l) <
                  this->Cauchy_Schwarz_threshold[quantum_part_a_idx]) {
                continue;
              }
            }
            // compute the permutational degeneracy for the given shell
            // set this may look like the libint example but we are
            // breaking bra-ket symmetry so we are 4 fold symmetric
            // instead of 8
            const auto shell_ij_perdeg = (shell_i == shell_j) ? 1.0 : 2.0;
            const auto shell_kl_perdeg = (shell_k == shell_l) ? 1.0 : 2.0;
            auto shell_ijkl_perdeg = shell_ij_perdeg * shell_kl_perdeg;
            const auto &buf = engines[thread_id].results();
            engines[thread_id].compute(shells_a[shell_i], shells_a[shell_j], shells_b[shell_k], shells_b[shell_l]);
            const auto *buf_1234 = buf[0];
            auto shell_ijkl_bf = 0;
            if (buf_1234 != nullptr) {
              for (auto shell_i_bf = shell_i_bf_start; shell_i_bf < shell_i_bf_start + shell_i_bf_size; ++shell_i_bf) {
                for (auto shell_j_bf = shell_j_bf_start; shell_j_bf < shell_j_bf_start + shell_j_bf_size; ++shell_j_bf) {
                  for (auto shell_k_bf = shell_k_bf_start; shell_k_bf < shell_k_bf_start + shell_k_bf_size; ++shell_k_bf) {
                    for (auto shell_l_bf = shell_l_bf_start; shell_l_bf < shell_l_bf_start + shell_l_bf_size; ++shell_l_bf) {
                      auto eri_ijkl = buf_1234[shell_ijkl_bf];
                      shell_ijkl_bf++;
                      auto D_kl = this->directscf_get_density_coulomb(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, quantum_part_b, quantum_part_b_idx,
                                                                      quantum_part_b_spin_idx, shell_k_bf, shell_l_bf);
                      const auto spinscale = (quantum_part_a_idx == quantum_part_b_idx && quantum_part_b.restricted == false && quantum_part_b.num_parts > 1) ? 0.5 : 1.0;
                      const auto scaleall = (quantum_part_a_idx == quantum_part_b_idx) ? 0.5 * spinscale : 0.5 * quantum_part_a.charge * quantum_part_b.charge * spinscale;
                      FA[thread_id](shell_i_bf, shell_j_bf) += scaleall * shell_ijkl_perdeg * D_kl * eri_ijkl;
                      FA[thread_id](shell_j_bf, shell_i_bf) += scaleall * shell_ijkl_perdeg * D_kl * eri_ijkl;
                      // FB[thread_id](shell_k_bf, shell_l_bf) += scaleall * shell_ijkl_perdeg * D_ij * eri_ijkl;
                      // FB[thread_id](shell_l_bf, shell_k_bf) += scaleall * shell_ijkl_perdeg * D_ij * eri_ijkl;
                      // exchange terms
                      if (quantum_part_a_idx == quantum_part_b_idx && quantum_part_a_spin_idx == quantum_part_b_spin_idx) {
                        auto D_ik = this->directscf_get_density_exchange(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, shell_i_bf, shell_k_bf);
                        auto D_jl = this->directscf_get_density_exchange(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, shell_j_bf, shell_l_bf);
                        auto D_il = this->directscf_get_density_exchange(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, shell_i_bf, shell_l_bf);
                        auto D_jk = this->directscf_get_density_exchange(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, shell_j_bf, shell_k_bf);
                        const auto scale = 0.125;
                        FA[thread_id](shell_i_bf, shell_k_bf) -= scale * D_jl * shell_ijkl_perdeg * eri_ijkl;
                        FA[thread_id](shell_k_bf, shell_i_bf) -= scale * D_jl * shell_ijkl_perdeg * eri_ijkl;
                        FA[thread_id](shell_j_bf, shell_l_bf) -= scale * D_ik * shell_ijkl_perdeg * eri_ijkl;
                        FA[thread_id](shell_l_bf, shell_j_bf) -= scale * D_ik * shell_ijkl_perdeg * eri_ijkl;
                        FA[thread_id](shell_i_bf, shell_l_bf) -= scale * D_jk * shell_ijkl_perdeg * eri_ijkl;
                        FA[thread_id](shell_l_bf, shell_i_bf) -= scale * D_jk * shell_ijkl_perdeg * eri_ijkl;
                        FA[thread_id](shell_j_bf, shell_k_bf) -= scale * D_il * shell_ijkl_perdeg * eri_ijkl;
                        FA[thread_id](shell_k_bf, shell_j_bf) -= scale * D_il * shell_ijkl_perdeg * eri_ijkl;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  for (auto ti = 0; ti < nthreads; ti++) {
    fock += FA[ti];
  }
}

void POLYQUANT_EPSCF::form_fock_helper() {
  libint2::initialize();
  for (auto quantum_part_a_idx = 0; quantum_part_a_idx < this->input_molecule->quantum_particles.size(); quantum_part_a_idx++) {
    if ((this->iteration_num > 1) && this->freeze_density[quantum_part_a_idx] == true) {
      quantum_part_a_idx++;
      continue;
    }
    auto quantum_part_a_it = this->input_molecule->quantum_particles.begin();
    std::advance(quantum_part_a_it, quantum_part_a_idx);
    auto quantum_part_a = quantum_part_a_it->second;
    auto quantum_part_a_spin_lim = quantum_part_a.restricted ? 1 : 2;
    quantum_part_a_spin_lim = (quantum_part_a.num_parts == 1) ? 1 : quantum_part_a_spin_lim;
    for (auto quantum_part_a_spin_idx = 0; quantum_part_a_spin_idx < quantum_part_a_spin_lim; quantum_part_a_spin_idx++) {
      this->Cauchy_Schwarz_threshold[quantum_part_a_idx] = std::max(this->iteration_rms_error[quantum_part_a_idx][quantum_part_a_spin_idx] / 1e4, std::numeric_limits<double>::epsilon());
      for (auto quantum_part_b_idx = 0; quantum_part_b_idx < this->input_molecule->quantum_particles.size(); quantum_part_b_idx++) {
        if (!independent_converged && quantum_part_a_idx != quantum_part_b_idx)
          continue;
        auto quantum_part_b_it = this->input_molecule->quantum_particles.begin();
        std::advance(quantum_part_b_it, quantum_part_b_idx);
        auto quantum_part_b = quantum_part_b_it->second;
        auto quantum_part_b_spin_lim = quantum_part_b.restricted ? 1 : 2;
        quantum_part_b_spin_lim = (quantum_part_b.num_parts == 1) ? 1 : quantum_part_b_spin_lim;

        for (auto quantum_part_b_spin_idx = 0; quantum_part_b_spin_idx < quantum_part_b_spin_lim; quantum_part_b_spin_idx++) {
          // todo check if same number of irreps for both basis sets
          form_fock_helper_single_fock_matrix(this->F[quantum_part_a_idx][quantum_part_a_spin_idx], this->D_combined, this->D_last_combined, quantum_part_a, quantum_part_a_idx,
                                              quantum_part_a_spin_idx, quantum_part_b, quantum_part_b_idx, quantum_part_b_spin_idx);
        }
      }
    }
  }
  libint2::finalize();
}

void POLYQUANT_EPSCF::form_fock() {
  // set data structures
  auto quantum_part_a_idx = 0ul;
  for (auto const &[quantum_part_a_key, quantum_part_a] : this->input_molecule->quantum_particles) {
    if ((this->iteration_num > 1) && this->freeze_density[quantum_part_a_idx] == true) {
      quantum_part_a_idx++;
      continue;
    }
    auto num_basis = this->input_basis->num_basis[quantum_part_a_idx];
    if (!this->incremental_fock || !incremental_fock_doing_incremental[quantum_part_a_idx][0]) {
      std::stringstream ss;
      ss << "Resetting Incremental Fock build for Particle " << quantum_part_a_idx << " spin " << 0;
      Polyquant_cout(ss.str());
      this->F[quantum_part_a_idx][0].setZero(num_basis, num_basis);
      this->F[quantum_part_a_idx][0] += this->H_core[quantum_part_a_idx];
    }
    if (quantum_part_a.num_parts > 1 && quantum_part_a.restricted == false) {
      if (!this->incremental_fock || !incremental_fock_doing_incremental[quantum_part_a_idx][1]) {
        std::stringstream ss;
        ss << "Resetting Incremental Fock build for Particle " << quantum_part_a_idx << " spin " << 1;
        Polyquant_cout(ss.str());
        this->F[quantum_part_a_idx][1].setZero(num_basis, num_basis);
        this->F[quantum_part_a_idx][1] += this->H_core[quantum_part_a_idx];
      }
    }
    quantum_part_a_idx++;
  }
  // compute Fock
  this->form_fock_helper();
  // compute energy with non-extrapolated Fock matrix
  this->calculate_E_elec();
  //
  if (verbose == true) {
    quantum_part_a_idx = 0;
    for (auto const &[quantum_part_a_key, quantum_part_a] : this->input_molecule->quantum_particles) {
      Polyquant_cout("Dumping Fock Matrix");
      Polyquant_dump_mat_to_file(this->F[quantum_part_a_idx][0], "Fock_" + quantum_part_a_key + "_alpha" + ".txt");
      if (quantum_part_a.num_parts > 1 && quantum_part_a.restricted == false) {
        Polyquant_dump_mat_to_file(this->F[quantum_part_a_idx][1], "Fock_" + quantum_part_a_key + "_beta" + ".txt");
      }
      quantum_part_a_idx++;
    }
  }
}

void POLYQUANT_EPSCF::diag_fock_helper(int quantum_part_idx, int quantum_part_irrep_idx, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &F_prime,
                                       Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &mo_C, Eigen::Matrix<double, Eigen::Dynamic, 1> &mo_e) {

  if (F_prime.cols() != 0 && F_prime.rows() != 0) {
    auto num_basis = this->input_basis->num_basis[quantum_part_idx];
    auto num_mo = this->num_mo_per_irrep[quantum_part_idx][quantum_part_irrep_idx];
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C_prime(num_mo, num_mo);
    Eigen::SelfAdjointEigenSolver<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> eigensolver(F_prime);
    mo_e = eigensolver.eigenvalues();
    C_prime = eigensolver.eigenvectors();
    mo_C = this->input_integral->orth_X[quantum_part_idx][quantum_part_irrep_idx] * C_prime;
    for (auto i = 0; i < mo_C.cols(); i++) {
      auto max_val = mo_C(Eigen::all, i).maxCoeff();
      auto min_val = mo_C(Eigen::all, i).minCoeff();
      if (std::abs(min_val) > std::abs(max_val) && min_val < 0) {
        mo_C(Eigen::all, i) *= -1;
      }
    }
  }
}
void POLYQUANT_EPSCF::diag_fock() {
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    if ((this->iteration_num > 1) && this->freeze_density[quantum_part_idx] == true) {
      quantum_part_idx++;
      continue;
    }
    auto num_basis = this->input_basis->num_basis[quantum_part_idx];
    this->iteration_rms_error[quantum_part_idx][0] = 0.0;
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> F_diis;
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> FD_commutator(num_basis, num_basis);
    FD_commutator.noalias() = (this->F[quantum_part_idx][0] * this->D_combined[quantum_part_idx][0] * this->input_integral->overlap[quantum_part_idx] -
                               this->input_integral->overlap[quantum_part_idx] * this->D_combined[quantum_part_idx][0] * this->F[quantum_part_idx][0]);
    for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
      auto num_mo = this->num_mo_per_irrep[quantum_part_idx][irrep_idx];
      if (num_mo == 0) {
        continue;
      }

      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &X = this->input_integral->orth_X[quantum_part_idx][irrep_idx];
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &c = this->C[quantum_part_idx][0][irrep_idx];

      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> FD_commutator_irrep = X.transpose() * FD_commutator * X;
      F_diis = X.transpose() * this->F[quantum_part_idx][0] * X;
      this->iteration_rms_error[quantum_part_idx][0] += FD_commutator_irrep.norm() / (num_mo * num_mo);
      if (this->diis_extrapolation) {
        this->diis[quantum_part_idx][0][irrep_idx].extrapolate(F_diis, FD_commutator_irrep);
      }
      // F_diis = c * F_diis * c.transpose();
      // F_diis = X.transpose() * F_diis * X;

      // Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> F_prime(num_mo, num_mo);
      // FD_commutator.noalias() = this->input_integral->orth_X[quantum_part_idx][irrep_idx].transpose() *
      //                           (this->F[quantum_part_idx][0] * this->D_combined[quantum_part_idx][0] * this->input_integral->overlap[quantum_part_idx] -
      //                            this->input_integral->overlap[quantum_part_idx] * this->D_combined[quantum_part_idx][0] * this->F[quantum_part_idx][0]) *
      //                           this->input_integral->orth_X[quantum_part_idx][irrep_idx];
      //  FD_comm = X.T @ ( F @ D @ S -  S @ D @ F) @ X;
      // F_prime = this->input_integral->orth_X[quantum_part_idx][irrep_idx].transpose() * F_diis * this->input_integral->orth_X[quantum_part_idx][irrep_idx];
      diag_fock_helper(quantum_part_idx, irrep_idx, F_diis, this->C[quantum_part_idx][0][irrep_idx], this->E_orbitals[quantum_part_idx][0][irrep_idx]);
    }
    if (this->incremental_fock) {
      if (this->incremental_fock_doing_incremental[quantum_part_idx][0]) {
        if (this->iteration_rms_error[quantum_part_idx][0] < this->incremental_fock_reset_threshold[quantum_part_idx][0] ||
            this->iteration_num - this->incremental_fock_reset_iteration[quantum_part_idx][0] > this->incremental_fock_reset_freq) {
          this->incremental_fock_doing_incremental[quantum_part_idx][0] = false;
          this->incremental_fock_reset_threshold[quantum_part_idx][0] = this->iteration_rms_error[quantum_part_idx][0] / 10;
        }
      } else {
        if (this->iteration_rms_error[quantum_part_idx][0]<incremental_fock_initial_onset_thresh &&this->iteration_num> 1) {
          this->incremental_fock_doing_incremental[quantum_part_idx][0] = true;
          this->incremental_fock_reset_threshold[quantum_part_idx][0] = this->iteration_rms_error[quantum_part_idx][0] / 10;
          std::stringstream buffer;
          buffer << "Next iteration doing an incremental fock build for " << quantum_part_key << " spin " << 0;
          Polyquant_cout(buffer.str());
        }
      }
    }

    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      this->iteration_rms_error[quantum_part_idx][1] = 0.0;
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> F_diis;
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> FD_commutator(num_basis, num_basis);
      FD_commutator.noalias() = (this->F[quantum_part_idx][1] * this->D_combined[quantum_part_idx][1] * this->input_integral->overlap[quantum_part_idx] -
                                 this->input_integral->overlap[quantum_part_idx] * this->D_combined[quantum_part_idx][1] * this->F[quantum_part_idx][1]);
      for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
        auto num_mo = this->num_mo_per_irrep[quantum_part_idx][irrep_idx];
        if (num_mo == 0) {
          continue;
        }
        Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &X = this->input_integral->orth_X[quantum_part_idx][irrep_idx];
        Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &c = this->C[quantum_part_idx][1][irrep_idx];

        Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> FD_commutator_irrep = X.transpose() * FD_commutator * X;
        F_diis = X.transpose() * this->F[quantum_part_idx][1] * X;
        this->iteration_rms_error[quantum_part_idx][1] += FD_commutator_irrep.norm() / (num_mo * num_mo);
        if (this->diis_extrapolation) {
          this->diis[quantum_part_idx][1][irrep_idx].extrapolate(F_diis, FD_commutator_irrep);
        }
        // F_diis = c * F_diis * c.transpose();
        // F_diis = X.transpose() * F_diis * X;

        // Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> F_prime(num_mo, num_mo);
        // F_diis.noalias() = this->input_integral->orth_X[quantum_part_idx][irrep_idx].transpose() * this->F[quantum_part_idx][1] * this->input_integral->orth_X[quantum_part_idx][irrep_idx];
        // Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> FD_commutator(num_basis, num_basis);
        // FD_commutator.noalias() = this->input_integral->orth_X[quantum_part_idx][irrep_idx].transpose() *
        //                           (this->F[quantum_part_idx][1] * this->D_combined[quantum_part_idx][1] * this->input_integral->overlap[quantum_part_idx] -
        //                            this->input_integral->overlap[quantum_part_idx] * this->D_combined[quantum_part_idx][1] * this->F[quantum_part_idx][1]) *
        //                           this->input_integral->orth_X[quantum_part_idx][irrep_idx];
        //  F_prime = this->input_integral->orth_X[quantum_part_idx][irrep_idx].transpose() * F_diis * this->input_integral->orth_X[quantum_part_idx][irrep_idx];
        // diag_fock_helper(quantum_part_idx, irrep_idx, F_prime, this->C[quantum_part_idx][1][irrep_idx], this->E_orbitals[quantum_part_idx][1][irrep_idx]);
        diag_fock_helper(quantum_part_idx, irrep_idx, F_diis, this->C[quantum_part_idx][1][irrep_idx], this->E_orbitals[quantum_part_idx][1][irrep_idx]);
      }
      if (this->incremental_fock) {
        if (this->incremental_fock_doing_incremental[quantum_part_idx][1]) {
          if (this->iteration_rms_error[quantum_part_idx][1] < this->incremental_fock_reset_threshold[quantum_part_idx][1] ||
              this->iteration_num - this->incremental_fock_reset_iteration[quantum_part_idx][1] > this->incremental_fock_reset_freq) {
            this->incremental_fock_doing_incremental[quantum_part_idx][1] = false;
            this->incremental_fock_reset_threshold[quantum_part_idx][1] = this->iteration_rms_error[quantum_part_idx][1] / 10;
          }
        } else {
          if (this->iteration_rms_error[quantum_part_idx][1]<incremental_fock_initial_onset_thresh &&this->iteration_num> 1) {
            this->incremental_fock_doing_incremental[quantum_part_idx][1] = true;
            this->incremental_fock_reset_threshold[quantum_part_idx][1] = this->iteration_rms_error[quantum_part_idx][1] / 10;
            std::stringstream buffer;
            buffer << "Next iteration doing an incremental fock build for " << quantum_part_key << " spin " << 1;
            Polyquant_cout(buffer.str());
          }
        }
      }
    }
    quantum_part_idx++;
  }
  if (permute_orbitals_start) {
    permute_initial_MOs();
  }
}

void POLYQUANT_EPSCF::form_DM() {
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    if ((this->iteration_num > 1) && this->freeze_density[quantum_part_idx] == true) {
      quantum_part_idx++;
      continue;
    }
    auto num_basis = this->input_basis->num_basis[quantum_part_idx];
    std::vector<int> num_parts = {quantum_part.num_parts_alpha, quantum_part.num_parts_beta};
    auto num_spin = (quantum_part.num_parts > 1 && quantum_part.restricted == false) ? 2 : 1;
    for (auto quantum_part_spin_idx = 0; quantum_part_spin_idx < num_spin; quantum_part_spin_idx++) {
      this->D_last_combined[quantum_part_idx][quantum_part_spin_idx] = this->D_combined[quantum_part_idx][quantum_part_spin_idx];
      this->D_combined[quantum_part_idx][quantum_part_spin_idx].setZero(num_basis, num_basis);
      for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
        form_DM_helper(this->D[quantum_part_idx][quantum_part_spin_idx][irrep_idx], this->D_last[quantum_part_idx][quantum_part_spin_idx][irrep_idx],
                       this->C[quantum_part_idx][quantum_part_spin_idx][irrep_idx], this->occ[quantum_part_idx][quantum_part_spin_idx][irrep_idx], num_basis, num_parts[quantum_part_spin_idx]);
        D_combined[quantum_part_idx][quantum_part_spin_idx] += this->D[quantum_part_idx][quantum_part_spin_idx][irrep_idx];
      }
    }

    quantum_part_idx++;
  }
  if (verbose == true) {
    auto quantum_part_a_idx = 0;
    for (auto const &[quantum_part_a_key, quantum_part_a] : this->input_molecule->quantum_particles) {
      Polyquant_cout("Dumping 1pDM Matrix");
      Polyquant_dump_mat_to_file(this->D_combined[quantum_part_a_idx][0], "DMcombined_" + quantum_part_a_key + "_alpha.txt");
      if (quantum_part_a.num_parts > 1 && quantum_part_a.restricted == false) {
        Polyquant_dump_mat_to_file(this->D_combined[quantum_part_a_idx][1], "DMcombined_" + quantum_part_a_key + "_beta.txt");
      }
      for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_a_idx].size(); irrep_idx++) {
        Polyquant_dump_mat_to_file(this->D[quantum_part_a_idx][0][irrep_idx], "DM_" + quantum_part_a_key + "_irrep_" + std::to_string(irrep_idx) + "_alpha.txt");
        if (quantum_part_a.num_parts > 1 && quantum_part_a.restricted == false) {
          Polyquant_dump_mat_to_file(this->D[quantum_part_a_idx][1][irrep_idx], "DM_" + quantum_part_a_key + "_irrep_" + std::to_string(irrep_idx) + "_beta.txt");
        }
      }
      quantum_part_a_idx++;
    }
  }
}

void POLYQUANT_EPSCF::form_DM_helper(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &dm, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &dm_last,
                                     const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &coeff, const Eigen::Matrix<double, Eigen::Dynamic, 1> &occ, const int num_basis, const int num_part) {
  dm_last = dm;
  dm.setZero(num_basis, num_basis);
  dm.noalias() = coeff * occ.asDiagonal() * coeff.transpose();
}

void POLYQUANT_EPSCF::calculate_E_elec() {
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    this->E_particles_last[quantum_part_idx] = this->E_particles[quantum_part_idx];
    if ((this->iteration_num > 1) && this->freeze_density[quantum_part_idx] == true) {
      quantum_part_idx++;
      continue;
    }
    this->E_particles[quantum_part_idx] = 0.0;
    // for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
    auto E_part_irrep = 0.0;
    // auto& salcs = this->input_basis->salcs[quantum_part_idx][irrep_idx];
    // Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>& X = this->input_integral->orth_X[quantum_part_idx][irrep_idx];
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &h = this->H_core[quantum_part_idx];
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &da = this->D_combined[quantum_part_idx][0];
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &fa = this->F[quantum_part_idx][0];
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &s = this->input_integral->overlap[quantum_part_idx];
    // Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> s2 = X.transpose() * this->input_integral->overlap[quantum_part_idx] * X;
    // Polyquant_dump_mat(s, "S");
    // for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
    //   auto num_mo = this->num_mo_per_irrep[quantum_part_idx][irrep_idx];
    //   if (num_mo == 0) {
    //     continue;
    //   }
    //   Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &X = this->input_integral->orth_X[quantum_part_idx][irrep_idx];
    //   Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> s2 = X.transpose() * this->input_integral->overlap[quantum_part_idx] * X;
    //   Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &c = this->C[quantum_part_idx][0][irrep_idx];
    //   Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> s3 = c.transpose() * this->input_integral->overlap[quantum_part_idx] * c;
    //   Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &da_irrep = this->D[quantum_part_idx][0][irrep_idx];
    //   Polyquant_dump_mat(s2, "X.T @ S @ X");
    //   Polyquant_dump_mat(c, "C");
    //   Polyquant_dump_mat(s3, "c.T @ S @ c");
    //   Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> dax = (da_irrep * s);
    // }

    // std::cout << "SHIIV " << da.rows() << std::endl;
    // std::cout << da.cols() << std::endl;
    // // std::cout << X.cols() << std::endl;
    // // std::cout << X.rows() << std::endl;
    // std::cout << fa.rows() << std::endl;
    // std::cout << fa.cols() << std::endl;
    // // std::cout << (D[quantum_part_idx][0][irrep_idx] * input_integral->overlap[quantum_part_idx]).trace() << std::endl;
    // std::cout << (da * s).trace() << std::endl;
    // Polyquant_dump_mat(da, "da");
    if (quantum_part.num_parts == 1) {
      E_part_irrep += 0.5 * (da.array() * ((h + fa)).array()).sum();
    } else if (quantum_part.restricted == false) {

      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> db = this->D_combined[quantum_part_idx][1];
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &fb = this->F[quantum_part_idx][1];
      E_part_irrep += 0.5 * (((da + db).array() * (h).array()) + ((da).array() * (fa).array()) + ((db).array() * (fb).array())).sum();
    } else {
      E_part_irrep += (da.array() * (h + fa).array()).sum();
    }
    this->E_particles[quantum_part_idx] += E_part_irrep;
    //}
    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::calculate_E_total() {
  this->E_total = 0.0;
  for (auto &E_part : E_particles) {
    this->E_total += E_part;
  }
  this->E_total += this->input_molecule->E_nuc;
}

void POLYQUANT_EPSCF::calculate_S_squared() {

  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> orbital_overlap;

  S_squared.resize(this->input_molecule->quantum_particles.size());
  multiplicity.resize(this->input_molecule->quantum_particles.size());
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    auto n_spin = 1;
    auto n_a = quantum_part.num_parts_alpha;
    auto n_b = quantum_part.num_parts_beta;

    auto spin_sq = 0.0;
    auto mult = 0.0;
    auto spin_sq_xy = 0.0;
    auto spin_sq_z = 0.0;
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> orb_subset_a = this->C_combined[quantum_part_idx][0](Eigen::all, Eigen::seqN(0, n_a));
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> orb_subset_b = this->C_combined[quantum_part_idx][1](Eigen::all, Eigen::seqN(0, n_b));

      orbital_overlap = det_overlap(this->input_integral->overlap[quantum_part_idx], orb_subset_a, orb_subset_b);

      spin_sq_xy = (n_a + n_b) * 0.5;
      spin_sq_xy -= orbital_overlap.array().square().sum();

      spin_sq_z = 0.25 * std::pow(n_a - n_b, 2);

      spin_sq = spin_sq_xy + spin_sq_z;
      mult = std::sqrt(spin_sq + 0.25) - 0.5;
      mult = 2 * mult + 1;

    } else if (quantum_part.num_parts > 1 && quantum_part.restricted == true) {
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> orb_subset_a = this->C_combined[quantum_part_idx][0](Eigen::all, Eigen::seqN(0, n_a));
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> orb_subset_b = this->C_combined[quantum_part_idx][0](Eigen::all, Eigen::seqN(0, n_b));

      orbital_overlap = det_overlap(this->input_integral->overlap[quantum_part_idx], orb_subset_a, orb_subset_b);

      spin_sq_xy = (n_a + n_b) * 0.5;
      spin_sq_xy -= orbital_overlap.array().square().sum();
      std::cout << "SHIV TESTING " << orbital_overlap.array().square().sum() << std::endl;

      spin_sq_z = 0.25 * std::pow(n_a - n_b, 2);

      mult = std::sqrt(spin_sq + 0.25) - 0.5;
      mult = 2 * mult + 1;
    } else {
      spin_sq = 0.5 + 0.25;
      mult = std::sqrt(spin_sq + 0.25) - 0.5;
      mult = 2 * mult + 1;
    }

    S_squared[quantum_part_idx] = spin_sq;
    multiplicity[quantum_part_idx] = mult;

    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::check_stop() {
  std::string pad(7, ' ');
  std::string divider(95, '-');
  std::string middivider(81, '-');
  middivider = fmt::format("{:^95}", middivider);
  std::string line;
  line = pad;
  line += fmt::format("{:<33}:{:>33d}", "Iteration", this->iteration_num);
  Polyquant_cout(line);
  auto quantum_part_idx = 0ul;
  if (this->Cauchy_Schwarz_screening) {
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
      line = pad;
      auto cauchy_str = fmt::format("{:< .8e}", this->Cauchy_Schwarz_threshold[quantum_part_idx]);
      line += fmt::format("{:<33}:{:>33}", "Cauchy_Schwarz_threshold", cauchy_str);
      Polyquant_cout(line);
      quantum_part_idx++;
    }
  }
  this->converged = true;
  this->stop = true;
  this->iteration_E_diff.resize(this->input_molecule->quantum_particles.size());

  //  species, E, dE/E, E conv?, rms err [F,Da], Da conv?, rms err [F,Db], Db conv?
  // 11, 10, 10, 10, 10, 10, 10, 10
  line = pad;
  line += fmt::format("{:^11}{:^10}{:^10}{:^10}{:^10}{:10}{:^10}{:^10}", "Species", "Energy", "dE/E", "E conv?", "rms[F,Da]", "Da conv?", "rms[F,Db]", "Db conv?");
  Polyquant_cout(line);
  Polyquant_cout(middivider);

  auto E_parts = 0.0;
  quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    std::string curr_E = "";
    std::string diff_E_str = "";
    std::string E_conv = "";
    std::string diff_D_a_str = "";
    std::string diff_D_b_str = "";
    std::string D_a_conv = "";
    std::string D_b_conv = "";

    curr_E = fmt::format("{:> 8.6f}", this->E_particles[quantum_part_idx]);
    E_parts += this->E_particles[quantum_part_idx];
    if (this->iteration_num > 1 && this->freeze_density[quantum_part_idx] == true) {
      std::string diff_D_a_str = "frozen";
      std::string diff_D_b_str = "frozen";
      std::string D_a_conv = "frozen";
      std::string D_b_conv = "frozen";
    } else {
      auto E_diff = (this->E_particles[quantum_part_idx] - this->E_particles_last[quantum_part_idx]) / this->E_particles[quantum_part_idx];
      this->iteration_E_diff[quantum_part_idx] = std::abs(E_diff);
      diff_E_str = fmt::format("{:> .2e}", E_diff);
      E_conv = fmt::format("{:^10}", (this->iteration_E_diff[quantum_part_idx] < this->convergence_E));
      if (this->iteration_E_diff[quantum_part_idx] >= this->convergence_E || this->iteration_num < 2) {
        this->converged = false;
        this->stop = false;
      }
      diff_D_a_str = fmt::format("{:> .2e}", this->iteration_rms_error[quantum_part_idx][0]);
      if (this->iteration_rms_error[quantum_part_idx][0] >= this->convergence_DM) {
        this->converged = false;
        this->stop = false;
      }
      D_a_conv = fmt::format("{:^10}", this->iteration_rms_error[quantum_part_idx][0] < this->convergence_DM);

      if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
        if (this->iteration_rms_error[quantum_part_idx][1] >= this->convergence_DM) {
          this->converged = false;
          this->stop = false;
        }
        diff_D_b_str = fmt::format("{:> .2e}", this->iteration_rms_error[quantum_part_idx][1]);
        D_b_conv = fmt::format("{:^10}", this->iteration_rms_error[quantum_part_idx][1] < this->convergence_DM);
      }
    }
    line = pad;
    line += fmt::format("{:^11}{:^10}{:^10}{:^10}{:^10}{:10}{:^10}{:^10}", quantum_part_key, curr_E, diff_E_str, E_conv, diff_D_a_str, D_a_conv, diff_D_b_str, D_b_conv);
    Polyquant_cout(line);
    quantum_part_idx++;
  }
  line = pad;
  std::string curr_E = fmt::format("{:> 8.6f}", E_parts);
  line += fmt::format("{:^11}{:^10}{:^10}{:^10}{:^10}{:10}{:^10}{:^10}", "Total", curr_E, "", "", "", "", "", "");
  Polyquant_cout(line);
  if (!this->independent_converged && this->converged && this->stop) {
    Polyquant_cout("Independent densities converged.");
    if (this->stop_after_independent_converged) {
      Polyquant_cout("Stopping since 'stop_after_independent_converged' was requested.");
      this->stop = true;
    } else {
      Polyquant_cout("Turning on interactions.");
      this->converged = false;
      this->stop = false;
      // reset DIIS since we now have interactions so extrapolating with
      // noninteracting
      Polyquant_cout("Resetting DIIS and incremental fock building.");
      this->reset_diis();
      this->reset_incfock();
    }
    this->independent_converged = true;
    this->independent_converged_iteration_num = this->iteration_num;
  } else if (this->iteration_num == this->iteration_max) {
    this->exceeded_iterations = true;
    this->stop = true;
  }
  Polyquant_cout(divider);
}

void POLYQUANT_EPSCF::reset_diis() {
  if (this->diis_extrapolation) {
    this->diis.clear();
    this->diis.resize(this->input_molecule->quantum_particles.size());
    auto quantum_part_idx = 0ul;
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
      auto nspin = 1;
      if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
        nspin = 2;
      }
      this->diis[quantum_part_idx].resize(nspin);
      for (auto quantum_part_spin_idx = 0; quantum_part_spin_idx < nspin; quantum_part_spin_idx++) {
        for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
          this->diis[quantum_part_idx][quantum_part_spin_idx].emplace_back(this->diis_start, this->diis_size, this->diis_damping, 1, 1, this->diis_mixing_fraction);
        }
      }
      quantum_part_idx++;
    }
  }
}

void POLYQUANT_EPSCF::reset_incfock() {
  if (this->incremental_fock) {
    incremental_fock_reset_threshold.clear();
    incremental_fock_reset_iteration.clear();
    incremental_fock_doing_incremental.clear();
    incremental_fock_reset_threshold.resize(this->input_molecule->quantum_particles.size());
    incremental_fock_reset_iteration.resize(this->input_molecule->quantum_particles.size());
    incremental_fock_doing_incremental.resize(this->input_molecule->quantum_particles.size());
    auto quantum_part_idx = 0ul;
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
      if (quantum_part.num_parts == 1) {
        this->incremental_fock_reset_threshold[quantum_part_idx].resize(1);
        this->incremental_fock_reset_threshold[quantum_part_idx][0] = this->incremental_fock_initial_onset_thresh / 10.0;
        this->incremental_fock_reset_iteration[quantum_part_idx].resize(1);
        this->incremental_fock_reset_iteration[quantum_part_idx][0] = this->iteration_num;
        this->incremental_fock_doing_incremental[quantum_part_idx].resize(1);
        this->incremental_fock_doing_incremental[quantum_part_idx][0] = false;
      } else if (quantum_part.restricted == false) {
        this->incremental_fock_reset_threshold[quantum_part_idx].resize(2);
        this->incremental_fock_reset_threshold[quantum_part_idx][0] = this->incremental_fock_initial_onset_thresh / 10.0;
        this->incremental_fock_reset_threshold[quantum_part_idx][1] = this->incremental_fock_initial_onset_thresh / 10.0;
        this->incremental_fock_reset_iteration[quantum_part_idx].resize(2);
        this->incremental_fock_reset_iteration[quantum_part_idx][0] = this->iteration_num;
        this->incremental_fock_reset_iteration[quantum_part_idx][1] = this->iteration_num;
        this->incremental_fock_doing_incremental[quantum_part_idx].resize(2);
        this->incremental_fock_doing_incremental[quantum_part_idx][0] = false;
        this->incremental_fock_doing_incremental[quantum_part_idx][1] = false;
      } else {
        this->incremental_fock_reset_threshold[quantum_part_idx].resize(1);
        this->incremental_fock_reset_threshold[quantum_part_idx][0] = this->incremental_fock_initial_onset_thresh / 10.0;
        this->incremental_fock_reset_iteration[quantum_part_idx].resize(1);
        this->incremental_fock_reset_iteration[quantum_part_idx][0] = this->iteration_num;
        this->incremental_fock_doing_incremental[quantum_part_idx].resize(1);
        this->incremental_fock_doing_incremental[quantum_part_idx][0] = false;
      }
      quantum_part_idx++;
    }
  }
}

void POLYQUANT_EPSCF::run_iteration() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->iteration_num += 1;
  this->form_fock();
  this->diag_fock();
  this->form_occ();
  this->form_DM();
}

void POLYQUANT_EPSCF::guess_DM_hcore() {
  // this is inefficient but diagonalizing hcore is free compared to CI so who cares.

  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    auto num_basis = this->input_basis->num_basis[quantum_part_idx];
    for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
      auto num_mo = this->num_mo_per_irrep[quantum_part_idx][irrep_idx];
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &c = this->C[quantum_part_idx][0][irrep_idx];
      if (num_mo == 0) {
        continue;
      }
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> H_prime;
      H_prime.noalias() = this->input_integral->orth_X[quantum_part_idx][irrep_idx].transpose() * this->H_core[quantum_part_idx] * this->input_integral->orth_X[quantum_part_idx][irrep_idx];
      diag_fock_helper(quantum_part_idx, irrep_idx, H_prime, this->C[quantum_part_idx][0][irrep_idx], this->E_orbitals[quantum_part_idx][0][irrep_idx]);
      if (quantum_part.num_parts > 1 and quantum_part.restricted == false) {
        diag_fock_helper(quantum_part_idx, irrep_idx, H_prime, this->C[quantum_part_idx][1][irrep_idx], this->E_orbitals[quantum_part_idx][1][irrep_idx]);
      }
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::guess_DM() {
  // TODO SAD or SAP
  guess_DM_hcore();
}

void POLYQUANT_EPSCF::resize_objects() {
  freeze_density.resize(this->input_molecule->quantum_particles.size(), false);

  this->E_particles.resize(this->input_molecule->quantum_particles.size());
  this->E_particles_last.resize(this->input_molecule->quantum_particles.size());
  this->Cauchy_Schwarz_threshold.resize(this->input_molecule->quantum_particles.size(), 1e-12);

  this->iteration_rms_error.resize(this->input_molecule->quantum_particles.size());

  this->D.resize(this->input_molecule->quantum_particles.size());
  this->D_combined.resize(this->input_molecule->quantum_particles.size());
  this->D_last.resize(this->input_molecule->quantum_particles.size());
  this->D_last_combined.resize(this->input_molecule->quantum_particles.size());
  this->C.resize(this->input_molecule->quantum_particles.size());
  this->F.resize(this->input_molecule->quantum_particles.size());
  this->E_orbitals.resize(this->input_molecule->quantum_particles.size());
  this->occ.resize(this->input_molecule->quantum_particles.size());

  this->C_combined.resize(this->input_molecule->quantum_particles.size());
  this->E_orbitals_combined.resize(this->input_molecule->quantum_particles.size());
  this->occ_combined.resize(this->input_molecule->quantum_particles.size());
  this->symm_label_idxs.resize(this->input_molecule->quantum_particles.size());
  this->symm_labels.resize(this->input_molecule->quantum_particles.size());
  this->num_mo.resize(this->input_molecule->quantum_particles.size());

  this->reset_diis();
  this->reset_incfock();

  if (this->input_molecule->quantum_particles.size() == 1) {
    this->independent_converged = true;
  }

  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    auto num_irrep = this->input_symmetry->irrep_names[quantum_part_idx].size();
    auto num_basis = this->input_basis->num_basis[quantum_part_idx];

    auto nmo = 0;
    for (auto irrep_idx = 0; irrep_idx < num_irrep; irrep_idx++) {
      nmo += this->num_mo_per_irrep[quantum_part_idx][irrep_idx];
    }
    this->num_mo[quantum_part_idx] = nmo;

    if (quantum_part.num_parts == 1) {
      this->D[quantum_part_idx].resize(1);
      this->D_combined[quantum_part_idx].resize(1);
      this->D_last_combined[quantum_part_idx].resize(1);
      this->D_last[quantum_part_idx].resize(1);
      this->C[quantum_part_idx].resize(1);
      this->F[quantum_part_idx].resize(1);
      this->E_orbitals[quantum_part_idx].resize(1);
      this->occ[quantum_part_idx].resize(1);

      this->C_combined[quantum_part_idx].resize(1);
      this->E_orbitals_combined[quantum_part_idx].resize(1);
      this->occ_combined[quantum_part_idx].resize(1);
      this->symm_label_idxs[quantum_part_idx].resize(1);
      this->symm_labels[quantum_part_idx].resize(1);

      this->iteration_rms_error[quantum_part_idx].resize(1);

      this->D[quantum_part_idx][0].resize(num_irrep);
      this->D_last[quantum_part_idx][0].resize(num_irrep);
      this->C[quantum_part_idx][0].resize(num_irrep);
      this->E_orbitals[quantum_part_idx][0].resize(num_irrep);
      this->occ[quantum_part_idx][0].resize(num_irrep);

      this->D_combined[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->D_last_combined[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->F[quantum_part_idx][0].setZero(num_basis, num_basis);

      this->C_combined[quantum_part_idx][0].resize(num_basis, this->num_mo[quantum_part_idx]);
      this->C_combined[quantum_part_idx][0].setZero();
      this->E_orbitals_combined[quantum_part_idx][0].resize(this->num_mo[quantum_part_idx]);
      this->E_orbitals_combined[quantum_part_idx][0].setZero();
      this->occ_combined[quantum_part_idx][0].resize(this->num_mo[quantum_part_idx]);
      this->occ_combined[quantum_part_idx][0].setZero();
      this->symm_label_idxs[quantum_part_idx][0].resize(this->num_mo[quantum_part_idx]);
      this->symm_labels[quantum_part_idx][0].resize(this->num_mo[quantum_part_idx]);

      this->iteration_rms_error[quantum_part_idx][0] = 0.0;

      for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
        auto num_mo = this->num_mo_per_irrep[quantum_part_idx][irrep_idx];
        this->D[quantum_part_idx][0][irrep_idx].setZero(num_basis, num_basis);
        this->D_last[quantum_part_idx][0][irrep_idx].setZero(num_basis, num_basis);
        this->C[quantum_part_idx][0][irrep_idx].setZero(num_basis, num_mo);
        // this->E_orbitals[quantum_part_idx][0][irrep_idx].setZero(num_mo);
        this->occ[quantum_part_idx][0][irrep_idx].setZero(num_mo);
      }
    } else if (quantum_part.restricted == false) {
      this->D[quantum_part_idx].resize(2);
      this->D_combined[quantum_part_idx].resize(2);
      this->D_last_combined[quantum_part_idx].resize(2);
      this->D_last[quantum_part_idx].resize(2);
      this->C[quantum_part_idx].resize(2);
      this->F[quantum_part_idx].resize(2);
      this->E_orbitals[quantum_part_idx].resize(2);
      this->occ[quantum_part_idx].resize(2);

      this->C_combined[quantum_part_idx].resize(2);
      this->E_orbitals_combined[quantum_part_idx].resize(2);
      this->occ_combined[quantum_part_idx].resize(2);
      this->symm_label_idxs[quantum_part_idx].resize(2);
      this->symm_labels[quantum_part_idx].resize(2);

      this->iteration_rms_error[quantum_part_idx].resize(2);

      this->D[quantum_part_idx][0].resize(num_irrep);
      this->D_last[quantum_part_idx][0].resize(num_irrep);
      this->C[quantum_part_idx][0].resize(num_irrep);
      this->E_orbitals[quantum_part_idx][0].resize(num_irrep);
      this->occ[quantum_part_idx][0].resize(num_irrep);

      this->D[quantum_part_idx][1].resize(num_irrep);
      this->D_last[quantum_part_idx][1].resize(num_irrep);
      this->C[quantum_part_idx][1].resize(num_irrep);
      this->E_orbitals[quantum_part_idx][1].resize(num_irrep);
      this->occ[quantum_part_idx][1].resize(num_irrep);

      this->D_combined[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->D_combined[quantum_part_idx][1].setZero(num_basis, num_basis);
      this->F[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->F[quantum_part_idx][1].setZero(num_basis, num_basis);

      this->C_combined[quantum_part_idx][0].resize(num_basis, this->num_mo[quantum_part_idx]);
      this->C_combined[quantum_part_idx][0].setZero();
      this->E_orbitals_combined[quantum_part_idx][0].resize(this->num_mo[quantum_part_idx]);
      this->E_orbitals_combined[quantum_part_idx][0].setZero();
      this->occ_combined[quantum_part_idx][0].resize(this->num_mo[quantum_part_idx]);
      this->occ_combined[quantum_part_idx][0].setZero();
      this->symm_label_idxs[quantum_part_idx][0].resize(this->num_mo[quantum_part_idx]);
      this->symm_labels[quantum_part_idx][0].resize(this->num_mo[quantum_part_idx]);
      this->C_combined[quantum_part_idx][1].resize(num_basis, this->num_mo[quantum_part_idx]);
      this->C_combined[quantum_part_idx][1].setZero();
      this->E_orbitals_combined[quantum_part_idx][1].resize(this->num_mo[quantum_part_idx]);
      this->E_orbitals_combined[quantum_part_idx][1].setZero();
      this->occ_combined[quantum_part_idx][1].resize(this->num_mo[quantum_part_idx]);
      this->occ_combined[quantum_part_idx][1].setZero();
      this->symm_label_idxs[quantum_part_idx][1].resize(this->num_mo[quantum_part_idx]);
      this->symm_labels[quantum_part_idx][1].resize(this->num_mo[quantum_part_idx]);

      this->iteration_rms_error[quantum_part_idx][0] = 0.0;
      this->iteration_rms_error[quantum_part_idx][1] = 0.0;

      for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
        auto num_mo = this->num_mo_per_irrep[quantum_part_idx][irrep_idx];
        // this->E_orbitals[quantum_part_idx][0][irrep_idx].setZero(num_mo);
        // this->E_orbitals[quantum_part_idx][1][irrep_idx].setZero(num_mo);
        this->occ[quantum_part_idx][0][irrep_idx].setZero(num_mo);
        this->occ[quantum_part_idx][1][irrep_idx].setZero(num_mo);
        this->C[quantum_part_idx][0][irrep_idx].setZero(num_basis, num_mo);
        this->C[quantum_part_idx][1][irrep_idx].setZero(num_basis, num_mo);
        this->D[quantum_part_idx][0][irrep_idx].setZero(num_basis, num_basis);
        this->D[quantum_part_idx][1][irrep_idx].setZero(num_basis, num_basis);
        this->D_last[quantum_part_idx][0][irrep_idx].setZero(num_basis, num_basis);
        this->D_last[quantum_part_idx][1][irrep_idx].setZero(num_basis, num_basis);
      }
    } else {
      this->D_combined[quantum_part_idx].resize(1);
      this->D_last_combined[quantum_part_idx].resize(1);
      this->D[quantum_part_idx].resize(1);
      this->D_last[quantum_part_idx].resize(1);
      this->C[quantum_part_idx].resize(1);
      this->F[quantum_part_idx].resize(1);
      this->E_orbitals[quantum_part_idx].resize(1);
      this->occ[quantum_part_idx].resize(1);

      this->C_combined[quantum_part_idx].resize(1);
      this->E_orbitals_combined[quantum_part_idx].resize(1);
      this->occ_combined[quantum_part_idx].resize(1);
      this->symm_label_idxs[quantum_part_idx].resize(1);
      this->symm_labels[quantum_part_idx].resize(1);

      this->iteration_rms_error[quantum_part_idx].resize(1);

      this->D[quantum_part_idx][0].resize(num_irrep);
      this->D_last[quantum_part_idx][0].resize(num_irrep);
      this->C[quantum_part_idx][0].resize(num_irrep);
      this->E_orbitals[quantum_part_idx][0].resize(num_irrep);
      this->occ[quantum_part_idx][0].resize(num_irrep);

      this->D_combined[quantum_part_idx][0].setZero(num_basis, num_basis);
      this->F[quantum_part_idx][0].setZero(num_basis, num_basis);

      this->C_combined[quantum_part_idx][0].resize(num_basis, this->num_mo[quantum_part_idx]);
      this->C_combined[quantum_part_idx][0].setZero();
      this->E_orbitals_combined[quantum_part_idx][0].resize(this->num_mo[quantum_part_idx]);
      this->E_orbitals_combined[quantum_part_idx][0].setZero();
      this->occ_combined[quantum_part_idx][0].resize(this->num_mo[quantum_part_idx]);
      this->occ_combined[quantum_part_idx][0].setZero();
      this->symm_label_idxs[quantum_part_idx][0].resize(this->num_mo[quantum_part_idx]);
      this->symm_labels[quantum_part_idx][0].resize(this->num_mo[quantum_part_idx]);

      this->iteration_rms_error[quantum_part_idx][0] = 0.0;

      for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
        auto num_mo = this->num_mo_per_irrep[quantum_part_idx][irrep_idx];
        // this->E_orbitals[quantum_part_idx][0][irrep_idx].setZero(num_mo);
        this->occ[quantum_part_idx][0][irrep_idx].setZero(num_mo);
        this->D[quantum_part_idx][0][irrep_idx].setZero(num_basis, num_basis);
        this->D_last[quantum_part_idx][0][irrep_idx].setZero(num_basis, num_basis);
        this->C[quantum_part_idx][0][irrep_idx].setZero(num_basis, num_mo);
      }
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::print_start_iterations() { Polyquant_section_header("Multispecies SCF Calculation"); }

void POLYQUANT_EPSCF::print_iteration() {
  std::stringstream buffer;
  buffer << "Iteration " + std::to_string(this->iteration_num) + " :\n";
  auto quantum_part_idx = 0ul;
  auto E_parts = 0.0;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    auto &E_single_part = this->E_particles[quantum_part_idx];
    E_parts += E_single_part;
    buffer << "E(" + quantum_part_key + ") : " + std::to_string(E_single_part) << "\n";
    quantum_part_idx++;
  }
  buffer << "E(particles) : " + std::to_string(E_parts) << "\n";
  Polyquant_cout(buffer.str());
}

void POLYQUANT_EPSCF::form_occ_helper_aufbau(Eigen::Matrix<double, Eigen::Dynamic, 1> &part_occ, const int quantum_part_idx, const int quantum_part_spin_idx, const int quantum_part_irrep_idx,
                                             const int num_parts, const double occval) {

  part_occ.setZero(part_occ.size());
  for (auto i = 0; i < num_parts; i++) {
    part_occ[i] = occval;
  }
}
void POLYQUANT_EPSCF::form_occ_helper_MOM(Eigen::Matrix<double, Eigen::Dynamic, 1> &part_occ, const int quantum_part_idx, const int quantum_part_spin_idx, const int quantum_part_irrep_idx,
                                          const int num_parts, const double occval) {
  if (C_ref_mom.empty()) {
    Polyquant_cout("Setting MOM reference orbitals");
    this->C_ref_mom = this->C;
    form_occ_helper_aufbau(part_occ, quantum_part_idx, quantum_part_spin_idx, quantum_part_irrep_idx, num_parts, occval);
  } else {
    // create overlap between reference orbitals and current orbitals
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> orbital_overlap;
    // Paper doi: 10.1021/jp801738f
    // eq. 2.7
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> orb_subset = this->C_ref_mom[quantum_part_idx][quantum_part_spin_idx][quantum_part_irrep_idx](Eigen::all, Eigen::seqN(0, num_parts));
    orbital_overlap = det_overlap(this->input_integral->overlap[quantum_part_idx], orb_subset, this->C[quantum_part_idx][quantum_part_spin_idx][quantum_part_irrep_idx]);
    // orbital_overlap = C_ref.T @ S @ C
    // M x N           = M x a @ a x a @ a x N
    // M - num occ
    // N - num MOs
    // a - num AOs

    // eq. 2.8
    Eigen::Matrix<double, Eigen::Dynamic, 1> total_ovlp_with_prev_occ;
    if (orbital_overlap.rows() == 1) {
      total_ovlp_with_prev_occ = orbital_overlap.transpose();
    } else {
      total_ovlp_with_prev_occ = orbital_overlap.colwise().sum();
    }
    // descending argsort based on overlap with occupied orbitals
    std::vector<int> argsort_indices;
    bool ascending = false;
    argsort_indices = argsort(total_ovlp_with_prev_occ, ascending);
    // reorder orbitals with respect to overlap
    // i.e. permute the columns
    this->permute_MOs(quantum_part_idx, quantum_part_spin_idx, quantum_part_irrep_idx, argsort_indices);
  }
  // rewrite reference orbitals?
  if (occupation_mode == "MOM") {
    this->C_ref_mom = this->C;
  }
  part_occ.setZero(part_occ.size());
  for (auto i = 0; i < num_parts; i++) {
    part_occ[i] = occval;
  }
}

void POLYQUANT_EPSCF::form_occ_helper_initial_npart_per_irrep() {
  npart_per_irrep.resize(this->input_molecule->quantum_particles.size());
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    auto num_basis = this->input_basis->num_basis[quantum_part_idx];
    auto n_spin = 1;
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      n_spin = 2;
    }
    npart_per_irrep[quantum_part_idx].resize(n_spin);
    for (auto quantum_part_spin_idx = 0; quantum_part_spin_idx < n_spin; quantum_part_spin_idx++) {
      npart_per_irrep[quantum_part_idx][quantum_part_spin_idx].resize(this->input_symmetry->irrep_names[quantum_part_idx].size());
      auto total_nmo = 0;
      for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
        total_nmo += this->num_mo_per_irrep[quantum_part_idx][irrep_idx];
      }
      Eigen::Matrix<double, Eigen::Dynamic, 1> orb_e_combined;
      for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
        auto num_mo = this->num_mo_per_irrep[quantum_part_idx][irrep_idx];
        if (num_mo == 0) {
          continue;
        }
        if (this->E_orbitals[quantum_part_idx][quantum_part_spin_idx][irrep_idx].size() == 0) {
          APP_WARN("The orbitals are most likely being read from file, but the orbitals occupations were not provided in the input file. We will populate according to the aufbau principle for HCORE "
                   "orbitals.");
          Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> H_prime;
          H_prime.noalias() = this->input_integral->orth_X[quantum_part_idx][irrep_idx].transpose() * this->H_core[quantum_part_idx] * this->input_integral->orth_X[quantum_part_idx][irrep_idx];
          Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C_prime;
          Eigen::Matrix<double, Eigen::Dynamic, 1> e_orb;
          diag_fock_helper(quantum_part_idx, irrep_idx, H_prime, C_prime, this->E_orbitals[quantum_part_idx][quantum_part_spin_idx][irrep_idx]);
        }
        Eigen::Matrix<double, Eigen::Dynamic, 1> temp;
        temp.resize(orb_e_combined.size() + this->E_orbitals[quantum_part_idx][quantum_part_spin_idx][irrep_idx].size());
        temp << orb_e_combined, this->E_orbitals[quantum_part_idx][quantum_part_spin_idx][irrep_idx];
        orb_e_combined = temp;
      }
      std::sort(std::begin(orb_e_combined), std::end(orb_e_combined), std::less<double>());
      auto npart_spin = (quantum_part_spin_idx == 1) ? quantum_part.num_parts_beta : quantum_part.num_parts_alpha;
      double thresh_E = std::numeric_limits<double>::infinity();
      if (npart_spin < orb_e_combined.size()) {
        thresh_E = orb_e_combined[npart_spin];
      }

      for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
        auto npart_in_this_irrep = 0;
        while (npart_in_this_irrep < this->E_orbitals[quantum_part_idx][quantum_part_spin_idx][irrep_idx].size() &&
               this->E_orbitals[quantum_part_idx][quantum_part_spin_idx][irrep_idx](npart_in_this_irrep) < thresh_E) {
          npart_in_this_irrep++;
        }
        npart_per_irrep[quantum_part_idx][quantum_part_spin_idx][irrep_idx] = npart_in_this_irrep;
      }

      // checking
      // auto npart_from_irreps = 0;
      // for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
      //   npart_from_irreps += this->npart_per_irrep[quantum_part_idx][quantum_part_spin_idx][irrep_idx];
      // }
      // if (npart_from_irreps != npart_spin) {
      //   APP_ABORT("part per irrep sum != npart from molecule");
      // }
    }
    quantum_part_idx++;
  }
  this->form_occ_helper_initial_npart_per_irrep_from_input();
}

/*
void POLYQUANT_EPSCF::form_occ_helper_initial_npart_per_irrep_from_file() {
  npart_per_irrep.resize(this->input_molecule->quantum_particles.size());
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    auto num_basis = this->input_basis->num_basis[quantum_part_idx];
    auto n_spin = 1;
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      n_spin = 2;
    }
    npart_per_irrep[quantum_part_idx].resize(n_spin);
    for (auto quantum_part_spin_idx = 0; quantum_part_spin_idx < n_spin; quantum_part_spin_idx++) {
      npart_per_irrep[quantum_part_idx][quantum_part_spin_idx].resize(this->input_symmetry->irrep_names[quantum_part_idx].size());
      auto npart_spin = (quantum_part_spin_idx == 1) ? quantum_part.num_parts_beta : quantum_part.num_parts_alpha;
      npart_per_irrep[quantum_part_idx][quantum_part_spin_idx][0] = npart_spin;
    }
    quantum_part_idx++;
  }
}
*/

void POLYQUANT_EPSCF::form_occ_helper_initial_npart_per_irrep_from_input() {
  // just check that what we got is of a resonable dim
  auto quantum_part_idx = 0ul;
  Polyquant_cout("    Initial Particles per Irrep");
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    auto num_basis = this->input_basis->num_basis[quantum_part_idx];
    auto n_spin = 1;
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      n_spin = 2;
    }
    for (auto quantum_part_spin_idx = 0; quantum_part_spin_idx < n_spin; quantum_part_spin_idx++) {
      std::stringstream ss;
      ss << "        Particle " << quantum_part_idx << " ";
      ss << "spin " << quantum_part_spin_idx << " : ";
      auto npart_spin = (quantum_part_spin_idx == 1) ? quantum_part.num_parts_beta : quantum_part.num_parts_alpha;
      // checking
      auto npart_from_irreps = 0;
      for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
        ss << this->npart_per_irrep[quantum_part_idx][quantum_part_spin_idx][irrep_idx] << " ";
        npart_from_irreps += this->npart_per_irrep[quantum_part_idx][quantum_part_spin_idx][irrep_idx];
      }
      // ss << std::endl;
      Polyquant_cout(ss.str());
      if (npart_from_irreps != npart_spin) {
        APP_ABORT("Input part per irrep sum != npart from molecule");
      }
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::form_occ() {
  // if (!freeze_npart_per_irrep) {
  //   form_occ_helper_initial_npart_per_irrep();
  // }
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
      if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
        auto na = npart_per_irrep[quantum_part_idx][0][irrep_idx];
        auto nb = npart_per_irrep[quantum_part_idx][1][irrep_idx];
        if (occupation_mode == "aufbau") {
          this->form_occ_helper_aufbau(occ[quantum_part_idx][0][irrep_idx], quantum_part_idx, 0, irrep_idx, na, 1.0);
          this->form_occ_helper_aufbau(occ[quantum_part_idx][1][irrep_idx], quantum_part_idx, 1, irrep_idx, nb, 1.0);
        } else if (occupation_mode == "MOM" || occupation_mode == "iMOM") {
          this->form_occ_helper_MOM(occ[quantum_part_idx][0][irrep_idx], quantum_part_idx, 0, irrep_idx, na, 1.0);
          this->form_occ_helper_MOM(occ[quantum_part_idx][1][irrep_idx], quantum_part_idx, 1, irrep_idx, nb, 1.0);
        } else {
          APP_ABORT("Invalid SCF occupation_mode");
        }
        if (verbose == true) {
          std::stringstream filename;
          filename << "occ_alpha_";
          filename << quantum_part_key;
          filename << "_irrep_";
          filename << irrep_idx;
          filename << ".txt";
          Polyquant_dump_vec_to_file(this->occ[quantum_part_idx][0][irrep_idx], filename.str());
          filename.str(std::string());
          filename << "occ_beta_";
          filename << quantum_part_key;
          filename << "_irrep_";
          filename << irrep_idx;
          filename << ".txt";
          Polyquant_dump_vec_to_file(this->occ[quantum_part_idx][1][irrep_idx], filename.str());
        }
      } else {
        auto na = npart_per_irrep[quantum_part_idx][0][irrep_idx];
        if (occupation_mode == "aufbau") {
          // auto occval = (quantum_part.num_parts == 1) ? 1.0 : 2.0;
          auto occval = 1.0;
          this->form_occ_helper_aufbau(occ[quantum_part_idx][0][irrep_idx], quantum_part_idx, 0, irrep_idx, na, occval);
        } else if (occupation_mode == "MOM" || occupation_mode == "iMOM") {
          auto occval = 1.0;
          this->form_occ_helper_MOM(occ[quantum_part_idx][0][irrep_idx], quantum_part_idx, 0, irrep_idx, na, occval);
        } else {
          APP_ABORT("Invalid SCF occupation_mode");
        }
        if (verbose == true) {
          std::stringstream filename;
          filename << "occ_alpha_";
          filename << quantum_part_key;
          filename << "_irrep_";
          filename << irrep_idx;
          filename << ".txt";
          Polyquant_dump_vec_to_file(this->occ[quantum_part_idx][0][irrep_idx], filename.str());
        }
      }
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::form_combined_orbitals() {
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    auto num_basis = this->input_basis->num_basis[quantum_part_idx];
    auto num_irrep = this->input_symmetry->irrep_names[quantum_part_idx].size();
    auto n_spin = 1;
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      n_spin = 2;
    }
    for (auto quantum_part_spin_idx = 0; quantum_part_spin_idx < n_spin; quantum_part_spin_idx++) {
      auto nmo = this->num_mo[quantum_part_idx];

      std::vector<int> curr_bas_idx;
      curr_bas_idx.resize(num_irrep, 0);

      for (auto mo_idx = 0; mo_idx < nmo; mo_idx++) {
        double min_e = std::numeric_limits<double>::infinity();
        int min_e_irrep = -1;
        for (auto irrep_idx = 0; irrep_idx < num_irrep; irrep_idx++) {
          if (curr_bas_idx[irrep_idx] >= this->num_mo_per_irrep[quantum_part_idx][irrep_idx]) {
            continue;
          }
          if (E_orbitals[quantum_part_idx][quantum_part_spin_idx][irrep_idx](curr_bas_idx[irrep_idx]) < min_e) {
            min_e = E_orbitals[quantum_part_idx][quantum_part_spin_idx][irrep_idx](curr_bas_idx[irrep_idx]);
            min_e_irrep = irrep_idx;
          }
        }

        // curr bas idx is the current place we are in each irrep
        C_combined[quantum_part_idx][quantum_part_spin_idx].col(mo_idx) = C[quantum_part_idx][quantum_part_spin_idx][min_e_irrep].col(curr_bas_idx[min_e_irrep]);
        E_orbitals_combined[quantum_part_idx][quantum_part_spin_idx][mo_idx] = E_orbitals[quantum_part_idx][quantum_part_spin_idx][min_e_irrep][curr_bas_idx[min_e_irrep]];
        occ_combined[quantum_part_idx][quantum_part_spin_idx][mo_idx] = occ[quantum_part_idx][quantum_part_spin_idx][min_e_irrep][curr_bas_idx[min_e_irrep]];
        // symm_labels_combined[quantum_part_idx][quantum_part_spin_idx][mo_idx] = this->input_symmetry->irrep_names[quantum_part_idx][min_e_irrep];
        symm_labels[quantum_part_idx][quantum_part_spin_idx][mo_idx] = this->input_symmetry->irrep_names[quantum_part_idx][min_e_irrep];
        symm_label_idxs[quantum_part_idx][quantum_part_spin_idx][mo_idx] = min_e_irrep;
        curr_bas_idx[min_e_irrep]++;
      }
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::print_combined_orbitals(std::string title) {
  dump_orbitals(this->C_combined, this->E_orbitals_combined, this->occ_combined, this->symm_labels, title, this->input_basis->ao_labels);
}

Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> POLYQUANT_EPSCF::det_overlap(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &S,
                                                                                   Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &coeff1,
                                                                                   Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &coeff2) {
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> det_ovlp;
  det_ovlp.noalias() = coeff1.transpose() * S * coeff2;
  return det_ovlp;
}

void POLYQUANT_EPSCF::permute_MOs(const int quantum_part_idx, const int quantum_part_spin_idx, const int quantum_part_irrep_idx, std::vector<int> &permutation) {
  Eigen::PermutationMatrix<Eigen::Dynamic, Eigen::Dynamic> swapper_mat(this->C[quantum_part_idx][quantum_part_spin_idx][quantum_part_irrep_idx].cols());
  swapper_mat.indices() = Eigen::Map<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Unaligned>(permutation.data(), permutation.size());
  // multiply from right : permute cols, multiply from left, permute rows
  this->C[quantum_part_idx][quantum_part_spin_idx][quantum_part_irrep_idx] = this->C[quantum_part_idx][quantum_part_spin_idx][quantum_part_irrep_idx] * swapper_mat;
}

void POLYQUANT_EPSCF::permute_initial_MOs() {
  Polyquant_cout("Permuting Initial Orbtials");
  permute_orbitals_start = false;
  auto quantum_part_idx = 0ul;
  APP_ABORT("Permuting initial orbitals is broken fix later");
  // for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
  //   if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
  //     permute_MOs(quantum_part_idx, 0, this->permute_orbitals_vector[quantum_part_idx][0]);
  //     permute_MOs(quantum_part_idx, 1, this->permute_orbitals_vector[quantum_part_idx][1]);
  //   } else {
  //     permute_MOs(quantum_part_idx, 0, this->permute_orbitals_vector[quantum_part_idx][0]);
  //   }
  //   quantum_part_idx++;
  // }
}
void POLYQUANT_EPSCF::print_success() {
  form_combined_orbitals();
  calculate_S_squared();
  Polyquant_cout("SCF SUCCESS");
  Polyquant_cout(this->E_total);

  std::string pad(7, ' ');
  std::string divider(76, '-');
  std::string line;
  line = divider;
  Polyquant_cout(line);
  line = pad;
  line += fmt::format("{:<30}:{:>30f}", "Total Energy", this->E_total);
  Polyquant_cout(line);
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    line = pad;
    line += fmt::format("{:<20}:{:>20f} S^2={:>5f} Mult={:>5f}", quantum_part_key, E_particles[quantum_part_idx], S_squared[quantum_part_idx], multiplicity[quantum_part_idx]);
    Polyquant_cout(line);
    quantum_part_idx++;
  }
  line = divider;
  Polyquant_cout(line);
  Polyquant_cout("");
  print_combined_orbitals();
}

void POLYQUANT_EPSCF::print_exceeded_iterations() { Polyquant_cout("Exceeded Iterations"); }

void POLYQUANT_EPSCF::print_error() { APP_ABORT("Something wrong!"); }

void POLYQUANT_EPSCF::print_params() {
  Polyquant_cout("Running SCF");
  std::stringstream buffer;
  buffer << "Parameters" << std::endl;
  buffer << "    Maximum iterations = " << iteration_max << std::endl;
  buffer << "    convergence_E = " << std::scientific << this->convergence_E << std::endl;
  buffer << "    convergence_DM = " << std::scientific << this->convergence_DM << std::endl;
  buffer << "    diis_extrapolation = " << this->diis_extrapolation << std::endl;
  buffer << "    diis_start = " << this->diis_start << std::endl;
  buffer << "    diis_damping = " << this->diis_damping << std::endl;
  buffer << "    diis_mixing_fraction = " << this->diis_mixing_fraction << std::endl;
  buffer << "    diis_size = " << this->diis_size << std::endl;
  buffer << "    incremental_fock = " << this->incremental_fock << std::endl;
  buffer << "    incremental_fock_reset_freq = " << this->incremental_fock_reset_freq << std::endl;
  buffer << "    incremental_fock_initial_onset_thresh = " << this->incremental_fock_initial_onset_thresh << std::endl;
  buffer << "    Cauchy_Schwarz_screening = " << this->Cauchy_Schwarz_screening << std::endl;
  // buffer << "    Cauchy_Schwarz_threshold = " << this->Cauchy_Schwarz_threshold << std::endl;
  buffer << "    Independent converged = " << std::boolalpha << this->independent_converged << std::endl;
  buffer << "    Freeze density   " << std::endl;
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    buffer << "        Particle type " << quantum_part_idx << "  :  " << std::boolalpha << this->freeze_density[quantum_part_idx] << std::endl;
    quantum_part_idx++;
  }
  Polyquant_cout(buffer.str());
}

void POLYQUANT_EPSCF::symmetrize_orbitals(std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>> &C_tosym, std::vector<std::vector<std::vector<int>>> &symm_label_idxs_to_fill,
                                          std::vector<std::vector<std::vector<std::string>>> &symm_labels_to_fill) {
  msym_error_t ret = MSYM_SUCCESS;
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    auto &ctx = this->input_symmetry->ctx[quantum_part_idx];
    int bfsl = this->input_basis->num_basis[quantum_part_idx];
    for (auto quantum_part_spin_idx = 0; quantum_part_spin_idx < C_tosym[quantum_part_idx].size(); quantum_part_spin_idx++) {
      auto nmo = this->num_mo[quantum_part_idx];
      if (MSYM_SUCCESS != (ret = msymSymmetrizeWavefunctions(ctx, bfsl, C_tosym[quantum_part_idx][quantum_part_spin_idx].data(), this->input_basis->species[quantum_part_idx].data(),
                                                             this->input_basis->pf[quantum_part_idx].data()))) {
        auto error = msymErrorString(ret);
        std::cout << error << std::endl;
        error = msymGetErrorDetails();
        std::cout << error << std::endl;
        APP_ABORT("Error symmetrizing orbitals");
      }

      for (auto mo_idx = 0; mo_idx < nmo; mo_idx++) {
        auto determined_irrep = this->input_basis->species[quantum_part_idx][mo_idx];
        symm_labels_to_fill[quantum_part_idx][quantum_part_spin_idx][mo_idx] = this->input_symmetry->irrep_names[quantum_part_idx][determined_irrep];
        symm_label_idxs_to_fill[quantum_part_idx][quantum_part_spin_idx][mo_idx] = determined_irrep;
      }
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::dump_molden() {
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    bool unique_beta = (quantum_part.num_parts > 1 && quantum_part.restricted == false);
    auto &MO_a_coeff = this->C_combined[quantum_part_idx][0];
    auto &MO_a_energy = this->E_orbitals_combined[quantum_part_idx][0];
    auto &MO_a_occupation = this->occ_combined[quantum_part_idx][0];
    auto &MO_b_coeff = unique_beta ? this->C_combined[quantum_part_idx][1] : this->C_combined[quantum_part_idx][0];
    auto &MO_b_energy = unique_beta ? this->E_orbitals_combined[quantum_part_idx][1] : this->E_orbitals_combined[quantum_part_idx][0];
    auto &MO_b_occupation = unique_beta ? this->occ_combined[quantum_part_idx][1] : this->occ_combined[quantum_part_idx][0];
    std::vector<int> MO_a_symmetry_label_idxs = this->symm_label_idxs[quantum_part_idx][0];
    std::vector<std::string> MO_a_symmetry_labels;
    for (auto mo_a_symidx : MO_a_symmetry_label_idxs) {
      MO_a_symmetry_labels.push_back(this->input_symmetry->irrep_names[quantum_part_idx][mo_a_symidx]);
    }
    std::vector<int> MO_b_symmetry_label_idxs = unique_beta ? this->symm_label_idxs[quantum_part_idx][1] : this->symm_label_idxs[quantum_part_idx][0];
    std::vector<std::string> MO_b_symmetry_labels;
    for (auto mo_b_symidx : MO_b_symmetry_label_idxs) {
      MO_b_symmetry_labels.push_back(this->input_symmetry->irrep_names[quantum_part_idx][mo_b_symidx]);
    }
    std::vector<libint2::Atom> atoms = this->input_molecule->to_libint_atom();
    try {
      std::string filename = quantum_part_key + "_polyquant.molden";
      POLYQUANT_MOLDEN molden_dumper(filename);
      molden_dumper.dump(atoms, this->input_basis->basis[quantum_part_idx], MO_a_coeff, MO_a_energy, MO_a_symmetry_labels, MO_a_occupation, MO_b_coeff, MO_b_energy, MO_b_symmetry_labels,
                         MO_b_occupation);
    } catch (std::logic_error e) {
      Polyquant_cout("Not dumping molden for " + quantum_part_key + " because : " + e.what());
    }

    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::calculate_integrals() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  // calculate integrals we need
  this->input_integral->calculate_overlap();
  this->input_integral->calculate_orthogonalization();
  this->num_mo_per_irrep.resize(this->input_molecule->quantum_particles.size());
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    this->num_mo_per_irrep[quantum_part_idx].resize(this->input_symmetry->irrep_names[quantum_part_idx].size());
    for (auto irrep_idx = 0; irrep_idx < this->input_symmetry->irrep_names[quantum_part_idx].size(); irrep_idx++) {
      this->num_mo_per_irrep[quantum_part_idx][irrep_idx] = this->input_integral->orth_X[quantum_part_idx][irrep_idx].cols();
    }
    quantum_part_idx++;
  }
  this->input_integral->calculate_kinetic();
  this->input_integral->calculate_nuclear();
  this->input_integral->calculate_unique_shell_pairs();
  // this->input_integral->calculate_two_electron();
  if (this->Cauchy_Schwarz_screening) {
    this->input_integral->calculate_Schwarz();
  }
}
void POLYQUANT_EPSCF::setup_standard() {
  this->print_start_iterations();
  this->print_params();
  this->calculate_integrals();
  // start the SCF process
  this->form_H_core();
  this->resize_objects();
  this->guess_DM();
  if (this->npart_per_irrep.size() == 0) {
    this->form_occ_helper_initial_npart_per_irrep();
  } else {
    this->form_occ_helper_initial_npart_per_irrep_from_input();
  }
  this->form_occ();
  this->form_DM();
}

void POLYQUANT_EPSCF::run() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  std::string divider(95, '-');
  while (!this->stop) {
    Polyquant_cout(divider);
    this->run_iteration();
    // this->print_iteration();
    //  check stop now prints and looks better
    this->check_stop();
  }
  this->calculate_E_total();
  if (this->stop && this->converged) {
    this->print_success();
    this->dump_molden();
  } else if (this->stop && this->exceeded_iterations) {
    this->print_exceeded_iterations();
  } else {
    this->print_error();
  }
}

void POLYQUANT_EPSCF::setup_from_file(std::string &filename) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  // if (!this->input_symmetry->do_symmetry) {
  this->print_start_iterations();
  this->print_params();
  this->calculate_integrals();
  // start the SCF process
  this->form_H_core();
  this->resize_objects();
  // this->guess_DM();
  if (this->npart_per_irrep.size() == 0) {
    this->form_occ_helper_initial_npart_per_irrep();
  } else {
    this->form_occ_helper_initial_npart_per_irrep_from_input();
  }
  // write over the current dm
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    auto idx = 0;
    std::filesystem::path path(filename);
    std::string dir = path.parent_path().string();
    std::string file = path.filename().string();
    std::string file_to_load = dir + quantum_part_key + "_" + file;

    POLYQUANT_HDF5 hdf5_file(file_to_load);
    Polyquant_cout("Reading coefficients from file : " + file_to_load);

    // if (!root_group.exists("Super_Twist")) {
    //   APP_ABORT("Reading coefficients failed. No Super_Twist group in HDF5 file.");
    // }
    // auto Super_Twist_group = root_group.get_group("Super_Twist");

    auto num_basis = this->input_basis->num_basis[quantum_part_idx];
    auto quantum_part_irrep_idx = 0;
    auto num_mo = this->num_mo[quantum_part_idx];

    Polyquant_cout("Reading eigenset_" + std::to_string(idx));
    std::vector<double> data;
    data.resize(num_mo * num_basis);
    std::string hpath = "/Super_Twist/eigenset_" + std::to_string(idx);
    hdf5_file.load_data(data, hpath);

#pragma omp parallel for
    for (auto i = 0; i < num_mo; i++) {
      for (auto j = 0; j < num_basis; j++) {
        this->C_combined[quantum_part_idx][0](j, i) = data[i * num_basis + j];
      }
    }

    if (this->input_symmetry->do_symmetry == false) {
      auto quantum_part_irrep_idx = 0;
      this->C[quantum_part_idx][0][quantum_part_irrep_idx] = this->C_combined[quantum_part_idx][0];
    }
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      hpath = "/Super_Twist/eigenset_" + std::to_string(idx + 1);
      Polyquant_cout("Reading eigenset_" + std::to_string(idx + 1));
      data.clear();
      data.resize(num_mo * num_basis);
      hdf5_file.load_data(data, hpath);
#pragma omp parallel for
      for (auto i = 0; i < num_mo; i++) {
        for (auto j = 0; j < num_basis; j++) {
          this->C_combined[quantum_part_idx][1](j, i) = data[i * num_basis + j];
        }
      }
      if (this->input_symmetry->do_symmetry == false) {
        auto quantum_part_irrep_idx = 0;
        this->C[quantum_part_idx][1][quantum_part_irrep_idx] = this->C_combined[quantum_part_idx][0];
      }
    }
    idx += 2;
    quantum_part_idx++;
  }
  if (permute_orbitals_start) {
    permute_initial_MOs();
  }
  // this->form_combined_orbitals();
  if (this->input_symmetry->do_symmetry == true) {
    this->symmetrize_orbitals(this->C_combined, this->symm_label_idxs, this->symm_labels);
  }

  this->form_occ();
  this->form_DM();
  this->form_fock();
  // Polyquant_cout("Running a single SCF iteration");
  // this->run_iteration();
  this->print_iteration();
  this->calculate_E_total();
  Polyquant_cout(this->E_total);
  this->print_combined_orbitals("GUESS ORBITALS FROM FILE");
  //} else {
  //  APP_ABORT("Reading from file when symmetry is on is not currently supported!");
  //}
}
