
#include "ci/determinant_set.hpp"

namespace polyquant {
template <typename T> void POLYQUANT_DETSET<T>::create_ham_diagonal(int idx_part, int idx_spin) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
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
      triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(i_det, i_det, diagonal_Hii[i_det]));
    }
    ham_threads[thread_id].resize(this->N_dets, this->N_dets);
    ham_threads[thread_id].reserve(triplet_list_threads[thread_id].size());
    ham_threads[thread_id].setFromTriplets(triplet_list_threads[thread_id].begin(), triplet_list_threads[thread_id].end());

#pragma omp critical
    ham += ham_threads[thread_id];
  }
  //   Polyquant_dump_mat_to_file(ham, "ci_ham.txt");
  // }
  // for (auto thread_id = 0; thread_id < nthreads; thread_id++) {
  //   ham += ham_threads[thread_id];
  //   // for (auto trip_elem : triplet_list_threads[thread_id]) {
  //   //   ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //   // }
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
}

template <typename T> void POLYQUANT_DETSET<T>::create_ham() {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->ham.resize(this->N_dets, this->N_dets);
  std::vector<int> sizes;
  // sizes.resize(this->N_dets, this->N_dets);
  // estimate
  int estimate = std::sqrt(this->N_dets) * 10;
  this->estimate_n_interacting_dets = (estimate < this->N_dets) ? estimate : this->N_dets;
  sizes.resize(this->N_dets, estimate_n_interacting_dets);
  this->ham.reserve(sizes);
  // this->ham.reserve(this->N_dets * this->N_dets);
  auto num_parts = this->input_integral->input_molecule->quantum_particles.size();
  if (num_parts == 1) {
    single_species_create_ham();
  } else if (num_parts == 2) {
    two_species_create_ham();
  } else {
    std::stringstream ss;
    ss << "Hamiltonian building not supported for " << num_parts << " unique quantum particles." << std::endl;
    APP_ABORT(ss.str());
  }
  this->ham.makeCompressed();
  // Polyquant_dump_sparse_mat_to_file(ham, "ci_ham.txt");
}

template class POLYQUANT_DETSET<uint64_t>;
}; // namespace polyquant
