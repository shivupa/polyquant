
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
  return single_spin_num_excitation(Di.first, Dj.first) + single_spin_num_excitation(Di.second, Dj.second);
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
    // notice compared to qp2 we add 1 to low rather than subtracting from high because we store 0 indexed things in parts and holes
    T high = std::max(parts[l], holes[l]);
    T low = std::min(parts[l], holes[l])+1;
    // what int are we in?
    T j = low >> bit_kind_shift;
    T k = high >> bit_kind_shift;
    // since we use a vector with the highest orbital on the right-most bit
    // we need to change j and k to be enumerating from the end of the list
    j = Di.size() - j - 1;
    k = Di.size() - k - 1;
    // what bit in this int?
    T m = high & (bit_kind_size - 1);
    T n = low & (bit_kind_size - 1);

    if (j == k) {
        // create a mask for the space between high and low in the same int
      nperm += std::popcount(Di[j] & (((1 << m) - 1) & (~(1 << n) + 1)));
    } else {
        // create a mask for the space between high and low in different ints
      nperm += std::popcount(Di[j] & ((~(0) & (~(1 << n) + 1))));
      nperm += std::popcount(Di[k] & (((1 << m) - 1)));
      for (int i = k + 1; i < j; i++) {
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

template class POLYQUANT_DETSET<uint64_t>;
}; // namespace polyquant
