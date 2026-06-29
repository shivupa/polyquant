
#include "ci/determinant_set.hpp"

/**
 * @file direct_singleparticle.cpp
 * @brief Matrix-free sigma construction for one-particle-species CI spaces.
 */

namespace polyquant {
template <typename T>
void POLYQUANT_DETSET<T>::sigma_one_species_diagonal_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                  const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  auto second_spin_idx = 1 - idx_spin;

  auto nthreads = omp_get_max_threads();
  if (sigma_workspace_nthreads_ != nthreads || sigma_workspace_.empty() || sigma_workspace_[0].rows() != this->rows() || sigma_workspace_[0].cols() != C.cols()) {
    sigma_workspace_.resize(nthreads);
    for (auto i = 0; i < nthreads; i++)
      sigma_workspace_[i].resize(this->rows(), C.cols());
    sigma_workspace_nthreads_ = nthreads;
  }
  for (auto i = 0; i < nthreads; i++)
    sigma_workspace_[i].setZero();
#pragma omp parallel for schedule(dynamic, 64)
  for (auto i_det = 0; i_det < this->N_dets; i_det++) {
    auto thread_id = omp_get_thread_num();
    auto integral = diagonal_Hii[i_det];
    for (auto state_idx = 0; state_idx < C.cols(); state_idx++)
      sigma_workspace_[thread_id](i_det, state_idx) += integral * C(i_det, state_idx);
  }
  for (auto i = 0; i < nthreads; i++)
    sigma += sigma_workspace_[i];
}

template <typename T>
void POLYQUANT_DETSET<T>::sigma_one_species_class_one_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                   const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral->mo_one_body_ints[idx_part].size();
  auto second_spin_idx = 1 - idx_spin;

  auto nthreads = omp_get_max_threads();
  if (sigma_workspace_nthreads_ != nthreads || sigma_workspace_.empty() || sigma_workspace_[0].rows() != this->rows() || sigma_workspace_[0].cols() != C.cols()) {
    sigma_workspace_.resize(nthreads);
    for (auto i = 0; i < nthreads; i++)
      sigma_workspace_[i].resize(this->rows(), C.cols());
    sigma_workspace_nthreads_ = nthreads;
  }
  for (auto i = 0; i < nthreads; i++)
    sigma_workspace_[i].setZero();
#pragma omp parallel for schedule(dynamic, 64)
  for (auto i_det = 0; i_det < this->N_dets; i_det++) {
    auto thread_id = omp_get_thread_num();
    auto idet_unfold = det_idx_unfold(i_det);
    auto idx_I_A_det = idet_unfold[first_spin_idx];
    auto idx_I_B_det = idet_unfold[second_spin_idx];
    for (auto idx_J_A_det : unique_singles[idx_part][first_spin_idx][idx_I_A_det]) {
      if (idx_J_A_det <= idx_I_A_det)
        continue;
      std::vector<int> jdet_idx(2);
      jdet_idx[first_spin_idx] = idx_J_A_det;
      jdet_idx[second_spin_idx] = idx_I_B_det;
      auto jdet_it = this->dets.find(jdet_idx);
      if (jdet_it != this->dets.end()) {
        auto folded_jdet_idx = jdet_it->second;
        auto num_exec = single_spin_num_excitation(this->unique_dets[idx_part][first_spin_idx][idx_I_A_det], this->unique_dets[idx_part][first_spin_idx][idx_J_A_det]);
        double integral = 0.0;
        if (num_exec == 1)
          integral = same_part_ham_single(idx_part, idet_unfold, jdet_idx);
        else
          integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
        if (integral != 0.0) {
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
            sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
          }
        }
      }
    }
    this->for_each_unique_double(idx_part, first_spin_idx, idx_I_A_det, [&](auto idx_J_A_det) {
      if (idx_J_A_det <= idx_I_A_det)
        return;
      std::vector<int> jdet_idx(2);
      jdet_idx[first_spin_idx] = idx_J_A_det;
      jdet_idx[second_spin_idx] = idx_I_B_det;
      auto jdet_it = this->dets.find(jdet_idx);
      if (jdet_it != this->dets.end()) {
        auto folded_jdet_idx = jdet_it->second;
        double integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
        if (integral != 0.0) {
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
            sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
          }
        }
      }
    });
  }
  for (auto i = 0; i < nthreads; i++)
    sigma += sigma_workspace_[i];
}

template <typename T>
void POLYQUANT_DETSET<T>::sigma_one_species_class_two_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                   const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin, int other_idx_part,
                                                                   int other_idx_spin) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  if (idx_part != other_idx_part && idx_part != 0) {
    APP_ABORT("sigma_one_species_class_two_contribution called with mismatching particle types and/or not particle 0.");
  }
  if (idx_spin == other_idx_spin) {
    APP_ABORT("sigma_one_species_class_two_contribution called with same spin idxs, which is inconsistent with class two contributions.");
  }

  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral->mo_one_body_ints[idx_part].size();
  auto second_spin_idx = other_idx_spin;
  auto nthreads = omp_get_max_threads();
  if (sigma_workspace_nthreads_ != nthreads || sigma_workspace_.empty() || sigma_workspace_[0].rows() != this->rows() || sigma_workspace_[0].cols() != C.cols()) {
    sigma_workspace_.resize(nthreads);
    for (auto i = 0; i < nthreads; i++)
      sigma_workspace_[i].resize(this->rows(), C.cols());
    sigma_workspace_nthreads_ = nthreads;
  }
  for (auto i = 0; i < nthreads; i++)
    sigma_workspace_[i].setZero();
