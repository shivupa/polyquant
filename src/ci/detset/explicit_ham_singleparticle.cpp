#include "ci/determinant_set.hpp"

namespace polyquant {
template <typename T> void POLYQUANT_DETSET<T>::single_species_create_ham_class_one(int idx_part, int idx_spin) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral->mo_one_body_ints[idx_part].size();
  auto second_spin_idx = 1 - idx_spin;
  auto nthreads = omp_get_max_threads();
  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  triplet_list_threads.resize(nthreads);
  ham_threads.resize(nthreads);

#pragma omp parallel
  {
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      if (i_det % nthreads != thread_id) {
        continue;
      }

      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[first_spin_idx];
      auto idx_I_B_det = idet_unfold[second_spin_idx];
      std::vector<int> excitation_list;
      // this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 1, excitation_list);
      // // do we have enough particles to do a double excitation?
      // if (this->unique_dets[idx_part][first_spin_idx][0][0] > 1)
      //   this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 2, excitation_list);
      std::set_union(unique_singles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_singles[idx_part][first_spin_idx][idx_I_A_det].end(),
                     unique_doubles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_doubles[idx_part][first_spin_idx][idx_I_A_det].end(), std::back_inserter(excitation_list));
      for (auto idx_J_A_det : excitation_list) {
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
            integral = same_part_ham_single(idx_part, idet_unfold, jdet_idx);
          } else {
            integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
          }
          if (integral != 0.0) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            // triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(folded_jdet_idx, i_det, integral));
          }
        }
      }
      ham_threads[thread_id].resize(this->N_dets, this->N_dets);
      ham_threads[thread_id].reserve(triplet_list_threads[thread_id].size());
      ham_threads[thread_id].setFromTriplets(triplet_list_threads[thread_id].begin(), triplet_list_threads[thread_id].end());

#pragma omp critical
      ham += ham_threads[thread_id];
    }
  }
  //   for (auto thread_id = 0; thread_id < nthreads; thread_id++) {
  //     ham += ham_threads[thread_id];
  //   }
  // {
  //   auto thread_id = omp_get_thread_num();
  //   for (auto t_idx = 0; t_idx < nthreads; t_idx++) {
  //     for (auto trip_elem : triplet_list_threads[t_idx]) {
  //       auto row_idx = trip_elem.row();
  //       if (row_idx % nthreads == thread_id) {
  //       ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //       }
  //     }
  //   }
  // }
}
template <typename T> void POLYQUANT_DETSET<T>::single_species_create_ham_class_two(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin) {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  if (idx_part != other_idx_part && idx_part != 0) {
    APP_ABORT("single_species_create_ham_class_two called with mismatching particle types and/or not particle 0.");
  }
  if (idx_spin == other_idx_spin) {
    APP_ABORT("single_species_create_ham_class_two called with same spin idxs, which is inconsistent with class two contributions.");
  }

  auto first_spin_idx = idx_spin;
  auto second_spin_idx = other_idx_spin;
  auto nthreads = omp_get_max_threads();
  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  triplet_list_threads.resize(nthreads);
  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  ham_threads.resize(nthreads);
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[first_spin_idx];
      auto idx_I_B_det = idet_unfold[second_spin_idx];

      if (i_det % nthreads != thread_id) {
        continue;
      }
      // std::set<int> a_excitation_list;
      // this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 1, a_excitation_list);
      for (auto idx_J_A_det : unique_singles[idx_part][first_spin_idx][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        // std::set<int> b_excitation_list;
        // this->get_unique_excitation_list_of_indices(idx_part, second_spin_idx, idx_I_B_det, 1, b_excitation_list);
        for (auto idx_J_B_det : unique_singles[idx_part][second_spin_idx][idx_I_B_det]) {
          std::vector<int> jdet_idx(2);
          jdet_idx[first_spin_idx] = idx_J_A_det;
          jdet_idx[second_spin_idx] = idx_J_B_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
            if (integral != 0.0) {

              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
              // triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(folded_jdet_idx, i_det, integral));
            }
          }
        }
      }
    }
    ham_threads[thread_id].resize(this->N_dets, this->N_dets);
    ham_threads[thread_id].reserve(triplet_list_threads[thread_id].size());
    ham_threads[thread_id].setFromTriplets(triplet_list_threads[thread_id].begin(), triplet_list_threads[thread_id].end());
