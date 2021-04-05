#ifndef POLYQUANT_DETSET_H
#define POLYQUANT_DETSET_H
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "molecule/quantum_particles.hpp"
#include <Eigen/Dense>
#include <Eigen/Sparse>
#include <bit>
#include <bitset>
#include <cache.hpp>
#include <combinations.hpp>
#include <inttypes.h>
#include <iostream>
#include <lfu_cache_policy.hpp>
#include <string>
#include <tuple>
#include <unordered_set>
#include <utility>

namespace polyquant {

template <typename T> class POLYQUANT_DETSET {
public:
  POLYQUANT_DETSET() { this->construct_cache(); }
  POLYQUANT_DETSET(size_t size_in_obj) { this->construct_cache(size_in_gb); }

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
  double mixed_part_ham_diag(int idx_part, int other_idx_part,
                             std::vector<int> i_unfold,
                             std::vector<int> j_unfold) const;
  double mixed_part_ham_single(int idx_part, int other_idx_part,
                               std::vector<int> i_unfold,
                               std::vector<int> j_unfold) const;
  double mixed_part_ham_double(int idx_part, int other_idx_part,
                               std::vector<int> i_unfold,
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

  void construct_cache(size_t size_in_gb = 8) {
    std::string message = "Setting CI determinant elements cache size: ";
    message += std::to_string(size_in_gb);
    message += " GB";
    std::pair<int, int> temp(0, 0);
    this->cache_size = (size_in_gb * 1e9) / sizeof(temp);
    message += " or ";
    message += std::to_string(this->cache_size);
    message += " objects";
    Polyquant_cout(message);
    caches::fixed_sized_cache<int, double, caches::LFUCachePolicy<int>>
        contructed_cache(this->cache_size);
    this->cache = std::make_unique<
        caches::fixed_sized_cache<int, double, caches::LFUCachePolicy<int>>>(
        contructed_cache);
  }
  size_t cache_size;
  caches::fixed_sized_cache<int, double, caches::LFUCachePolicy<int>> cache;

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
  // Eigen::SparseMatrix<double> ham;
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> ham;
  void perform_op(const double *x_in, double *y_out) const;
  // needed for custom operator in Davidson
  double operator()(int i, int j) const { return this->Slater_Condon(i, j); }
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> operator*(
      const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic,
                                           Eigen::Dynamic>> &mat_in) const {
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> output;
    output.resize(this->rows(), mat_in.cols());
    output.setZero();
    // Cij = Aik Bkj
    for (auto i = 0; i < this->N_dets; i++) {
      for (auto j = 0; j < mat_in.cols(); j++) {
        auto reduced_val = 0.0;
#pragma omp parallel for reduction(+ : reduced_val)
        for (auto k = 0; k < this->N_dets; k++) {
          reduced_val += this->Slater_Condon(i, k) * mat_in(k, j);
        }
        output(i, j) = reduced_val;
      }
    }
    return output;
  }
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
double
POLYQUANT_DETSET<T>::mixed_part_ham_diag(int idx_part, int other_idx_part,
                                         std::vector<int> i_unfold,
                                         std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto idx_part_det_i = this->get_det(idx_part, i_unfold[idx_part]);
  auto idx_part_det_j = this->get_det(idx_part, j_unfold[idx_part]);
  auto idx_part_det_i_a = idx_part_det_i.first;
  auto idx_part_det_i_b = idx_part_det_i.second;
  auto idx_part_det_j_a = idx_part_det_j.first;
  auto idx_part_det_j_b = idx_part_det_j.second;
  auto other_idx_part_det_i =
      this->get_det(other_idx_part, i_unfold[other_idx_part]);
  auto other_idx_part_det_j =
      this->get_det(other_idx_part, j_unfold[other_idx_part]);
  auto other_idx_part_det_i_a = other_idx_part_det_i.first;
  auto other_idx_part_det_i_b = other_idx_part_det_i.second;
  auto other_idx_part_det_j_a = other_idx_part_det_j.first;
  auto other_idx_part_det_j_b = other_idx_part_det_j.second;
  auto idx_part_alpha_spin_idx = 0;
  auto idx_part_beta_spin_idx =
      1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto other_idx_part_alpha_spin_idx = 0;
  auto other_idx_part_beta_spin_idx =
      1 % this->input_integral.mo_one_body_ints[other_idx_part].size();

  std::vector<int> other_idx_part_aocc, other_idx_part_avirt;
  std::vector<int> other_idx_part_bocc, other_idx_part_bvirt;
  std::vector<int> idx_part_aocc, idx_part_avirt;
  std::vector<int> idx_part_bocc, idx_part_bvirt;
  this->get_occ_virt(other_idx_part_det_i_a, other_idx_part_aocc,
                     other_idx_part_avirt);
  this->get_occ_virt(other_idx_part_det_i_b, other_idx_part_bocc,
                     other_idx_part_bvirt);
  this->get_occ_virt(idx_part_det_i_a, idx_part_aocc, idx_part_avirt);
  this->get_occ_virt(idx_part_det_i_b, idx_part_bocc, idx_part_bvirt);

  for (auto orb_a_i : idx_part_aocc) {
    for (auto orb_a_j : other_idx_part_aocc) {
      if (other_idx_part < idx_part) {
        elem +=
            this->input_integral
                .mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx]
                                 [idx_part][idx_part_alpha_spin_idx](
                                     this->input_integral.idx2(orb_a_j,
                                                               orb_a_j),
                                     this->input_integral.idx2(orb_a_i,
                                                               orb_a_i));
      } else {
        elem += this->input_integral.mo_two_body_ints
                    [idx_part][idx_part_alpha_spin_idx][other_idx_part]
                    [other_idx_part_alpha_spin_idx](
                        this->input_integral.idx2(orb_a_i, orb_a_i),
                        this->input_integral.idx2(orb_a_j, orb_a_j));
      }
    }
    for (auto orb_b_j : other_idx_part_bocc) {
      if (other_idx_part < idx_part) {
        elem +=
            this->input_integral
                .mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx]
                                 [idx_part][idx_part_alpha_spin_idx](
                                     this->input_integral.idx2(orb_b_j,
                                                               orb_b_j),
                                     this->input_integral.idx2(orb_a_i,
                                                               orb_a_i));
      } else {
        elem +=
            this->input_integral
                .mo_two_body_ints[idx_part][idx_part_alpha_spin_idx]
                                 [other_idx_part][other_idx_part_beta_spin_idx](
                                     this->input_integral.idx2(orb_a_i,
                                                               orb_a_i),
                                     this->input_integral.idx2(orb_b_j,
                                                               orb_b_j));
      }
    }
  }
  for (auto orb_b_i : idx_part_bocc) {
    for (auto orb_a_j : other_idx_part_aocc) {
      if (other_idx_part < idx_part) {
        elem +=
            this->input_integral
                .mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx]
                                 [idx_part][idx_part_beta_spin_idx](
                                     this->input_integral.idx2(orb_a_j,
                                                               orb_a_j),
                                     this->input_integral.idx2(orb_b_i,
                                                               orb_b_i));
      } else {
        elem += this->input_integral.mo_two_body_ints
                    [idx_part][idx_part_beta_spin_idx][other_idx_part]
                    [other_idx_part_alpha_spin_idx](
                        this->input_integral.idx2(orb_b_i, orb_b_i),
                        this->input_integral.idx2(orb_a_j, orb_a_j));
      }
    }
    for (auto orb_b_j : other_idx_part_bocc) {
      if (other_idx_part < idx_part) {
        elem +=
            this->input_integral
                .mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx]
                                 [idx_part][idx_part_beta_spin_idx](
                                     this->input_integral.idx2(orb_b_j,
                                                               orb_b_j),
                                     this->input_integral.idx2(orb_b_i,
                                                               orb_b_i));
      } else {
        elem +=
            this->input_integral
                .mo_two_body_ints[idx_part][idx_part_beta_spin_idx]
                                 [other_idx_part][other_idx_part_beta_spin_idx](
                                     this->input_integral.idx2(orb_b_i,
                                                               orb_b_i),
                                     this->input_integral.idx2(orb_b_j,
                                                               orb_b_j));
      }
    }
  }
  return elem;
}

