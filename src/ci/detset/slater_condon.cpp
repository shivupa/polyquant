#include "ci/determinant_set.hpp"

namespace polyquant {
template <typename T> double POLYQUANT_DETSET<T>::Slater_Condon(int i_det, int j_det) const {
  if (i_det == j_det) {
    return diagonal_Hii[i_det];
  }
  Slater_Condon_calls++;
  // std::pair<int, int> mat_idx;
  // if (j_det < i_det) {
  //   mat_idx = std::make_pair(j_det, i_det);
  // } else {
  //   mat_idx = std::make_pair(i_det, j_det);
  // }
  // auto cached_matrix_elem = this->cache.get(mat_idx);
  // if (cached_matrix_elem.has_value()) {
  //   return cached_matrix_elem.value();
  // } else {
  double matrix_elem = 0.0;
  auto i_unfold = det_idx_unfold(i_det);
  auto j_unfold = det_idx_unfold(j_det);
  std::vector<bool> iequalj;
  //   // todo condense this
  for (auto idx_part = 0; idx_part < unique_dets.size(); idx_part++) {
    iequalj.push_back(i_unfold[idx_part * 2 + 0] == j_unfold[idx_part * 2 + 0] && i_unfold[idx_part * 2 + 1] == j_unfold[idx_part * 2 + 1]);
  }
  auto idx_part = 0ul;
  for (auto const &[quantum_part_key, quantum_part] : this->input_integral->input_molecule->quantum_particles) {
    std::vector<bool> iequalj_otherparts(iequalj.begin(), iequalj.end());
    iequalj_otherparts.erase(iequalj_otherparts.begin() + idx_part);
    if (std::find(iequalj_otherparts.begin(), iequalj_otherparts.end(), false) == iequalj_otherparts.end()) {
      auto excitation_level = 0;
      auto det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
      auto det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
      auto det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
      auto det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);
      auto det_i = std::make_pair(det_i_a, det_i_b);
      auto det_j = std::make_pair(det_j_a, det_j_b);
      excitation_level += this->num_excitation(det_i, det_j);

      if (excitation_level == 0) {
        // do 1+2 body
        matrix_elem += this->same_part_ham_diag(idx_part, i_unfold, j_unfold);
      } else if (excitation_level == 1) {
        // do 1+2 body
        matrix_elem += this->same_part_ham_single(idx_part, i_unfold, j_unfold);
      } else if (excitation_level == 2) {
        // do 2 body
        matrix_elem += this->same_part_ham_double(idx_part, i_unfold, j_unfold);
      }
    }
    auto other_idx_part = 0ul;
    for (auto const &[other_quantum_part_key, other_quantum_part] : this->input_integral->input_molecule->quantum_particles) {
      if (idx_part == other_idx_part) {
        continue;
      }
      // loop over other particles
      // if all other particle dets j,k,l etc are equal then add the particle
      // i j interaction
      std::vector<bool> iequalj_otherparts(iequalj.begin(), iequalj.end());
      iequalj_otherparts.erase(iequalj_otherparts.begin() + idx_part);
      iequalj_otherparts.erase(iequalj_otherparts.begin() + other_idx_part);
      if (std::find(iequalj_otherparts.begin(), iequalj_otherparts.end(), false) == iequalj_otherparts.end()) {
        auto excitation_level = 0;
        auto excitation_level_part_i = 0;
        auto excitation_level_part_j = 0;
        auto part_i_det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
        auto part_i_det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
        auto part_i_det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
        auto part_i_det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);
        auto part_i_det_i = std::make_pair(part_i_det_i_a, part_i_det_i_b);
        auto part_i_det_j = std::make_pair(part_i_det_j_a, part_i_det_j_b);
        auto part_j_det_i_a = this->get_det(other_idx_part, 0, i_unfold[other_idx_part * 2 + 0]);
        auto part_j_det_i_b = this->get_det(other_idx_part, 1, i_unfold[other_idx_part * 2 + 1]);
        auto part_j_det_j_a = this->get_det(other_idx_part, 0, j_unfold[other_idx_part * 2 + 0]);
        auto part_j_det_j_b = this->get_det(other_idx_part, 1, j_unfold[other_idx_part * 2 + 1]);
        auto part_j_det_i = std::make_pair(part_j_det_i_a, part_j_det_i_b);
        auto part_j_det_j = std::make_pair(part_j_det_j_a, part_j_det_j_b);

        excitation_level_part_i = this->num_excitation(part_i_det_i, part_i_det_j);
        excitation_level_part_j = this->num_excitation(part_j_det_i, part_j_det_j);
        excitation_level = excitation_level_part_i + excitation_level_part_j;
        auto charge_factor = quantum_part.charge * other_quantum_part.charge;
        if (excitation_level < 3) {
          if (excitation_level_part_i == 0 && excitation_level_part_j == 0) {
            matrix_elem += charge_factor * this->mixed_part_ham_diag(idx_part, other_idx_part, i_unfold, j_unfold);
          } else if (excitation_level_part_i == 1 && excitation_level_part_j == 1) {
            matrix_elem += charge_factor * this->mixed_part_ham_double(idx_part, other_idx_part, i_unfold, j_unfold);
          } else if (excitation_level_part_i == 1 || excitation_level_part_j == 1) {
            matrix_elem += charge_factor * this->mixed_part_ham_single(idx_part, other_idx_part, i_unfold, j_unfold);
          }
        }
      }
      other_idx_part++;
    }
    idx_part++;
  }
  //   this->cache.set(mat_idx, matrix_elem);
  return matrix_elem;
}

template <typename T> void POLYQUANT_DETSET<T>::precompute_diagonal_Slater_Condon() const {
  diagonal_Hii.resize(N_dets, 0.0);
  for (auto i = 0; i < N_dets; i++) {
    Slater_Condon_diagonal_calls++;
    auto i_unfold = det_idx_unfold(i);
    double matrix_elem = 0.0;
    auto idx_part = 0ul;
    for (auto const &[quantum_part_key, quantum_part] : this->input_integral->input_molecule->quantum_particles) {
      auto det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
      auto det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
      auto det_i = std::make_pair(det_i_a, det_i_b);
      matrix_elem += this->same_part_ham_diag(idx_part, i_unfold, i_unfold);
      auto other_idx_part = 0ul;
      for (auto const &[other_quantum_part_key, other_quantum_part] : this->input_integral->input_molecule->quantum_particles) {
        if (idx_part == other_idx_part) {
          continue;
        }
        auto det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
        auto det_i_b = this->get_det(other_idx_part, 1, i_unfold[other_idx_part * 2 + 1]);
        auto det_i = std::make_pair(det_i_a, det_i_b);
        auto charge_factor = quantum_part.charge * other_quantum_part.charge;
        matrix_elem += charge_factor * this->mixed_part_ham_diag(idx_part, other_idx_part, i_unfold, i_unfold);
        other_idx_part++;
      }
      idx_part++;
    }
    std::cout << i << "   " << matrix_elem <<  "           (";
    for (auto shiv : i_unfold) {
        std::cout << " " << shiv << ",";
    }
    std::cout << " )" << std::endl;
    
    diagonal_Hii[i] = matrix_elem;
  }
}

template class POLYQUANT_DETSET<uint64_t>;
}; // namespace polyquant
