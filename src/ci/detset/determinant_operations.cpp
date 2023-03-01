
#include "ci/determinant_set.hpp"

namespace polyquant {
template <typename T> int POLYQUANT_DETSET<T>::single_spin_num_excitation(const std::vector<T> &Di, const std::vector<T> &Dj) const {
  int excitation_degree = 0;
  for (auto i = 0; i < Di.size(); i++) {
    excitation_degree += std::popcount(Di[i] ^ Dj[i]);
  }
  return excitation_degree / 2;
}

template <typename T> int POLYQUANT_DETSET<T>::num_excitation(const std::pair<std::vector<T>, std::vector<T>> &Di, const std::pair<std::vector<T>, std::vector<T>> &Dj) const {
  int excitation_degree = 0;
  return single_spin_num_excitation(Di.first, Dj.first) + single_spin_num_excitation(Di.second, Dj.second);
}

template <typename T> void POLYQUANT_DETSET<T>::create_det(int idx_part, std::vector<std::vector<int>> &occ) {
  std::string alpha_bit_string, beta_bit_string;
  int symm_idx = -1;
  int beta_idx = this->input_epscf->symm_label_idxs[idx_part].size() - 1;

  alpha_bit_string.resize(max_orb[idx_part], '0');
  beta_bit_string.resize(max_orb[idx_part], '0');

  // repeated code from det_sym refactor
  for (auto i_occ : occ[0]) {
    auto shifted_i_occ = i_occ + frozen_core[idx_part];
    if (symm_idx < 0) {
      symm_idx = this->input_epscf->symm_label_idxs[idx_part][0][shifted_i_occ];
    } else {
      symm_idx = this->input_symmetry->direct_product_table(symm_idx, this->input_epscf->symm_label_idxs[idx_part][0][shifted_i_occ]);
    }
    alpha_bit_string[i_occ] = '1';
  }
  for (auto i_occ : occ[1]) {
    auto shifted_i_occ = i_occ + frozen_core[idx_part];
    if (symm_idx < 0) {
      symm_idx = this->input_epscf->symm_label_idxs[idx_part][beta_idx][shifted_i_occ];
    } else {
      symm_idx = this->input_symmetry->direct_product_table(symm_idx, this->input_epscf->symm_label_idxs[idx_part][beta_idx][shifted_i_occ]);
    }
    beta_bit_string[i_occ] = '1';
  }
  Polyquant_cout("Creating det " + alpha_bit_string + " " + beta_bit_string + " for particle " + std::to_string(idx_part) + " of the following irrep " +
                 this->input_symmetry->irrep_names[idx_part][symm_idx]);
  std::reverse(alpha_bit_string.begin(), alpha_bit_string.end());
  std::reverse(beta_bit_string.begin(), beta_bit_string.end());
  std::vector<T> alpha_det;
  std::vector<T> beta_det;
  for (auto i = 0ul; i < alpha_bit_string.length(); i += 64) {
    alpha_det.push_back(std::stoull(alpha_bit_string.substr(i, 64), 0, 2));
    beta_det.push_back(std::stoull(beta_bit_string.substr(i, 64), 0, 2));
  }
  unique_dets[idx_part][0].push_back(alpha_det);
  unique_dets[idx_part][1].push_back(beta_det);
}

template <typename T> void POLYQUANT_DETSET<T>::get_unique_excitation_list(int idx_part, int idx_spin, int idx_det, int excitation_level, std::vector<std::vector<T>> &return_dets) const {
  std::vector<int> occ, virt;
  occ.clear();
  virt.clear();
  auto det = this->unique_dets[idx_part][idx_spin][idx_det];
  this->get_occ_virt(idx_part, det, occ, virt);

  if (excitation_level > virt.size()) {
    APP_ABORT("Excitation level exceeds virtual size!");
  }

  for (auto &&iocc : iter::combinations(occ, excitation_level)) {
    for (auto &&ivirt : iter::combinations(virt, excitation_level)) {
      std::vector<T> temp_det(det);
      // https://stackoverflow.com/a/47990
      for (auto &occbit : iocc) {
        auto int_idx = (temp_det.size() - 1) - (occbit / 64ul);
        temp_det[int_idx] &= ~(1UL << (occbit % 64ul));
      }
      for (auto &virtbit : ivirt) {
        auto int_idx = (temp_det.size() - 1) - (virtbit / 64ul);
        temp_det[int_idx] |= 1UL << (virtbit % 64ul);
      }
      return_dets.push_back(temp_det);
    }
  }
}
template <typename T> void POLYQUANT_DETSET<T>::get_unique_excitation_set(int idx_part, int idx_spin, int idx_det, int excitation_level, std::set<std::vector<T>> &return_dets) const {
  std::vector<int> occ, virt;
  occ.clear();
  virt.clear();
  auto det = this->unique_dets[idx_part][idx_spin][idx_det];
  this->get_occ_virt(idx_part, det, occ, virt);

  if (excitation_level > virt.size()) {
    APP_ABORT("Excitation level exceeds virtual size!");
  }

  for (auto &&iocc : iter::combinations(occ, excitation_level)) {
    for (auto &&ivirt : iter::combinations(virt, excitation_level)) {
      std::vector<T> temp_det(det);
      // https://stackoverflow.com/a/47990
      for (auto &occbit : iocc) {
        auto int_idx = (temp_det.size() - 1) - (occbit / 64ul);
        temp_det[int_idx] &= ~(1UL << (occbit % 64ul));
      }
      for (auto &virtbit : ivirt) {
        auto int_idx = (temp_det.size() - 1) - (virtbit / 64ul);
        temp_det[int_idx] |= 1UL << (virtbit % 64ul);
      }
      return_dets.insert(temp_det);
    }
  }
}

template <typename T> void POLYQUANT_DETSET<T>::get_unique_excitation_list_of_indices(int idx_part, int idx_spin, int idx_det, int excitation_level, std::set<int> &return_idx_list) const {
  if (excitation_level == 1) {
    for (auto idx : unique_singles[idx_part][idx_spin][idx_det]) {
      return_idx_list.insert(idx);
    }
    return;
  }
  if (excitation_level == 2) {
    for (auto idx : unique_doubles[idx_part][idx_spin][idx_det]) {
      return_idx_list.insert(idx);
    }
    return;
  }
  std::vector<std::vector<T>> excited_dets;
  this->get_unique_excitation_list(idx_part, idx_spin, idx_det, excitation_level, excited_dets);
  // std::reverse(excited_dets.begin(), excited_dets.end());
  auto curr_idx = 0;
  while (!excited_dets.empty() && curr_idx < this->unique_dets[idx_part][idx_spin].size()) {
    auto curr_det = this->unique_dets[idx_part][idx_spin][curr_idx];
    auto is_det = [&curr_det](std::vector<T> i) { return i == curr_det; };
    auto det_in_excited_dets_list = std::find_if(excited_dets.begin(), excited_dets.end(), is_det);
    if (det_in_excited_dets_list != excited_dets.end()) {
      return_idx_list.insert(curr_idx);
      excited_dets.erase(det_in_excited_dets_list);
    }
    // if (*excited_dets.end() == this->unique_dets[idx_part][idx_spin][curr_idx]) {
    //     return_idx_list.push_back(curr_idx);
    //     excited_dets.pop_back();
    // }
    curr_idx++;
  }
}

template <typename T> void POLYQUANT_DETSET<T>::create_unique_excitation(int idx_part, int idx_spin, int excitation_level) {
  std::vector<std::vector<T>> excitation_dets;
  auto idx_det = 0;
  this->get_unique_excitation_list(idx_part, idx_spin, idx_det, excitation_level, excitation_dets);
  for (auto det : excitation_dets) {
    this->unique_dets[idx_part][idx_spin].push_back(det);
  }
}
template <typename T> void POLYQUANT_DETSET<T>::create_excitation(std::vector<std::tuple<int, int, int>> excitation_level, int max_collective_excitation_level) {
  if (excitation_level.size() > 2) {
    APP_ABORT("The CI code can currently handle up to a maximum of 2 unique quantum particle types.");
  }
  // TODO generalize this and parallellize...
  this->N_dets = 0;
  this->N_dets_complete_space = 0;
  std::pair<std::vector<T>, std::vector<T>> hf_det_pair_0 = std::make_pair(this->unique_dets[0][0][0], this->unique_dets[0][1][0]);
  std::pair<std::vector<T>, std::vector<T>> hf_det_pair_1;
  int symm_idx = -1;
  get_symm_idx(0, hf_det_pair_0, symm_idx);
  if (excitation_level.size() == 2) {
    hf_det_pair_1 = std::make_pair(this->unique_dets[1][0][0], this->unique_dets[1][1][0]);
    get_symm_idx(1, hf_det_pair_1, symm_idx);
  }
  this->curr_symm_block = symm_idx;

  for (auto i = 0; i < this->unique_dets[0][0].size(); i++) {
    for (auto j = 0; j < this->unique_dets[0][1].size(); j++) {
      std::pair<std::vector<T>, std::vector<T>> det_pair_0 = std::make_pair(this->unique_dets[0][0][i], this->unique_dets[0][1][j]);
      auto excitation_degree_0 = 0;
      excitation_degree_0 = this->num_excitation(hf_det_pair_0, det_pair_0);
      if (excitation_degree_0 <= std::get<2>(excitation_level[0])) {
        if (excitation_level.size() == 2) {
          for (auto k = 0; k < this->unique_dets[1][0].size(); k++) {
            for (auto l = 0; l < this->unique_dets[1][1].size(); l++) {
              int excitation_symm_idx = -1;
              std::pair<std::vector<T>, std::vector<T>> det_pair_1 = std::make_pair(this->unique_dets[1][0][k], this->unique_dets[1][1][l]);
              auto excitation_degree_1 = 0;
              excitation_degree_1 = this->num_excitation(hf_det_pair_1, det_pair_1);
              if (excitation_degree_1 <= std::get<2>(excitation_level[1])) {
                get_symm_idx(0, det_pair_0, excitation_symm_idx);
                get_symm_idx(1, det_pair_1, excitation_symm_idx);
                if (excitation_degree_0 + excitation_degree_1 <= max_collective_excitation_level) {
                  this->N_dets_complete_space++;
                }
                if (excitation_degree_0 + excitation_degree_1 <= max_collective_excitation_level && excitation_symm_idx == this->curr_symm_block) {
                  std::vector<int> det_idx = {i, j, k, l};
                  this->dets[det_idx] = this->N_dets;
                  this->N_dets++;
                }
              }
            }
          }
        } else {
          int excitation_symm_idx = -1;
          get_symm_idx(0, det_pair_0, excitation_symm_idx);
          if (excitation_degree_0 <= max_collective_excitation_level) {
            this->N_dets_complete_space++;
          }
          if (excitation_degree_0 <= max_collective_excitation_level && excitation_symm_idx == this->curr_symm_block) {
            std::vector<int> det_idx = {i, j};
            this->dets[det_idx] = this->N_dets;
            this->N_dets++;
          }
        }
      }
    }
  }
}

template <typename T> void POLYQUANT_DETSET<T>::create_unique_excitation_map_singles() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto nthreads = omp_get_max_threads();
  std::vector<std::vector<std::vector<double>>> threads_map_contributions;
  threads_map_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    threads_map_contributions[i].clear();
  }
  auto idx_part = 0;
  unique_singles.resize(this->input_integral->input_molecule->quantum_particles.size());
  for (auto const &[quantum_part_key, quantum_part] : this->input_integral->input_molecule->quantum_particles) {
    unique_singles[idx_part].resize(2);
    for (auto idx_spin = 0; idx_spin < 2; idx_spin++) {
      unique_singles[idx_part][idx_spin].resize(this->unique_dets[idx_part][idx_spin].size());
      for (auto i = 0; i < nthreads; i++) {
        threads_map_contributions[i].clear();
        threads_map_contributions[i].resize(this->unique_dets[idx_part][idx_spin].size());
      }
#pragma omp parallel
      {
        auto thread_id = omp_get_thread_num();
        for (auto idx_det = 0; idx_det < this->unique_dets[idx_part][idx_spin].size(); idx_det++) {
          if (idx_det % nthreads != thread_id) {
            continue;
          }
          std::set<std::vector<T>> excited_dets;
          this->get_unique_excitation_set(idx_part, idx_spin, idx_det, 1, excited_dets);

          auto curr_idx = 0;
          while (!excited_dets.empty() && curr_idx < this->unique_dets[idx_part][idx_spin].size()) {
            // for (auto curr_idx = 0; curr_idx < this->unique_dets[idx_part][idx_spin].size(); curr_idx++) {
            auto curr_det = this->unique_dets[idx_part][idx_spin][curr_idx];
            auto is_det = [&curr_det](std::vector<T> i) { return i == curr_det; };
            auto det_in_excited_dets_list = std::find_if(excited_dets.begin(), excited_dets.end(), is_det);
            if (det_in_excited_dets_list != excited_dets.end()) {
              threads_map_contributions[thread_id][idx_det].push_back(curr_idx);
              // unique_singles[idx_part][idx_spin][idx_det].push_back(curr_idx);
              excited_dets.erase(det_in_excited_dets_list);
            }
            curr_idx++;
          }
#pragma omp critical
          unique_singles[idx_part][idx_spin][idx_det].insert(unique_singles[idx_part][idx_spin][idx_det].begin(), threads_map_contributions[thread_id][idx_det].begin(),
                                                             threads_map_contributions[thread_id][idx_det].end());
        }
      }

      // auto curr_idx = 0;
      // while (!excited_dets.empty() && curr_idx < this->unique_dets[idx_part][idx_spin].size()) {
      //   auto curr_det = this->unique_dets[idx_part][idx_spin][curr_idx];
      //   auto is_det = [&curr_det](std::vector<T> i) { return i == curr_det; };
      //   auto det_in_excited_dets_list = std::find_if(excited_dets.begin(), excited_dets.end(), is_det);
      //   if (det_in_excited_dets_list != excited_dets.end()) {
      //     unique_singles[idx_part][idx_spin][idx_det].insert(curr_idx);
      //     excited_dets.erase(det_in_excited_dets_list);
      //   }
      //   // if (*excited_dets.end() == this->unique_dets[idx_part][idx_spin][curr_idx]) {
      //   //     return_idx_list.push_back(curr_idx);
      //   //     excited_dets.pop_back();
      //   // }
      //   curr_idx++;
      // }
      // std::sort(unique_singles[idx_part][idx_spin][idx_det].begin(), unique_singles[idx_part][idx_spin][idx_det].end());

      // merge vectors
      //
      // for (auto idx_det = 0; idx_det < this->unique_dets[idx_part][idx_spin].size(); idx_det++) {
      //   auto thread_id = idx_det % nthreads;
      //   unique_singles[idx_part][idx_spin][idx_det].insert(unique_singles[idx_part][idx_spin][idx_det].begin(), threads_map_contributions[thread_id][idx_det].begin(),
      //                                                      threads_map_contributions[thread_id][idx_det].end());
      // }
      // std::stringstream filename;
      // filename << "uniquesingles_map_" << idx_part <<"_"<< idx_spin << ".txt";
      //   Polyquant_dump_vecofvec_to_file(unique_singles[idx_part][idx_spin], filename.str());
    }
    idx_part++;
  }
}
// so much duplicated code in the function above and here and in get_unique_excitation_list_of_indices. needs a helper fn
template <typename T> void POLYQUANT_DETSET<T>::create_unique_excitation_map_doubles() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto nthreads = omp_get_max_threads();
  std::vector<std::vector<std::vector<double>>> threads_map_contributions;
  threads_map_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    threads_map_contributions[i].clear();
  }

  auto idx_part = 0;
  unique_doubles.resize(this->input_integral->input_molecule->quantum_particles.size());
  for (auto const &[quantum_part_key, quantum_part] : this->input_integral->input_molecule->quantum_particles) {
    unique_doubles[idx_part].resize(2);
    for (auto idx_spin = 0; idx_spin < 2; idx_spin++) {
      unique_doubles[idx_part][idx_spin].resize(this->unique_dets[idx_part][idx_spin].size());
      // do we have enough particles to do a double excitation?
      if (this->unique_dets[idx_part][idx_spin][0][0] < 2) {
        continue;
      }
      for (auto i = 0; i < nthreads; i++) {
        threads_map_contributions[i].clear();
        threads_map_contributions[i].resize(this->unique_dets[idx_part][idx_spin].size());
      }
#pragma omp parallel
      {
        auto thread_id = omp_get_thread_num();
        for (auto idx_det = 0; idx_det < this->unique_dets[idx_part][idx_spin].size(); idx_det++) {
          if (idx_det % nthreads != thread_id) {
            continue;
          }
          std::set<std::vector<T>> excited_dets;
          this->get_unique_excitation_set(idx_part, idx_spin, idx_det, 2, excited_dets);
          auto curr_idx = 0;
          while (!excited_dets.empty() && curr_idx < this->unique_dets[idx_part][idx_spin].size()) {
            auto curr_det = this->unique_dets[idx_part][idx_spin][curr_idx];
            auto is_det = [&curr_det](std::vector<T> i) { return i == curr_det; };
            auto det_in_excited_dets_list = std::find_if(excited_dets.begin(), excited_dets.end(), is_det);
            if (det_in_excited_dets_list != excited_dets.end()) {
              threads_map_contributions[thread_id][idx_det].push_back(curr_idx);
              // unique_doubles[idx_part][idx_spin][idx_det].push_back(curr_idx);
              excited_dets.erase(det_in_excited_dets_list);
            }
            curr_idx++;
          }
#pragma omp critical
          unique_doubles[idx_part][idx_spin][idx_det].insert(unique_doubles[idx_part][idx_spin][idx_det].begin(), threads_map_contributions[thread_id][idx_det].begin(),
                                                             threads_map_contributions[thread_id][idx_det].end());
        }
      }
      // merge vectors
      // for (auto idx_det = 0; idx_det < this->unique_dets[idx_part][idx_spin].size(); idx_det++) {
      //   auto thread_id = idx_det % nthreads;
      //   unique_doubles[idx_part][idx_spin][idx_det].insert(unique_doubles[idx_part][idx_spin][idx_det].begin(), threads_map_contributions[thread_id][idx_det].begin(),
      //                                                      threads_map_contributions[thread_id][idx_det].end());
      // }
      // std::stringstream filename;
      // filename << "uniquedoubles_map_" << idx_part <<"_"<< idx_spin << ".txt";
      //   Polyquant_dump_vecofvec_to_file(unique_doubles[idx_part][idx_spin], filename.str());
    }
    idx_part++;
  }
}

