
#include "ci/determinant_set.hpp"

namespace polyquant {

template <typename T> void POLYQUANT_DETSET<T>::create_det(int idx_part, std::vector<std::vector<int>> &occ) {
  T one = 1;
  T zero = 0;
  std::string alpha_bit_string, beta_bit_string;
  int symm_idx = -1;

  int maximum_orbital_across_all_parts = *std::max_element(max_orb.begin(), max_orb.end());
  T num_int = (maximum_orbital_across_all_parts >> bit_kind_shift) + one;

  alpha_bit_string.resize(num_int * bit_kind_size, '0');
  beta_bit_string.resize(num_int * bit_kind_size, '0');

  for (auto i_occ : occ[0]) {
    alpha_bit_string[i_occ] = '1';
  }
  for (auto i_occ : occ[1]) {
    beta_bit_string[i_occ] = '1';
  }
  auto alpha_bit_string_for_printing = alpha_bit_string;
  auto beta_bit_string_for_printing = beta_bit_string;
  std::reverse(alpha_bit_string.begin(), alpha_bit_string.end());
  std::reverse(beta_bit_string.begin(), beta_bit_string.end());
  std::vector<T> alpha_det;
  std::vector<T> beta_det;

  for (auto i = 0ul; i < alpha_bit_string.length(); i += bit_kind_size) {
    alpha_det.push_back(std::stoull(alpha_bit_string.substr(i, bit_kind_size), 0, 2));
    beta_det.push_back(std::stoull(beta_bit_string.substr(i, bit_kind_size), 0, 2));
  }
  unique_dets[idx_part][0].push_back(alpha_det);
  unique_dets[idx_part][1].push_back(beta_det);

  std::pair det_pair(alpha_det, beta_det);
  this->get_symm_idx(idx_part, det_pair, symm_idx);

  Polyquant_cout("Creating det " + alpha_bit_string_for_printing + " " + beta_bit_string_for_printing + " for particle " + std::to_string(idx_part) + " of the following irrep " +
                 this->input_symmetry->irrep_names[idx_part][symm_idx]);
}

template <typename T> void POLYQUANT_DETSET<T>::get_unique_excitation_list(int idx_part, int idx_spin, int idx_det, int excitation_level, std::vector<std::vector<T>> &return_dets) const {
  T one = 1;
  T zero = 0;
  std::vector<int> occ, virt;
  occ.clear();
  virt.clear();
  auto det = this->unique_dets[idx_part][idx_spin][idx_det];
  this->get_occ_virt(idx_part, det, occ, virt);

  if (excitation_level > virt.size()) {
    APP_ABORT("Excitation level exceeds virtual size!");
  }

  std::cout << " GET_UNIQUE_EXCITATION_LIST " ;
  std::cout << " "  << idx_part;
  std::cout << " "  << idx_spin;
  std::cout << " "  << idx_det;
  std::cout << " "  << excitation_level;
  std::cout << " "  << std::endl;

  for (auto &&iocc : iter::combinations(occ, excitation_level)) {
    for (auto &&ivirt : iter::combinations(virt, excitation_level)) {
      std::vector<T> temp_det(det);
      // https://stackoverflow.com/a/47990
      for (auto &occbit : iocc) {
        auto int_idx = (temp_det.size() - one) - (occbit >> bit_kind_shift);
        temp_det[int_idx] &= ~(one << (occbit & (bit_kind_size - one)));
      }
      for (auto &virtbit : ivirt) {
        auto int_idx = (temp_det.size() - one) - (virtbit >> bit_kind_shift);
        temp_det[int_idx] |= one << (virtbit & (bit_kind_size - one));
      }
      return_dets.push_back(temp_det);
    }
  }
}
template <typename T> void POLYQUANT_DETSET<T>::get_unique_excitation_set(int idx_part, int idx_spin, int idx_det, int excitation_level, std::set<std::vector<T>> &return_dets) const {
  T one = 1;
  T zero = 0;
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
        auto int_idx = (temp_det.size() - one) - (occbit >> bit_kind_shift);
        temp_det[int_idx] &= ~(one << (occbit & (bit_kind_size - one)));
      }
      for (auto &virtbit : ivirt) {
        auto int_idx = (temp_det.size() - one) - (virtbit >> bit_kind_shift);
        temp_det[int_idx] |= one << (virtbit & (bit_kind_size - one));
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
    this->for_each_unique_double(idx_part, idx_spin, idx_det, [&return_idx_list](std::size_t idx) { return_idx_list.insert(static_cast<int>(idx)); });
    return;
  }
  /*
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
  */
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
  std::cout << " IN CREATE_EXCITATION " << std::endl;
  struct ExcitationBucket {
    int complete_space_count = 0;
    std::vector<int> unfolded_indices;
  };

