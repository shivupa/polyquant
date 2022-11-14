
#include "ci/determinant_set.hpp"


namespace polyquant {
template <typename T>
void POLYQUANT_DETSET<T>::sigma_one_species_diagonal_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                  const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  auto second_spin_idx = 1 - idx_spin;

  auto nthreads = omp_get_max_threads();
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> threads_sigma_contributions;
  threads_sigma_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    threads_sigma_contributions[i].resize(this->rows(), C.cols());
    threads_sigma_contributions[i].setZero();
  }
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto idx_I_A_det = 0; idx_I_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_I_A_det++) {
      for (auto idx_I_B_det = 0; idx_I_B_det < this->unique_dets[idx_part][second_spin_idx].size(); idx_I_B_det++) {
        if ((idx_I_A_det + idx_I_B_det) % nthreads != thread_id)
          continue;
        std::vector<int> det_idx(2);
        det_idx[first_spin_idx] = idx_I_A_det;
        det_idx[second_spin_idx] = idx_I_B_det;
        if (this->dets.find(det_idx) != this->dets.end()) {
          // TODO pick one of these and stick to that form
          // auto folded_idet_idx = this->dets.find(det_idx)->second;
          auto folded_idet_idx = this->dets.at(det_idx);
          // auto integral = Slater_Condon(folded_idet_idx, folded_idet_idx);
          auto integral = diagonal_Hii[folded_idet_idx];
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            threads_sigma_contributions[thread_id](folded_idet_idx, state_idx) += integral * C(folded_idet_idx, state_idx);
          }
        }
      }
    }
#pragma omp critical
    sigma += threads_sigma_contributions[thread_id];
  }
  // for (auto i = 0; i < nthreads; i++) {
  //   sigma += threads_sigma_contributions[i];
  // }
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
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> threads_sigma_contributions;
  threads_sigma_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    threads_sigma_contributions[i].resize(this->rows(), C.cols());
    threads_sigma_contributions[i].setZero();
  }
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto idx_I_A_det = 0; idx_I_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_I_A_det++) {
      for (auto idx_I_B_det = 0; idx_I_B_det < this->unique_dets[idx_part][second_spin_idx].size(); idx_I_B_det++) {
        if ((idx_I_A_det + idx_I_B_det) % nthreads != thread_id)
          continue;
        std::vector<int> det_idx(2);
        det_idx[first_spin_idx] = idx_I_A_det;
        det_idx[second_spin_idx] = idx_I_B_det;
        if (this->dets.find(det_idx) != this->dets.end()) {
          auto folded_idet_idx = this->dets.find(det_idx)->second;
          // replace this with for (idx_J_A_det in single_excitation(idx_I_A_det) + double_excitation(idx_I_A_det))
          std::vector<int> excitation_list;
          std::set_union(unique_singles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_singles[idx_part][first_spin_idx][idx_I_A_det].end(),
                         unique_doubles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_doubles[idx_part][first_spin_idx][idx_I_A_det].end(), std::back_inserter(excitation_list));
          // this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 1, excitation_list);
          //  do we have enough particles to do a double excitation?
          //  if (this->unique_dets[idx_part][first_spin_idx][0][0] > 1)
          //    this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 2, excitation_list);
          //  std::sort(excitation_list.begin(), excitation_list.end());
          //  excitation_list.erase(std::remove_if(excitation_list.begin(), excitation_list.end(), [&idx_I_A_det](int x) { return x < idx_I_A_det; }), excitation_list.end());

          // for (auto idx_J_A_det = idx_I_A_det; idx_J_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_J_A_det++) {
          // auto excitation_list_count = 0;
          for (auto idx_J_A_det : excitation_list) {
            // excitation_list_count++;
            // if ((idx_I_A_det + idx_I_B_det + excitation_list_count) % nthreads != thread_id)
            //   continue;
            if (idx_J_A_det <= idx_I_A_det) {
              continue;
            }
            std::vector<int> jdet_idx(2);
            jdet_idx[first_spin_idx] = idx_J_A_det;
            jdet_idx[second_spin_idx] = idx_I_B_det;
            if (this->dets.find(jdet_idx) != this->dets.end()) {

              auto num_exec = single_spin_num_excitation(this->unique_dets[idx_part][first_spin_idx][idx_I_A_det], this->unique_dets[idx_part][first_spin_idx][idx_J_A_det]);
              auto integral = 0.0;
              if (num_exec == 1) {
                integral = same_part_ham_single(idx_part, det_idx, jdet_idx);
              } else {
                integral = same_part_ham_double(idx_part, det_idx, jdet_idx);
              }
              if (integral != 0.0) {
                auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
                for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
                  // auto integral = Slater_Condon(folded_idet_idx, folded_jdet_idx);
                  threads_sigma_contributions[thread_id](folded_idet_idx, state_idx) += integral * C(folded_jdet_idx, state_idx);
                  // if (folded_idet_idx != folded_jdet_idx)
                  //{
                  threads_sigma_contributions[thread_id](folded_jdet_idx, state_idx) += integral * C(folded_idet_idx, state_idx);
                  //}
                }
              }
            }
          }
        }
      }
    }

