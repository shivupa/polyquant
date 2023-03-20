
#include "ci/determinant_set.hpp"

namespace polyquant {
template <typename T>
void POLYQUANT_DETSET<T>::create_1rdm(const int state_idx, const int quantum_part_idx, const int quantum_part_spin_idx, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &MO_rdm1,
                                      const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {
  // General idea with minor changes (mainly in diagonal): https://arxiv.org/abs/1311.6244
  // T buffer;
  auto nthreads = omp_get_max_threads();
  static constexpr double thresh = 1e-16;
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> MO_rdm1_thread_contributions;
  MO_rdm1_thread_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    MO_rdm1_thread_contributions[i].resize(MO_rdm1.rows(), MO_rdm1.cols());
    MO_rdm1_thread_contributions[i].setZero();
  }
  MO_rdm1.setZero();
#pragma omp parallel
  {
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      if (i_det % nthreads != thread_id) {
        continue;
      }
      auto i_unfold = det_idx_unfold(i_det);
      auto idx_idet = i_unfold[2 * quantum_part_idx + quantum_part_spin_idx];
      auto ishift = 0;
      auto Di = this->get_det(quantum_part_idx, quantum_part_spin_idx, idx_idet);
      // diagonal
      std::vector<int> occ, virt;
      this->get_occ_virt(quantum_part_idx, Di, occ, virt);
      for (auto orb_idx : occ) {
        auto contribution = C(i_det, state_idx) * C(i_det, state_idx);
        if (std::abs(contribution) > thresh) {
        MO_rdm1_thread_contributions[thread_id](orb_idx, orb_idx) += contribution;
        }
      }
      // off diagonal singles contributions
      for (auto idx_jdet : unique_singles[quantum_part_idx][quantum_part_spin_idx][idx_idet]) {
        std::vector<int> j_unfold = i_unfold;
        j_unfold[2 * quantum_part_idx + quantum_part_spin_idx] = idx_jdet;
        auto det_j_search = this->dets.find(j_unfold);
        if (det_j_search != this->dets.end()) {
          auto j_det = det_j_search->second;
          auto Dj = this->get_det(quantum_part_idx, quantum_part_spin_idx, idx_jdet);
          if (i_det < j_det) {
            continue;
          }
          std::vector<int> holes, parts;
          double phase = 1.0;
          holes.clear();
          parts.clear();
          get_holes(Di, Dj, holes);
          get_parts(Di, Dj, parts);
          phase = get_phase(Di, Dj, holes, parts);
          auto contribution = phase * C(i_det, state_idx) * C(j_det, state_idx);
          auto k = holes[0];
          auto l = parts[0];
        if (std::abs(contribution) > thresh) {
          MO_rdm1_thread_contributions[thread_id](k, l) += contribution;
          MO_rdm1_thread_contributions[thread_id](l, k) += contribution;
        }
        }
      }
    }

#pragma omp critical
    MO_rdm1 += MO_rdm1_thread_contributions[thread_id];
    //MO_rdm1 = (MO_rdm1 + MO_rdm1.transpose()) / 2.0;
  }
  // for (auto i = 0; i < nthreads; i++) {
  //   MO_rdm1 += MO_rdm1_thread_contributions[i];
  // }
}

template class POLYQUANT_DETSET<uint64_t>;
}; // namespace polyquant
