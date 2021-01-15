#ifndef POLYQUANT_DETSET_H
#define POLYQUANT_DETSET_H
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "molecule/quantum_particles.hpp"
#include <bit>
#include <combinations.hpp>
#include <inttypes.h>
#include <iostream>
#include <string>

namespace polyquant {
template <typename T> class POLYQUANT_DETSET {
public:
  POLYQUANT_DETSET() = default;
  int det_idx(std::vector<int> idx);

  int num_excitation(std::vector<std::vector<T>> &Di,
                     std::vector<std::vector<T>> &Dj);
  void create_det(std::vector<std::vector<std::vector<int>>> &occ);
  std::vector<T> create_excitation(T &det, int excitation_level);

  // std::vector<int> get_holes(std::vector<T> &Di, std::vector<T> &Dj);
  // std::vector<int> get_parts(std::vector<T> &Di, std::vector<T> &Dj);
  void get_occ_virt(T &D, std::vector<int> &occ, std::vector<int> &virt);

  /**
   * @brief determinant set (number of quantum particles, alpha/beta,
   * bitstrings)
   *
   */
  std::vector<std::vector<std::vector<T>>> dets;
  int max_orb;

  // for diagonalization stuff
  int rows() { return this->N_dets; }
  int cols() { return this->N_dets; }
  int N_dets;
  // y_out = M * x_in
  void perform_op(const double *x_in, double *y_out){};
};
template <typename T>
int POLYQUANT_DETSET<T>::num_excitation(std::vector<std::vector<T>> &Di,
                                        std::vector<std::vector<T>> &Dj) {
  int excitation_degree = 0;
  for (auto spin = 0; spin < 2; spin++) {
    auto i_spin_idx = spin % Di.size();
    auto j_spin_idx = spin % Dj.size();
    for (auto i = 0; i < Di[i_spin_idx].size(); i++) {
      excitation_degree += std::popcount(Di[i_spin_idx][i] ^ Dj[j_spin_idx][i]);
    }
  }
  return excitation_degree / 2;
}
template <typename T>
void POLYQUANT_DETSET<T>::create_det(
    std::vector<std::vector<std::vector<int>>> &occ) {
  dets.resize(occ.size());
  for (auto i_part = 0; i_part < occ.size(); i_part++) {
    dets[i_part].resize(occ[i_part].size());
    Polyquant_cout(occ.size());
    Polyquant_cout(occ[i_part].size());
    for (auto i_spin = 0; i_spin < occ[i_part].size(); i_spin++) {
      std::string bit_string;
      bit_string.resize(max_orb, '0');
      for (auto i_occ : occ[i_part][i_spin]) {
        Polyquant_cout(i_occ);
        bit_string[i_occ] = '1';
      }

      Polyquant_cout("Creating det " + bit_string);

      std::reverse(bit_string.begin(), bit_string.end());
      dets[i_part][i_spin].push_back(std::stoull(bit_string, 0, 2));
    }
  }
}
template <typename T>
std::vector<T> POLYQUANT_DETSET<T>::create_excitation(T &det,
                                                      int excitation_level) {
  std::vector<T> created_dets;
  std::vector<int> occ, virt;
  this->get_occ_virt(det, occ, virt);

  if (excitation_level > virt.size()) {
    APP_ABORT("Excitation level exceeds virtual size!");
  }
  for (auto &&iocc : iter::combinations(occ, excitation_level)) {
    for (auto &&ivirt : iter::combinations(virt, excitation_level)) {
      T temp_det(det);
      // https://stackoverflow.com/a/47990
      for (auto &occbit : iocc) {
        temp_det |= 1UL << occbit;
      }
      for (auto &virtbit : ivirt) {
        temp_det &= ~(1UL << virtbit);
      }
      created_dets.push_back(temp_det);
    }
  }
  return created_dets;
}
template <typename T>
void POLYQUANT_DETSET<T>::get_occ_virt(T &D, std::vector<int> &occ,
                                       std::vector<int> &virt) {
  for (auto i = 0; i < sizeof(T) * 8; i++) {
    auto bit = (D >> i) & 1U;
    if (bit == 1) {
      occ.push_back(i);
    } else {
      virt.push_back(i);
    }
  }
}
// template <typename T>
// std::vector<int> POLYQUANT_DETSET<T>::get_holes(std::vector<T> &Di,
//                                           std::vector<T> &Dj) {}
// template <typename T>
// std::vector<int> POLYQUANT_DETSET<T>::get_parts(std::vector<T> &Di,
//                                           std::vector<T> &Dj) {}
} // namespace polyquant
#endif