#pragma omp critical
    sigma += threads_sigma_contributions[thread_id];
  }
  // for (auto i = 0; i < nthreads; i++) {
  //   sigma += threads_sigma_contributions[i];
  // }
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
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> threads_sigma_contributions;
  threads_sigma_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    threads_sigma_contributions[i].resize(this->rows(), C.cols());
    threads_sigma_contributions[i].setZero();
  }
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto idx_I_A_det = 0; idx_I_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_I_A_det++) {
      for (auto idx_I_B_det = 0; idx_I_B_det < this->unique_dets[idx_part][second_spin_idx].size(); idx_I_B_det++) {
        if ((idx_I_A_det + idx_I_B_det) % nthreads != thread_id)
          continue;
        std::vector<int> det_idx(2);
        det_idx[first_spin_idx] = idx_I_A_det;
        det_idx[second_spin_idx] = idx_I_B_det;
        if (this->dets.find(det_idx) != this->dets.end()) {
          // std::set<int> a_excitation_list;
          // this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 1, a_excitation_list);
          // std::sort(a_excitation_list.begin(), a_excitation_list.end());
          // a_excitation_list.erase(std::remove_if(a_excitation_list.begin(), a_excitation_list.end(), [&idx_I_A_det](int x) { return x < idx_I_A_det; }), a_excitation_list.end());
          // auto a_excitation_list_count = 0;
          for (auto idx_J_A_det : unique_singles[idx_part][first_spin_idx][idx_I_A_det]) {
            if (idx_J_A_det < idx_I_A_det) {
              continue;
            }
            // a_excitation_list_count++;
            //  replace this with for (idx_J_A_det in single_excitation(idx_I_A_det))
            //  for (auto idx_J_A_det = idx_I_A_det; idx_J_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_J_A_det++) {
            //  auto num_exec = single_spin_num_excitation(this->unique_dets[idx_part][first_spin_idx][idx_I_A_det], this->unique_dets[idx_part][first_spin_idx][idx_J_A_det]);
            //  if (num_exec != 1) {
            //    continue;
            //  }
            auto folded_det_idx = this->dets.find(det_idx)->second;
            // replace this with for (idx_J_B_det in single_excitation(idx_I_B_det))
            // for (auto idx_J_B_det = idx_I_B_det; idx_J_B_det < this->unique_dets[idx_part][second_spin_idx].size(); idx_J_B_det++) {
            // for (auto idx_J_B_det = 0; idx_J_B_det < this->unique_dets[idx_part][second_spin_idx].size(); idx_J_B_det++) {
            // std::set<int> b_excitation_list;
            // this->get_unique_excitation_list_of_indices(idx_part, second_spin_idx, idx_I_B_det, 1, b_excitation_list);
            // std::sort(b_excitation_list.begin(), b_excitation_list.end());
            //  b_excitation_list.erase(std::remove_if(b_excitation_list.begin(), b_excitation_list.end(), [&idx_I_B_det](int x){return x < idx_I_B_det;}), b_excitation_list.end());
            // auto b_excitation_list_count = 0;
            for (auto idx_J_B_det : unique_singles[idx_part][second_spin_idx][idx_I_B_det]) {
              // b_excitation_list_count++;

              // auto num_exec = single_spin_num_excitation(this->unique_dets[idx_part][second_spin_idx][idx_I_B_det], this->unique_dets[idx_part][second_spin_idx][idx_J_B_det]);
              // if (num_exec != 1) {
              //   continue;
              // }

              std::vector<int> jdet_idx(2);
              jdet_idx[first_spin_idx] = idx_J_A_det;
              jdet_idx[second_spin_idx] = idx_J_B_det;
              if (this->dets.find(jdet_idx) != this->dets.end()) {
                auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
                // auto integral = Slater_Condon(folded_det_idx, folded_jdet_idx);
                auto integral = same_part_ham_double(idx_part, det_idx, jdet_idx);
                if (integral != 0.0) {
                  for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
                    threads_sigma_contributions[thread_id](folded_det_idx, state_idx) += integral * C(folded_jdet_idx, state_idx);
                    threads_sigma_contributions[thread_id](folded_jdet_idx, state_idx) += integral * C(folded_det_idx, state_idx);
                  }
                }
              }
              // instead of JB starting at 0 we could do swaps IAJB JAIB
            }
          }
        }
      }
    }

#pragma omp critical
    sigma += threads_sigma_contributions[thread_id];
  }
  // for (auto i = 0; i < nthreads; i++) {
  //   sigma += threads_sigma_contributions[i];
  // }
}

template <typename T>
void POLYQUANT_DETSET<T>::sigma_one_species(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                            const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {
  // TODO handle idx_J_det == idx_I_det
  // 3 unique terms
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> sigma_contribution;
  sigma_contribution.resize(this->rows(), C.cols());
  sigma_contribution.setZero();
  // Diagonal Contribution
  sigma_one_species_diagonal_contribution(sigma_contribution, C, 0, 0);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Aa Aa
  sigma_one_species_class_one_contribution(sigma_contribution, C, 0, 0);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Ab Ab
  sigma_one_species_class_one_contribution(sigma_contribution, C, 0, 1);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Aa Ab
  sigma_one_species_class_two_contribution(sigma_contribution, C, 0, 0, 0, 1);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
}

template class POLYQUANT_DETSET<uint64_t>;
};
