
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
  T one = 1;
  T zero = 0;
  for (auto i = 0; i < Di.size(); i++) {
    auto H = (Di[i] ^ Dj[i]) & Di[i];
    while (H != zero) {
      auto position = std::countr_zero(H);
      auto orb_idx = ((Di.size() - i - 1) * bit_kind_size) + position;
      holes.push_back(orb_idx);
      H &= ~(one << position);
    }
  }
  std::sort(holes.begin(), holes.end());
}

template <typename T> void POLYQUANT_DETSET<T>::get_parts(std::vector<T> &Di, std::vector<T> &Dj, std::vector<int> &parts) const {
  T one = 1;
  T zero = 0;
  for (auto i = 0; i < Di.size(); i++) {
    auto P = (Di[i] ^ Dj[i]) & Dj[i];
    while (P != zero) {
      auto position = std::countr_zero(P);
      auto orb_idx = ((Di.size() - i - 1) * bit_kind_size) + position;
      parts.push_back(orb_idx);
      P &= ~(one << position);
    }
  }
  std::sort(parts.begin(), parts.end());
}

template <typename T> double POLYQUANT_DETSET<T>::get_phase(std::vector<T> &Di, std::vector<T> &Dj, std::vector<int> &holes, std::vector<int> &parts) const {
  T nperm = 0;
  T one = 1;
  T zero = 0;
  std::vector<double> phase_list = {1.0, -1.0};
  // only applicable to uint64

  for (auto l = 0; l < holes.size(); l++) {
    // notice compared to qp2 we add 1 to low rather than subtracting from high because we store 0 indexed things in parts and holes
    // std::cout << " phase cal ";
    // std::cout << " holes[l] parts[l] " << holes[l] << " " << parts[l];
    T high = std::max(parts[l], holes[l]);
    T low = std::min(parts[l], holes[l]) + one;
    // std::cout << " high low " << high << " " << low;
    // what int are we in?
    T j = low >> bit_kind_shift;
    T k = high >> bit_kind_shift;
    // since we use a vector with the highest orbital on the right-most bit
    // we need to change j and k to be enumerating from the end of the list
    j = Di.size() - j - one;
    k = Di.size() - k - one;
    // std::cout << " j k  " << j << " " << k;
    // what bit in this int?
    T m = high & (bit_kind_size - one);
    T n = low & (bit_kind_size - one);
    // std::cout << " m n  " << m << " " << n;
    // std::cout << std::endl;

    if (j == k) {
      // create a mask for the space between high and low in the same int
      // T mask = (((1ul << m) - 1ul) & (~(1ul << n) + 1ul));
      // T bitstring = Di[j];
      // std::cout << "bitstring" << std::endl;
      // std::cout << bitstring << " " << std::bitset<64>(bitstring).to_string() << std::endl;
      // std::cout << "mask" << std::endl;
      // std::cout << mask << " " << std::bitset<64>(mask).to_string() << std::endl;
      nperm += std::popcount(Di[j] & (((one << m) - one) & (~(one << n) + one)));
    } else {
      // create a mask for the space between high and low in different ints
      // T mask = ((~(0ul) & (~(1ul << n) + 1ul)));
      // T bitstring = Di[j];
      nperm += std::popcount(Di[j] & ((~(zero) & (~(one << n) + one))));
      // std::cout << "bitstring" << std::endl;
      // std::cout << bitstring << " " << std::bitset<64>(bitstring).to_string() << std::endl;
      // std::cout << "mask" << std::endl;
      // std::cout << mask << " " << std::bitset<64>(mask).to_string() << std::endl;

      // mask = (((1ul << m) - 1ul));
      // bitstring = Di[k];
      // std::cout << "bitstring" << std::endl;
      // std::cout << bitstring << " " << std::bitset<64>(bitstring).to_string() << std::endl;
      // std::cout << "mask" << std::endl;
      // std::cout << mask << " " << std::bitset<64>(mask).to_string() << std::endl;
      nperm += std::popcount(Di[k] & (((one << m) - one)));
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
}

template <typename T> void POLYQUANT_DETSET<T>::get_occ_virt(int idx_part, std::vector<T> &D, std::vector<int> &occ, std::vector<int> &virt) const {
  for (auto i = 0; i < D.size(); i++) {
    std::bitset<bit_kind_size> D_bitset(D[i]);
    for (auto j = 0; j < D_bitset.size(); j++) {
      auto orb_idx = ((D.size() - i - 1) * bit_kind_size) + j;
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