template <typename T>
double
POLYQUANT_DETSET<T>::mixed_part_ham_single(int idx_part, int other_idx_part,
                                           std::vector<int> i_unfold,
                                           std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto idx_part_det_i = this->get_det(idx_part, i_unfold[idx_part]);
  auto idx_part_det_j = this->get_det(idx_part, j_unfold[idx_part]);
  auto idx_part_det_i_a = idx_part_det_i.first;
  auto idx_part_det_i_b = idx_part_det_i.second;
  auto idx_part_det_j_a = idx_part_det_j.first;
  auto idx_part_det_j_b = idx_part_det_j.second;
  auto other_idx_part_det_i =
      this->get_det(other_idx_part, i_unfold[other_idx_part]);
  auto other_idx_part_det_j =
      this->get_det(other_idx_part, j_unfold[other_idx_part]);
  auto other_idx_part_det_i_a = other_idx_part_det_i.first;
  auto other_idx_part_det_i_b = other_idx_part_det_i.second;
  auto other_idx_part_det_j_a = other_idx_part_det_j.first;
  auto other_idx_part_det_j_b = other_idx_part_det_j.second;
  auto idx_part_alpha_spin_idx = 0;
  auto idx_part_beta_spin_idx =
      1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto other_idx_part_alpha_spin_idx = 0;
  auto other_idx_part_beta_spin_idx =
      1 % this->input_integral.mo_one_body_ints[other_idx_part].size();
  if (other_idx_part_det_i_a == other_idx_part_det_j_a &&
      other_idx_part_det_i_b == other_idx_part_det_j_b) {
    std::vector<int> aocc, avirt;
    std::vector<int> bocc, bvirt;
    this->get_occ_virt(other_idx_part_det_i_a, aocc, avirt);
    this->get_occ_virt(other_idx_part_det_i_b, bocc, bvirt);
    std::vector<int> idx_part_holes, idx_part_parts;
    double phase = 1.0;
    if (idx_part_det_i_a == idx_part_det_j_a) {
      get_holes(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes);
      get_parts(idx_part_det_i_b, idx_part_det_j_b, idx_part_parts);
      phase *= get_phase(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes,
                         idx_part_parts);
      for (auto orb_a_i : aocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints
                      [other_idx_part][other_idx_part_alpha_spin_idx][idx_part]
                      [idx_part_beta_spin_idx](
                          this->input_integral.idx2(orb_a_i, orb_a_i),
                          this->input_integral.idx2(idx_part_parts[0],
                                                    idx_part_holes[0]));
        } else {
          elem += this->input_integral.mo_two_body_ints
                      [idx_part][idx_part_beta_spin_idx][other_idx_part]
                      [other_idx_part_alpha_spin_idx](
                          this->input_integral.idx2(idx_part_parts[0],
                                                    idx_part_holes[0]),
                          this->input_integral.idx2(orb_a_i, orb_a_i));
        }
      }
      for (auto orb_b_i : bocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints
                      [other_idx_part][other_idx_part_beta_spin_idx][idx_part]
                      [idx_part_beta_spin_idx](
                          this->input_integral.idx2(orb_b_i, orb_b_i),
                          this->input_integral.idx2(idx_part_parts[0],
                                                    idx_part_holes[0]));
        } else {
          elem += this->input_integral.mo_two_body_ints
                      [idx_part][idx_part_beta_spin_idx][other_idx_part]
                      [other_idx_part_beta_spin_idx](
                          this->input_integral.idx2(idx_part_parts[0],
                                                    idx_part_holes[0]),
                          this->input_integral.idx2(orb_b_i, orb_b_i));
        }
      }
    } else {
      get_holes(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes);
      get_parts(idx_part_det_i_a, idx_part_det_j_a, idx_part_parts);
      phase *= get_phase(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes,
                         idx_part_parts);
      for (auto orb_a_i : aocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints
                      [other_idx_part][other_idx_part_alpha_spin_idx][idx_part]
                      [idx_part_alpha_spin_idx](
                          this->input_integral.idx2(orb_a_i, orb_a_i),
                          this->input_integral.idx2(idx_part_parts[0],
                                                    idx_part_holes[0]));
        } else {
          elem += this->input_integral.mo_two_body_ints
                      [idx_part][idx_part_alpha_spin_idx][other_idx_part]
                      [other_idx_part_alpha_spin_idx](
                          this->input_integral.idx2(idx_part_parts[0],
                                                    idx_part_holes[0]),
                          this->input_integral.idx2(orb_a_i, orb_a_i));
        }
      }
      for (auto orb_b_i : bocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints
                      [other_idx_part][other_idx_part_beta_spin_idx][idx_part]
                      [idx_part_alpha_spin_idx](
                          this->input_integral.idx2(orb_b_i, orb_b_i),
                          this->input_integral.idx2(idx_part_parts[0],
                                                    idx_part_holes[0]));
        } else {
          elem += this->input_integral.mo_two_body_ints
                      [idx_part][idx_part_alpha_spin_idx][other_idx_part]
                      [other_idx_part_beta_spin_idx](
                          this->input_integral.idx2(idx_part_parts[0],
                                                    idx_part_holes[0]),
                          this->input_integral.idx2(orb_b_i, orb_b_i));
        }
      }
    }
    elem *= phase;
  } else {
    std::vector<int> aocc, avirt;
    std::vector<int> bocc, bvirt;
    this->get_occ_virt(idx_part_det_i_a, aocc, avirt);
    this->get_occ_virt(idx_part_det_i_b, bocc, bvirt);
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    if (other_idx_part_det_i_b == other_idx_part_det_j_b) {
      get_holes(other_idx_part_det_i_a, other_idx_part_det_j_a,
                other_idx_part_holes);
      get_parts(other_idx_part_det_i_a, other_idx_part_det_j_a,
                other_idx_part_parts);
      phase *= get_phase(other_idx_part_det_i_a, other_idx_part_det_j_a,
                         other_idx_part_holes, other_idx_part_parts);
      for (auto orb_a_i : aocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints
                      [other_idx_part][other_idx_part_alpha_spin_idx][idx_part]
                      [idx_part_alpha_spin_idx](
                          this->input_integral.idx2(other_idx_part_parts[0],
                                                    other_idx_part_holes[0]),
                          this->input_integral.idx2(orb_a_i, orb_a_i));
        } else {
          elem += this->input_integral.mo_two_body_ints
                      [idx_part][idx_part_alpha_spin_idx][other_idx_part]
                      [other_idx_part_alpha_spin_idx](
                          this->input_integral.idx2(orb_a_i, orb_a_i),
                          this->input_integral.idx2(other_idx_part_parts[0],
                                                    other_idx_part_holes[0]));
        }
      }
      for (auto orb_b_i : bocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints
                      [other_idx_part][other_idx_part_alpha_spin_idx][idx_part]
                      [idx_part_beta_spin_idx](
                          this->input_integral.idx2(other_idx_part_parts[0],
                                                    other_idx_part_holes[0]),
                          this->input_integral.idx2(orb_b_i, orb_b_i));
        } else {
          elem += this->input_integral.mo_two_body_ints
                      [idx_part][idx_part_beta_spin_idx][other_idx_part]
                      [other_idx_part_alpha_spin_idx](
                          this->input_integral.idx2(orb_b_i, orb_b_i),
                          this->input_integral.idx2(other_idx_part_parts[0],
                                                    other_idx_part_holes[0]));
        }
      }
    } else {
      get_holes(other_idx_part_det_i_b, other_idx_part_det_j_b,
                other_idx_part_holes);
      get_parts(other_idx_part_det_i_b, other_idx_part_det_j_b,
                other_idx_part_parts);
      phase *= get_phase(other_idx_part_det_i_b, other_idx_part_det_j_b,
                         other_idx_part_holes, other_idx_part_parts);
      for (auto orb_a_i : aocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints
                      [other_idx_part][other_idx_part_beta_spin_idx][idx_part]
                      [idx_part_alpha_spin_idx](
                          this->input_integral.idx2(other_idx_part_parts[0],
                                                    other_idx_part_holes[0]),
                          this->input_integral.idx2(orb_a_i, orb_a_i));
        } else {
          elem += this->input_integral.mo_two_body_ints
                      [idx_part][idx_part_alpha_spin_idx][other_idx_part]
                      [other_idx_part_beta_spin_idx](
                          this->input_integral.idx2(orb_a_i, orb_a_i),
                          this->input_integral.idx2(other_idx_part_parts[0],
                                                    other_idx_part_holes[0]));
        }
      }
      for (auto orb_b_i : bocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints
                      [other_idx_part][other_idx_part_beta_spin_idx][idx_part]
                      [idx_part_beta_spin_idx](
                          this->input_integral.idx2(other_idx_part_parts[0],
                                                    other_idx_part_holes[0]),
                          this->input_integral.idx2(orb_b_i, orb_b_i));
        } else {
          elem += this->input_integral.mo_two_body_ints
                      [idx_part][idx_part_beta_spin_idx][other_idx_part]
                      [other_idx_part_beta_spin_idx](
                          this->input_integral.idx2(orb_b_i, orb_b_i),
                          this->input_integral.idx2(other_idx_part_parts[0],
                                                    other_idx_part_holes[0]));
        }
      }
    }
    elem *= phase;
  }
  return elem;
}

