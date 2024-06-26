
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
    for (auto idx : unique_doubles[idx_part][idx_spin][idx_det]) {
      return_idx_list.insert(idx);
    }
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
