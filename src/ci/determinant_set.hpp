#ifndef POLYQUANT_DETSET_H
#define POLYQUANT_DETSET_H
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "molecule/quantum_particles.hpp"
#include <Eigen/Sparse>
#include <bit>
#include <bitset>
#include <combinations.hpp>
#include <inttypes.h>
#include <iostream>
#include <string>
#include <tuple>
#include <unordered_set>
#include <utility>

namespace polyquant {

// https://stackoverflow.com/a/29855973
template <typename T> struct PairVectorHash {
  size_t operator()(const std::pair<std::vector<T>, std::vector<T>> &v) const {
    std::hash<T> hasher;
    size_t seed = 0;
    for (T i : v.first) {
      seed ^= hasher(i) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    }
    for (T i : v.second) {
      seed ^= hasher(i) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    }
    return seed;
  }
};

template <typename T> class POLYQUANT_DETSET {
public:
  POLYQUANT_DETSET() = default;

  int num_excitation(std::pair<std::vector<T>, std::vector<T>> &Di,
                     std::pair<std::vector<T>, std::vector<T>> &Dj) const;
  void create_det(std::vector<std::vector<std::vector<int>>> &occ);
  std::vector<std::pair<std::vector<T>, std::vector<T>>>
  create_excitation(std::pair<std::vector<T>, std::vector<T>> det,
                    std::tuple<int, int, int> excitation_level);

  void get_holes(std::vector<T> &Di, std::vector<T> &Dj,
                 std::vector<int> &holes) const;
  void get_parts(std::vector<T> &Di, std::vector<T> &Dj,
                 std::vector<int> &parts) const;
  double get_phase(std::vector<T> &Di, std::vector<T> &Dj,
                   std::vector<int> &holes, std::vector<int> &parts) const;
  void get_occ_virt(std::vector<T> &D, std::vector<int> &occ,
                    std::vector<int> &virt) const;
  double same_part_ham_diag(int idx_part, std::vector<int> i_unfold,
                            std::vector<int> j_unfold) const;
  double same_part_ham_single(int idx_part, std::vector<int> i_unfold,
                              std::vector<int> j_unfold) const;
  double same_part_ham_double(int idx_part, std::vector<int> i_unfold,
                              std::vector<int> j_unfold) const;

  std::pair<std::vector<T>, std::vector<T>> get_det(int idx_part, int i) const;
  void print_determinants();
  /**
   * @brief determinant set (number of quantum particles, alpha/beta, det num
   * bitstrings)
   *
   */
  std::vector<std::unordered_set<std::pair<std::vector<T>, std::vector<T>>,
                                 PairVectorHash<T>>>
      dets;
  int max_orb;
  POLYQUANT_INTEGRAL input_integral;

  void set_integral(POLYQUANT_INTEGRAL &integral) {
    this->input_integral = integral;
  };

  double Slater_Condon(int i_det, int j_det) const;
  // for diagonalization stuff
  using Scalar = double; // A typedef named "Scalar" is required
  int rows() const {
    const int rows = this->N_dets;
    return rows;
  }
  int cols() const {
    const int cols = this->N_dets;
    return cols;
  }
  int N_dets;
  // y_out = M * x_in
  Eigen::SparseMatrix<double> ham;
  void perform_op(const double *x_in, double *y_out) const;
  void create_ham();
  std::vector<int> det_idx_unfold(std::size_t det_idx) const;
};

template <typename T>
int POLYQUANT_DETSET<T>::num_excitation(
    std::pair<std::vector<T>, std::vector<T>> &Di,
    std::pair<std::vector<T>, std::vector<T>> &Dj) const {
  int excitation_degree = 0;
  for (auto i = 0; i < Di.first.size(); i++) {
    excitation_degree += std::popcount(Di.first[i] ^ Dj.first[i]);
    excitation_degree += std::popcount(Di.second[i] ^ Dj.second[i]);
  }
  return excitation_degree / 2;
}
template <typename T>
void POLYQUANT_DETSET<T>::create_det(
    std::vector<std::vector<std::vector<int>>> &occ) {
  dets.resize(occ.size());
  for (auto i_part = 0; i_part < occ.size(); i_part++) {
    std::string alpha_bit_string, beta_bit_string;
    alpha_bit_string.resize(max_orb, '0');
    beta_bit_string.resize(max_orb, '0');
    for (auto i_occ : occ[i_part][0]) {
      alpha_bit_string[i_occ] = '1';
    }
    for (auto i_occ : occ[i_part][1]) {
      beta_bit_string[i_occ] = '1';
    }
    Polyquant_cout("Creating det " + alpha_bit_string + " " + beta_bit_string);
    std::reverse(alpha_bit_string.begin(), alpha_bit_string.end());
    std::reverse(beta_bit_string.begin(), beta_bit_string.end());
    std::vector<T> alpha_det;
    std::vector<T> beta_det;
    for (auto i = 0ul; i < alpha_bit_string.length(); i += 64) {
      alpha_det.push_back(std::stoull(alpha_bit_string.substr(i, 64), 0, 2));
      beta_det.push_back(std::stoull(beta_bit_string.substr(i, 64), 0, 2));
    }
    std::pair<std::vector<T>, std::vector<T>> det = {alpha_det, beta_det};
    dets[i_part].insert(det);
  }
}
template <typename T>
std::vector<std::pair<std::vector<T>, std::vector<T>>>
POLYQUANT_DETSET<T>::create_excitation(
    std::pair<std::vector<T>, std::vector<T>> det,
    std::tuple<int, int, int> excitation_level) {
  std::vector<std::pair<std::vector<T>, std::vector<T>>> created_dets;
  std::vector<std::vector<T>> created_dets_alpha, created_dets_beta;
  created_dets.push_back(det);
  created_dets_alpha.push_back(std::get<0>(det));
  created_dets_beta.push_back(std::get<1>(det));
  std::vector<int> occ, virt;
  auto alpha_ex_lvl = std::get<0>(excitation_level);
  auto beta_ex_lvl = std::get<1>(excitation_level);
  auto total_ex_lvl = std::get<2>(excitation_level);
  std::cout << alpha_ex_lvl << " " << beta_ex_lvl << " " << total_ex_lvl
            << std::endl;
  if (alpha_ex_lvl + beta_ex_lvl > total_ex_lvl) {
    return created_dets;
  }
  // alpha
  occ.clear();
  virt.clear();
  this->get_occ_virt(det.first, occ, virt);
  if (alpha_ex_lvl > virt.size()) {
    APP_ABORT("Alpha Excitation level exceeds virtual size!");
  }
  for (auto &&iocc : iter::combinations(occ, alpha_ex_lvl)) {
    for (auto &&ivirt : iter::combinations(virt, alpha_ex_lvl)) {
      std::vector<T> temp_det(std::get<0>(det));
      // https://stackoverflow.com/a/47990
      for (auto &occbit : iocc) {
        temp_det[occbit / 64ul] &= ~(1UL << (occbit % 64ul));
      }
      for (auto &virtbit : ivirt) {
        temp_det[virtbit / 64ul] |= 1UL << (virtbit % 64ul);
      }
      created_dets_alpha.push_back(temp_det);
    }
  }
  // beta
  occ.clear();
  virt.clear();
  this->get_occ_virt(det.second, occ, virt);
  if (beta_ex_lvl > virt.size()) {
    APP_ABORT("Beta excitation level exceeds virtual size!");
  }
  for (auto &&iocc : iter::combinations(occ, beta_ex_lvl)) {
    for (auto &&ivirt : iter::combinations(virt, beta_ex_lvl)) {
      std::vector<T> temp_det(std::get<1>(det));
      // https://stackoverflow.com/a/47990
      for (auto &occbit : iocc) {
        temp_det[occbit / 64ul] &= ~(1UL << (occbit % 64ul));
      }
      for (auto &virtbit : ivirt) {
        temp_det[virtbit / 64ul] |= 1UL << (virtbit % 64ul);
      }
      created_dets_beta.push_back(temp_det);
    }
  }
  for (auto i : created_dets_alpha) {
    for (auto j : created_dets_beta) {
      std::pair<std::vector<T>, std::vector<T>> temp_det(i, j);
      created_dets.push_back(temp_det);
    }
  }
  return created_dets;
}

template <typename T>
void POLYQUANT_DETSET<T>::get_holes(std::vector<T> &Di, std::vector<T> &Dj,
                                    std::vector<int> &holes) const {
  for (auto i = 0; i < Di.size(); i++) {
    auto H = (Di[i] ^ Dj[i]) & Di[i];
    while (H != 0) {
      auto position = std::countr_zero(H);
      holes.push_back((64 * i) + position);
      H &= ~(1UL << position);
    }
  }
}
template <typename T>
void POLYQUANT_DETSET<T>::get_parts(std::vector<T> &Di, std::vector<T> &Dj,
                                    std::vector<int> &parts) const {
  for (auto i = 0; i < Di.size(); i++) {
    auto P = (Di[i] ^ Dj[i]) & Dj[i];
    while (P != 0) {
      auto position = std::countr_zero(P);
      parts.push_back((64 * i) + position);
      P &= ~(1UL << position);
    }
  }
}
template <typename T>
double POLYQUANT_DETSET<T>::get_phase(std::vector<T> &Di, std::vector<T> &Dj,
                                      std::vector<int> &holes,
                                      std::vector<int> &parts) const {
  T nperm = 0;
  std::vector<T> mask;
  mask.resize(Di.size());
  std::fill(mask.begin(), mask.end(), 0);
  for (auto i = 0; i < holes.size(); i++) {
    T high = std::max(parts[i], holes[i]);
    T low = std::min(parts[i], holes[i]);
    T k = high / 64;
    T m = high % 64;
    T j = low / 64;
    T n = low % 64;
    for (auto l = j; l < k; l++) {
      mask[l] = ~(0ul);
    }
    mask[k] = (1UL << m) - 1;
    mask[j] = mask[j] & (~(1ul << (n + 1) + 1));
    for (auto l = j; j < k; l++) {
      nperm = nperm + std::popcount(Di[j] & mask[l]);
    }
  }
  if ((holes.size() == 2) && (holes[1] < parts[0] || holes[0] > parts[1])) {
    nperm++;
  }
  return std::pow(-1.0, nperm);
}

template <typename T>
void POLYQUANT_DETSET<T>::get_occ_virt(std::vector<T> &D, std::vector<int> &occ,
                                       std::vector<int> &virt) const {
  for (auto i = 0; i < D.size(); i++) {
    std::bitset<64> D_bitset(D[i]);
    for (auto j = 0; j < D_bitset.size(); j++) {
      if ((i * 64) + j >= this->max_orb) {
        break;
      }
      if (D_bitset[j] == 1) {
        occ.push_back(j);
      } else {
        virt.push_back(j);
      }
    }
  }
}
template <typename T> void POLYQUANT_DETSET<T>::print_determinants() {
  Polyquant_cout("Printing Determinants");
  for (auto i_part = 0; i_part < dets.size(); i_part++) {
    Polyquant_cout("Particle " + std::to_string(i_part));
    auto idet_idx = 0;
    for (auto i_det : dets[i_part]) {
      std::stringstream ss;
      ss << std::setw(10) << idet_idx;
      ss << "    ";
      std::string det;
      for (auto i_detframe : i_det.first) {
        det += std::bitset<64>(i_detframe).to_string();
        det += " ";
      }
      std::reverse(det.begin(), det.end());
      ss << det;
      ss << "    ";
      det = "";
      for (auto i_detframe : i_det.second) {
        det += std::bitset<64>(i_detframe).to_string();
        det += " ";
      }
      std::reverse(det.begin(), det.end());
      ss << det;
      ss << "    ";
      Polyquant_cout(ss.str());
      idet_idx++;
    }
  }
}

// Polyquant_cout("Det num to idx");
// for (auto i = 0ul; i < this->N_dets; i++) {
//  auto idxs = this->det_idx_unfold(i);
//  std::stringstream ss;
//  ss << " Det idx:" << i << "     ";
//  for (auto j : idxs) {
//    for (auto k : j) {
//      ss << k << " ";
//    }
//  }
//  Polyquant_cout(ss.str());
//}

template <typename T>
std::vector<int>
POLYQUANT_DETSET<T>::det_idx_unfold(std::size_t det_idx) const {
  std::vector<int> unfolded_idx;
  auto running_size = 1ul;
  for (auto i_part = dets.size(); i_part > 0; i_part--) {
    running_size *= dets[i_part - 1].size();
    unfolded_idx.push_back(det_idx % running_size);
    det_idx /= running_size;
  }
  std::reverse(unfolded_idx.begin(), unfolded_idx.end());
  return unfolded_idx;
}

template <typename T>
std::pair<std::vector<T>, std::vector<T>>
POLYQUANT_DETSET<T>::get_det(int idx_part, int i) const {
  auto it = this->dets[idx_part].begin();
  std::advance(it, i);
  return *it;
}

template <typename T>
double
POLYQUANT_DETSET<T>::same_part_ham_diag(int idx_part, std::vector<int> i_unfold,
                                        std::vector<int> j_unfold) const {
  auto det_i = this->get_det(idx_part, i_unfold[idx_part]);
  auto det_j = this->get_det(idx_part, j_unfold[idx_part]);
  auto det_i_a = det_i.first;
  auto det_i_b = det_i.second;
  auto det_j_a = det_j.first;
  auto det_j_b = det_j.second;

  auto alpha_spin_idx = 0;
  auto beta_spin_idx =
      1 % this->input_integral.mo_one_body_ints[idx_part].size();

  std::vector<int> aocc, avirt;
  this->get_occ_virt(det_i_a, aocc, avirt);

  std::vector<int> bocc, bvirt;
  this->get_occ_virt(det_i_b, bocc, bvirt);

  double elem = 0.0;
  for (auto orb_a_i : aocc) {
    elem += this->input_integral.mo_one_body_ints[idx_part][alpha_spin_idx](
        orb_a_i, orb_a_i);
  }
  for (auto orb_b_i : bocc) {
    elem += this->input_integral.mo_one_body_ints[idx_part][beta_spin_idx](
        orb_b_i, orb_b_i);
  }
  for (auto orb_a_i : aocc) {
    for (auto orb_a_j : aocc) {
      elem += 0.5 * (this->input_integral.mo_two_body_ints
                         [idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](
                             this->input_integral.idx2(orb_a_i, orb_a_i),
                             this->input_integral.idx2(orb_a_j, orb_a_j)));
      elem -= 0.5 * (this->input_integral.mo_two_body_ints
                         [idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](
                             this->input_integral.idx2(orb_a_i, orb_a_j),
                             this->input_integral.idx2(orb_a_j, orb_a_i)));
    }
    for (auto orb_b_j : bocc) {
      elem +=
          this->input_integral
              .mo_two_body_ints[idx_part][alpha_spin_idx][idx_part]
                               [beta_spin_idx](
                                   this->input_integral.idx2(orb_a_i, orb_a_i),
                                   this->input_integral.idx2(orb_b_j, orb_b_j));
    }
  }
  for (auto orb_b_i : bocc) {
    for (auto orb_b_j : bocc) {
      elem += 0.5 * (this->input_integral.mo_two_body_ints
                         [idx_part][beta_spin_idx][idx_part][beta_spin_idx](
                             this->input_integral.idx2(orb_b_i, orb_b_i),
                             this->input_integral.idx2(orb_b_j, orb_b_j)));
      elem -= 0.5 * (this->input_integral.mo_two_body_ints
                         [idx_part][beta_spin_idx][idx_part][beta_spin_idx](
                             this->input_integral.idx2(orb_b_i, orb_b_j),
                             this->input_integral.idx2(orb_b_j, orb_b_i)));
    }
  }
  return elem;
}

template <typename T>
double POLYQUANT_DETSET<T>::same_part_ham_single(
    int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto det_i = this->get_det(idx_part, i_unfold[idx_part]);
  auto det_j = this->get_det(idx_part, j_unfold[idx_part]);
  auto det_i_a = det_i.first;
  auto det_i_b = det_i.second;
  auto det_j_a = det_j.first;
  auto det_j_b = det_j.second;
  auto alpha_spin_idx = 0;
  auto beta_spin_idx =
      1 % this->input_integral.mo_one_body_ints[idx_part].size();

  // spin = 0 alpha excitation, spin = 1 beta excitation
  auto spin = 0;
  if (det_i_a == det_j_a) {
    spin = 1;
  }

  std::vector<int> aocc, avirt;
  std::vector<int> bocc, bvirt;
  this->get_occ_virt(det_i_a, aocc, avirt);
  this->get_occ_virt(det_i_b, bocc, bvirt);

  // get hole
  // get part
  std::vector<int> holes, parts;
  double phase = 1.0;
  if (spin == 0) {
    get_holes(det_i_a, det_j_a, holes);
    get_parts(det_i_a, det_j_a, parts);
    phase = get_phase(det_i_a, det_j_a, holes, parts);
    elem += this->input_integral.mo_one_body_ints[idx_part][alpha_spin_idx](
        parts[0], holes[0]);
    for (auto orb_a_i : aocc) {
      elem +=
          this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx]
                                               [idx_part][alpha_spin_idx](
                                                   this->input_integral.idx2(
                                                       parts[0], holes[0]),
                                                   this->input_integral.idx2(
                                                       orb_a_i, orb_a_i));
      elem -=
          this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx]
                                               [idx_part][alpha_spin_idx](
                                                   this->input_integral.idx2(
                                                       parts[0], orb_a_i),
                                                   this->input_integral.idx2(
                                                       orb_a_i, holes[0]));
    }
    for (auto orb_b_i : bocc) {
      elem +=
          this->input_integral.mo_two_body_ints[idx_part][beta_spin_idx]
                                               [idx_part][beta_spin_idx](
                                                   this->input_integral.idx2(
                                                       parts[0], holes[0]),
                                                   this->input_integral.idx2(
                                                       orb_b_i, orb_b_i));
    }
  } else {
    get_holes(det_i_b, det_j_b, holes);
    get_parts(det_i_b, det_j_b, parts);
    phase = get_phase(det_i_b, det_j_b, holes, parts);
    elem += this->input_integral.mo_one_body_ints[idx_part][beta_spin_idx](
        parts[0], holes[0]);
    for (auto orb_b_i : bocc) {
      elem +=
          this->input_integral.mo_two_body_ints[idx_part][beta_spin_idx]
                                               [idx_part][beta_spin_idx](
                                                   this->input_integral.idx2(
                                                       parts[0], holes[0]),
                                                   this->input_integral.idx2(
                                                       orb_b_i, orb_b_i));
      elem -=
          this->input_integral.mo_two_body_ints[idx_part][beta_spin_idx]
                                               [idx_part][beta_spin_idx](
                                                   this->input_integral.idx2(
                                                       parts[0], orb_b_i),
                                                   this->input_integral.idx2(
                                                       orb_b_i, holes[0]));
    }
    for (auto orb_a_i : aocc) {
      elem +=
          this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx]
                                               [idx_part][alpha_spin_idx](
                                                   this->input_integral.idx2(
                                                       parts[0], holes[0]),
                                                   this->input_integral.idx2(
                                                       orb_a_i, orb_a_i));
    }
  }
  elem *= phase;
  return elem;
}