  // TODO generalize this beyond the currently supported one- and two-particle-type paths.
  this->N_dets = 0;
  this->N_dets_complete_space = 0;
  this->unfolded_stride = (excitation_level.size() == 2) ? 4 : 2;
  this->unfolded_dets.clear();
  this->dets.clear();
  std::pair<std::vector<T>, std::vector<T>> hf_det_pair_0 = std::make_pair(this->unique_dets[0][0][0], this->unique_dets[0][1][0]);
  std::pair<std::vector<T>, std::vector<T>> hf_det_pair_1;
  int symm_idx = -1;
  get_symm_idx(0, hf_det_pair_0, symm_idx);
  if (excitation_level.size() == 2) {
    hf_det_pair_1 = std::make_pair(this->unique_dets[1][0][0], this->unique_dets[1][1][0]);
    get_symm_idx(1, hf_det_pair_1, symm_idx);
  }
  this->curr_symm_block = symm_idx;

  const auto n_alpha0 = this->unique_dets[0][0].size();
  const auto n_beta0 = this->unique_dets[0][1].size();
  std::vector<int> alpha_excitation_degrees_0(n_alpha0);
  std::vector<int> beta_excitation_degrees_0(n_beta0);
  for (auto i = 0ul; i < n_alpha0; i++) {
    alpha_excitation_degrees_0[i] = this->single_spin_num_excitation(hf_det_pair_0.first, this->unique_dets[0][0][i]);
  }
  for (auto j = 0ul; j < n_beta0; j++) {
    beta_excitation_degrees_0[j] = this->single_spin_num_excitation(hf_det_pair_0.second, this->unique_dets[0][1][j]);
  }

  auto build_allowed_indices_by_degree = [](const std::vector<int> &excitation_degrees, int max_degree) {
    std::vector<std::vector<std::size_t>> allowed_indices(max_degree + 1);
    for (auto idx = 0ul; idx < excitation_degrees.size(); idx++) {
      const auto excitation_degree = excitation_degrees[idx];
      for (auto degree = excitation_degree; degree <= max_degree; degree++) {
        allowed_indices[degree].push_back(idx);
      }
    }
    return allowed_indices;
  };