template <typename T>
double
POLYQUANT_DETSET<T>::mixed_part_ham_double(int idx_part, int other_idx_part,
                                           std::vector<int> i_unfold,
                                           std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto idx_part_det_i = this->get_det(idx_part, i_unfold[idx_part]);
  auto idx_part_det_j = this->get_det(idx_part, j_unfold[idx_part]);
  auto idx_part_det_i_a = idx_part_det_i.first;
  auto idx_part_det_i_b = idx_part_det_i.second;
  auto idx_part_det_j_a = idx_part_det_j.first;
  auto idx_part_det_j_b = idx_part_det_j.second;
  auto other_idx_part_det_i =
      this->get_det(other_idx_part, i_unfold[other_idx_part]);
  auto other_idx_part_det_j =
      this->get_det(other_idx_part, j_unfold[other_idx_part]);
  auto other_idx_part_det_i_a = other_idx_part_det_i.first;
  auto other_idx_part_det_i_b = other_idx_part_det_i.second;
  auto other_idx_part_det_j_a = other_idx_part_det_j.first;
  auto other_idx_part_det_j_b = other_idx_part_det_j.second;
  auto idx_part_alpha_spin_idx = 0;
  auto idx_part_beta_spin_idx =
      1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto other_idx_part_alpha_spin_idx = 0;
  auto other_idx_part_beta_spin_idx =
      1 % this->input_integral.mo_one_body_ints[other_idx_part].size();

  // spin = -1 mixed, spin = 0 alpha excitation, spin = 1 beta excitation
  if (idx_part_det_i_a == idx_part_det_j_a &&
      other_idx_part_det_i_a == other_idx_part_det_j_a) {
    std::vector<int> idx_part_holes, idx_part_parts;
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    double idx_part_phase = 1.0;
    double other_idx_part_phase = 1.0;
    get_holes(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes);
    get_parts(idx_part_det_i_b, idx_part_det_j_b, idx_part_parts);
    get_holes(other_idx_part_det_i_b, other_idx_part_det_j_b,
              other_idx_part_holes);
    get_parts(other_idx_part_det_i_b, other_idx_part_det_j_b,
              other_idx_part_parts);
    idx_part_phase = get_phase(idx_part_det_i_b, idx_part_det_j_b,
                               idx_part_holes, idx_part_parts);
    other_idx_part_phase =
        get_phase(other_idx_part_det_i_b, other_idx_part_det_j_b,
                  other_idx_part_holes, other_idx_part_parts);
    phase = idx_part_phase * other_idx_part_phase;
    if (other_idx_part < idx_part) {
      elem +=
          this->input_integral
              .mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx]
                               [idx_part][idx_part_beta_spin_idx](
                                   this->input_integral.idx2(
                                       other_idx_part_parts[0],
                                       other_idx_part_holes[0]),
                                   this->input_integral.idx2(
                                       idx_part_parts[0], idx_part_holes[0]));
    } else {
      elem +=
          this->input_integral
              .mo_two_body_ints[idx_part][idx_part_beta_spin_idx]
                               [other_idx_part][other_idx_part_beta_spin_idx](
                                   this->input_integral.idx2(idx_part_parts[0],
                                                             idx_part_holes[0]),
                                   this->input_integral.idx2(
                                       other_idx_part_parts[0],
                                       other_idx_part_holes[0]));
    }
    elem *= phase;
  } else if (idx_part_det_i_b == idx_part_det_j_b &&
             other_idx_part_det_i_b == other_idx_part_det_j_b) {
    std::vector<int> idx_part_holes, idx_part_parts;
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    double idx_part_phase = 1.0;
    double other_idx_part_phase = 1.0;
    get_holes(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes);
    get_parts(idx_part_det_i_a, idx_part_det_j_a, idx_part_parts);
    get_holes(other_idx_part_det_i_a, other_idx_part_det_j_a,
              other_idx_part_holes);
    get_parts(other_idx_part_det_i_a, other_idx_part_det_j_a,
              other_idx_part_parts);
    idx_part_phase = get_phase(idx_part_det_i_a, idx_part_det_j_a,
                               idx_part_holes, idx_part_parts);
    other_idx_part_phase =
        get_phase(other_idx_part_det_i_a, other_idx_part_det_j_a,
                  other_idx_part_holes, other_idx_part_parts);
    phase = idx_part_phase * other_idx_part_phase;
    if (other_idx_part < idx_part) {
      elem +=
          this->input_integral
              .mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx]
                               [idx_part][idx_part_alpha_spin_idx](
                                   this->input_integral.idx2(
                                       other_idx_part_parts[0],
                                       other_idx_part_holes[0]),
                                   this->input_integral.idx2(
                                       idx_part_parts[0], idx_part_holes[0]));
    } else {
      elem +=
          this->input_integral
              .mo_two_body_ints[idx_part][idx_part_alpha_spin_idx]
                               [other_idx_part][other_idx_part_alpha_spin_idx](
                                   this->input_integral.idx2(idx_part_parts[0],
                                                             idx_part_holes[0]),
                                   this->input_integral.idx2(
                                       other_idx_part_parts[0],
                                       other_idx_part_holes[0]));
    }
    elem *= phase;
  } else if (idx_part_det_i_a == idx_part_det_j_a &&
             other_idx_part_det_i_b == other_idx_part_det_j_b) {
    std::vector<int> idx_part_holes, idx_part_parts;
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    double idx_part_phase = 1.0;
    double other_idx_part_phase = 1.0;
    get_holes(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes);
    get_parts(idx_part_det_i_b, idx_part_det_j_b, idx_part_parts);
    get_holes(other_idx_part_det_i_a, other_idx_part_det_j_a,
              other_idx_part_holes);
    get_parts(other_idx_part_det_i_a, other_idx_part_det_j_a,
              other_idx_part_parts);
    idx_part_phase = get_phase(idx_part_det_i_b, idx_part_det_j_b,
                               idx_part_holes, idx_part_parts);
    other_idx_part_phase =
        get_phase(other_idx_part_det_i_a, other_idx_part_det_j_a,
                  other_idx_part_holes, other_idx_part_parts);
    phase = idx_part_phase * other_idx_part_phase;
    if (other_idx_part < idx_part) {
      elem +=
          this->input_integral
              .mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx]
                               [idx_part][idx_part_beta_spin_idx](
                                   this->input_integral.idx2(
                                       other_idx_part_parts[0],
                                       other_idx_part_holes[0]),
                                   this->input_integral.idx2(
                                       idx_part_parts[0], idx_part_holes[0]));
    } else {
      elem +=
          this->input_integral
              .mo_two_body_ints[idx_part][idx_part_beta_spin_idx]
                               [other_idx_part][other_idx_part_alpha_spin_idx](
                                   this->input_integral.idx2(idx_part_parts[0],
                                                             idx_part_holes[0]),
                                   this->input_integral.idx2(
                                       other_idx_part_parts[0],
                                       other_idx_part_holes[0]));
    }
    elem *= phase;
  } else if (idx_part_det_i_b == idx_part_det_j_b &&
             other_idx_part_det_i_a == other_idx_part_det_j_a) {
    std::vector<int> idx_part_holes, idx_part_parts;
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    double idx_part_phase = 1.0;
    double other_idx_part_phase = 1.0;
    get_holes(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes);
    get_parts(idx_part_det_i_a, idx_part_det_j_a, idx_part_parts);
    get_holes(other_idx_part_det_i_b, other_idx_part_det_j_b,
              other_idx_part_holes);
    get_parts(other_idx_part_det_i_b, other_idx_part_det_j_b,
              other_idx_part_parts);
    idx_part_phase = get_phase(idx_part_det_i_a, idx_part_det_j_a,
                               idx_part_holes, idx_part_parts);
    other_idx_part_phase =
        get_phase(other_idx_part_det_i_b, other_idx_part_det_j_b,
                  other_idx_part_holes, other_idx_part_parts);
    phase = idx_part_phase * other_idx_part_phase;
    if (other_idx_part < idx_part) {
      elem +=
          this->input_integral
              .mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx]
                               [idx_part][idx_part_alpha_spin_idx](
                                   this->input_integral.idx2(
                                       other_idx_part_parts[0],
                                       other_idx_part_holes[0]),
                                   this->input_integral.idx2(
                                       idx_part_parts[0], idx_part_holes[0]));
    } else {
      elem +=
          this->input_integral
              .mo_two_body_ints[idx_part][idx_part_alpha_spin_idx]
                               [other_idx_part][other_idx_part_beta_spin_idx](
                                   this->input_integral.idx2(idx_part_parts[0],
                                                             idx_part_holes[0]),
                                   this->input_integral.idx2(
                                       other_idx_part_parts[0],
                                       other_idx_part_holes[0]));
    }
    elem *= phase;
  }
  return elem;
}
template <typename T>
double POLYQUANT_DETSET<T>::Slater_Condon(int i_det, int j_det) const {
  std::pair<int, int> mat_idx;
  int mat_idx_hash;
  if (j_det < i_det) {
    mat_idx = std::make_pair(j_det, i_det);
  } else {
    mat_idx = std::make_pair(i_det, j_det);
  }
  PairHash<int> pairhasher;
  mat_idx_hash = pairhasher(mat_idx);
  try {
    return this->cache->Get(mat_idx_hash);
  } catch (std::range_error err) {
    double matrix_elem = 0.0;
    auto i_unfold = det_idx_unfold(i_det);
    auto j_unfold = det_idx_unfold(j_det);
    std::vector<bool> iequalj;
    // todo condense this
    for (auto idx_part = 0; idx_part < dets.size(); idx_part++) {
      iequalj.push_back(i_unfold[idx_part] == j_unfold[idx_part]);
    }
    auto idx_part = 0ul;
    for (auto const &[quantum_part_key, quantum_part] :
         this->input_integral.input_molecule.quantum_particles) {
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
          matrix_elem +=
              this->same_part_ham_single(idx_part, i_unfold, j_unfold);
        } else if (excitation_level == 2) {
          // do 2 body
          matrix_elem +=
              this->same_part_ham_double(idx_part, i_unfold, j_unfold);
        }
      }
      auto other_idx_part = 0ul;
      for (auto const &[other_quantum_part_key, other_quantum_part] :
           this->input_integral.input_molecule.quantum_particles) {
        if (idx_part == other_idx_part) {
          continue;
        }
        // loop over other particles
        // if all other particle dets j,k,l etc are equal then add the particle
        // i j interaction
        std::vector<bool> iequalj_otherparts(iequalj.begin(), iequalj.end());
        iequalj_otherparts.erase(iequalj_otherparts.begin() + idx_part);
        iequalj_otherparts.erase(iequalj_otherparts.begin() + other_idx_part);
        if (std::find(iequalj_otherparts.begin(), iequalj_otherparts.end(),
                      false) == iequalj_otherparts.end()) {
          auto excitation_level = 0;
          auto excitation_level_part_i = 0;
          auto excitation_level_part_j = 0;
          auto part_i_det_i = this->get_det(idx_part, i_unfold[idx_part]);
          auto part_i_det_j = this->get_det(idx_part, j_unfold[idx_part]);
          auto part_j_det_i =
              this->get_det(other_idx_part, i_unfold[other_idx_part]);
          auto part_j_det_j =
              this->get_det(other_idx_part, j_unfold[other_idx_part]);
          excitation_level_part_i =
              this->num_excitation(part_i_det_i, part_i_det_j);
          excitation_level_part_j =
              this->num_excitation(part_j_det_i, part_j_det_j);
          excitation_level = excitation_level_part_i + excitation_level_part_j;
          auto charge_factor = quantum_part.charge * other_quantum_part.charge;
          // std::cout << "Charge factor " << charge_factor << std::endl;
          if (excitation_level < 3) {
            if (excitation_level_part_i == 0 && excitation_level_part_j == 0) {
              matrix_elem += charge_factor *
                             this->mixed_part_ham_diag(idx_part, other_idx_part,
                                                       i_unfold, j_unfold);
            } else if (excitation_level_part_i == 1 &&
                       excitation_level_part_j == 1) {
              matrix_elem += charge_factor *
                             this->mixed_part_ham_double(
                                 idx_part, other_idx_part, i_unfold, j_unfold);
            } else if (excitation_level_part_i == 1 ||
                       excitation_level_part_j == 1) {
              matrix_elem += charge_factor *
                             this->mixed_part_ham_single(
                                 idx_part, other_idx_part, i_unfold, j_unfold);
            }
          }
        }
        other_idx_part++;
      }
      idx_part++;
    }
    this->cache->Put(mat_idx_hash, matrix_elem);
    return matrix_elem;
  }
}

