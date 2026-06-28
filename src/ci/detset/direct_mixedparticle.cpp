
#include "ci/determinant_set.hpp"

namespace polyquant {
template <typename T>
void POLYQUANT_DETSET<T>::sigma_two_species_diagonal_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                  const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  auto second_spin_idx = 1 - idx_spin;
  auto other_idx_part = 1 - idx_part;
  // idx_XXX_A_det - idx_part, first_spin_idx - for example electron alpha
  // idx_XXX_B_det - idx_part, second_spin_idx - for example electron beta
  // idx_XXX_C_det - other_idx_part, first_spin_idx - for example positron alpha
  // idx_XXX_D_det - other_idx_part, second_spin_idx - for example positron beta
  // TODO there are some implicit assumptions about size in the CI portion of the code.
  // For example the SCF can have spin restricted species with spin unrestricted species.
  // It isn't documented or explicitly clear that 2 spins per particle type are always expected to be present.
  auto nthreads = omp_get_max_threads();
  if (sigma_workspace_nthreads_ != nthreads || sigma_workspace_.empty() ||
      sigma_workspace_[0].rows() != this->rows() || sigma_workspace_[0].cols() != C.cols()) {
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
void POLYQUANT_DETSET<T>::sigma_two_species_class_one_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                   const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral->mo_one_body_ints[idx_part].size();
  auto second_spin_idx = 1 - idx_spin;
  auto other_idx_part = 1 - idx_part;
  auto nthreads = omp_get_max_threads();
  if (sigma_workspace_nthreads_ != nthreads || sigma_workspace_.empty() ||
      sigma_workspace_[0].rows() != this->rows() || sigma_workspace_[0].cols() != C.cols()) {
    sigma_workspace_.resize(nthreads);
    for (auto i = 0; i < nthreads; i++)
      sigma_workspace_[i].resize(this->rows(), C.cols());
    sigma_workspace_nthreads_ = nthreads;
  }
  for (auto i = 0; i < nthreads; i++)
    sigma_workspace_[i].setZero();
  auto quantum_part_c1 = (this->input_integral->input_molecule->quantum_particles.begin())->second;
  auto other_quantum_part_c1 = (++this->input_integral->input_molecule->quantum_particles.begin())->second;
  auto charge_factor_c1 = quantum_part_c1.charge * other_quantum_part_c1.charge;
#pragma omp parallel for schedule(dynamic, 64)
  for (auto i_det = 0; i_det < this->N_dets; i_det++) {
    auto thread_id = omp_get_thread_num();
    auto idet_unfold = det_idx_unfold(i_det);
    auto idx_I_A_det = idet_unfold[2 * idx_part + first_spin_idx];
    for (auto idx_J_A_det : unique_singles[idx_part][first_spin_idx][idx_I_A_det]) {
      if (idx_J_A_det <= idx_I_A_det)
        continue;
      std::vector<int> jdet_idx(4);
      for (auto k = 0; k < 4; k++) jdet_idx[k] = idet_unfold[k];
      jdet_idx[2 * idx_part + first_spin_idx] = idx_J_A_det;
      auto jdet_it = this->dets.find(jdet_idx);
      if (jdet_it != this->dets.end()) {
        auto folded_jdet_idx = jdet_it->second;
        double integral = same_part_ham_single(idx_part, idet_unfold, jdet_idx);
        integral += charge_factor_c1 * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
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
      std::vector<int> jdet_idx(4);
      for (auto k = 0; k < 4; k++) jdet_idx[k] = idet_unfold[k];
      jdet_idx[2 * idx_part + first_spin_idx] = idx_J_A_det;
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
void POLYQUANT_DETSET<T>::sigma_two_species_class_two_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                   const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin, int other_idx_part,
                                                                   int other_idx_spin) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  if ((idx_part == other_idx_part && idx_spin == other_idx_spin)) {
    APP_ABORT("sigma_two_species_class_two_contribution called with same particle and spin idxs, which is inconsistent with two species class two contributions.");
  }

  std::vector<std::pair<int, int>> idx_part_spin = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
  std::pair<int, int> idx_A_part_spin = {idx_part, idx_spin};
  std::pair<int, int> idx_B_part_spin = {other_idx_part, other_idx_spin};
  idx_part_spin.erase(std::remove(idx_part_spin.begin(), idx_part_spin.end(), idx_A_part_spin), idx_part_spin.end());
  idx_part_spin.erase(std::remove(idx_part_spin.begin(), idx_part_spin.end(), idx_B_part_spin), idx_part_spin.end());
  if (idx_part_spin.size() != 2) {
    APP_ABORT("sigma_two_species_class_two_contribution idx_part_spin didn't remove the correct spin/part idx combos.");
  }
  std::pair<int, int> idx_C_part_spin = idx_part_spin.back();
  idx_part_spin.pop_back();
  std::pair<int, int> idx_D_part_spin = idx_part_spin.back();
  idx_part_spin.pop_back();

  auto first_spin_idx = idx_spin;
  auto second_spin_idx = 1 - idx_spin;
  auto quantum_part_c2 = (this->input_integral->input_molecule->quantum_particles.begin())->second;
  auto other_quantum_part_c2 = (++this->input_integral->input_molecule->quantum_particles.begin())->second;
  auto charge_factor_c2 = quantum_part_c2.charge * other_quantum_part_c2.charge;
  const bool same_part = (idx_A_part_spin.first == idx_B_part_spin.first);
  auto nthreads = omp_get_max_threads();
  if (sigma_workspace_nthreads_ != nthreads || sigma_workspace_.empty() ||
      sigma_workspace_[0].rows() != this->rows() || sigma_workspace_[0].cols() != C.cols()) {
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
    auto idx_I_A_det = idet_unfold[2 * idx_A_part_spin.first + idx_A_part_spin.second];
    auto idx_I_B_det = idet_unfold[2 * idx_B_part_spin.first + idx_B_part_spin.second];
    for (auto idx_J_A_det : unique_singles[idx_A_part_spin.first][idx_A_part_spin.second][idx_I_A_det]) {
      if (idx_J_A_det < idx_I_A_det)
        continue;
      for (auto idx_J_B_det : unique_singles[idx_B_part_spin.first][idx_B_part_spin.second][idx_I_B_det]) {
        std::vector<int> jdet_idx(4);
        for (auto k = 0; k < 4; k++) jdet_idx[k] = idet_unfold[k];
        jdet_idx[2 * idx_A_part_spin.first + idx_A_part_spin.second] = idx_J_A_det;
        jdet_idx[2 * idx_B_part_spin.first + idx_B_part_spin.second] = idx_J_B_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          double integral = same_part ? same_part_ham_double(idx_A_part_spin.first, idet_unfold, jdet_idx)
                                      : charge_factor_c2 * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
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
void POLYQUANT_DETSET<T>::sigma_two_species_class_singleshot(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                             const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  auto quantum_part = (this->input_integral->input_molecule->quantum_particles.begin())->second;
  auto other_quantum_part = (++this->input_integral->input_molecule->quantum_particles.begin())->second;
  auto charge_factor = quantum_part.charge * other_quantum_part.charge;
  auto nthreads = omp_get_max_threads();
  if (sigma_workspace_nthreads_ != nthreads || sigma_workspace_.empty() ||
      sigma_workspace_[0].rows() != this->rows() || sigma_workspace_[0].cols() != C.cols()) {
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
      auto idx_I_A_det = idet_unfold[2 * 0 + 0];
      auto idx_I_B_det = idet_unfold[2 * 0 + 1];
      auto idx_I_C_det = idet_unfold[2 * 1 + 0];
      auto idx_I_D_det = idet_unfold[2 * 1 + 1];

      // diagonal
      for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
        auto integral = diagonal_Hii[i_det];
        sigma_workspace_[thread_id](i_det, state_idx) += integral * C(i_det, state_idx);
      }
      // part 0 spin 0 singles
      for (auto idx_J_A_det : unique_singles[0][0][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_J_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          auto integral = 0.0;
          integral += same_part_ham_single(0, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            if (integral != 0.0) {
              sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
              sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
            }
          }
        }
        // (part 0 spin 0 single, part 0 spin 1 single) doubles
        for (auto idx_J_B_det : unique_singles[0][1][idx_I_B_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * 0 + 0] = idx_J_A_det;
          jdet_idx[2 * 0 + 1] = idx_J_B_det;
          jdet_idx[2 * 1 + 0] = idx_I_C_det;
          jdet_idx[2 * 1 + 1] = idx_I_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto integral = 0.0;
            integral += same_part_ham_double(0, idet_unfold, jdet_idx);
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
              if (integral != 0.0) {
                sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
                sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
              }
            }
          }
        }
        // (part 0 spin 0 single, part 1 spin 0 single) doubles
        for (auto idx_J_C_det : unique_singles[1][0][idx_I_C_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * 0 + 0] = idx_J_A_det;
          jdet_idx[2 * 0 + 1] = idx_I_B_det;
          jdet_idx[2 * 1 + 0] = idx_J_C_det;
          jdet_idx[2 * 1 + 1] = idx_I_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto integral = 0.0;
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
              if (integral != 0.0) {
                sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
                sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
              }
            }
          }
        }
        // (part 0 spin 0 single, part 1 spin 1 single) doubles
        for (auto idx_J_D_det : unique_singles[1][1][idx_I_D_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * 0 + 0] = idx_J_A_det;
          jdet_idx[2 * 0 + 1] = idx_I_B_det;
          jdet_idx[2 * 1 + 0] = idx_I_C_det;
          jdet_idx[2 * 1 + 1] = idx_J_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto integral = 0.0;
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
              if (integral != 0.0) {
                sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
                sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
              }
            }
          }
        }
      }
      // part 0 spin 1 singles
      for (auto idx_J_B_det : unique_singles[0][1][idx_I_B_det]) {
        if (idx_J_B_det < idx_I_B_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_J_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_single(0, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            if (integral != 0.0) {
              sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
              sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
            }
          }
        }
        // (part 0 spin 1 single, part 1 spin 0 single) doubles
        for (auto idx_J_C_det : unique_singles[1][0][idx_I_C_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * 0 + 0] = idx_I_A_det;
          jdet_idx[2 * 0 + 1] = idx_J_B_det;
          jdet_idx[2 * 1 + 0] = idx_J_C_det;
          jdet_idx[2 * 1 + 1] = idx_I_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            // auto integral = Slater_Condon(i_det, folded_jdet_idx);
            auto integral = 0.0;
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
              if (integral != 0.0) {
                sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
                sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
              }
            }
          }
        }
        // (part 0 spin 1 single, part 1 spin 1 single) doubles
        for (auto idx_J_D_det : unique_singles[1][1][idx_I_D_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * 0 + 0] = idx_I_A_det;
          jdet_idx[2 * 0 + 1] = idx_J_B_det;
          jdet_idx[2 * 1 + 0] = idx_I_C_det;
          jdet_idx[2 * 1 + 1] = idx_J_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            // auto integral = Slater_Condon(i_det, folded_jdet_idx);
            auto integral = 0.0;
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
              if (integral != 0.0) {
                sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
                sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
              }
            }
          }
        }
      }
      // part 1 spin 0 singles
      for (auto idx_J_C_det : unique_singles[1][0][idx_I_C_det]) {
        if (idx_J_C_det < idx_I_C_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_J_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_single(1, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            if (integral != 0.0) {
              sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
              sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
            }
          }
        }
        // (part 1 spin 0 single, part 1 spin 1 single) doubles
        for (auto idx_J_D_det : unique_singles[1][1][idx_I_D_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * 0 + 0] = idx_I_A_det;
          jdet_idx[2 * 0 + 1] = idx_I_B_det;
          jdet_idx[2 * 1 + 0] = idx_J_C_det;
          jdet_idx[2 * 1 + 1] = idx_J_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            // auto integral = Slater_Condon(i_det, folded_jdet_idx);
            auto integral = 0.0;
            integral += same_part_ham_double(1, idet_unfold, jdet_idx);
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
              if (integral != 0.0) {
                sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
                sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
              }
            }
          }
        }
      }
      // part 1 spin 1 singles
      for (auto idx_J_D_det : unique_singles[1][1][idx_I_D_det]) {
        if (idx_J_D_det < idx_I_D_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_J_D_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_single(1, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            if (integral != 0.0) {
              sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
              sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
            }
          }
        }
      }
      // part 0 spin 0 doubles
      this->for_each_unique_double(0, 0, idx_I_A_det, [&](auto idx_J_A_det) {
        if (idx_J_A_det < idx_I_A_det) {
          return;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_J_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          auto integral = 0.0;
          integral += same_part_ham_double(0, idet_unfold, jdet_idx);
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            if (integral != 0.0) {
              sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
              sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
            }
          }
        }
      });
      // part 0 spin 1 doubles
      this->for_each_unique_double(0, 1, idx_I_B_det, [&](auto idx_J_B_det) {
        if (idx_J_B_det < idx_I_B_det) {
          return;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_J_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          auto integral = 0.0;
          integral += same_part_ham_double(0, idet_unfold, jdet_idx);
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            if (integral != 0.0) {
              sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
              sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
            }
          }
        }
      });
      // part 1 spin 0 doubles
      this->for_each_unique_double(1, 0, idx_I_C_det, [&](auto idx_J_C_det) {
        if (idx_J_C_det < idx_I_C_det) {
          return;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_J_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          auto integral = 0.0;
          integral += same_part_ham_double(1, idet_unfold, jdet_idx);
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            if (integral != 0.0) {
              sigma_workspace_[thread_id](i_det, state_idx) += integral * C(folded_jdet_idx, state_idx);
              sigma_workspace_[thread_id](folded_jdet_idx, state_idx) += integral * C(i_det, state_idx);
            }
          }
        }
      });
      // part 1 spin 1 doubles
      this->for_each_unique_double(1, 1, idx_I_D_det, [&](auto idx_J_D_det) {
        if (idx_J_D_det < idx_I_D_det) {
          return;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_J_D_det;
        auto jdet_it = this->dets.find(jdet_idx);
        if (jdet_it != this->dets.end()) {
          auto folded_jdet_idx = jdet_it->second;
          auto integral = 0.0;
          integral += same_part_ham_double(1, idet_unfold, jdet_idx);
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
void POLYQUANT_DETSET<T>::sigma_two_species(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                            const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {
  // TODO handle idx_J_det == idx_I_det
  // 3 unique terms
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> sigma_contribution;
  sigma_contribution.resize(this->rows(), C.cols());
  sigma_contribution.setZero();
  if (use_singleshot) {
    sigma_two_species_class_singleshot(sigma_contribution, C);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
  } else {
    sigma_two_species_diagonal_contribution(sigma_contribution, C, 0, 0);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_two_species_class_one_contribution(sigma_contribution, C, 0, 0);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_two_species_class_one_contribution(sigma_contribution, C, 0, 1);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_two_species_class_one_contribution(sigma_contribution, C, 1, 0);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_two_species_class_one_contribution(sigma_contribution, C, 1, 1);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_two_species_class_two_contribution(sigma_contribution, C, 0, 0, 0, 1);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_two_species_class_two_contribution(sigma_contribution, C, 0, 0, 1, 0);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_two_species_class_two_contribution(sigma_contribution, C, 0, 0, 1, 1);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_two_species_class_two_contribution(sigma_contribution, C, 0, 1, 1, 0);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_two_species_class_two_contribution(sigma_contribution, C, 0, 1, 1, 1);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
    sigma_two_species_class_two_contribution(sigma_contribution, C, 1, 0, 1, 1);
    sigma += sigma_contribution;
    sigma_contribution.setZero();
  }
}

template class POLYQUANT_DETSET<uint64_t>;
}; // namespace polyquant