  const auto max_degree_0 = std::min(std::get<2>(excitation_level[0]), max_collective_excitation_level);
  const auto beta_allowed_indices_0 = build_allowed_indices_by_degree(beta_excitation_degrees_0, max_degree_0);
  std::size_t n_alpha1 = 0;
  std::size_t n_beta1 = 0;
  int max_degree_1 = 0;
  std::vector<int> alpha_excitation_degrees_1;
  std::vector<int> beta_excitation_degrees_1;
  std::vector<std::vector<std::size_t>> beta_allowed_indices_1;
  if (excitation_level.size() == 2) {
    n_alpha1 = this->unique_dets[1][0].size();
    n_beta1 = this->unique_dets[1][1].size();
    alpha_excitation_degrees_1.resize(n_alpha1);
    beta_excitation_degrees_1.resize(n_beta1);
    for (auto k = 0ul; k < n_alpha1; k++) {
      alpha_excitation_degrees_1[k] = this->single_spin_num_excitation(hf_det_pair_1.first, this->unique_dets[1][0][k]);
    }
    for (auto l = 0ul; l < n_beta1; l++) {
      beta_excitation_degrees_1[l] = this->single_spin_num_excitation(hf_det_pair_1.second, this->unique_dets[1][1][l]);
    }
    max_degree_1 = std::min(std::get<2>(excitation_level[1]), max_collective_excitation_level);
    beta_allowed_indices_1 = build_allowed_indices_by_degree(beta_excitation_degrees_1, max_degree_1);
  }
  std::vector<ExcitationBucket> buckets(n_alpha0);

#pragma omp parallel for schedule(dynamic)
  for (long long alpha0_idx = 0; alpha0_idx < static_cast<long long>(n_alpha0); alpha0_idx++) {
    const auto i = static_cast<std::size_t>(alpha0_idx);
    const auto alpha_excitation_degree_0 = alpha_excitation_degrees_0[i];
    if (alpha_excitation_degree_0 > max_degree_0) {
      continue;
    }

    auto &bucket = buckets[i];
    const auto max_beta_degree_0 = max_degree_0 - alpha_excitation_degree_0;
    for (const auto j : beta_allowed_indices_0[max_beta_degree_0]) {
      const auto excitation_degree_0 = alpha_excitation_degree_0 + beta_excitation_degrees_0[j];
      std::pair<std::vector<T>, std::vector<T>> det_pair_0 = std::make_pair(this->unique_dets[0][0][i], this->unique_dets[0][1][j]);

      if (excitation_level.size() == 2) {
        const auto max_collective_excitation_degree_1 = max_collective_excitation_level - excitation_degree_0;
        for (auto k = 0ul; k < n_alpha1; k++) {
          const auto alpha_excitation_degree_1 = alpha_excitation_degrees_1[k];
          const auto max_beta_degree_1 = std::min(std::get<2>(excitation_level[1]) - alpha_excitation_degree_1, max_collective_excitation_degree_1 - alpha_excitation_degree_1);
          if (max_beta_degree_1 < 0) {
            continue;
          }

          for (const auto l : beta_allowed_indices_1[std::min(max_beta_degree_1, max_degree_1)]) {
            std::pair<std::vector<T>, std::vector<T>> det_pair_1 = std::make_pair(this->unique_dets[1][0][k], this->unique_dets[1][1][l]);

            bucket.complete_space_count++;
            int excitation_symm_idx = -1;
            get_symm_idx(0, det_pair_0, excitation_symm_idx);
            get_symm_idx(1, det_pair_1, excitation_symm_idx);
            if (excitation_symm_idx == this->curr_symm_block) {
              bucket.unfolded_indices.push_back(static_cast<int>(i));
              bucket.unfolded_indices.push_back(static_cast<int>(j));
              bucket.unfolded_indices.push_back(static_cast<int>(k));
              bucket.unfolded_indices.push_back(static_cast<int>(l));
            }
          }
        }
      } else {
        bucket.complete_space_count++;
        int excitation_symm_idx = -1;
        get_symm_idx(0, det_pair_0, excitation_symm_idx);
        if (excitation_symm_idx == this->curr_symm_block) {
          bucket.unfolded_indices.push_back(static_cast<int>(i));
          bucket.unfolded_indices.push_back(static_cast<int>(j));
        }
      }
    }
  }

  std::size_t accepted_count = 0;
  for (const auto &bucket : buckets) {
    accepted_count += bucket.unfolded_indices.size() / static_cast<std::size_t>(this->unfolded_stride);
  }
  this->unfolded_dets.reserve(accepted_count * static_cast<std::size_t>(this->unfolded_stride));

  for (const auto &bucket : buckets) {
    this->N_dets_complete_space += bucket.complete_space_count;
    for (auto offset = 0ul; offset < bucket.unfolded_indices.size(); offset += static_cast<std::size_t>(this->unfolded_stride)) {
      std::vector<int> det_idx(bucket.unfolded_indices.begin() + offset, bucket.unfolded_indices.begin() + offset + this->unfolded_stride);
      this->dets[det_idx] = this->N_dets;
      this->unfolded_dets.insert(this->unfolded_dets.end(), det_idx.begin(), det_idx.end());
      this->N_dets++;
    }
  }

  if (static_cast<std::size_t>(this->N_dets) != accepted_count) {
    APP_ABORT("Internal determinant construction error: accepted determinant count mismatch.");
  }
}

template <typename T> void POLYQUANT_DETSET<T>::create_unique_det_index_maps() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  unique_det_indices.resize(this->input_integral->input_molecule->quantum_particles.size());
  auto idx_part = 0;
  for (auto const &[quantum_part_key, quantum_part] : this->input_integral->input_molecule->quantum_particles) {
    unique_det_indices[idx_part].resize(2);
    for (auto idx_spin = 0; idx_spin < 2; idx_spin++) {
      auto &unique_det_index = unique_det_indices[idx_part][idx_spin];
      unique_det_index.clear();
      unique_det_index.reserve(this->unique_dets[idx_part][idx_spin].size());
      for (auto i = 0ul; i < this->unique_dets[idx_part][idx_spin].size(); i++) {
        unique_det_index[this->unique_dets[idx_part][idx_spin][i]] = i;
      }
    }
    idx_part++;
  }
}