template <typename T>
void POLYQUANT_DETSET<T>::perform_op(const double *x_in, double *y_out) const {
  for (auto i_det = 0; i_det < this->N_dets; i_det++) {
    auto matrix_elem = 0.0;
#pragma omp parallel for reduction(+ : matrix_elem)
    for (auto j_det = 0; j_det < this->N_dets; j_det++) {
      matrix_elem += x_in[j_det] * this->Slater_Condon(j_det, i_det);
    }
    y_out[i_det] = matrix_elem;
  }
}

template <typename T> void POLYQUANT_DETSET<T>::create_ham() {
  // this->ham.conservativeResize(this->N_dets, this->N_dets);
  this->ham.resize(this->N_dets, this->N_dets);
  // std::vector<Eigen::Triplet<double>> tripletList;
  std::cout << "Diagonal Ham" << std::endl;
  for (auto i_det = 0; i_det < this->N_dets; i_det++) {
    std::cout << i_det << " " << this->Slater_Condon(i_det, i_det) << std::endl;
    for (auto j_det = 0; j_det < this->N_dets; j_det++) {
      auto matrix_element = this->Slater_Condon(i_det, j_det);
      ham(i_det, j_det) = matrix_element;
      // tripletList.push_back(
      //    Eigen::Triplet<double>(i_det, j_det, matrix_element));
      // if (i_det != j_det) {
      // tripletList.push_back(
      //    Eigen::Triplet<double>(j_det, i_det, matrix_element));
      //}
    }
  }
  // this->ham.setFromTriplets(tripletList.begin(), tripletList.end());
}

// template <typename T>
// std::vector<int> POLYQUANT_DETSET<T>::get_holes(std::vector<T> &Di,
//                                           std::vector<T> &Dj) {}
// template <typename T>
// std::vector<int> POLYQUANT_DETSET<T>::get_parts(std::vector<T> &Di,
//                                           std::vector<T> &Dj) {}
} // namespace polyquant
#endif