#pragma omp critical
    ham += ham_threads[thread_id];
  }

  //   for (auto thread_id = 0; thread_id < nthreads; thread_id++) {
  //     ham += ham_threads[thread_id];
  //   }

  // #pragma omp parallel
  //   {
  //     int nthreads = omp_get_num_threads();
  //     auto thread_id = omp_get_thread_num();
  //     for (auto t_idx = 0; t_idx < nthreads; t_idx++) {
  //       for (auto trip_elem : triplet_list_threads[t_idx]) {
  //         auto row_idx = trip_elem.row();
  //         if (row_idx % nthreads == thread_id) {
  //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //         }
  //       }
  //     }
  //   }

  // for (auto thread_id = 0; thread_id < nthreads; thread_id++){
  //     for (auto trip_elem : triplet_list_threads[thread_id]){
  //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //     }
  // }
}

template <typename T> void POLYQUANT_DETSET<T>::single_species_create_ham_singleshot(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin) {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  auto first_spin_idx = idx_spin;
  auto second_spin_idx = other_idx_spin;

  auto nthreads = omp_get_max_threads();

  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  triplet_list_threads.resize(nthreads);

  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  ham_threads.resize(nthreads);

#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();

    for (auto i_det = 0; i_det < this->N_dets; i_det++) {

      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[first_spin_idx];
      auto idx_I_B_det = idet_unfold[second_spin_idx];

      if (i_det % nthreads != thread_id) {
        continue;
      }
      // diagonal
      triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(i_det, i_det, diagonal_Hii[i_det]));
      // loop over connected singles alpha
      for (auto idx_J_A_det : unique_singles[idx_part][first_spin_idx][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        // alpha single
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_J_A_det;
        jdet_idx[second_spin_idx] = idx_I_B_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto integral = same_part_ham_single(idx_part, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }

        // loop over connected beta excitations for a connected double excitation
        for (auto idx_J_B_det : unique_singles[idx_part][second_spin_idx][idx_I_B_det]) {
          std::vector<int> jdet_idx(2);
          jdet_idx[first_spin_idx] = idx_J_A_det;
          jdet_idx[second_spin_idx] = idx_J_B_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
            if (integral != 0.0) {

              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
              // triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(folded_jdet_idx, i_det, integral));
            }
          }
        }
      }

      for (auto idx_J_B_det : unique_singles[idx_part][second_spin_idx][idx_I_B_det]) {
        if (idx_J_B_det < idx_I_B_det) {
          continue;
        }
        // beta singles
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_I_A_det;
        jdet_idx[second_spin_idx] = idx_J_B_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto integral = same_part_ham_single(idx_part, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }

      // loop over alpha double excitations
      for (auto idx_J_A_det : unique_doubles[idx_part][first_spin_idx][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        // alpha double
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_J_A_det;
        jdet_idx[second_spin_idx] = idx_I_B_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }
      // loop over beta double excitations
      for (auto idx_J_B_det : unique_doubles[idx_part][second_spin_idx][idx_I_B_det]) {
        if (idx_J_B_det < idx_I_B_det) {
          continue;
        }
        // alpha double
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_I_A_det;
        jdet_idx[second_spin_idx] = idx_J_B_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }

      ham_threads[thread_id].resize(this->N_dets, this->N_dets);
      ham_threads[thread_id].reserve(triplet_list_threads[thread_id].size());
      ham_threads[thread_id].setFromTriplets(triplet_list_threads[thread_id].begin(), triplet_list_threads[thread_id].end());
      // release memory from the processed triplet list!
      triplet_list_threads[thread_id] = std::vector<Eigen::Triplet<double>>();
      {
#pragma omp critical
        ham += ham_threads[thread_id];
      }
    }

    // for (auto thread_id = 0; thread_id < nthreads; thread_id++) {
    //   ham += ham_threads[thread_id];
    // }

    // #pragma omp parallel
    //   {
    //     int nthreads = omp_get_num_threads();
    //     auto thread_id = omp_get_thread_num();
    //     for (auto t_idx = 0; t_idx < nthreads; t_idx++) {
    //       for (auto trip_elem : triplet_list_threads[t_idx]) {
    //         auto row_idx = trip_elem.row();
    //         if (row_idx % nthreads == thread_id) {
    //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
    //         }
    //       }
    //     }
    //   }

    // for (auto thread_id = 0; thread_id < nthreads; thread_id++){
    //     for (auto trip_elem : triplet_list_threads[thread_id]){
    //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
    //     }
    // }
  }
}

template <typename T> void POLYQUANT_DETSET<T>::single_species_create_ham() {
  // // diagonal
  // create_ham_diagonal(0, 0);
  // // alpha alpha
  // single_species_create_ham_class_one(0, 0);
  // // beta beta
  // single_species_create_ham_class_one(0, 1);
  // // mixed alpha beta
  // single_species_create_ham_class_two(0, 0, 0, 1);
  single_species_create_ham_singleshot(0, 0, 0, 1);
}

template class POLYQUANT_DETSET<uint64_t>;
}; // namespace polyquant