template <typename T> void POLYQUANT_DETSET<T>::create_unique_excitation_map_singles() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->create_unique_det_index_maps();
  auto nthreads = omp_get_max_threads();
  std::vector<std::vector<std::vector<size_t>>> threads_map_contributions;
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
      const auto &unique_det_index = unique_det_indices[idx_part][idx_spin];
#pragma omp parallel
      {
        auto thread_id = omp_get_thread_num();
        for (auto idx_det = 0; idx_det < this->unique_dets[idx_part][idx_spin].size(); idx_det++) {
          if (idx_det % nthreads != thread_id) {
            continue;
          }
          std::set<std::vector<T>> excited_dets;
          this->get_unique_excitation_set(idx_part, idx_spin, idx_det, 1, excited_dets);
          for (const auto &excited_det : excited_dets) {
            auto it = unique_det_index.find(excited_det);
            if (it != unique_det_index.end())
              threads_map_contributions[thread_id][idx_det].push_back(it->second);
          }
#pragma omp critical
          unique_singles[idx_part][idx_spin][idx_det].insert(unique_singles[idx_part][idx_spin][idx_det].end(), threads_map_contributions[thread_id][idx_det].begin(),
                                                             threads_map_contributions[thread_id][idx_det].end());
        }
      }
      for (auto idx_det = 0; idx_det < this->unique_dets[idx_part][idx_spin].size(); idx_det++)
        std::sort(unique_singles[idx_part][idx_spin][idx_det].begin(), unique_singles[idx_part][idx_spin][idx_det].end());

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
          det += std::bitset<bit_kind_size>(i_detframe).to_string();
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
  if (det_idx >= this->N_dets) {
    APP_ABORT("det_idx_unfold called with value greater than the number of determinants");
  }
  auto base = this->unfolded_dets.begin() + det_idx * this->unfolded_stride;
  return std::vector<int>(base, base + this->unfolded_stride);
}

template <typename T> std::vector<T> POLYQUANT_DETSET<T>::get_det(int idx_part, int idx_spin, int i) const { return unique_dets[idx_part][idx_spin][i]; }
template <typename T> std::vector<T> POLYQUANT_DETSET<T>::get_det_withfcorbs(int idx_part, int idx_spin, int i) const {
  T one = 1;
  T zero = 0;
  auto det = unique_dets[idx_part][idx_spin][i];
  auto nfc = this->frozen_core[idx_part];
  std::vector<int> max_orb_with_fc(max_orb.size());
  for (auto local_idx_part = 0; local_idx_part < max_orb.size(); local_idx_part++) {
    max_orb_with_fc[local_idx_part] = max_orb[local_idx_part] + frozen_core[local_idx_part];
  }
  int maximum_orbital_across_all_parts = *std::max_element(max_orb_with_fc.begin(), max_orb_with_fc.end());
  if (nfc > 64) {
    APP_ABORT("Can't handle >=64 core orbitals");
  }
  T num_int = (maximum_orbital_across_all_parts >> bit_kind_shift) + one;

  if (nfc == 0) {
    if (num_int == det.size()) {
      return det;
    } else {
      std::vector<T> new_det;
      new_det.push_back(zero);
      new_det.insert(new_det.end(), det.begin(), det.end());
      return new_det;
    }
  }
  auto count = 0;
  // todo this has to change if T is ever not uint64_t
  std::vector<T> new_det;
  if (num_int != det.size()) {
    T j = 0;
    auto begin = bit_kind_size - nfc;
    auto end = bit_kind_size;
    T mask = (one << (end - begin)) - one;
    // set in this int
    j |= ((det[0] >> begin) & mask);
    new_det.push_back(j);
  }
  for (auto i : det) {
    // std::cout << "SHIV    ";
    // std::bitset<bit_kind_size> b(i);
    // std::cout << b << "         " << b.to_ulong() << "             ";
    // extract the bits from the next int that would get bumped over
    auto begin = bit_kind_size - nfc;
    auto end = bit_kind_size;
    T mask = (one << (end - begin)) - one;
    T j = i << nfc;
    // set in this int
    if (count + 1 != det.size()) {
      j |= ((det[count + 1] >> begin) & mask);
    }
    // pad with fc orbs
    // first we create a mask for nfc number of orbitals
    // and flip the mask
    if (count == det.size() - 1) {
      j |= ~(~(zero) & (~(one << nfc) + one));
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