template <typename T>
double POLYQUANT_DETSET<T>::same_part_ham_double(
    int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto det_i = this->get_det(idx_part, i_unfold[idx_part]);
  auto det_j = this->get_det(idx_part, j_unfold[idx_part]);
  auto det_i_a = det_i.first;
  auto det_i_b = det_i.second;
  auto det_j_a = det_j.first;
  auto det_j_b = det_j.second;
  auto alpha_spin_idx = 0;
  auto beta_spin_idx =
      1 % this->input_integral.mo_one_body_ints[idx_part].size();

  // spin = -1 mixed, spin = 0 alpha excitation, spin = 1 beta excitation
  if (det_i_a == det_j_a) {
    std::vector<int> holes, parts;
    double phase = 1.0;
    get_holes(det_i_b, det_j_b, holes);
    get_parts(det_i_b, det_j_b, parts);
    phase = get_phase(det_i_b, det_j_b, holes, parts);
    elem += this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx]
                                                 [idx_part][alpha_spin_idx](
                                                     this->input_integral.idx2(
                                                         parts[0], holes[0]),
                                                     this->input_integral.idx2(
                                                         parts[1], holes[1]));
    elem -= this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx]
                                                 [idx_part][alpha_spin_idx](
                                                     this->input_integral.idx2(
                                                         parts[0], holes[1]),
                                                     this->input_integral.idx2(
                                                         parts[1], holes[0]));
    elem *= phase;
  } else if (det_i_b == det_j_b) {
    std::vector<int> holes, parts;
    double phase = 1.0;
    get_holes(det_i_a, det_j_a, holes);
    get_parts(det_i_a, det_j_a, parts);
    phase = get_phase(det_i_a, det_j_a, holes, parts);
    elem +=
        this->input_integral
            .mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](
                this->input_integral.idx2(parts[0], holes[0]),
                this->input_integral.idx2(parts[1], holes[1]));
    elem -=
        this->input_integral
            .mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](
                this->input_integral.idx2(parts[0], holes[1]),
                this->input_integral.idx2(parts[1], holes[0]));
    elem *= phase;
  } else {
    std::vector<int> aholes, aparts;
    std::vector<int> bholes, bparts;
    double phase = 1.0;
    get_holes(det_i_a, det_j_a, aholes);
    get_parts(det_i_a, det_j_a, aparts);
    get_holes(det_i_b, det_j_b, bholes);
    get_parts(det_i_b, det_j_b, bparts);
    phase *= get_phase(det_i_a, det_j_a, aholes, aparts);
    phase *= get_phase(det_i_b, det_j_b, bholes, bparts);
    elem += this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx]
                                                 [idx_part][beta_spin_idx](
                                                     this->input_integral.idx2(
                                                         aparts[0], aholes[0]),
                                                     this->input_integral.idx2(
                                                         bparts[0], bholes[0]));
    elem *= phase;
  }
  return elem;
}