template <typename T> void POLYQUANT_DETSET<T>::get_holes(std::vector<T> &Di, std::vector<T> &Dj, std::vector<int> &holes) const {
  for (auto i = 0; i < Di.size(); i++) {
    auto H = (Di[i] ^ Dj[i]) & Di[i];
    while (H != 0) {
      auto position = std::countr_zero(H);
      auto orb_idx = ((Di.size() - i - 1) * 64) + position;
      holes.push_back(orb_idx);
      H &= ~(1UL << position);
    }
  }
  std::sort(holes.begin(), holes.end());
}
template <typename T> void POLYQUANT_DETSET<T>::get_parts(std::vector<T> &Di, std::vector<T> &Dj, std::vector<int> &parts) const {
  for (auto i = 0; i < Di.size(); i++) {
    auto P = (Di[i] ^ Dj[i]) & Dj[i];
    while (P != 0) {
      auto position = std::countr_zero(P);
      auto orb_idx = ((Di.size() - i - 1) * 64) + position;
      parts.push_back(orb_idx);
      P &= ~(1UL << position);
    }
  }
  std::sort(parts.begin(), parts.end());
}
template <typename T> double POLYQUANT_DETSET<T>::get_phase(std::vector<T> &Di, std::vector<T> &Dj, std::vector<int> &holes, std::vector<int> &parts) const {
  T nperm = 0;
  T bit_kind_shift = 6; // 2**6 = 64
  T bit_kind_size = 64; // 64bit
  std::vector<double> phase_list = {1.0, -1.0};
  // only applicable to uint64

  // std::vector<T> mask;
  // mask.resize(Di.size());
  // std::fill(mask.begin(), mask.end(), 0);
  // for testing
  // if (!std::is_sorted(holes.begin(), holes.end())) {
  //   APP_ABORT("For phase computation, holes are not sorted!");
  // }
  // if (!std::is_sorted(parts.begin(), parts.end())) {
  //   APP_ABORT("For phase computation, parts are not sorted!");
  // }
  // if (holes.size() != parts.size()) {
  //   APP_ABORT("For phase computation, num holes != num parts");
  // }
  // if (holes.size() > 2 and holes.size() > 0) {
  //   APP_ABORT("For phase computation, num holes/parts > 2");
  // }

  for (auto l = 0; l < holes.size(); l++) {
    // compared to the reference we add 1 to low rather than subtracting from high because we store 0 indexed things in parts and holes
    T high = std::max(parts[l], holes[l]);
    T low = std::min(parts[l], holes[l]) + 1;
    T j = low >> bit_kind_shift;
    T k = high >> bit_kind_shift;
    T m = high & (bit_kind_size - 1);
    T n = low & (bit_kind_size - 1);

    if (j == k) {
      nperm += std::popcount(Di[j] & (((1 << m) - 1) & (~(1 << n) + 1)));
    } else {
      nperm += std::popcount(Di[j] & ((~(0) & (~(1 << n) + 1))));
      nperm += std::popcount(Di[k] & (((1 << m) - 1)));
      for (int i = j + 1; i < k; i++) {
        nperm += std::popcount(Di[i]);
      }
    }
  }
  if (holes.size() == 2) {
    T a = std::min(holes[0], parts[0]);
    T b = std::max(holes[0], parts[0]);
    T c = std::min(holes[1], parts[1]);
    T d = std::max(holes[1], parts[1]);
    if ((a < c) && (c < b) && (b < d)) {
      nperm++;
    }
  }
  return phase_list[nperm & 1];
  /*
  for (auto i = 0; i < holes.size(); i++) {
    T k = high / 64;
    T m = high % 64;
    T j = low / 64;
    T n = low % 64;
    for (auto l = j; l < k; l++) {
      mask[l] = ~(0);
    }
    mask[k] = (1 << m) - 1;
    // mask[j] = mask[j] & (~(1ul << ((n + 1) + 1)));
    mask[j] = mask[j] & (~(1 << (n + 1)) + 1);
    for (auto l = j; l <= k; l++) {
      // nperm += std::popcount(Di[j] & mask[l]);
      nperm += std::popcount(Di[l] & mask[l]);
    }
  }
  if ((holes.size() == 2) && (holes[1] < parts[0] || holes[0] > parts[1])) {
    nperm++;
  }
  return std::pow(-1.0, nperm);
  */
}

