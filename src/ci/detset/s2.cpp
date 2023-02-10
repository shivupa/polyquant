
#include "ci/determinant_set.hpp"

namespace polyquant {
template <typename T>
void POLYQUANT_DETSET<T>::evaluate_s2(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &S_squared, const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {
  // only for restricted cases
  auto nthreads = omp_get_max_threads();

  auto nstates = C.cols();
  auto nspecies = this->input_molecule->quantum_particles.size();

  auto spin_0 = 0;
  auto spin_1 = 1;

  S_squared.resize(nstates, nspecies);
  S_squared.setZero();

  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> S_sq_thread_contributions;
  S_sq_thread_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    S_sq_thread_contributions[i].resize(nstates, nspecies);
    S_sq_thread_contributions[i].setZero();
  }
#pragma omp parallel
  {
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      if (i_det % nthreads != thread_id) {
        continue;
      }
      auto i_unfold = det_idx_unfold(i_det);
      for (auto state_idx = 0; state_idx < nstates; state_idx++) {
        auto C_I = C(i_det, state_idx);
        if (C_I == 0.0) {
          continue;
        }
        auto quantum_part_idx = 0ul;
        for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
          auto idx_idet_a = i_unfold[2 * quantum_part_idx + spin_0];
          auto idx_idet_b = i_unfold[2 * quantum_part_idx + spin_1];
          auto Di_a = this->get_det(quantum_part_idx, spin_0, idx_idet_a);
          auto Di_b = this->get_det(quantum_part_idx, spin_1, idx_idet_b);

          // Diagonal Contribution
          // 10.1021/acs.jctc.7b00466
          // 10.1021/acs.jpca.2c01338
          // https://theses.hal.science/tel-02089570
          auto n_int = Di_a.size();
          std::vector<T> xor_vector;
          std::vector<T> na_vector;
          // xor_vector.resize(nint);
          // na_vector.resize(nint);

          for (auto i_int = 0; i_int < n_int; i_int++) {
            xor_vector.push_back(Di_a[i_int] ^ Di_b[i_int]);
          }

          for (auto i_int = 0; i_int < n_int; i_int++) {
            na_vector.push_back(xor_vector[i_int] & Di_a[i_int]);
          }

          auto num_total = 0;
          auto num_a = 0;
          for (auto i_int = 0; i_int < n_int; i_int++) {
            if (xor_vector[i_int] != 0ul) {
              num_total += std::popcount(xor_vector[i_int]);
              if (na_vector[i_int] != 0ul) {
                num_a += std::popcount(na_vector[i_int]);
              }
            }
          }

          double sz = num_a - (0.5 * num_total);
          double S2_mat_elem = num_a + sz * (sz - 1.0);
          S_sq_thread_contributions[thread_id](state_idx, quantum_part_idx) += C_I * C_I * S2_mat_elem;

          // Off-Diagonal Contribution
          for (auto idx_jdet_a : unique_singles[quantum_part_idx][spin_0][idx_idet_a]) {
            for (auto idx_jdet_b : unique_singles[quantum_part_idx][spin_1][idx_idet_b]) {
              std::vector<int> j_unfold = i_unfold;
              j_unfold[2 * quantum_part_idx + spin_0] = idx_jdet_a;
              j_unfold[2 * quantum_part_idx + spin_1] = idx_jdet_b;

              auto det_j_search = this->dets.find(j_unfold);
              if (det_j_search != this->dets.end()) {
                auto j_det = det_j_search->second;

                auto C_J = C(j_det, state_idx);
                if (C_J == 0.0) {
                  continue;
                }

                auto Dj_a = this->get_det(quantum_part_idx, spin_0, idx_jdet_a);
                auto Dj_b = this->get_det(quantum_part_idx, spin_1, idx_jdet_b);

                std::vector<int> holes_a, parts_a;
                std::vector<int> holes_b, parts_b;
                get_holes(Di_a, Dj_a, holes_a);
                get_parts(Di_a, Dj_a, parts_a);
                get_holes(Di_b, Dj_b, holes_b);
                get_parts(Di_b, Dj_b, parts_b);
                if (holes_a[0] == parts_b[0] && holes_b[0] == parts_a[0]) {
                  double phase = 1.0;
                  phase *= get_phase(Di_a, Dj_a, holes_a, parts_a);
                  phase *= get_phase(Di_b, Dj_b, holes_b, parts_b);

                  S_sq_thread_contributions[thread_id](state_idx, quantum_part_idx) += -phase * C_I * C_J;
                }
              }
            }
          }
          quantum_part_idx++;
        }
      }
    }
#pragma omp critical
    S_squared += S_sq_thread_contributions[thread_id];
  }
}

