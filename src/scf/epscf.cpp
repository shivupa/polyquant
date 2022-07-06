#include "scf/epscf.hpp"

using namespace polyquant;

void POLYQUANT_EPSCF::form_H_core() {
  this->H_core.resize(this->input_molecule.quantum_particles.size());
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto num_basis = this->input_basis.num_basis[quantum_part_idx];
    this->H_core[quantum_part_idx].setZero(num_basis, num_basis);
    this->H_core[quantum_part_idx] += (1.0 / quantum_part.mass) * this->input_integral.kinetic[quantum_part_idx];
    this->H_core[quantum_part_idx] += (-quantum_part.charge) * this->input_integral.nuclear[quantum_part_idx];
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
  auto shells_a = this->input_basis.basis[quantum_part_a_idx];
  auto num_shell_a = this->input_basis.basis[quantum_part_a_idx].size();
  auto shell2bf_a = this->input_basis.basis[quantum_part_a_idx].shell2bf();
  auto shells_b = this->input_basis.basis[quantum_part_b_idx];
  auto num_shell_b = this->input_basis.basis[quantum_part_b_idx].size();
  auto shell2bf_b = this->input_basis.basis[quantum_part_b_idx].shell2bf();

  // loop over shells
  auto nthreads = omp_get_max_threads();
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> FA;
  auto max_nprim = shells_a.max_nprim() > shells_b.max_nprim() ? shells_a.max_nprim() : shells_b.max_nprim();
  auto max_l = shells_a.max_l() > shells_b.max_l() ? shells_a.max_l() : shells_b.max_l();
  std::vector<libint2::Engine> engines;
  engines.resize(nthreads);
  FA.resize(nthreads);
  engines[0] = libint2::Engine(libint2::Operator::coulomb, max_nprim, max_l, 0);
  engines[0].set_precision(this->input_integral.tolerance_2e);
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
      auto shellpairdata_ij_iter = std::get<1>(this->input_integral.unique_shell_pairs[quantum_part_a_idx]).at(shell_i).begin();
      for (auto &shell_j : std::get<0>(this->input_integral.unique_shell_pairs[quantum_part_a_idx])[shell_i]) {
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
            D_shell_ik_norm = directscf_get_shell_density_norm_exchange(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, shell_i_bf_start, shell_i_bf_size, shell_k_bf_start,
                                                                        shell_k_bf_size);
            D_shell_jk_norm = directscf_get_shell_density_norm_exchange(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, shell_j_bf_start, shell_j_bf_size, shell_k_bf_start,
                                                                        shell_k_bf_size);
          }
          auto shellpairdata_kl_iter = std::get<1>(this->input_integral.unique_shell_pairs[quantum_part_b_idx]).at(shell_k).begin();
          for (auto &shell_l : std::get<0>(this->input_integral.unique_shell_pairs[quantum_part_b_idx])[shell_k]) {
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
                      this->input_integral.Schwarz[quantum_part_a_idx](shell_i, shell_j) * this->input_integral.Schwarz[quantum_part_b_idx](shell_k, shell_l) <
                  this->Cauchy_Schwarz_threshold) {
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
            for (auto shell_i_bf = shell_i_bf_start; shell_i_bf < shell_i_bf_start + shell_i_bf_size; ++shell_i_bf) {
              for (auto shell_j_bf = shell_j_bf_start; shell_j_bf < shell_j_bf_start + shell_j_bf_size; ++shell_j_bf) {
                for (auto shell_k_bf = shell_k_bf_start; shell_k_bf < shell_k_bf_start + shell_k_bf_size; ++shell_k_bf) {
                  for (auto shell_l_bf = shell_l_bf_start; shell_l_bf < shell_l_bf_start + shell_l_bf_size; ++shell_l_bf) {
                    if (buf_1234 != nullptr) {
                      auto eri_ijkl = buf_1234[shell_ijkl_bf];
                      auto D_ij = this->directscf_get_density_coulomb(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, quantum_part_a, quantum_part_a_idx,
                                                                      quantum_part_a_spin_idx, shell_i_bf, shell_j_bf);
                      auto D_kl = this->directscf_get_density_coulomb(dm, dm_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, quantum_part_b, quantum_part_b_idx,
                                                                      quantum_part_b_spin_idx, shell_k_bf, shell_l_bf);
                      const auto spinscale = (quantum_part_a_idx == quantum_part_b_idx && quantum_part_a.restricted == false && quantum_part_a.num_parts > 1) ? 0.5 : 1.0;
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
                    shell_ijkl_bf++;
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
  Polyquant_cout("forming fock");
  for (auto quantum_part_a_idx = 0; quantum_part_a_idx < this->input_molecule.quantum_particles.size(); quantum_part_a_idx++) {
    auto quantum_part_a_it = this->input_molecule.quantum_particles.begin();
    std::advance(quantum_part_a_it, quantum_part_a_idx);
    auto quantum_part_a = quantum_part_a_it->second;
    auto quantum_part_a_spin_lim = quantum_part_a.restricted ? 1 : 2;
    quantum_part_a_spin_lim = (quantum_part_a.num_parts == 1) ? 1 : quantum_part_a_spin_lim;
    for (auto quantum_part_a_spin_idx = 0; quantum_part_a_spin_idx < quantum_part_a_spin_lim; quantum_part_a_spin_idx++) {
      this->Cauchy_Schwarz_threshold = std::max(this->iteration_rms_error[quantum_part_a_idx][quantum_part_a_spin_idx] / 1e4, std::numeric_limits<double>::epsilon());
      for (auto quantum_part_b_idx = 0; quantum_part_b_idx < this->input_molecule.quantum_particles.size(); quantum_part_b_idx++) {
        if (!independent_converged && quantum_part_a_idx != quantum_part_b_idx)
          continue;
        auto quantum_part_b_it = this->input_molecule.quantum_particles.begin();
        std::advance(quantum_part_b_it, quantum_part_b_idx);
        auto quantum_part_b = quantum_part_b_it->second;
        auto quantum_part_b_spin_lim = quantum_part_b.restricted ? 1 : 2;
        quantum_part_b_spin_lim = (quantum_part_b.num_parts == 1) ? 1 : quantum_part_b_spin_lim;

        for (auto quantum_part_b_spin_idx = 0; quantum_part_b_spin_idx < quantum_part_b_spin_lim; quantum_part_b_spin_idx++) {
          form_fock_helper_single_fock_matrix(this->F[quantum_part_a_idx][quantum_part_a_spin_idx], this->D, this->D_last, quantum_part_a, quantum_part_a_idx, quantum_part_a_spin_idx, quantum_part_b,
                                              quantum_part_b_idx, quantum_part_b_spin_idx);
        }
      }
    }
  }
  libint2::finalize();
}

void POLYQUANT_EPSCF::form_fock() {
  // set data structures
  auto quantum_part_a_idx = 0ul;
  for (auto const &[quantum_part_a_key, quantum_part_a] : this->input_molecule.quantum_particles) {
    auto num_basis = this->input_basis.num_basis[quantum_part_a_idx];
    if (!this->incremental_fock || !incremental_fock_doing_incremental[quantum_part_a_idx][0]) {
      std::stringstream ss;
      ss << "Resetting Incremental Fock build for Particle " << quantum_part_a_idx << " spin " << 0 << std::endl;
      Polyquant_cout(ss.str());
      this->F[quantum_part_a_idx][0].setZero(num_basis, num_basis);
      this->F[quantum_part_a_idx][0] += this->H_core[quantum_part_a_idx];
    }
    if (quantum_part_a.num_parts > 1 && quantum_part_a.restricted == false) {
      if (!this->incremental_fock || !incremental_fock_doing_incremental[quantum_part_a_idx][1]) {
        std::stringstream ss;
        ss << "Resetting Incremental Fock build for Particle " << quantum_part_a_idx << " spin " << 1 << std::endl;
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
    for (auto const &[quantum_part_a_key, quantum_part_a] : this->input_molecule.quantum_particles) {
      Polyquant_cout("Dumping Fock Matrix");
      Polyquant_dump_mat_to_file(this->F[quantum_part_a_idx][0], "Fock_" + quantum_part_a_key + "_alpha.txt");
      if (quantum_part_a.num_parts > 1 && quantum_part_a.restricted == false) {
        Polyquant_dump_mat_to_file(this->F[quantum_part_a_idx][1], "Fock_" + quantum_part_a_key + "_beta.txt");
      }
      quantum_part_a_idx++;
    }
  }
}

void POLYQUANT_EPSCF::diag_fock_helper(int quantum_part_idx, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &F_prime, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &mo_C,
                                       Eigen::Matrix<double, Eigen::Dynamic, 1> &mo_e) {
  auto num_basis = this->input_basis.num_basis[quantum_part_idx];
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C_prime(num_basis, num_basis);
  Eigen::SelfAdjointEigenSolver<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> eigensolver(F_prime);
  mo_e = eigensolver.eigenvalues();
  C_prime = eigensolver.eigenvectors();
  mo_C = this->input_integral.orth_X[quantum_part_idx] * C_prime;
  for (auto i = 0; i < mo_C.cols(); i++) {
    auto max_val = mo_C(Eigen::placeholders::all, i).maxCoeff();
    auto min_val = mo_C(Eigen::placeholders::all, i).minCoeff();
    if (std::abs(min_val) > std::abs(max_val) && min_val < 0) {
      mo_C(Eigen::placeholders::all, i) *= -1;
    }
  }
}
void POLYQUANT_EPSCF::diag_fock() {
  auto quantum_part_idx = 0ul;
  this->E_orbitals.resize(this->input_molecule.quantum_particles.size());
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto num_basis = this->input_basis.num_basis[quantum_part_idx];
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      this->E_orbitals[quantum_part_idx].resize(2);
    } else {
      this->E_orbitals[quantum_part_idx].resize(1);
    }

    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> F_prime(num_basis, num_basis);
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> F_diis = this->F[quantum_part_idx][0];
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> FD_commutator = this->F[quantum_part_idx][0] * this->D[quantum_part_idx][0] * this->input_integral.overlap[quantum_part_idx] -
                                                                          this->input_integral.overlap[quantum_part_idx] * this->D[quantum_part_idx][0] * this->F[quantum_part_idx][0];
    this->iteration_rms_error[quantum_part_idx][0] = FD_commutator.norm() / (num_basis * num_basis);
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
          buffer << "Next iteration doing an incremental fock build for " << quantum_part_key << " spin " << 0 << this->iteration_num << std::endl;
          Polyquant_cout(buffer.str());
        }
      }
    }
    if (this->diis_extrapolation) {
      this->diis[quantum_part_idx][0].extrapolate(F_diis, FD_commutator);
    }
    F_prime = this->input_integral.orth_X[quantum_part_idx] * F_diis * this->input_integral.orth_X[quantum_part_idx];
    diag_fock_helper(quantum_part_idx, F_prime, this->C[quantum_part_idx][0], this->E_orbitals[quantum_part_idx][0]);
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> F_diis = this->F[quantum_part_idx][1];
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> FD_commutator = this->F[quantum_part_idx][1] * this->D[quantum_part_idx][1] * this->input_integral.overlap[quantum_part_idx] -
                                                                            this->input_integral.overlap[quantum_part_idx] * this->D[quantum_part_idx][1] * this->F[quantum_part_idx][1];
      this->iteration_rms_error[quantum_part_idx][1] = FD_commutator.norm() / (num_basis * num_basis);
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
            buffer << "Next iteration doing an incremental fock build for " << quantum_part_key << " spin " << 1 << std::endl;
            Polyquant_cout(buffer.str());
          }
        }
      }
      if (this->diis_extrapolation) {
        this->diis[quantum_part_idx][1].extrapolate(F_diis, FD_commutator);
      }
      F_prime = this->input_integral.orth_X[quantum_part_idx] * F_diis * this->input_integral.orth_X[quantum_part_idx];
      diag_fock_helper(quantum_part_idx, F_prime, this->C[quantum_part_idx][1], this->E_orbitals[quantum_part_idx][1]);
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::form_DM() {
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto num_basis = this->input_basis.num_basis[quantum_part_idx];
    auto num_parts_alpha = quantum_part.num_parts_alpha;
    auto num_parts_beta = quantum_part.num_parts_beta;
    form_DM_helper(this->D[quantum_part_idx][0], this->D_last[quantum_part_idx][0], this->C[quantum_part_idx][0], num_basis, num_parts_alpha);
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      form_DM_helper(this->D[quantum_part_idx][1], this->D_last[quantum_part_idx][1], this->C[quantum_part_idx][1], num_basis, num_parts_beta);
    }
    quantum_part_idx++;
  }
  if (verbose == true) {
    auto quantum_part_a_idx = 0;
    for (auto const &[quantum_part_a_key, quantum_part_a] : this->input_molecule.quantum_particles) {
      Polyquant_cout("Dumping 1pDM Matrix");
      Polyquant_dump_mat_to_file(this->D[quantum_part_a_idx][0], "DM_" + quantum_part_a_key + "_alpha.txt");
      if (quantum_part_a.num_parts > 1 && quantum_part_a.restricted == false) {
        Polyquant_dump_mat_to_file(this->D[quantum_part_a_idx][1], "DM_" + quantum_part_a_key + "_beta.txt");
      }
      quantum_part_a_idx++;
    }
  }
}