template <typename T> void POLYQUANT_DETSET<T>::get_occ_virt(int idx_part, std::vector<T> &D, std::vector<int> &occ, std::vector<int> &virt) const {
  for (auto i = 0; i < D.size(); i++) {
    std::bitset<64> D_bitset(D[i]);
    for (auto j = 0; j < D_bitset.size(); j++) {
      auto orb_idx = ((D.size() - i - 1) * 64) + j;
      // max_orb - 1 because we are dealing with the index
      if (orb_idx >= this->max_orb[idx_part]) {
        break;
      }
      if (D_bitset[j] == 1) {
        occ.push_back(orb_idx);
      } else {
        virt.push_back(orb_idx);
      }
    }
  }

  std::sort(occ.begin(), occ.end());
  std::sort(virt.begin(), virt.end());
}

template <typename T> void POLYQUANT_DETSET<T>::print_determinants() {
  Polyquant_cout("Printing Determinants");
  Polyquant_cout("Total number of unique determinants: " + std::to_string(this->N_dets));
  for (auto i_part = 0; i_part < unique_dets.size(); i_part++) {
    for (auto i_spin = 0; i_spin < unique_dets[i_part].size(); i_spin++) {
      Polyquant_cout("Particle " + std::to_string(i_part) + " spin " + std::to_string(i_spin));
      auto idet_idx = 0;
      for (auto i_det : unique_dets[i_part][i_spin]) {
        std::stringstream ss;
        ss << std::setw(10) << idet_idx;
        ss << "    ";
        std::string det;
        for (auto i_detframe : i_det) {
          det += std::bitset<64>(i_detframe).to_string();
          det += " ";
        }
        std::reverse(det.begin(), det.end());
        ss << det;
        Polyquant_cout(ss.str());
        idet_idx++;
      }
    }
  }
}