template <typename T> void POLYQUANT_DETSET<T>::create_S_sq_penalty(std::string type, std::vector<double> expected_S2, std::vector<double> spin_penalty) {

  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_molecule->quantum_particles) {
    auto alpha = spin_penalty[quantum_part_idx];
    if (alpha == 0.0) {
      continue;
    }
    Eigen::SparseMatrix<double, Eigen::RowMajor> S2_penalty;
    std::stringstream ss;
    if (type == "first_order") {
      auto expected_S2_for_part = 0.0;
      // H' = H + aS^2
      create_S_sq_minus_expected_S_sq_matrix_singleshot(S2_penalty, quantum_part_idx, expected_S2_for_part);
      ss << "S2 penalty number of nonzero matrix elem : " << S2_penalty.nonZeros() << std::endl;
      this->ham += alpha * S2_penalty;
    } else {
      auto expected_S2_for_part = expected_S2[quantum_part_idx];
      // H' = H + a(S^2 -I<S^2 expected>)^2
      create_S_sq_minus_expected_S_sq_matrix_singleshot(S2_penalty, quantum_part_idx, expected_S2_for_part);
      S2_penalty = (S2_penalty * S2_penalty).pruned();
      ss << "S2 penalty number of nonzero matrix elem : " << S2_penalty.nonZeros() << std::endl;
      this->ham += alpha * S2_penalty;
    }
    Polyquant_cout(ss.str());
    quantum_part_idx++;
  }
}

template <typename T>
void POLYQUANT_DETSET<T>::create_S_sq_minus_expected_S_sq_matrix_singleshot(Eigen::SparseMatrix<double, Eigen::RowMajor> &S2_pen, int quantum_part_idx, double expected_S2_for_part) {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  auto nthreads = omp_get_max_threads();

  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  triplet_list_threads.resize(nthreads);

  S2_pen.resize(this->N_dets, this->N_dets);

  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> S2_threads;
  S2_threads.resize(nthreads);

  auto spin_0 = 0;
  auto spin_1 = 1;

#pragma omp parallel
  {
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      if (i_det % nthreads != thread_id) {
        continue;
      }
      auto i_unfold = det_idx_unfold(i_det);

      auto idx_idet_a = i_unfold[2 * quantum_part_idx + spin_0];
      auto idx_idet_b = i_unfold[2 * quantum_part_idx + spin_1];
      auto Di_a = this->get_det(quantum_part_idx, spin_0, idx_idet_a);
      auto Di_b = this->get_det(quantum_part_idx, spin_1, idx_idet_b);

      auto n_int = Di_a.size();
      std::vector<T> xor_vector;
      std::vector<T> na_vector;

      for (auto i_int = 0; i_int < n_int; i_int++) {
        xor_vector.push_back(Di_a[i_int] ^ Di_b[i_int]);
      }

      for (auto i_int = 0; i_int < n_int; i_int++) {
        na_vector.push_back(xor_vector[i_int] & Di_a[i_int]);
      }

      auto num_total = 0;
      auto num_a = 0;
      for (auto i_int = 0; i_int < n_int; i_int++) {
        if (xor_vector[i_int] != 0ul) {
          num_total += std::popcount(xor_vector[i_int]);
          if (na_vector[i_int] != 0ul) {
            num_a += std::popcount(na_vector[i_int]);
          }
        }
      }

      double sz = num_a - (0.5 * num_total);
      double S2_mat_elem = num_a + sz * (sz - 1.0);
      S2_mat_elem -= expected_S2_for_part;
      triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(i_det, i_det, S2_mat_elem));

      // Off-Diagonal Contribution
      for (auto idx_jdet_a : unique_singles[quantum_part_idx][spin_0][idx_idet_a]) {
        for (auto idx_jdet_b : unique_singles[quantum_part_idx][spin_1][idx_idet_b]) {
          std::vector<int> j_unfold = i_unfold;
          j_unfold[2 * quantum_part_idx + spin_0] = idx_jdet_a;
          j_unfold[2 * quantum_part_idx + spin_1] = idx_jdet_b;

          auto det_j_search = this->dets.find(j_unfold);
          if (det_j_search != this->dets.end()) {
            auto j_det = det_j_search->second;

            auto Dj_a = this->get_det(quantum_part_idx, spin_0, idx_jdet_a);
            auto Dj_b = this->get_det(quantum_part_idx, spin_1, idx_jdet_b);

            std::vector<int> holes_a, parts_a;
            std::vector<int> holes_b, parts_b;
            get_holes(Di_a, Dj_a, holes_a);
            get_parts(Di_a, Dj_a, parts_a);
            get_holes(Di_b, Dj_b, holes_b);
            get_parts(Di_b, Dj_b, parts_b);
            if (holes_a[0] == parts_b[0] && holes_b[0] == parts_a[0]) {
              double phase = 1.0;
              phase *= get_phase(Di_a, Dj_a, holes_a, parts_a);
              phase *= get_phase(Di_b, Dj_b, holes_b, parts_b);

              auto S2_mat_elem = -phase;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(i_det, j_det, S2_mat_elem));
            }
          }
        }
      }
    }
    S2_threads[thread_id].resize(this->N_dets, this->N_dets);
    S2_threads[thread_id].reserve(triplet_list_threads[thread_id].size());
    S2_threads[thread_id].setFromTriplets(triplet_list_threads[thread_id].begin(), triplet_list_threads[thread_id].end());
    // release memory from the processed triplet list!
    triplet_list_threads[thread_id] = std::vector<Eigen::Triplet<double>>();
#pragma omp critical
    S2_pen += S2_threads[thread_id];
  }
}

template class POLYQUANT_DETSET<uint64_t>;
}; // namespace polyquant