void POLYQUANT_EPSCF::form_DM_helper(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &dm, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &dm_last,
                                     const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &coeff, int num_basis, int num_part) {
  dm_last = dm;
  dm.setZero(num_basis, num_basis);
#pragma omp parallel for
  for (size_t i = 0; i < num_basis; i++) {
    for (size_t j = 0; j < num_basis; j++) {
      for (int k = 0; k < num_part; k++) {
        dm(i, j) += coeff(i, k) * coeff(j, k);
      }
    }
  }
}

void POLYQUANT_EPSCF::calculate_E_elec() {
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    this->E_particles_last[quantum_part_idx] = this->E_particles[quantum_part_idx];
    if (quantum_part.num_parts == 1) {
      this->E_particles[quantum_part_idx] = 0.5 * (this->D[quantum_part_idx][0].array() * (this->H_core[quantum_part_idx] + this->F[quantum_part_idx][0]).array()).sum();
    } else if (quantum_part.restricted == false) {
      this->E_particles[quantum_part_idx] =
          0.5 * (((this->D[quantum_part_idx][0] + this->D[quantum_part_idx][1]).array() * (this->H_core[quantum_part_idx]).array()) +
                 ((this->D[quantum_part_idx][0]).array() * (this->F[quantum_part_idx][0]).array()) + ((this->D[quantum_part_idx][1]).array() * (this->F[quantum_part_idx][1]).array()))
                    .sum();
    } else {
      this->E_particles[quantum_part_idx] = (this->D[quantum_part_idx][0].array() * (this->H_core[quantum_part_idx] + this->F[quantum_part_idx][0]).array()).sum();
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::calculate_E_total() {
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
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    std::stringstream buffer;
    buffer << std::setprecision(20) << "Convergence status for " << quantum_part_key << std::endl;
    auto E_diff = (this->E_particles[quantum_part_idx] - this->E_particles_last[quantum_part_idx]) / this->E_particles[quantum_part_idx];
    this->iteration_E_diff[quantum_part_idx] = std::abs(E_diff);
    buffer << "delta E / E = " << E_diff << " converged = " << std::boolalpha << (this->iteration_E_diff[quantum_part_idx] < this->convergence_E) << std::endl;

    if (this->iteration_E_diff[quantum_part_idx] >= this->convergence_E || this->iteration_num < 2) {
      this->converged = false;
      this->stop = false;
    }
    if (quantum_part.num_parts == 1) {
      buffer << "rms err [F,D] = " << this->iteration_rms_error[quantum_part_idx][0] << " converged = " << std::boolalpha << (this->iteration_rms_error[quantum_part_idx][0] < this->convergence_DM)
             << std::endl;
      if (this->iteration_rms_error[quantum_part_idx][0] >= this->convergence_DM) {
        this->converged = false;
        this->stop = false;
      }
    } else if (quantum_part.restricted == false) {
      buffer << "rms err (alpha) [F,D] = " << this->iteration_rms_error[quantum_part_idx][0] << " converged = " << std::boolalpha
             << (this->iteration_rms_error[quantum_part_idx][0] < this->convergence_DM) << std::endl;
      buffer << "rms err (beta) [F,D] = " << this->iteration_rms_error[quantum_part_idx][1] << " converged = " << std::boolalpha
             << (this->iteration_rms_error[quantum_part_idx][1] < this->convergence_DM) << std::endl;
      if (this->iteration_rms_error[quantum_part_idx][0] >= this->convergence_DM) {
        this->converged = false;
        this->stop = false;
      }
      if (this->iteration_rms_error[quantum_part_idx][1] >= this->convergence_DM) {
        this->converged = false;
        this->stop = false;
      }
    } else {
      buffer << "rms err [F,D] = " << this->iteration_rms_error[quantum_part_idx][0] << " converged = " << std::boolalpha << (this->iteration_rms_error[quantum_part_idx][0] < this->convergence_DM)
             << std::endl;
      if (this->iteration_rms_error[quantum_part_idx][0] >= this->convergence_DM) {
        this->converged = false;
        this->stop = false;
      }
    }
    quantum_part_idx++;
    Polyquant_cout(buffer.str());
  }
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
    libint2::DIIS<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> tempdiis(this->diis_start, this->diis_size, this->diis_damping, 1, 1, this->diis_mixing_fraction);
    auto quantum_part_idx = 0ul;
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
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
    incremental_fock_reset_threshold.clear();
    incremental_fock_reset_iteration.clear();
    incremental_fock_doing_incremental.clear();
    incremental_fock_reset_threshold.resize(this->input_molecule.quantum_particles.size());
    incremental_fock_reset_iteration.resize(this->input_molecule.quantum_particles.size());
    incremental_fock_doing_incremental.resize(this->input_molecule.quantum_particles.size());
    auto quantum_part_idx = 0ul;
    for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
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
        this->incremental_fock_reset_iteration[quantum_part_idx][2] = this->iteration_num;
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
  this->iteration_num += 1;
  this->form_fock();
  this->diag_fock();
  this->form_DM();
}

void POLYQUANT_EPSCF::guess_DM() {
  // TODO SAD or
  // TODO SAP
  // TODO move into separate functions
  this->D.resize(this->input_molecule.quantum_particles.size());
  this->D_last.resize(this->input_molecule.quantum_particles.size());
  this->C.resize(this->input_molecule.quantum_particles.size());
  this->F.resize(this->input_molecule.quantum_particles.size());
  this->iteration_rms_error.resize(this->input_molecule.quantum_particles.size());

  this->reset_diis();
  this->reset_incfock();

  if (this->input_molecule.quantum_particles.size() == 1) {
    this->independent_converged = true;
  }
  auto quantum_part_idx = 0ul;
  this->E_particles.resize(this->input_molecule.quantum_particles.size());
  this->E_particles_last.resize(this->input_molecule.quantum_particles.size());
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto num_basis = this->input_basis.num_basis[quantum_part_idx];
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

void POLYQUANT_EPSCF::print_start_iterations() { Polyquant_cout("Excess particle SCF Program"); }

void POLYQUANT_EPSCF::print_iteration() {
  Polyquant_cout("Iteration " + std::to_string(this->iteration_num) + " :");
  auto quantum_part_idx = 0ul;
  auto E_parts = 0.0;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    Polyquant_cout("E(" + quantum_part_key + ") : " + std::to_string(this->E_particles[quantum_part_idx]));
    E_parts += this->E_particles[quantum_part_idx];
    quantum_part_idx++;
  }
  Polyquant_cout("E(particles) : " + std::to_string(E_parts));
}

void POLYQUANT_EPSCF::form_scf_occ(std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> &occ) {
  occ.resize(this->input_molecule.quantum_particles.size());
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto num_mo = C[quantum_part_idx][0].size();
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      occ[quantum_part_idx].resize(2);
      occ[quantum_part_idx][0].setZero(num_mo);
      occ[quantum_part_idx][1].setZero(num_mo);
      for (auto i = 0; i < quantum_part.num_parts_alpha; i++) {
        occ[quantum_part_idx][0](i) = 1.0;
      }
      for (auto i = 0; i < quantum_part.num_parts_beta; i++) {
        occ[quantum_part_idx][1](i) = 1.0;
      }
    } else {
      occ[quantum_part_idx].resize(1);
      occ[quantum_part_idx][0].setZero(num_mo);
      auto occval = (quantum_part.num_parts == 1) ? 1.0 : 2.0;
      for (auto i = 0; i < quantum_part.num_parts_alpha; i++) {
        occ[quantum_part_idx][0](i) = occval;
      }
    }
    quantum_part_idx++;
  }
}