template <typename T>
double POLYQUANT_DETSET<T>::Slater_Condon(int i_det, int j_det) const {
  double matrix_elem = 0.0;
  auto i_unfold = det_idx_unfold(i_det);
  auto j_unfold = det_idx_unfold(j_det);
  std::vector<bool> iequalj;
  // todo condense this
  for (auto idx_part = 0; idx_part < dets.size(); idx_part++) {
    iequalj.push_back(i_unfold[idx_part] == j_unfold[idx_part]);
  }
  for (auto idx_part = 0; idx_part < dets.size(); idx_part++) {
    std::vector<bool> iequalj_otherparts(iequalj.begin(), iequalj.end());
    iequalj_otherparts.erase(iequalj_otherparts.begin() + idx_part);
    if (std::find(iequalj_otherparts.begin(), iequalj_otherparts.end(),
                  false) == iequalj_otherparts.end()) {
      auto excitation_level = 0;
      auto det_i = this->get_det(idx_part, i_unfold[idx_part]);
      auto det_j = this->get_det(idx_part, j_unfold[idx_part]);
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
    /*
    for (auto other_idx_part = 0; other_idx_part < dets.size();
    other_idx_part++) { if (idx_part == other_idx_part){ continue;
        }
        // loop over other particles
       // if all other particle dets j,k,l etc are equal then add the particle i
    j std::vector<bool> iequalj_otherparts(iequalj.begin(), iequalj.end());
       iequalj_otherparts.erase(iequalj_otherparts.begin() + idx_part);
       iequalj_otherparts.erase(iequalj_otherparts.begin() + other_idx_part);
       if (std::find(iequalj_otherparts.begin(), iequalj_otherparts.end(),
                     false) == iequalj_otherparts.end()) {
         auto excitation_level = 0;
           auto part_i_det_i = this->get_det(idx_part,  i_unfold[idx_part]);
           auto part_i_det_j = this->get_det(idx_part,  j_unfold[idx_part]);
           auto part_j_det_i = this->get_det(other_idx_part,
    i_unfold[idx_part]); auto part_j_det_j = this->get_det(other_idx_part,
    j_unfold[other_idx_part]); excitation_level +=
    this->num_excitation(part_i_det_i, part_i_det_j); excitation_level +=
    this->num_excitation(part_j_det_i, part_j_det_j);

         if (excitation_level == 0) {
           // do 1+2 body
           matrix_elem += this->mixed_part_ham_diag(idx_part, i_unfold,
    j_unfold); } else if (excitation_level == 1) {
           // do 1+2 body
           matrix_elem += this->mixed_part_ham_single(idx_part, i_unfold,
    j_unfold); } else if (excitation_level == 2) {
           // do 2 body
           matrix_elem += this->mixed_part_ham_double(idx_part, i_unfold,
    j_unfold);
         }
       }
    }
  */
  }
  return matrix_elem;
}

// figure out how to use a matrix op rather than matrix
template <typename T>
void POLYQUANT_DETSET<T>::perform_op(const double *x_in, double *y_out) const {
  // Polyquant_cout("Performing M*v operation");
  for (auto i_det = 0; i_det < this->N_dets; i_det++) {
    auto matrix_elem = 0.0;
    // reduction(+ : matrix_elem)
#pragma omp parallel for reduction(+ : matrix_elem)
    for (auto j_det = 0; j_det < this->N_dets; j_det++) {
      // std::cout << x_in[j_det] << " " << this->Slater_Condon(i_det, j_det) <<
      // " " << i_det << " " << j_det << std::endl;
      matrix_elem += x_in[j_det] * this->Slater_Condon(j_det, i_det);
    }
    y_out[i_det] = matrix_elem;
  }
  // auto det_idx = 0ul;
  // for (auto i_part = 0; i_part < dets.size(); i_part++) {
  //  for (auto i_spin = 0; i_spin < dets[i_part].size(); i_spin++) {
  //      dets[i_part][i_spin].size()
}

template <typename T> void POLYQUANT_DETSET<T>::create_ham() {
  this->ham.conservativeResize(this->N_dets, this->N_dets);
  std::vector<Eigen::Triplet<double>> tripletList;
  for (auto i_det = 0; i_det < this->N_dets; i_det++) {
    for (auto j_det = i_det; j_det < this->N_dets; j_det++) {
      auto matrix_element = this->Slater_Condon(i_det, j_det);
      tripletList.push_back(
          Eigen::Triplet<double>(i_det, j_det, matrix_element));
      if (i_det != j_det) {
        tripletList.push_back(
            Eigen::Triplet<double>(j_det, i_det, matrix_element));
      }
    }
  }
  this->ham.setFromTriplets(tripletList.begin(), tripletList.end());
}

// template <typename T>
// std::vector<int> POLYQUANT_DETSET<T>::get_holes(std::vector<T> &Di,
//                                           std::vector<T> &Dj) {}
// template <typename T>
// std::vector<int> POLYQUANT_DETSET<T>::get_parts(std::vector<T> &Di,
//                                           std::vector<T> &Dj) {}
} // namespace polyquant
#endif