#pragma omp parallel for schedule(dynamic, 64)
  for (auto i_det = 0; i_det < this->N_dets; i_det++) {
    auto thread_id = omp_get_thread_num();
    auto idet_unfold = det_idx_unfold(i_det);
    auto idx_I_A_det = idet_unfold[first_spin_idx];
    auto idx_I_B_det = idet_unfold[second_spin_idx];
    for (auto idx_J_A_det : unique_singles[idx_part][first_spin_idx][idx_I_A_det]) {
      if (idx_J_A_det < idx_I_A_det)
        continue;
      for (auto idx_J_B_det : unique_singles[idx_part][second_spin_idx][idx_I_B_det]) {
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_J_A_det;
        jdet_idx[second_spin_idx] = idx_J_B_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          auto integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
              sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
              sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
            }
          }
        }
      }
    }
  }
  for (auto i = 0; i < nthreads; i++)
    sigma += sigma_workspace_[i];
}

template <typename T>
void POLYQUANT_DETSET<T>::sigma_one_species_class_singleshot(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                             const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin, int other_idx_part,
                                                             int other_idx_spin) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  auto first_spin_idx = idx_spin;
  auto second_spin_idx = other_idx_spin;
  auto nthreads = omp_get_max_threads();
  if (sigma_workspace_nthreads_ != nthreads || sigma_workspace_.empty() || sigma_workspace_[0].rows() != this->rows() || sigma_workspace_[0].cols() != C.cols()) {
    sigma_workspace_.resize(nthreads);
    for (auto i = 0; i < nthreads; i++)
      sigma_workspace_[i].resize(this->rows(), C.cols());
    sigma_workspace_nthreads_ = nthreads;
  }
  for (auto i = 0; i < nthreads; i++)
    sigma_workspace_[i].setZero();
#pragma omp parallel for schedule(dynamic, 64)
  for (auto i_det = 0; i_det < this->N_dets; i_det++) {
    auto thread_id = omp_get_thread_num();
    {
      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[first_spin_idx];
      auto idx_I_B_det = idet_unfold[second_spin_idx];
      // The singleshot path mirrors the explicit-Hamiltonian singleshot
      // traversal but accumulates directly into sigma instead of triplets.
      // diagonal
      for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
        auto integral = diagonal_Hii[i_det];
        sigma_workspace_[thread_id](i_det, state_idx) += integral * C(i_det, state_idx);
      }
      // loop over connected singles alpha
      for (auto idx_J_A_det : unique_singles[idx_part][first_spin_idx][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        //  alpha single
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_J_A_det;
        jdet_idx[second_spin_idx] = idx_I_B_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          auto integral = same_part_ham_single(idx_part, idet_unfold, jdet_idx);
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            if (integral != 0.0) {
              sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
              sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
            }
          }
        }
        // loop over connected beta excitations for a connected double excitation
        for (auto idx_J_B_det : unique_singles[idx_part][second_spin_idx][idx_I_B_det]) {
          std::vector<int> jdet_idx(2);
          jdet_idx[first_spin_idx] = idx_J_A_det;
          jdet_idx[second_spin_idx] = idx_J_B_det;
          auto jdet_it2 = this->dets.find(jdet_idx);
          if (jdet_it2 != this->dets.end()) {
            auto folded_jdet_idx = jdet_it2->second;
            auto integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
            for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
              if (integral != 0.0) {
                sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
                sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
              }
            }
          }
        }
      }
      // loop over connected singles beta
      for (auto idx_J_B_det : unique_singles[idx_part][second_spin_idx][idx_I_B_det]) {
        if (idx_J_B_det < idx_I_B_det) {
          continue;
        }
        //  alpha single
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_I_A_det;
        jdet_idx[second_spin_idx] = idx_J_B_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          auto integral = same_part_ham_single(idx_part, idet_unfold, jdet_idx);
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            if (integral != 0.0) {
              sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
              sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
            }
          }
        }
      }
      // loop over connected doubles alpha
      this->for_each_unique_double(idx_part, first_spin_idx, idx_I_A_det, [&](auto idx_J_A_det) {
        if (idx_J_A_det < idx_I_A_det) {
          return;
        }
        //  alpha double
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_J_A_det;
        jdet_idx[second_spin_idx] = idx_I_B_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          auto integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            if (integral != 0.0) {
              sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
              sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
            }
          }
        }
      });
      // loop over connected doubles beta
      this->for_each_unique_double(idx_part, second_spin_idx, idx_I_B_det, [&](auto idx_J_B_det) {
        if (idx_J_B_det < idx_I_B_det) {
          return;
        }
        //  alpha single
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_I_A_det;
        jdet_idx[second_spin_idx] = idx_J_B_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          auto integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            if (integral != 0.0) {
              sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
              sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
            }
          }
        }
      });
    }
  }
  for (auto i = 0; i < nthreads; i++)
    sigma += sigma_workspace_[i];
}

template <typename T>
void POLYQUANT_DETSET<T>::sigma_one_species(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                            const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {
  // One-species CI can either accumulate the traditional diagonal/class-one/
  // class-two partitions or use the lower-overhead singleshot traversal.
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> sigma_contribution;
  sigma_contribution.resize(this->rows(), C.cols());
  sigma_contribution.setZero();
  if (use_singleshot) {
    sigma_one_species_class_singleshot(sigma_contribution, C, 0, 0, 0, 1);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
  } else {
    sigma_one_species_diagonal_contribution(sigma_contribution, C, 0, 0);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_one_species_class_one_contribution(sigma_contribution, C, 0, 0);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_one_species_class_one_contribution(sigma_contribution, C, 0, 1);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_one_species_class_two_contribution(sigma_contribution, C, 0, 0, 0, 1);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
  }
}

template class POLYQUANT_DETSET<uint64_t>;
}; // namespace polyquant
