#include "ci/determinant_set.hpp"

namespace polyquant {
template <typename T> void POLYQUANT_DETSET<T>::two_species_create_ham_class_one(int idx_part, int idx_spin) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral->mo_one_body_ints[idx_part].size();
  auto nthreads = omp_get_max_threads();
  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  triplet_list_threads.resize(nthreads);
  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  ham_threads.resize(nthreads);

  auto second_spin_idx = 1 - idx_spin;
  auto other_idx_part = 1 - idx_part;

#pragma omp parallel
  {
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      if (i_det % nthreads != thread_id) {
        continue;
      }
      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[2 * idx_part + first_spin_idx];
      auto idx_I_B_det = idet_unfold[2 * idx_part + second_spin_idx];
      auto idx_I_C_det = idet_unfold[2 * other_idx_part + first_spin_idx];
      auto idx_I_D_det = idet_unfold[2 * other_idx_part + second_spin_idx];
      std::vector<int> excitation_list;
      // this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 1, excitation_list);
      // if (this->unique_dets[idx_part][first_spin_idx][0][0] > 1)
      //   this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 2, excitation_list);
      std::set_union(unique_singles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_singles[idx_part][first_spin_idx][idx_I_A_det].end(),
                     unique_doubles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_doubles[idx_part][first_spin_idx][idx_I_A_det].end(), std::back_inserter(excitation_list));
      for (auto idx_J_A_det : excitation_list) {
        if (idx_J_A_det <= idx_I_A_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * idx_part + first_spin_idx] = idx_J_A_det;
        jdet_idx[2 * idx_part + second_spin_idx] = idx_I_B_det;
        jdet_idx[2 * other_idx_part + first_spin_idx] = idx_I_C_det;
        jdet_idx[2 * other_idx_part + second_spin_idx] = idx_I_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          auto integral = Slater_Condon(i_det, folded_jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            // triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(folded_jdet_idx, i_det, integral));
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

  // for (auto thread_id = 0; thread_id < nthreads; thread_id++) {
  //   ham += ham_threads[thread_id];
  // }

  // #pragma omp parallel
  //   {
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

template <typename T> void POLYQUANT_DETSET<T>::two_species_create_ham_class_two(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin) {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  if ((idx_part == other_idx_part && idx_spin == other_idx_spin)) {
    APP_ABORT("two_species_create_ham_class_two called with same particle and spin idxs, which is inconsistent with two species class two contributions.");
  }

  std::vector<std::pair<int, int>> idx_part_spin = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
  std::pair<int, int> idx_A_part_spin = {idx_part, idx_spin};
  std::pair<int, int> idx_B_part_spin = {other_idx_part, other_idx_spin};
  idx_part_spin.erase(std::remove(idx_part_spin.begin(), idx_part_spin.end(), idx_A_part_spin), idx_part_spin.end());
  idx_part_spin.erase(std::remove(idx_part_spin.begin(), idx_part_spin.end(), idx_B_part_spin), idx_part_spin.end());
  if (idx_part_spin.size() != 2) {
    APP_ABORT("two_species_create_ham_class_two idx_part_spin didn't remove the correct spin/part idx combos.");
  }
  std::pair<int, int> idx_C_part_spin = idx_part_spin.back();
  idx_part_spin.pop_back();
  std::pair<int, int> idx_D_part_spin = idx_part_spin.back();
  idx_part_spin.pop_back();

  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral->mo_one_body_ints[idx_part].size();
  auto second_spin_idx = 1 - idx_spin;
  auto nthreads = omp_get_max_threads();
  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  triplet_list_threads.resize(nthreads);
  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  ham_threads.resize(nthreads);
#pragma omp parallel
  {
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      if (i_det % nthreads != thread_id) {
        continue;
      }
      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[2 * idx_A_part_spin.first + idx_A_part_spin.second];
      auto idx_I_B_det = idet_unfold[2 * idx_B_part_spin.first + idx_B_part_spin.second];
      auto idx_I_C_det = idet_unfold[2 * idx_C_part_spin.first + idx_C_part_spin.second];
      auto idx_I_D_det = idet_unfold[2 * idx_D_part_spin.first + idx_D_part_spin.second];

      // std::set<int> a_excitation_list;
      // this->get_unique_excitation_list_of_indices(idx_A_part_spin.first, idx_A_part_spin.second, idx_I_A_det, 1, a_excitation_list);
      for (auto idx_J_A_det : unique_singles[idx_A_part_spin.first][idx_A_part_spin.second][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        // std::set<int> b_excitation_list;
        // this->get_unique_excitation_list_of_indices(idx_B_part_spin.first, idx_B_part_spin.second, idx_I_B_det, 1, b_excitation_list);
        for (auto idx_J_B_det : unique_singles[idx_B_part_spin.first][idx_B_part_spin.second][idx_I_B_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * idx_A_part_spin.first + idx_A_part_spin.second] = idx_J_A_det;
          jdet_idx[2 * idx_B_part_spin.first + idx_B_part_spin.second] = idx_J_B_det;
          jdet_idx[2 * idx_C_part_spin.first + idx_C_part_spin.second] = idx_I_C_det;
          jdet_idx[2 * idx_D_part_spin.first + idx_D_part_spin.second] = idx_I_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto integral = Slater_Condon(i_det, folded_jdet_idx);
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            }
            // triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(folded_jdet_idx, i_det, integral));
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
  // for (auto thread_id = 0; thread_id < nthreads; thread_id++) {
  //   ham += ham_threads[thread_id];
  // }
  // #pragma omp parallel
  //   {
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

template <typename T> void POLYQUANT_DETSET<T>::two_species_create_ham_singleshot() {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  auto nthreads = omp_get_max_threads();

  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  triplet_list_threads.resize(nthreads);

  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  ham_threads.resize(nthreads);

  auto quantum_part = (this->input_integral->input_molecule->quantum_particles.begin())->second;
  auto other_quantum_part = (++this->input_integral->input_molecule->quantum_particles.begin())->second;
  auto charge_factor = quantum_part.charge * other_quantum_part.charge;
#pragma omp parallel
  {
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      if (i_det % nthreads != thread_id) {
        continue;
      }
      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[2 * 0 + 0];
      auto idx_I_B_det = idet_unfold[2 * 0 + 1];
      auto idx_I_C_det = idet_unfold[2 * 1 + 0];
      auto idx_I_D_det = idet_unfold[2 * 1 + 1];

      // diagonal
      triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(i_det, i_det, diagonal_Hii[i_det]));
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
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_single(0, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
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
            // auto integral = Slater_Condon(i_det, folded_jdet_idx);
            auto integral = 0.0;
            integral += same_part_ham_double(0, idet_unfold, jdet_idx);
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            }
            // triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(folded_jdet_idx, i_det, integral));
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
            // auto integral = Slater_Condon(i_det, folded_jdet_idx);
            auto integral = 0.0;
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
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
            // auto integral = Slater_Condon(i_det, folded_jdet_idx);
            auto integral = 0.0;
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
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
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_single(0, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
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
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
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
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
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
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_single(1, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
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
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
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
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_single(1, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }
      // part 0 spin 0 doubles
      for (auto idx_J_A_det : unique_doubles[0][0][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_J_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          auto integral = 0.0;
          integral += same_part_ham_double(0, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }
      // part 0 spin 1 doubles
      for (auto idx_J_B_det : unique_doubles[0][1][idx_I_B_det]) {
        if (idx_J_B_det < idx_I_B_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_J_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          auto integral = 0.0;
          integral += same_part_ham_double(0, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }
      // part 1 spin 0 doubles
      for (auto idx_J_C_det : unique_doubles[1][0][idx_I_C_det]) {
        if (idx_J_C_det < idx_I_C_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_J_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          auto integral = 0.0;
          integral += same_part_ham_double(1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }
      // part 1 spin 1 doubles
      for (auto idx_J_D_det : unique_doubles[1][1][idx_I_D_det]) {
        if (idx_J_D_det < idx_I_D_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_J_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          auto integral = 0.0;
          integral += same_part_ham_double(1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
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
}

template <typename T> void POLYQUANT_DETSET<T>::two_species_create_ham() {

  // // Diagonal Contribution
  // create_ham_diagonal(0, 0);
  // // Four class one contributions
  // // Aa Aa
  // two_species_create_ham_class_one(0, 0);
  // // Ab Ab
  // two_species_create_ham_class_one(0, 1);
  // // Ba Ba
  // two_species_create_ham_class_one(1, 0);
  // // Bb Bb
  // two_species_create_ham_class_one(1, 1);

  // // Aa Ab
  // two_species_create_ham_class_two(0, 0, 0, 1);
  // // Aa Ba
  // two_species_create_ham_class_two(0, 0, 1, 0);
  // // Aa Bb
  // two_species_create_ham_class_two(0, 0, 1, 1);
  // // Ab Ba
  // two_species_create_ham_class_two(0, 1, 1, 0);
  // // Ab Bb
  // two_species_create_ham_class_two(0, 1, 1, 1);
  // // Ba Bb
  // two_species_create_ham_class_two(1, 0, 1, 1);
  two_species_create_ham_singleshot();
}

template class POLYQUANT_DETSET<uint64_t>;
}; // namespace polyquant