void POLYQUANT_EPSCF::print_success() {
  Polyquant_cout("SCF SUCCESS");
  Polyquant_cout(this->E_total);
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> occ;
  form_scf_occ(occ);
  dump_orbitals(this->C, this->E_orbitals, occ);
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
  buffer << "    Cauchy_Schwarz_threshold = " << this->Cauchy_Schwarz_threshold << std::endl;
  Polyquant_cout(buffer.str());
}

void POLYQUANT_EPSCF::dump_molden() {
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto &MO_a_coeff = this->C[quantum_part_idx][0];
    auto &MO_b_coeff = this->C[quantum_part_idx][0];
    auto &MO_a_energy = this->E_orbitals[quantum_part_idx][0];
    auto &MO_b_energy = this->E_orbitals[quantum_part_idx][0];
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      MO_b_coeff = this->C[quantum_part_idx][1];
      MO_b_energy = this->E_orbitals[quantum_part_idx][1];
    }

    std::vector<std::string> MO_a_symmetry_labels;
    MO_a_symmetry_labels.resize(MO_a_coeff.cols(), "A");
    std::vector<std::string> MO_b_symmetry_labels;
    MO_b_symmetry_labels.resize(MO_b_coeff.cols(), "A");
    std::vector<double> MO_a_occupation;
    MO_a_occupation.resize(MO_a_coeff.cols(), 0.0);
    std::fill(MO_a_occupation.begin(), MO_a_occupation.begin() + quantum_part.num_parts_alpha, 1.0);
    std::vector<double> MO_b_occupation;
    MO_b_occupation.resize(MO_b_coeff.cols(), 0.0);
    std::fill(MO_b_occupation.begin(), MO_b_occupation.begin() + quantum_part.num_parts_beta, 1.0);
    std::vector<libint2::Atom> atoms = this->input_molecule.to_libint_atom();
    try {
      std::string filename = quantum_part_key + "_polyquant.molden";
      POLYQUANT_MOLDEN molden_dumper(filename);
      molden_dumper.dump(atoms, this->input_basis.basis[quantum_part_idx], MO_a_coeff, MO_a_energy, MO_a_symmetry_labels, MO_a_occupation, MO_b_coeff, MO_b_energy, MO_b_symmetry_labels,
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
  this->input_integral.calculate_overlap();
  this->input_integral.symmetric_orthogonalization();
  this->input_integral.calculate_kinetic();
  this->input_integral.calculate_nuclear();
  this->input_integral.calculate_unique_shell_pairs();
  // this->input_integral.calculate_two_electron();
  if (this->Cauchy_Schwarz_screening) {
    this->input_integral.calculate_Schwarz();
  }
}
void POLYQUANT_EPSCF::setup_standard() {
  this->print_start_iterations();
  this->print_params();
  this->calculate_integrals();

  // start the SCF process
  this->form_H_core();
  this->guess_DM();
}

void POLYQUANT_EPSCF::run() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  while (!this->stop) {
    this->run_iteration();
    this->print_iteration();
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
  this->print_start_iterations();
  this->print_params();
  this->calculate_integrals();
  // start the SCF process
  this->form_H_core();
  this->guess_DM();
  // write over the current dm
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule.quantum_particles) {
    auto idx = 0;
    std::filesystem::path path(filename);
    std::string dir = path.parent_path().string();
    std::string file = path.filename().string();
    std::string file_to_load = dir + quantum_part_key + "_" + file;

    hdf5::file::File hdf5_file = hdf5::file::open(file_to_load, hdf5::file::AccessFlags::READONLY);
    auto root_group = hdf5_file.root();
    Polyquant_cout("Reading coefficients from file : " + file_to_load);
    if (!root_group.exists("Super_Twist")) {
      APP_ABORT("Reading coefficients failed. No Super_Twist group in HDF5 file.");
    }
    auto Super_Twist_group = root_group.get_group("Super_Twist");

    auto num_basis = this->input_basis.num_basis[quantum_part_idx];
    auto Dataset = Super_Twist_group.get_dataset("eigenset_" + std::to_string(idx));
    hdf5::dataspace::Simple Dataspace(Dataset.dataspace());
    auto Dimensions = Dataspace.current_dimensions();
    Polyquant_cout("Reading eigenset_" + std::to_string(idx));
    Polyquant_cout("    Dimensions " + std::to_string(Dimensions[0]) + " " + std::to_string(Dimensions[1]) + " for quantum particle " + std::to_string(quantum_part_idx));
    std::vector<double> data(Dataspace.size());
    Dataset.read(data);
#pragma omp parallel for
    for (auto i = 0; i < num_basis; i++) {
      for (auto j = 0; j < num_basis; j++) {
        this->C[quantum_part_idx][0](j, i) = data[i * num_basis + j];
      }
    }
    if (quantum_part.num_parts > 1 && quantum_part.restricted == false) {
      Dataset = Super_Twist_group.get_dataset("eigenset_" + std::to_string(idx + 1));
      Dataspace = Dataset.dataspace();
      Dimensions = Dataspace.current_dimensions();
      Polyquant_cout("Reading eigenset_" + std::to_string(idx + 1));
      Polyquant_cout("    Dimensions " + std::to_string(Dimensions[0]) + " " + std::to_string(Dimensions[1]) + " for quantum particle " + std::to_string(quantum_part_idx));
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
  this->print_iteration();
  this->calculate_E_total();
  Polyquant_cout(this->E_total);
  Polyquant_cout("Orbitals from file");
  std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> occ;
  form_scf_occ(occ);
  dump_orbitals(this->C, this->E_orbitals, occ);
}