template <typename T> std::vector<int> POLYQUANT_DETSET<T>::det_idx_unfold(std::size_t det_idx) const {
  if (det_idx > this->N_dets) {
    APP_ABORT("det_idx_unfold called with value greater than the number of determinants");
  }

  auto it = std::find_if(std::begin(dets), std::end(dets), [&det_idx](auto &&pair) { return pair.second == det_idx; });
  if (it == std::end(dets)) {
    APP_ABORT("det_idx_unfold could not find determinant which should exist (idx < N_dets).");
  }
  return it->first;
}

template <typename T> std::vector<T> POLYQUANT_DETSET<T>::get_det(int idx_part, int idx_spin, int i) const { return unique_dets[idx_part][idx_spin][i]; }
template <typename T> std::vector<T> POLYQUANT_DETSET<T>::get_det_withfcorbs(int idx_part, int idx_spin, int i) const {
  auto det = unique_dets[idx_part][idx_spin][i];
  auto nfc = this->frozen_core[idx_part];
  if (nfc == 0) {
    return det;
  }
  auto count = 0;
  // todo this has to change if T is ever not uint64_t
  const uint64_t nbit = 64; // sizeof(T) * 8;
  std::vector<T> new_det;
  for (auto i : det) {
    // std::cout << "SHIV    ";
    // std::bitset<nbit> b(i);
    // std::cout << b << "         " << b.to_ulong() << "             ";
    // extract the bits from the next int that would get bumped over
    auto begin = nbit - nfc;
    auto end = nbit;
    uint64_t mask = (1 << (end - begin)) - 1;
    uint64_t j = i << nfc;
    // set in this int
    if (count + 1 != det.size() - 1) {
      j = j | ((det[count + 1] >> begin) & mask);
    }
    // pad with fc orbs
    if (count == det.size() - 1) {
      for (auto fc = 0; fc < nfc; fc++) {
        j |= 1UL << fc;
      }
    }
    count++;

    // std::bitset<nbit> c(j);
    // std::cout << c << "         " << c.to_ulong() << std::endl;
    new_det.push_back(j);
  }
  return new_det;
}

template class POLYQUANT_DETSET<uint64_t>;
}; // namespace polyquant
