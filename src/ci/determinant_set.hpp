#ifndef POLYQUANT_DETSET_H
#define POLYQUANT_DETSET_H
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include "molecule/quantum_particles.hpp"
#include <Eigen/Dense>
#include <Eigen/Sparse>
#include <algorithm>
#include <bit>
#include <bitset>
#include <combinations.hpp>
#include <inttypes.h>
#include <iostream>
#include <iterator>
#include <set>
#include <string>
#include <tuple>
#include <unordered_set>
#include <utility>

namespace polyquant {

template <typename T> class POLYQUANT_DETSET {
public:
  POLYQUANT_DETSET() {}
  ~POLYQUANT_DETSET() {
    std::stringstream ss;
    ss << "SLATER CONDON CALLS : " << Slater_Condon_calls << std::endl;
    ss << "SLATER CONDON DIAGONAL (i==j) CALLS : " << Slater_Condon_diagonal_calls << std::endl;
    double percentage_of_all_calls = ((double)Slater_Condon_diagonal_calls) / ((double)Slater_Condon_calls);
    percentage_of_all_calls *= 100.0;
    ss << "percent SLATER CONDON DIAGONAL (i==j) CALLS : " << percentage_of_all_calls << "%" << std::endl;
    Polyquant_cout(ss.str());
  }
  void resize(std::size_t size);

  void create_det(int idx_part, std::vector<std::vector<int>> &occ);
  void get_unique_excitation_list(int idx_part, int idx_spin, int idx_det, int excitation_level, std::vector<std::vector<T>> &return_dets) const;
  void get_unique_excitation_set(int idx_part, int idx_spin, int idx_det, int excitation_level, std::set<std::vector<T>> &return_dets) const;
  void get_unique_excitation_list_of_indices(int idx_part, int idx_spin, int idx_det, int excitation_level, std::set<int> &return_idx_list) const;
  void create_unique_excitation(int idx_part, int idx_spin, int excitation_level);
  void create_excitation(std::vector<std::tuple<int, int, int>> excitation_level);
  void create_unique_excitation_map_singles();
  void create_unique_excitation_map_doubles();

  int single_spin_num_excitation(const std::vector<T> &Di, const std::vector<T> &Dj) const;
  int num_excitation(const std::pair<std::vector<T>, std::vector<T>> &Di, const std::pair<std::vector<T>, std::vector<T>> &Dj) const;
  void get_holes(std::vector<T> &Di, std::vector<T> &Dj, std::vector<int> &holes) const;
  void get_parts(std::vector<T> &Di, std::vector<T> &Dj, std::vector<int> &parts) const;
  double get_phase(std::vector<T> &Di, std::vector<T> &Dj, std::vector<int> &holes, std::vector<int> &parts) const;
  void get_occ_virt(int idx_part, std::vector<T> &D, std::vector<int> &occ, std::vector<int> &virt) const;

  double same_part_ham_diag(int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const;
  double same_part_ham_single(int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const;
  double same_part_ham_double(int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const;
  double mixed_part_ham_diag(int idx_part, int other_idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const;
  double mixed_part_ham_single(int idx_part, int other_idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const;
  double mixed_part_ham_double(int idx_part, int other_idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const;

  std::vector<T> get_det(int idx_part, int idx_spin, int i) const;
  void print_determinants();
  // /**
  //  * @brief determinant set (number of quantum particles, alpha/beta, det num
  //  * bitstrings)
  //  * the bitstrings are stored from highest orbital to lowest orbital
  //  *
  //  */
  // std::vector<std::unordered_set<std::pair<std::vector<T>, std::vector<T>>, PairVectorHash<T>>> dets;
  /**
   * @brief unique dets (number of quantum particles, alpha/beta, list of unique dets which are vector of templated type)
   *
   */
  std::vector<std::vector<std::vector<std::vector<T>>>> unique_dets;
  int estimate_n_interacting_dets;

  // indexes that are single excitations same spin
  // unique_singles[part_type_idx][spin_idx][det_i].size() ->num connected singles
  std::vector<std::vector<std::vector<std::vector<size_t>>>> unique_singles;
  // indexes that are double excitations same spin
  std::vector<std::vector<std::vector<std::vector<size_t>>>> unique_doubles;
  /**
   * @brief map of det index vector - vector of size (num quantum particle types * 2 spins)
   * index 0, 1 correspond to particle 0 spin 0, particle 0 spin 1 etc.
   * The det index vector contains indicies to the unique_dets lists and the second int is the overall index
   * For example for a system with alpha and beta electrons, index <0,0> maps to 0, index<0,1> maps to 1, etc
   * If <0,1> wasn't in the variational space it wouldn't be added to the map
   *
   */
  std::unordered_map<std::vector<int>, int, VectorHash<int>> dets;

  std::vector<int> max_orb;
  std::vector<double> frozen_core_energy;

  POLYQUANT_INTEGRAL input_integral;

  void set_integral(POLYQUANT_INTEGRAL &integral) { this->input_integral = integral; };

  // void construct_cache(size_t size_in_gb = 10000) {
  //   // This is actually super complicated. Some assumptions are made here that
  //   // doesn't quite transfer to ACTUAL size used
  //   // https://stackoverflow.com/questions/25375202/how-to-measure-memory-usage-of-stdunordered-map
  //   // It is assumed that map size() * sizeof(hashed object)
  //   std::string message = "Setting CI determinant elements max cache size: ";
  //   message += std::to_string(size_in_gb);
  //   message += " GB";
  //   std::pair<int, int> temp(0, 0);
  //   this->cache_size = (size_in_gb * 1e9) / sizeof(temp);
  //   message += " or ";
  //   message += std::to_string(this->cache_size);
  //   message += " objects";
  //   Polyquant_cout(message);
  //   polyquant_lfu_cache<std::pair<int, int>, double, PairHash<int>> constructed_cache(this->cache_size);
  //   this->cache = constructed_cache;
  // }

  // size_t cache_size;

  // mutable polyquant_lfu_cache<std::pair<int, int>, double, PairHash<int>> cache;

  mutable std::vector<double> diagonal_Hii;
  void precompute_diagonal_Slater_Condon() const;
  double Slater_Condon(int i_det, int j_det) const;

  mutable int Slater_Condon_calls = 0;
  mutable int Slater_Condon_diagonal_calls = 0;
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
  Eigen::SparseMatrix<double, Eigen::RowMajor> ham;
  // Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> ham;
  // void perform_op(const double *x_in, double *y_out) const;

  // needed for custom operator in Davidson
  double operator()(int i, int j) const { return this->Slater_Condon(i, j); }

  void sigma_one_species_diagonal_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                               const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const;
  void sigma_one_species_class_one_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const;
  void sigma_one_species_class_two_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin, int other_idx_part,
                                                int other_idx_spin) const;
  void sigma_one_species(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma, const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const;
  void sigma_two_species_diagonal_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                               const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const;
  void sigma_two_species_class_one_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const;
  void sigma_two_species_class_two_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin, int other_idx_part,
                                                int other_idx_spin) const;
  void sigma_two_species(const Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma, const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const;

  void create_sigma(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma, const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const;
  void create_sigma_slow(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma, const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const;

  void create_1rdm(const int state_idx, const int quantum_part_idx, const int quantum_part_spin_idx, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &MO_rdm1,
                   const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const;

  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> operator*(const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &mat_in) const;

  void create_ham_diagonal(int idx_part, int idx_spin);

  void single_species_create_ham();
  void single_species_create_ham_class_one(int idx_part, int idx_spin);
  void single_species_create_ham_class_two(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin);
  void single_species_create_ham_singleshot(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin);

  void two_species_create_ham();
  void two_species_create_ham_class_one(int idx_part, int idx_spin);
  void two_species_create_ham_class_two(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin);
  // void two_species_create_ham_singleshot(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin);
  void two_species_create_ham_singleshot();

  void create_ham();
  std::vector<int> det_idx_unfold(std::size_t det_idx) const;

  bool slow_diag = false;
  bool build_matrix = true;
};

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

template <typename T> void POLYQUANT_DETSET<T>::resize(std::size_t size) {
  unique_dets.resize(size);
  for (auto i = 0; i < size; i++) {
    unique_dets[i].resize(2);
  }
}
template <typename T> void POLYQUANT_DETSET<T>::create_det(int idx_part, std::vector<std::vector<int>> &occ) {
  std::string alpha_bit_string, beta_bit_string;
  alpha_bit_string.resize(max_orb[idx_part], '0');
  beta_bit_string.resize(max_orb[idx_part], '0');
  for (auto i_occ : occ[0]) {
    alpha_bit_string[i_occ] = '1';
  }
  for (auto i_occ : occ[1]) {
    beta_bit_string[i_occ] = '1';
  }
  Polyquant_cout("Creating det " + alpha_bit_string + " " + beta_bit_string + " for particle " + std::to_string(idx_part));
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
template <typename T> void POLYQUANT_DETSET<T>::create_excitation(std::vector<std::tuple<int, int, int>> excitation_level) {
  if (excitation_level.size() > 2) {
    APP_ABORT("The CI code can currently handle up to a maximum of 2 unique quantum particle types.");
  }
  // TODO generalize this and parallellize...
  this->N_dets = 0;
  std::pair<std::vector<T>, std::vector<T>> hf_det_pair_0 = std::make_pair(this->unique_dets[0][0][0], this->unique_dets[0][1][0]);
  std::pair<std::vector<T>, std::vector<T>> hf_det_pair_1;
  if (excitation_level.size() == 2) {
    hf_det_pair_1 = std::make_pair(this->unique_dets[1][0][0], this->unique_dets[1][1][0]);
  }
  for (auto i = 0; i < this->unique_dets[0][0].size(); i++) {
    for (auto j = 0; j < this->unique_dets[0][1].size(); j++) {
      std::pair<std::vector<T>, std::vector<T>> det_pair_0 = std::make_pair(this->unique_dets[0][0][i], this->unique_dets[0][1][j]);
      auto excitation_degree_0 = 0;
      excitation_degree_0 = this->num_excitation(hf_det_pair_0, det_pair_0);
      if (excitation_degree_0 <= std::get<2>(excitation_level[0])) {
        if (excitation_level.size() == 2) {
          for (auto k = 0; k < this->unique_dets[1][0].size(); k++) {
            for (auto l = 0; l < this->unique_dets[1][1].size(); l++) {
              std::pair<std::vector<T>, std::vector<T>> det_pair_1 = std::make_pair(this->unique_dets[1][0][k], this->unique_dets[1][1][l]);
              auto excitation_degree_1 = 0;
              excitation_degree_1 = this->num_excitation(hf_det_pair_1, det_pair_1);
              if (excitation_degree_1 <= std::get<2>(excitation_level[1])) {
                std::vector<int> det_idx = {i, j, k, l};
                this->dets[det_idx] = this->N_dets;
                this->N_dets++;
              }
            }
          }
        } else {
          std::vector<int> det_idx = {i, j};
          this->dets[det_idx] = this->N_dets;
          this->N_dets++;
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
  unique_singles.resize(this->input_integral.input_molecule.quantum_particles.size());
  for (auto const &[quantum_part_key, quantum_part] : this->input_integral.input_molecule.quantum_particles) {
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
  unique_doubles.resize(this->input_integral.input_molecule.quantum_particles.size());
  for (auto const &[quantum_part_key, quantum_part] : this->input_integral.input_molecule.quantum_particles) {
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
  std::vector<T> mask;
  mask.resize(Di.size());
  std::fill(mask.begin(), mask.end(), 0);
  // for testing
  if (!std::is_sorted(holes.begin(), holes.end())) {
    APP_ABORT("For phase computation, holes are not sorted!");
  }
  if (!std::is_sorted(parts.begin(), parts.end())) {
    APP_ABORT("For phase computation, parts are not sorted!");
  }
  if (holes.size() != parts.size()) {
    APP_ABORT("For phase computation, num holes != num parts");
  }
  if (holes.size() > 2 and holes.size() > 0) {
    APP_ABORT("For phase computation, num holes/parts > 2");
  }

  for (auto i = 0; i < holes.size(); i++) {
    T high = std::max(parts[i], holes[i]);
    T low = std::min(parts[i], holes[i]);
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
      nperm += std::popcount(Di[j] & mask[l]);
    }
  }
  if ((holes.size() == 2) && (holes[1] < parts[0] || holes[0] > parts[1])) {
    nperm++;
  }
  return std::pow(-1.0, nperm);
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

template <typename T> double POLYQUANT_DETSET<T>::same_part_ham_diag(int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
  auto det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
  auto det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
  auto det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);

  auto alpha_spin_idx = 0;
  auto beta_spin_idx = 1 % this->input_integral.mo_one_body_ints[idx_part].size();

  std::vector<int> aocc, avirt;
  this->get_occ_virt(idx_part, det_i_a, aocc, avirt);

  std::vector<int> bocc, bvirt;
  this->get_occ_virt(idx_part, det_i_b, bocc, bvirt);

  double elem = 0.0;
  for (auto orb_a_i : aocc) {
    elem += this->input_integral.mo_one_body_ints[idx_part][alpha_spin_idx](orb_a_i, orb_a_i);
  }
  for (auto orb_b_i : bocc) {
    elem += this->input_integral.mo_one_body_ints[idx_part][beta_spin_idx](orb_b_i, orb_b_i);
  }
  for (auto orb_a_i : aocc) {
    for (auto orb_a_j : aocc) {
      elem +=
          0.5 * (this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](this->input_integral.idx2(orb_a_i, orb_a_i), this->input_integral.idx2(orb_a_j, orb_a_j)));
      elem -=
          0.5 * (this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](this->input_integral.idx2(orb_a_i, orb_a_j), this->input_integral.idx2(orb_a_j, orb_a_i)));
    }
    for (auto orb_b_j : bocc) {
      elem += 0.5 * this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][beta_spin_idx](this->input_integral.idx2(orb_a_i, orb_a_i), this->input_integral.idx2(orb_b_j, orb_b_j));
    }
  }
  for (auto orb_b_i : bocc) {
    for (auto orb_b_j : bocc) {
      elem += 0.5 * (this->input_integral.mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](this->input_integral.idx2(orb_b_i, orb_b_i), this->input_integral.idx2(orb_b_j, orb_b_j)));
      elem -= 0.5 * (this->input_integral.mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](this->input_integral.idx2(orb_b_i, orb_b_j), this->input_integral.idx2(orb_b_j, orb_b_i)));
    }
    for (auto orb_a_j : aocc) {
      elem += 0.5 * this->input_integral.mo_two_body_ints[idx_part][beta_spin_idx][idx_part][alpha_spin_idx](this->input_integral.idx2(orb_b_i, orb_b_i), this->input_integral.idx2(orb_a_j, orb_a_j));
    }
  }
  return elem;
}

template <typename T> double POLYQUANT_DETSET<T>::same_part_ham_single(int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
  auto det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
  auto det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
  auto det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);
  auto alpha_spin_idx = 0;
  auto beta_spin_idx = 1 % this->input_integral.mo_one_body_ints[idx_part].size();

  // spin = 0 alpha excitation, spin = 1 beta excitation
  auto spin = 0;
  if (det_i_a == det_j_a) {
    spin = 1;
  }

  std::vector<int> aocc, avirt;
  std::vector<int> bocc, bvirt;
  this->get_occ_virt(idx_part, det_i_a, aocc, avirt);
  this->get_occ_virt(idx_part, det_i_b, bocc, bvirt);

  // get hole
  // get part
  std::vector<int> holes, parts;
  double phase = 1.0;
  if (spin == 0) {
    get_holes(det_i_a, det_j_a, holes);
    get_parts(det_i_a, det_j_a, parts);
    phase = get_phase(det_i_a, det_j_a, holes, parts);
    elem += this->input_integral.mo_one_body_ints[idx_part][alpha_spin_idx](parts[0], holes[0]);
    for (auto orb_a_i : aocc) {
      elem += this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](this->input_integral.idx2(parts[0], holes[0]), this->input_integral.idx2(orb_a_i, orb_a_i));
      elem -= this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](this->input_integral.idx2(parts[0], orb_a_i), this->input_integral.idx2(orb_a_i, holes[0]));
    }
    for (auto orb_b_i : bocc) {
      elem += this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][beta_spin_idx](this->input_integral.idx2(parts[0], holes[0]), this->input_integral.idx2(orb_b_i, orb_b_i));
    }
    elem *= phase;
  } else {
    get_holes(det_i_b, det_j_b, holes);
    get_parts(det_i_b, det_j_b, parts);
    phase = get_phase(det_i_b, det_j_b, holes, parts);
    elem += this->input_integral.mo_one_body_ints[idx_part][beta_spin_idx](parts[0], holes[0]);
    for (auto orb_b_i : bocc) {
      elem += this->input_integral.mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](this->input_integral.idx2(parts[0], holes[0]), this->input_integral.idx2(orb_b_i, orb_b_i));
      elem -= this->input_integral.mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](this->input_integral.idx2(parts[0], orb_b_i), this->input_integral.idx2(orb_b_i, holes[0]));
    }
    for (auto orb_a_i : aocc) {
      elem += this->input_integral.mo_two_body_ints[idx_part][beta_spin_idx][idx_part][alpha_spin_idx](this->input_integral.idx2(parts[0], holes[0]), this->input_integral.idx2(orb_a_i, orb_a_i));
    }
    elem *= phase;
  }
  return elem;
}

template <typename T> double POLYQUANT_DETSET<T>::same_part_ham_double(int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
  auto det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
  auto det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
  auto det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);
  auto alpha_spin_idx = 0;
  auto beta_spin_idx = 1 % this->input_integral.mo_one_body_ints[idx_part].size();

  // spin = -1 mixed, spin = 0 alpha excitation, spin = 1 beta excitation
  if (det_i_a == det_j_a) {
    std::vector<int> holes, parts;
    double phase = 1.0;
    get_holes(det_i_b, det_j_b, holes);
    get_parts(det_i_b, det_j_b, parts);
    phase = get_phase(det_i_b, det_j_b, holes, parts);
    elem += this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](this->input_integral.idx2(parts[0], holes[0]), this->input_integral.idx2(parts[1], holes[1]));
    elem -= this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][alpha_spin_idx](this->input_integral.idx2(parts[0], holes[1]), this->input_integral.idx2(parts[1], holes[0]));
    elem *= phase;
  } else if (det_i_b == det_j_b) {
    std::vector<int> holes, parts;
    double phase = 1.0;
    get_holes(det_i_a, det_j_a, holes);
    get_parts(det_i_a, det_j_a, parts);
    phase = get_phase(det_i_a, det_j_a, holes, parts);
    elem += this->input_integral.mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](this->input_integral.idx2(parts[0], holes[0]), this->input_integral.idx2(parts[1], holes[1]));
    elem -= this->input_integral.mo_two_body_ints[idx_part][beta_spin_idx][idx_part][beta_spin_idx](this->input_integral.idx2(parts[0], holes[1]), this->input_integral.idx2(parts[1], holes[0]));
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
    elem += this->input_integral.mo_two_body_ints[idx_part][alpha_spin_idx][idx_part][beta_spin_idx](this->input_integral.idx2(aparts[0], aholes[0]), this->input_integral.idx2(bparts[0], bholes[0]));
    elem *= phase;
  }
  return elem;
}
template <typename T> double POLYQUANT_DETSET<T>::mixed_part_ham_diag(int idx_part, int other_idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto idx_part_det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
  auto idx_part_det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
  auto idx_part_det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
  auto idx_part_det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);
  auto other_idx_part_det_i_a = this->get_det(other_idx_part, 0, i_unfold[other_idx_part * 2 + 0]);
  auto other_idx_part_det_i_b = this->get_det(other_idx_part, 1, i_unfold[other_idx_part * 2 + 1]);
  auto other_idx_part_det_j_a = this->get_det(other_idx_part, 0, j_unfold[other_idx_part * 2 + 0]);
  auto other_idx_part_det_j_b = this->get_det(other_idx_part, 1, j_unfold[other_idx_part * 2 + 1]);
  auto idx_part_alpha_spin_idx = 0;
  auto idx_part_beta_spin_idx = 1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto other_idx_part_alpha_spin_idx = 0;
  auto other_idx_part_beta_spin_idx = 1 % this->input_integral.mo_one_body_ints[other_idx_part].size();

  std::vector<int> other_idx_part_aocc, other_idx_part_avirt;
  std::vector<int> other_idx_part_bocc, other_idx_part_bvirt;
  std::vector<int> idx_part_aocc, idx_part_avirt;
  std::vector<int> idx_part_bocc, idx_part_bvirt;
  this->get_occ_virt(other_idx_part, other_idx_part_det_i_a, other_idx_part_aocc, other_idx_part_avirt);
  this->get_occ_virt(other_idx_part, other_idx_part_det_i_b, other_idx_part_bocc, other_idx_part_bvirt);
  this->get_occ_virt(idx_part, idx_part_det_i_a, idx_part_aocc, idx_part_avirt);
  this->get_occ_virt(idx_part, idx_part_det_i_b, idx_part_bocc, idx_part_bvirt);

  for (auto orb_a_i : idx_part_aocc) {
    for (auto orb_a_j : other_idx_part_aocc) {
      if (other_idx_part < idx_part) {
        elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_alpha_spin_idx](this->input_integral.idx2(orb_a_j, orb_a_j),
                                                                                                                                        this->input_integral.idx2(orb_a_i, orb_a_i));
      } else {
        elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](this->input_integral.idx2(orb_a_i, orb_a_i),
                                                                                                                                        this->input_integral.idx2(orb_a_j, orb_a_j));
      }
    }
    for (auto orb_b_j : other_idx_part_bocc) {
      if (other_idx_part < idx_part) {
        elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_alpha_spin_idx](this->input_integral.idx2(orb_b_j, orb_b_j),
                                                                                                                                       this->input_integral.idx2(orb_a_i, orb_a_i));
      } else {
        elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](this->input_integral.idx2(orb_a_i, orb_a_i),
                                                                                                                                       this->input_integral.idx2(orb_b_j, orb_b_j));
      }
    }
  }
  for (auto orb_b_i : idx_part_bocc) {
    for (auto orb_a_j : other_idx_part_aocc) {
      if (other_idx_part < idx_part) {
        elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_beta_spin_idx](this->input_integral.idx2(orb_a_j, orb_a_j),
                                                                                                                                       this->input_integral.idx2(orb_b_i, orb_b_i));
      } else {
        elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](this->input_integral.idx2(orb_b_i, orb_b_i),
                                                                                                                                       this->input_integral.idx2(orb_a_j, orb_a_j));
      }
    }
    for (auto orb_b_j : other_idx_part_bocc) {
      if (other_idx_part < idx_part) {
        elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_beta_spin_idx](this->input_integral.idx2(orb_b_j, orb_b_j),
                                                                                                                                      this->input_integral.idx2(orb_b_i, orb_b_i));
      } else {
        elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](this->input_integral.idx2(orb_b_i, orb_b_i),
                                                                                                                                      this->input_integral.idx2(orb_b_j, orb_b_j));
      }
    }
  }
  return elem;
}

template <typename T> double POLYQUANT_DETSET<T>::mixed_part_ham_single(int idx_part, int other_idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto idx_part_det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
  auto idx_part_det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
  auto idx_part_det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
  auto idx_part_det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);
  auto other_idx_part_det_i_a = this->get_det(other_idx_part, 0, i_unfold[other_idx_part * 2 + 0]);
  auto other_idx_part_det_i_b = this->get_det(other_idx_part, 1, i_unfold[other_idx_part * 2 + 1]);
  auto other_idx_part_det_j_a = this->get_det(other_idx_part, 0, j_unfold[other_idx_part * 2 + 0]);
  auto other_idx_part_det_j_b = this->get_det(other_idx_part, 1, j_unfold[other_idx_part * 2 + 1]);
  auto idx_part_alpha_spin_idx = 0;
  auto idx_part_beta_spin_idx = 1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto other_idx_part_alpha_spin_idx = 0;
  auto other_idx_part_beta_spin_idx = 1 % this->input_integral.mo_one_body_ints[other_idx_part].size();
  if (other_idx_part_det_i_a == other_idx_part_det_j_a && other_idx_part_det_i_b == other_idx_part_det_j_b) {
    std::vector<int> aocc, avirt;
    std::vector<int> bocc, bvirt;
    this->get_occ_virt(other_idx_part, other_idx_part_det_i_a, aocc, avirt);
    this->get_occ_virt(other_idx_part, other_idx_part_det_i_b, bocc, bvirt);
    std::vector<int> idx_part_holes, idx_part_parts;
    double phase = 1.0;
    if (idx_part_det_i_a == idx_part_det_j_a) {
      get_holes(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes);
      get_parts(idx_part_det_i_b, idx_part_det_j_b, idx_part_parts);
      phase *= get_phase(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes, idx_part_parts);
      for (auto orb_a_i : aocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_beta_spin_idx](
              this->input_integral.idx2(orb_a_i, orb_a_i), this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]));
        } else {
          elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](
              this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral.idx2(orb_a_i, orb_a_i));
        }
      }
      for (auto orb_b_i : bocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_beta_spin_idx](
              this->input_integral.idx2(orb_b_i, orb_b_i), this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]));
        } else {
          elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]),
                                                                                                                                        this->input_integral.idx2(orb_b_i, orb_b_i));
        }
      }
    } else {
      get_holes(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes);
      get_parts(idx_part_det_i_a, idx_part_det_j_a, idx_part_parts);
      phase *= get_phase(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes, idx_part_parts);
      for (auto orb_a_i : aocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_alpha_spin_idx](
              this->input_integral.idx2(orb_a_i, orb_a_i), this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]));
        } else {
          elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](
              this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral.idx2(orb_a_i, orb_a_i));
        }
      }
      for (auto orb_b_i : bocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_alpha_spin_idx](
              this->input_integral.idx2(orb_b_i, orb_b_i), this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]));
        } else {
          elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](
              this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral.idx2(orb_b_i, orb_b_i));
        }
      }
    }
    elem *= phase;
  } else {
    std::vector<int> aocc, avirt;
    std::vector<int> bocc, bvirt;
    this->get_occ_virt(idx_part, idx_part_det_i_a, aocc, avirt);
    this->get_occ_virt(idx_part, idx_part_det_i_b, bocc, bvirt);
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    if (other_idx_part_det_i_b == other_idx_part_det_j_b) {
      get_holes(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_holes);
      get_parts(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_parts);
      phase *= get_phase(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_holes, other_idx_part_parts);
      for (auto orb_a_i : aocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_alpha_spin_idx](
              this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral.idx2(orb_a_i, orb_a_i));
        } else {
          elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](
              this->input_integral.idx2(orb_a_i, orb_a_i), this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
        }
      }
      for (auto orb_b_i : bocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_beta_spin_idx](
              this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral.idx2(orb_b_i, orb_b_i));
        } else {
          elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](
              this->input_integral.idx2(orb_b_i, orb_b_i), this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
        }
      }
    } else {
      get_holes(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_holes);
      get_parts(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_parts);
      phase *= get_phase(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_holes, other_idx_part_parts);
      for (auto orb_a_i : aocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_alpha_spin_idx](
              this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral.idx2(orb_a_i, orb_a_i));
        } else {
          elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](
              this->input_integral.idx2(orb_a_i, orb_a_i), this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
        }
      }
      for (auto orb_b_i : bocc) {
        if (other_idx_part < idx_part) {
          elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_beta_spin_idx](
              this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral.idx2(orb_b_i, orb_b_i));
        } else {
          elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](
              this->input_integral.idx2(orb_b_i, orb_b_i), this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
        }
      }
    }
    elem *= phase;
  }
  return elem;
}

template <typename T> double POLYQUANT_DETSET<T>::mixed_part_ham_double(int idx_part, int other_idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const {
  auto elem = 0.0;
  auto idx_part_det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
  auto idx_part_det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
  auto idx_part_det_j_a = this->get_det(idx_part, 0, j_unfold[idx_part * 2 + 0]);
  auto idx_part_det_j_b = this->get_det(idx_part, 1, j_unfold[idx_part * 2 + 1]);
  auto other_idx_part_det_i_a = this->get_det(other_idx_part, 0, i_unfold[other_idx_part * 2 + 0]);
  auto other_idx_part_det_i_b = this->get_det(other_idx_part, 1, i_unfold[other_idx_part * 2 + 1]);
  auto other_idx_part_det_j_a = this->get_det(other_idx_part, 0, j_unfold[other_idx_part * 2 + 0]);
  auto other_idx_part_det_j_b = this->get_det(other_idx_part, 1, j_unfold[other_idx_part * 2 + 1]);
  auto idx_part_alpha_spin_idx = 0;
  auto idx_part_beta_spin_idx = 1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto other_idx_part_alpha_spin_idx = 0;
  auto other_idx_part_beta_spin_idx = 1 % this->input_integral.mo_one_body_ints[other_idx_part].size();

  // spin = -1 mixed, spin = 0 alpha excitation, spin = 1 beta excitation
  if (idx_part_det_i_a == idx_part_det_j_a && other_idx_part_det_i_a == other_idx_part_det_j_a) {
    std::vector<int> idx_part_holes, idx_part_parts;
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    double idx_part_phase = 1.0;
    double other_idx_part_phase = 1.0;
    get_holes(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes);
    get_parts(idx_part_det_i_b, idx_part_det_j_b, idx_part_parts);
    get_holes(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_holes);
    get_parts(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_parts);
    idx_part_phase = get_phase(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes, idx_part_parts);
    other_idx_part_phase = get_phase(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_holes, other_idx_part_parts);
    phase = idx_part_phase * other_idx_part_phase;
    if (other_idx_part < idx_part) {
      elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_beta_spin_idx](
          this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]));
    } else {
      elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](
          this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
    }
    elem *= phase;
  } else if (idx_part_det_i_b == idx_part_det_j_b && other_idx_part_det_i_b == other_idx_part_det_j_b) {
    std::vector<int> idx_part_holes, idx_part_parts;
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    double idx_part_phase = 1.0;
    double other_idx_part_phase = 1.0;
    get_holes(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes);
    get_parts(idx_part_det_i_a, idx_part_det_j_a, idx_part_parts);
    get_holes(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_holes);
    get_parts(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_parts);
    idx_part_phase = get_phase(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes, idx_part_parts);
    other_idx_part_phase = get_phase(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_holes, other_idx_part_parts);
    phase = idx_part_phase * other_idx_part_phase;
    if (other_idx_part < idx_part) {
      elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_alpha_spin_idx](
          this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]));
    } else {
      elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](
          this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
    }
    elem *= phase;
  } else if (idx_part_det_i_a == idx_part_det_j_a && other_idx_part_det_i_b == other_idx_part_det_j_b) {
    std::vector<int> idx_part_holes, idx_part_parts;
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    double idx_part_phase = 1.0;
    double other_idx_part_phase = 1.0;
    get_holes(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes);
    get_parts(idx_part_det_i_b, idx_part_det_j_b, idx_part_parts);
    get_holes(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_holes);
    get_parts(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_parts);
    idx_part_phase = get_phase(idx_part_det_i_b, idx_part_det_j_b, idx_part_holes, idx_part_parts);
    other_idx_part_phase = get_phase(other_idx_part_det_i_a, other_idx_part_det_j_a, other_idx_part_holes, other_idx_part_parts);
    phase = idx_part_phase * other_idx_part_phase;
    if (other_idx_part < idx_part) {
      elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_alpha_spin_idx][idx_part][idx_part_beta_spin_idx](
          this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]));
    } else {
      elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_beta_spin_idx][other_idx_part][other_idx_part_alpha_spin_idx](
          this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
    }
    elem *= phase;
  } else if (idx_part_det_i_b == idx_part_det_j_b && other_idx_part_det_i_a == other_idx_part_det_j_a) {
    std::vector<int> idx_part_holes, idx_part_parts;
    std::vector<int> other_idx_part_holes, other_idx_part_parts;
    double phase = 1.0;
    double idx_part_phase = 1.0;
    double other_idx_part_phase = 1.0;
    get_holes(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes);
    get_parts(idx_part_det_i_a, idx_part_det_j_a, idx_part_parts);
    get_holes(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_holes);
    get_parts(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_parts);
    idx_part_phase = get_phase(idx_part_det_i_a, idx_part_det_j_a, idx_part_holes, idx_part_parts);
    other_idx_part_phase = get_phase(other_idx_part_det_i_b, other_idx_part_det_j_b, other_idx_part_holes, other_idx_part_parts);
    phase = idx_part_phase * other_idx_part_phase;
    if (other_idx_part < idx_part) {
      elem += this->input_integral.mo_two_body_ints[other_idx_part][other_idx_part_beta_spin_idx][idx_part][idx_part_alpha_spin_idx](
          this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]), this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]));
    } else {
      elem += this->input_integral.mo_two_body_ints[idx_part][idx_part_alpha_spin_idx][other_idx_part][other_idx_part_beta_spin_idx](
          this->input_integral.idx2(idx_part_parts[0], idx_part_holes[0]), this->input_integral.idx2(other_idx_part_parts[0], other_idx_part_holes[0]));
    }
    elem *= phase;
  }
  return elem;
}

template <typename T> void POLYQUANT_DETSET<T>::precompute_diagonal_Slater_Condon() const {
  diagonal_Hii.resize(N_dets, 0.0);
  for (auto i = 0; i < N_dets; i++) {
    Slater_Condon_diagonal_calls++;
    auto i_unfold = det_idx_unfold(i);
    double matrix_elem = 0.0;
    auto idx_part = 0ul;
    for (auto const &[quantum_part_key, quantum_part] : this->input_integral.input_molecule.quantum_particles) {
      auto det_i_a = this->get_det(idx_part, 0, i_unfold[idx_part * 2 + 0]);
      auto det_i_b = this->get_det(idx_part, 1, i_unfold[idx_part * 2 + 1]);
      auto det_i = std::make_pair(det_i_a, det_i_b);
      matrix_elem += this->same_part_ham_diag(idx_part, i_unfold, i_unfold);
      auto other_idx_part = 0ul;
      for (auto const &[other_quantum_part_key, other_quantum_part] : this->input_integral.input_molecule.quantum_particles) {
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
    diagonal_Hii[i] = matrix_elem;
  }
}

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
  for (auto const &[quantum_part_key, quantum_part] : this->input_integral.input_molecule.quantum_particles) {
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
    for (auto const &[other_quantum_part_key, other_quantum_part] : this->input_integral.input_molecule.quantum_particles) {
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

// template <typename T> void POLYQUANT_DETSET<T>::perform_op(const double *x_in, double *y_out) const {
//   auto function = __PRETTY_FUNCTION__;
//   POLYQUANT_TIMER timer(function);
//   for (auto i_det = 0; i_det < this->N_dets; i_det++) {
//     auto matrix_elem = 0.0;
// #pragma omp parallel for reduction(+ : matrix_elem)
//     for (auto j_det = 0; j_det < this->N_dets; j_det++) {
//       auto sc_elem = this->Slater_Condon(j_det, i_det);
//       if (x_in[j_det] != 0 && sc_elem != 0) {
//         matrix_elem += x_in[j_det] * sc_elem;
//       }
//     }
//     y_out[i_det] = matrix_elem;
//   }
// }

template <typename T>
void POLYQUANT_DETSET<T>::sigma_one_species_diagonal_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                  const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  auto second_spin_idx = 1 - idx_spin;

  auto nthreads = omp_get_max_threads();
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> threads_sigma_contributions;
  threads_sigma_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    threads_sigma_contributions[i].resize(this->rows(), C.cols());
    threads_sigma_contributions[i].setZero();
  }
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto idx_I_A_det = 0; idx_I_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_I_A_det++) {
      for (auto idx_I_B_det = 0; idx_I_B_det < this->unique_dets[idx_part][second_spin_idx].size(); idx_I_B_det++) {
        if ((idx_I_A_det + idx_I_B_det) % nthreads != thread_id)
          continue;
        std::vector<int> det_idx(2);
        det_idx[first_spin_idx] = idx_I_A_det;
        det_idx[second_spin_idx] = idx_I_B_det;
        if (this->dets.find(det_idx) != this->dets.end()) {
          // TODO pick one of these and stick to that form
          // auto folded_idet_idx = this->dets.find(det_idx)->second;
          auto folded_idet_idx = this->dets.at(det_idx);
          // auto integral = Slater_Condon(folded_idet_idx, folded_idet_idx);
          auto integral = diagonal_Hii[folded_idet_idx];
          for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
            threads_sigma_contributions[thread_id](folded_idet_idx, state_idx) += integral * C(folded_idet_idx, state_idx);
          }
        }
      }
    }
#pragma omp critical
    sigma += threads_sigma_contributions[thread_id];
  }
  // for (auto i = 0; i < nthreads; i++) {
  //   sigma += threads_sigma_contributions[i];
  // }
}

template <typename T>
void POLYQUANT_DETSET<T>::sigma_one_species_class_one_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                   const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto second_spin_idx = 1 - idx_spin;

  auto nthreads = omp_get_max_threads();
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> threads_sigma_contributions;
  threads_sigma_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    threads_sigma_contributions[i].resize(this->rows(), C.cols());
    threads_sigma_contributions[i].setZero();
  }
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto idx_I_A_det = 0; idx_I_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_I_A_det++) {
      for (auto idx_I_B_det = 0; idx_I_B_det < this->unique_dets[idx_part][second_spin_idx].size(); idx_I_B_det++) {
        if ((idx_I_A_det + idx_I_B_det) % nthreads != thread_id)
          continue;
        std::vector<int> det_idx(2);
        det_idx[first_spin_idx] = idx_I_A_det;
        det_idx[second_spin_idx] = idx_I_B_det;
        if (this->dets.find(det_idx) != this->dets.end()) {
          auto folded_idet_idx = this->dets.find(det_idx)->second;
          // replace this with for (idx_J_A_det in single_excitation(idx_I_A_det) + double_excitation(idx_I_A_det))
          std::vector<int> excitation_list;
          std::set_union(unique_singles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_singles[idx_part][first_spin_idx][idx_I_A_det].end(),
                         unique_doubles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_doubles[idx_part][first_spin_idx][idx_I_A_det].end(), std::back_inserter(excitation_list));
          // this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 1, excitation_list);
          //  do we have enough particles to do a double excitation?
          //  if (this->unique_dets[idx_part][first_spin_idx][0][0] > 1)
          //    this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 2, excitation_list);
          //  std::sort(excitation_list.begin(), excitation_list.end());
          //  excitation_list.erase(std::remove_if(excitation_list.begin(), excitation_list.end(), [&idx_I_A_det](int x) { return x < idx_I_A_det; }), excitation_list.end());

          // for (auto idx_J_A_det = idx_I_A_det; idx_J_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_J_A_det++) {
          // auto excitation_list_count = 0;
          for (auto idx_J_A_det : excitation_list) {
            // excitation_list_count++;
            // if ((idx_I_A_det + idx_I_B_det + excitation_list_count) % nthreads != thread_id)
            //   continue;
            if (idx_J_A_det <= idx_I_A_det) {
              continue;
            }
            std::vector<int> jdet_idx(2);
            jdet_idx[first_spin_idx] = idx_J_A_det;
            jdet_idx[second_spin_idx] = idx_I_B_det;
            if (this->dets.find(jdet_idx) != this->dets.end()) {

              auto num_exec = single_spin_num_excitation(this->unique_dets[idx_part][first_spin_idx][idx_I_A_det], this->unique_dets[idx_part][first_spin_idx][idx_J_A_det]);
              auto integral = 0.0;
              if (num_exec == 1) {
                integral = same_part_ham_single(idx_part, det_idx, jdet_idx);
              } else {
                integral = same_part_ham_double(idx_part, det_idx, jdet_idx);
              }
              if (integral != 0.0) {
                auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
                for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
                  // auto integral = Slater_Condon(folded_idet_idx, folded_jdet_idx);
                  threads_sigma_contributions[thread_id](folded_idet_idx, state_idx) += integral * C(folded_jdet_idx, state_idx);
                  // if (folded_idet_idx != folded_jdet_idx)
                  //{
                  threads_sigma_contributions[thread_id](folded_jdet_idx, state_idx) += integral * C(folded_idet_idx, state_idx);
                  //}
                }
              }
            }
          }
        }
      }
    }

#pragma omp critical
    sigma += threads_sigma_contributions[thread_id];
  }
  // for (auto i = 0; i < nthreads; i++) {
  //   sigma += threads_sigma_contributions[i];
  // }
}

template <typename T>
void POLYQUANT_DETSET<T>::sigma_one_species_class_two_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                   const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin, int other_idx_part,
                                                                   int other_idx_spin) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  if (idx_part != other_idx_part && idx_part != 0) {
    APP_ABORT("sigma_one_species_class_two_contribution called with mismatching particle types and/or not particle 0.");
  }
  if (idx_spin == other_idx_spin) {
    APP_ABORT("sigma_one_species_class_two_contribution called with same spin idxs, which is inconsistent with class two contributions.");
  }

  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto second_spin_idx = other_idx_spin;
  auto nthreads = omp_get_max_threads();
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> threads_sigma_contributions;
  threads_sigma_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    threads_sigma_contributions[i].resize(this->rows(), C.cols());
    threads_sigma_contributions[i].setZero();
  }
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto idx_I_A_det = 0; idx_I_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_I_A_det++) {
      for (auto idx_I_B_det = 0; idx_I_B_det < this->unique_dets[idx_part][second_spin_idx].size(); idx_I_B_det++) {
        if ((idx_I_A_det + idx_I_B_det) % nthreads != thread_id)
          continue;
        std::vector<int> det_idx(2);
        det_idx[first_spin_idx] = idx_I_A_det;
        det_idx[second_spin_idx] = idx_I_B_det;
        if (this->dets.find(det_idx) != this->dets.end()) {
          // std::set<int> a_excitation_list;
          // this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 1, a_excitation_list);
          // std::sort(a_excitation_list.begin(), a_excitation_list.end());
          // a_excitation_list.erase(std::remove_if(a_excitation_list.begin(), a_excitation_list.end(), [&idx_I_A_det](int x) { return x < idx_I_A_det; }), a_excitation_list.end());
          // auto a_excitation_list_count = 0;
          for (auto idx_J_A_det : unique_singles[idx_part][first_spin_idx][idx_I_A_det]) {
            if (idx_J_A_det < idx_I_A_det) {
              continue;
            }
            // a_excitation_list_count++;
            //  replace this with for (idx_J_A_det in single_excitation(idx_I_A_det))
            //  for (auto idx_J_A_det = idx_I_A_det; idx_J_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_J_A_det++) {
            //  auto num_exec = single_spin_num_excitation(this->unique_dets[idx_part][first_spin_idx][idx_I_A_det], this->unique_dets[idx_part][first_spin_idx][idx_J_A_det]);
            //  if (num_exec != 1) {
            //    continue;
            //  }
            auto folded_det_idx = this->dets.find(det_idx)->second;
            // replace this with for (idx_J_B_det in single_excitation(idx_I_B_det))
            // for (auto idx_J_B_det = idx_I_B_det; idx_J_B_det < this->unique_dets[idx_part][second_spin_idx].size(); idx_J_B_det++) {
            // for (auto idx_J_B_det = 0; idx_J_B_det < this->unique_dets[idx_part][second_spin_idx].size(); idx_J_B_det++) {
            // std::set<int> b_excitation_list;
            // this->get_unique_excitation_list_of_indices(idx_part, second_spin_idx, idx_I_B_det, 1, b_excitation_list);
            // std::sort(b_excitation_list.begin(), b_excitation_list.end());
            //  b_excitation_list.erase(std::remove_if(b_excitation_list.begin(), b_excitation_list.end(), [&idx_I_B_det](int x){return x < idx_I_B_det;}), b_excitation_list.end());
            // auto b_excitation_list_count = 0;
            for (auto idx_J_B_det : unique_singles[idx_part][second_spin_idx][idx_I_B_det]) {
              // b_excitation_list_count++;

              // auto num_exec = single_spin_num_excitation(this->unique_dets[idx_part][second_spin_idx][idx_I_B_det], this->unique_dets[idx_part][second_spin_idx][idx_J_B_det]);
              // if (num_exec != 1) {
              //   continue;
              // }

              std::vector<int> jdet_idx(2);
              jdet_idx[first_spin_idx] = idx_J_A_det;
              jdet_idx[second_spin_idx] = idx_J_B_det;
              if (this->dets.find(jdet_idx) != this->dets.end()) {
                auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
                // auto integral = Slater_Condon(folded_det_idx, folded_jdet_idx);
                auto integral = same_part_ham_double(idx_part, det_idx, jdet_idx);
                if (integral != 0.0) {
                  for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
                    threads_sigma_contributions[thread_id](folded_det_idx, state_idx) += integral * C(folded_jdet_idx, state_idx);
                    threads_sigma_contributions[thread_id](folded_jdet_idx, state_idx) += integral * C(folded_det_idx, state_idx);
                  }
                }
              }
              // instead of JB starting at 0 we could do swaps IAJB JAIB
            }
          }
        }
      }
    }

#pragma omp critical
    sigma += threads_sigma_contributions[thread_id];
  }
  // for (auto i = 0; i < nthreads; i++) {
  //   sigma += threads_sigma_contributions[i];
  // }
}

template <typename T>
void POLYQUANT_DETSET<T>::sigma_one_species(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                            const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {
  // TODO handle idx_J_det == idx_I_det
  // 3 unique terms
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> sigma_contribution;
  sigma_contribution.resize(this->rows(), C.cols());
  sigma_contribution.setZero();
  // Diagonal Contribution
  sigma_one_species_diagonal_contribution(sigma_contribution, C, 0, 0);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Aa Aa
  sigma_one_species_class_one_contribution(sigma_contribution, C, 0, 0);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Ab Ab
  sigma_one_species_class_one_contribution(sigma_contribution, C, 0, 1);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Aa Ab
  sigma_one_species_class_two_contribution(sigma_contribution, C, 0, 0, 0, 1);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
}

template <typename T>
void POLYQUANT_DETSET<T>::sigma_two_species_diagonal_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                  const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  auto second_spin_idx = 1 - idx_spin;
  auto other_idx_part = 1 - idx_part;
  // idx_XXX_A_det - idx_part, first_spin_idx - for example electron alpha
  // idx_XXX_B_det - idx_part, second_spin_idx - for example electron beta
  // idx_XXX_C_det - other_idx_part, first_spin_idx - for example positron alpha
  // idx_XXX_D_det - other_idx_part, second_spin_idx - for example positron beta
  // TODO there are some implicit assumptions about size in the CI portion of the code.
  // For example the SCF can have spin restricted species with spin unrestricted species.
  // It isn't documented or explicitly clear that 2 spins per particle type are always expected to be present.
  auto nthreads = omp_get_max_threads();
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> threads_sigma_contributions;
  threads_sigma_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    threads_sigma_contributions[i].resize(this->rows(), C.cols());
    threads_sigma_contributions[i].setZero();
  }
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto idx_I_A_det = 0; idx_I_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_I_A_det++) {
      for (auto idx_I_B_det = 0; idx_I_B_det < this->unique_dets[idx_part][second_spin_idx].size(); idx_I_B_det++) {
        for (auto idx_I_C_det = 0; idx_I_C_det < this->unique_dets[other_idx_part][first_spin_idx].size(); idx_I_C_det++) {
          for (auto idx_I_D_det = 0; idx_I_D_det < this->unique_dets[other_idx_part][second_spin_idx].size(); idx_I_D_det++) {

            if ((idx_I_A_det + idx_I_B_det + idx_I_C_det + idx_I_D_det) % nthreads != thread_id)
              continue;
            std::vector<int> det_idx(4);
            det_idx[2 * idx_part + first_spin_idx] = idx_I_A_det;
            det_idx[2 * idx_part + second_spin_idx] = idx_I_B_det;
            det_idx[2 * other_idx_part + first_spin_idx] = idx_I_C_det;
            det_idx[2 * other_idx_part + second_spin_idx] = idx_I_D_det;
            if (this->dets.find(det_idx) != this->dets.end()) {
              auto folded_idet_idx = this->dets.find(det_idx)->second;
              // auto integral = Slater_Condon(folded_idet_idx, folded_idet_idx);
              auto integral = diagonal_Hii[folded_idet_idx];
              for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
                threads_sigma_contributions[thread_id](folded_idet_idx, state_idx) += integral * C(folded_idet_idx, state_idx);
              }
            }
          }
        }
      }
    }

#pragma omp critical
    sigma += threads_sigma_contributions[thread_id];
  }
  // for (auto i = 0; i < nthreads; i++) {
  //   sigma += threads_sigma_contributions[i];
  // }
}

template <typename T>
void POLYQUANT_DETSET<T>::sigma_two_species_class_one_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                   const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto second_spin_idx = 1 - idx_spin;
  auto other_idx_part = 1 - idx_part;
  auto nthreads = omp_get_max_threads();
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> threads_sigma_contributions;
  threads_sigma_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    threads_sigma_contributions[i].resize(this->rows(), C.cols());
    threads_sigma_contributions[i].setZero();
  }
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto idx_I_A_det = 0; idx_I_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_I_A_det++) {
      for (auto idx_I_B_det = 0; idx_I_B_det < this->unique_dets[idx_part][second_spin_idx].size(); idx_I_B_det++) {
        for (auto idx_I_C_det = 0; idx_I_C_det < this->unique_dets[other_idx_part][first_spin_idx].size(); idx_I_C_det++) {
          for (auto idx_I_D_det = 0; idx_I_D_det < this->unique_dets[other_idx_part][second_spin_idx].size(); idx_I_D_det++) {
            if ((idx_I_A_det + idx_I_B_det + idx_I_C_det + idx_I_D_det) % nthreads != thread_id)
              continue;
            std::vector<int> det_idx(4);
            det_idx[2 * idx_part + first_spin_idx] = idx_I_A_det;
            det_idx[2 * idx_part + second_spin_idx] = idx_I_B_det;
            det_idx[2 * other_idx_part + first_spin_idx] = idx_I_C_det;
            det_idx[2 * other_idx_part + second_spin_idx] = idx_I_D_det;

            if (this->dets.find(det_idx) != this->dets.end()) {
              auto folded_idet_idx = this->dets.find(det_idx)->second;
              std::vector<int> excitation_list;
              // this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 1, excitation_list);
              // if (this->unique_dets[idx_part][first_spin_idx][0][0] > 1)
              //   this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 2, excitation_list);
              std::set_union(unique_singles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_singles[idx_part][first_spin_idx][idx_I_A_det].end(),
                             unique_doubles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_doubles[idx_part][first_spin_idx][idx_I_A_det].end(), std::back_inserter(excitation_list));
              // std::sort(excitation_list.begin(), excitation_list.end());
              // excitation_list.erase(std::remove_if(excitation_list.begin(), excitation_list.end(), [&idx_I_A_det](int x) { return x < idx_I_A_det; }), excitation_list.end());
              // auto excitation_list_count = 0;
              for (auto idx_J_A_det : excitation_list) {
                // excitation_list_count++;

                // for (auto idx_J_A_det = idx_I_A_det; idx_J_A_det < this->unique_dets[idx_part][first_spin_idx].size(); idx_J_A_det++) {

                if (idx_J_A_det <= idx_I_A_det) {
                  continue;
                }
                std::vector<int> jdet_idx(4);
                jdet_idx[2 * idx_part + first_spin_idx] = idx_J_A_det;
                jdet_idx[2 * idx_part + second_spin_idx] = idx_I_B_det;
                jdet_idx[2 * other_idx_part + first_spin_idx] = idx_I_C_det;
                jdet_idx[2 * other_idx_part + second_spin_idx] = idx_I_D_det;
                if (this->dets.find(jdet_idx) != this->dets.end()) {
                  auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
                  // auto num_exec = single_spin_num_excitation(this->unique_dets[idx_part][first_spin_idx][idx_I_A_det], this->unique_dets[idx_part][first_spin_idx][idx_J_A_det]);
                  auto integral = Slater_Condon(folded_idet_idx, folded_jdet_idx);
                  // auto integral = 0.0;
                  // if (num_exec == 1) {
                  //   integral = same_part_ham_single(idx_part, det_idx, jdet_idx);
                  // } else {
                  //   integral = same_part_ham_double(idx_part, det_idx, jdet_idx);
                  // }
                  if (integral != 0.0) {
                    for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
                      threads_sigma_contributions[thread_id](folded_idet_idx, state_idx) += integral * C(folded_jdet_idx, state_idx);
                      // if (folded_idet_idx != folded_jdet_idx)
                      //{
                      threads_sigma_contributions[thread_id](folded_jdet_idx, state_idx) += integral * C(folded_idet_idx, state_idx);
                      //}
                    }
                  }
                }
              }
            }
          }
        }
      }
    }

#pragma omp critical
    sigma += threads_sigma_contributions[thread_id];
  }
  // for (auto i = 0; i < nthreads; i++) {
  //   sigma += threads_sigma_contributions[i];
  // }
}

template <typename T>
void POLYQUANT_DETSET<T>::sigma_two_species_class_two_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                                   const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin, int other_idx_part,
                                                                   int other_idx_spin) const {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  if ((idx_part == other_idx_part && idx_spin == other_idx_spin)) {
    APP_ABORT("sigma_two_species_class_two_contribution called with same particle and spin idxs, which is inconsistent with two species class two contributions.");
  }

  std::vector<std::pair<int, int>> idx_part_spin = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
  std::pair<int, int> idx_A_part_spin = {idx_part, idx_spin};
  std::pair<int, int> idx_B_part_spin = {other_idx_part, other_idx_spin};
  idx_part_spin.erase(std::remove(idx_part_spin.begin(), idx_part_spin.end(), idx_A_part_spin), idx_part_spin.end());
  idx_part_spin.erase(std::remove(idx_part_spin.begin(), idx_part_spin.end(), idx_B_part_spin), idx_part_spin.end());
  if (idx_part_spin.size() != 2) {
    APP_ABORT("sigma_two_species_class_two_contribution idx_part_spin didn't remove the correct spin/part idx combos.");
  }
  std::pair<int, int> idx_C_part_spin = idx_part_spin.back();
  idx_part_spin.pop_back();
  std::pair<int, int> idx_D_part_spin = idx_part_spin.back();
  idx_part_spin.pop_back();

  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto second_spin_idx = 1 - idx_spin;
  auto nthreads = omp_get_max_threads();
  std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> threads_sigma_contributions;
  threads_sigma_contributions.resize(nthreads);
  for (auto i = 0; i < nthreads; i++) {
    threads_sigma_contributions[i].resize(this->rows(), C.cols());
    threads_sigma_contributions[i].setZero();
  }
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto idx_I_A_det = 0; idx_I_A_det < this->unique_dets[idx_A_part_spin.first][idx_A_part_spin.second].size(); idx_I_A_det++) {
      for (auto idx_I_B_det = 0; idx_I_B_det < this->unique_dets[idx_B_part_spin.first][idx_B_part_spin.second].size(); idx_I_B_det++) {
        for (auto idx_I_C_det = 0; idx_I_C_det < this->unique_dets[idx_C_part_spin.first][idx_C_part_spin.second].size(); idx_I_C_det++) {
          for (auto idx_I_D_det = 0; idx_I_D_det < this->unique_dets[idx_D_part_spin.first][idx_D_part_spin.second].size(); idx_I_D_det++) {
            if ((idx_I_A_det + idx_I_B_det + idx_I_C_det + idx_I_D_det) % nthreads != thread_id)
              continue;
            std::vector<int> det_idx(4);
            det_idx[2 * idx_A_part_spin.first + idx_A_part_spin.second] = idx_I_A_det;
            det_idx[2 * idx_B_part_spin.first + idx_B_part_spin.second] = idx_I_B_det;
            det_idx[2 * idx_C_part_spin.first + idx_C_part_spin.second] = idx_I_C_det;
            det_idx[2 * idx_D_part_spin.first + idx_D_part_spin.second] = idx_I_D_det;
            if (this->dets.find(det_idx) != this->dets.end()) {
              // std::set<int> a_excitation_list;
              // this->get_unique_excitation_list_of_indices(idx_A_part_spin.first, idx_A_part_spin.second, idx_I_A_det, 1, a_excitation_list);
              // std::sort(a_excitation_list.begin(), a_excitation_list.end());
              // a_excitation_list.erase(std::remove_if(a_excitation_list.begin(), a_excitation_list.end(), [&idx_I_A_det](int x) { return x < idx_I_A_det; }), a_excitation_list.end());
              // auto a_excitation_list_count = 0;
              for (auto idx_J_A_det : unique_singles[idx_A_part_spin.first][idx_A_part_spin.second][idx_I_A_det]) {
                if (idx_J_A_det < idx_I_A_det) {
                  continue;
                }
                // a_excitation_list_count++;
                //  for (auto idx_J_A_det = idx_I_A_det; idx_J_A_det < this->unique_dets[idx_A_part_spin.first][idx_A_part_spin.second].size(); idx_J_A_det++) {
                //   auto num_exec =
                //       single_spin_num_excitation(this->unique_dets[idx_A_part_spin.first][idx_A_part_spin.second][idx_I_A_det],
                //       this->unique_dets[idx_A_part_spin.first][idx_A_part_spin.second][idx_J_A_det]);
                //   if (num_exec != 1) {
                //     continue;
                //   }
                //  for (auto idx_J_B_det = idx_I_B_det; idx_J_B_det < this->unique_dets[idx_B_part_spin.first][idx_B_part_spin.second].size(); idx_J_B_det++) {
                //  for (auto idx_J_B_det = 0; idx_J_B_det < this->unique_dets[idx_B_part_spin.first][idx_B_part_spin.second].size(); idx_J_B_det++) {
                // std::set<int> b_excitation_list;
                // this->get_unique_excitation_list_of_indices(idx_B_part_spin.first, idx_B_part_spin.second, idx_I_B_det, 1, b_excitation_list);
                // std::sort(b_excitation_list.begin(), b_excitation_list.end());
                //  b_excitation_list.erase(std::remove_if(b_excitation_list.begin(), b_excitation_list.end(), [&idx_I_B_det](int x){return x < idx_I_B_det;}), b_excitation_list.end());
                // auto b_excitation_list_count = 0;
                for (auto idx_J_B_det : unique_singles[idx_B_part_spin.first][idx_B_part_spin.second][idx_I_B_det]) {
                  // b_excitation_list_count++;

                  // auto num_exec = single_spin_num_excitation(this->unique_dets[idx_B_part_spin.first][idx_B_part_spin.second][idx_I_B_det],
                  //                                            this->unique_dets[idx_B_part_spin.first][idx_B_part_spin.second][idx_J_B_det]);
                  // if (num_exec != 1) {
                  //   continue;
                  // }

                  auto folded_det_idx = this->dets.find(det_idx)->second;
                  std::vector<int> jdet_idx(4);
                  jdet_idx[2 * idx_A_part_spin.first + idx_A_part_spin.second] = idx_J_A_det;
                  jdet_idx[2 * idx_B_part_spin.first + idx_B_part_spin.second] = idx_J_B_det;
                  jdet_idx[2 * idx_C_part_spin.first + idx_C_part_spin.second] = idx_I_C_det;
                  jdet_idx[2 * idx_D_part_spin.first + idx_D_part_spin.second] = idx_I_D_det;
                  if (this->dets.find(jdet_idx) != this->dets.end()) {
                    auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
                    auto integral = Slater_Condon(folded_det_idx, folded_jdet_idx);
                    for (auto state_idx = 0; state_idx < C.cols(); state_idx++) {
                      threads_sigma_contributions[thread_id](folded_det_idx, state_idx) += integral * C(folded_jdet_idx, state_idx);
                      threads_sigma_contributions[thread_id](folded_jdet_idx, state_idx) += integral * C(folded_det_idx, state_idx);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }

#pragma omp critical
    sigma += threads_sigma_contributions[thread_id];
  }
  // for (auto i = 0; i < nthreads; i++) {
  //   sigma += threads_sigma_contributions[i];
  // }
}

template <typename T>
void POLYQUANT_DETSET<T>::sigma_two_species(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                            const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {
  // TODO handle idx_J_det == idx_I_det
  // 3 unique terms
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> sigma_contribution;
  sigma_contribution.resize(this->rows(), C.cols());
  sigma_contribution.setZero();
  // Diagonal Contribution
  sigma_two_species_diagonal_contribution(sigma_contribution, C, 0, 0);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Four class one contributions
  // Aa Aa
  sigma_two_species_class_one_contribution(sigma_contribution, C, 0, 0);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Ab Ab
  sigma_two_species_class_one_contribution(sigma_contribution, C, 0, 1);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Ba Ba
  sigma_two_species_class_one_contribution(sigma_contribution, C, 1, 0);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Bb Bb
  sigma_two_species_class_one_contribution(sigma_contribution, C, 1, 1);
  sigma += sigma_contribution;
  sigma_contribution.setZero();

  // Aa Ab
  sigma_two_species_class_two_contribution(sigma_contribution, C, 0, 0, 0, 1);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Aa Ba
  sigma_two_species_class_two_contribution(sigma_contribution, C, 0, 0, 1, 0);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Aa Bb
  sigma_two_species_class_two_contribution(sigma_contribution, C, 0, 0, 1, 1);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Ab Ba
  sigma_two_species_class_two_contribution(sigma_contribution, C, 0, 1, 1, 0);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Ab Bb
  sigma_two_species_class_two_contribution(sigma_contribution, C, 0, 1, 1, 1);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
  // Ba Bb
  sigma_two_species_class_two_contribution(sigma_contribution, C, 1, 0, 1, 1);
  sigma += sigma_contribution;
  sigma_contribution.setZero();
}

template <typename T>
void POLYQUANT_DETSET<T>::create_sigma(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                       const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {
  auto num_parts = this->input_integral.input_molecule.quantum_particles.size();
  if (num_parts == 1) {
    sigma_one_species(sigma, C);
  } else if (num_parts == 2) {
    sigma_two_species(sigma, C);
  } else {
    std::stringstream ss;
    ss << "Sigma vector building not supported for " << num_parts << " unique quantum particles." << std::endl;
    APP_ABORT(ss.str());
  }
}

template <typename T>
void POLYQUANT_DETSET<T>::create_sigma_slow(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                            const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {
  // Cij = Aik Bkj
  for (auto i = 0; i < this->N_dets; i++) {
    for (auto j = 0; j < C.cols(); j++) {
      auto reduced_val = 0.0;
#pragma omp parallel for reduction(+ : reduced_val)
      for (auto k = 0; k < this->N_dets; k++) {
        reduced_val += this->Slater_Condon(i, k) * C(k, j);
      }
      sigma(i, j) = reduced_val;
    }
  }
}

template <typename T>
void POLYQUANT_DETSET<T>::create_1rdm(const int state_idx, const int quantum_part_idx, const int quantum_part_spin_idx, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &MO_rdm1,
                                      const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {
  // General idea with minor changes (mainly in diagonal): https://arxiv.org/abs/1311.6244
  // T buffer;
  auto nthreads = omp_get_max_threads();
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
        MO_rdm1_thread_contributions[thread_id](orb_idx, orb_idx) += C(i_det, state_idx) * C(i_det, state_idx);
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
          // calculate over all excitation level
          // auto num_ex = 0;
          // auto num_parts = this->input_integral.input_molecule.quantum_particles.size();
          // for (int excitation_quantum_part_idx = 0; excitation_quantum_part_idx < num_parts; excitation_quantum_part_idx++) {
          //   auto idx_idet_spin0 = i_unfold[2 * excitation_quantum_part_idx + (quantum_part_spin_idx)];
          //   auto idx_idet_spin1 = i_unfold[2 * excitation_quantum_part_idx + (1 - quantum_part_spin_idx)];
          //   auto idx_jdet_spin0 = j_unfold[2 * excitation_quantum_part_idx + (quantum_part_spin_idx)];
          //   auto idx_jdet_spin1 = j_unfold[2 * excitation_quantum_part_idx + (1 - quantum_part_spin_idx)];
          //   auto Di_spin0 = this->get_det(excitation_quantum_part_idx, quantum_part_spin_idx, idx_idet_spin0);
          //   auto Dj_spin0 = this->get_det(excitation_quantum_part_idx, quantum_part_spin_idx, idx_jdet_spin0);
          //   auto Di_spin1 = this->get_det(excitation_quantum_part_idx, 1 - quantum_part_spin_idx, idx_idet_spin1);
          //   auto Dj_spin1 = this->get_det(excitation_quantum_part_idx, 1 - quantum_part_spin_idx, idx_jdet_spin1);
          //   auto det_i = std::make_pair(Di_spin0, Di_spin1);
          //   auto det_j = std::make_pair(Dj_spin0, Dj_spin1);
          //   num_ex += this->num_excitation(det_i, det_j);
          // }
          // if (num_ex != 1) {
          //   continue;
          // }
          std::vector<int> holes, parts;
          double phase = 1.0;
          holes.clear();
          parts.clear();
          get_holes(Di, Dj, holes);
          get_parts(Di, Dj, parts);
          phase = get_phase(Di, Dj, holes, parts);
          auto contribution = phase * C(i_det, state_idx) * C(j_det, state_idx);
          // maybe contribution *= 2;
          auto k = holes[0];
          auto l = parts[0];
          MO_rdm1_thread_contributions[thread_id](k, l) += contribution;
          MO_rdm1_thread_contributions[thread_id](l, k) += contribution;
        }
      }
    }

#pragma omp critical
    MO_rdm1 += MO_rdm1_thread_contributions[thread_id];
  }
  // for (auto i = 0; i < nthreads; i++) {
  //   MO_rdm1 += MO_rdm1_thread_contributions[i];
  // }
}

template <typename T>
Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> POLYQUANT_DETSET<T>::operator*(const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &mat_in) const {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> output;
  output.resize(this->rows(), mat_in.cols());
  output.setZero();
  if (slow_diag == true) {
    Polyquant_cout("Using slow sigma");
    create_sigma_slow(output, mat_in);
  } else {
    create_sigma(output, mat_in);
  }
  return output;
}

// template <typename T>
// Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> POLYQUANT_DETSET<T>::operator*(const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &mat_in) const {
//   auto function = __PRETTY_FUNCTION__;
//   POLYQUANT_TIMER timer(function);
//   Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> output;
//   output.resize(this->rows(), mat_in.cols());
//   output.setZero();
//   // Cij = Aik Bkj
//   for (auto i = 0; i < this->N_dets; i++) {
//     for (auto j = 0; j < mat_in.cols(); j++) {
//       auto reduced_val = 0.0;
//#pragma omp parallel for reduction(+ : reduced_val)
//       for (auto k = 0; k < this->N_dets; k++) {
//         reduced_val += this->Slater_Condon(i, k) * mat_in(k, j);
//       }
//       output(i, j) = reduced_val;
//     }
//   }
//   return output;
// }
template <typename T> void POLYQUANT_DETSET<T>::create_ham_diagonal(int idx_part, int idx_spin) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto nthreads = omp_get_max_threads();
  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  triplet_list_threads.resize(nthreads);
  ham_threads.resize(nthreads);
#pragma omp parallel
  {
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      if (i_det % nthreads != thread_id) {
        continue;
      }
      triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(i_det, i_det, diagonal_Hii[i_det]));
    }
    ham_threads[thread_id].resize(this->N_dets, this->estimate_n_interacting_dets);
    ham_threads[thread_id].reserve(triplet_list_threads[thread_id].size());
    ham_threads[thread_id].setFromTriplets(triplet_list_threads[thread_id].begin(), triplet_list_threads[thread_id].end());

#pragma omp critical
    ham += ham_threads[thread_id];
  }
  // for (auto thread_id = 0; thread_id < nthreads; thread_id++) {
  //   ham += ham_threads[thread_id];
  //   // std::cout << triplet_list_threads[thread_id].size() << std::endl;
  //   // for (auto trip_elem : triplet_list_threads[thread_id]) {
  //   //   std::cout << diagonal_Hii.size() << "                     " << trip_elem.row() << "    " << trip_elem.col() << "                " << trip_elem.value() << std::endl;
  //   //   ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //   // }
  // }
  // #pragma omp parallel
  //   {
  //     auto thread_id = omp_get_thread_num();
  //     for (auto t_idx = 0; t_idx < nthreads; t_idx++) {
  //       for (auto trip_elem : triplet_list_threads[t_idx]) {
  //         auto row_idx = trip_elem.row();
  //         if (row_idx % nthreads == thread_id) {
  //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //         }
  //       }
  //     }
  //   }
}
template <typename T> void POLYQUANT_DETSET<T>::single_species_create_ham_class_one(int idx_part, int idx_spin) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto second_spin_idx = 1 - idx_spin;
  auto nthreads = omp_get_max_threads();
  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  triplet_list_threads.resize(nthreads);
  ham_threads.resize(nthreads);

#pragma omp parallel
  {
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      if (i_det % nthreads != thread_id) {
        continue;
      }

      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[first_spin_idx];
      auto idx_I_B_det = idet_unfold[second_spin_idx];
      std::vector<int> excitation_list;
      // this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 1, excitation_list);
      // // do we have enough particles to do a double excitation?
      // if (this->unique_dets[idx_part][first_spin_idx][0][0] > 1)
      //   this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 2, excitation_list);
      std::set_union(unique_singles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_singles[idx_part][first_spin_idx][idx_I_A_det].end(),
                     unique_doubles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_doubles[idx_part][first_spin_idx][idx_I_A_det].end(), std::back_inserter(excitation_list));
      for (auto idx_J_A_det : excitation_list) {
        if (idx_J_A_det <= idx_I_A_det) {
          continue;
        }
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_J_A_det;
        jdet_idx[second_spin_idx] = idx_I_B_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto num_exec = single_spin_num_excitation(this->unique_dets[idx_part][first_spin_idx][idx_I_A_det], this->unique_dets[idx_part][first_spin_idx][idx_J_A_det]);
          auto integral = 0.0;
          if (num_exec == 1) {
            integral = same_part_ham_single(idx_part, idet_unfold, jdet_idx);
          } else {
            integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
          }
          if (integral != 0.0) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            // std::cout << i_det << " " << folded_jdet_idx << "  " << "             a" << integral << std::endl;
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            // triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(folded_jdet_idx, i_det, integral));
          }
        }
      }
      ham_threads[thread_id].resize(this->N_dets, this->estimate_n_interacting_dets);
      ham_threads[thread_id].reserve(triplet_list_threads[thread_id].size());
      ham_threads[thread_id].setFromTriplets(triplet_list_threads[thread_id].begin(), triplet_list_threads[thread_id].end());

#pragma omp critical
      ham += ham_threads[thread_id];
    }
  }
  //   for (auto thread_id = 0; thread_id < nthreads; thread_id++) {
  //     ham += ham_threads[thread_id];
  //   }
  // {
  //   auto thread_id = omp_get_thread_num();
  //   for (auto t_idx = 0; t_idx < nthreads; t_idx++) {
  //     for (auto trip_elem : triplet_list_threads[t_idx]) {
  //       auto row_idx = trip_elem.row();
  //       if (row_idx % nthreads == thread_id) {
  //       ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //       }
  //     }
  //   }
  // }
}
template <typename T> void POLYQUANT_DETSET<T>::single_species_create_ham_class_two(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin) {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  if (idx_part != other_idx_part && idx_part != 0) {
    APP_ABORT("single_species_create_ham_class_two called with mismatching particle types and/or not particle 0.");
  }
  if (idx_spin == other_idx_spin) {
    APP_ABORT("single_species_create_ham_class_two called with same spin idxs, which is inconsistent with class two contributions.");
  }

  auto first_spin_idx = idx_spin;
  auto second_spin_idx = other_idx_spin;
  auto nthreads = omp_get_max_threads();
  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  triplet_list_threads.resize(nthreads);
  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  ham_threads.resize(nthreads);
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[first_spin_idx];
      auto idx_I_B_det = idet_unfold[second_spin_idx];

      if (i_det % nthreads != thread_id) {
        continue;
      }
      // std::set<int> a_excitation_list;
      // this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 1, a_excitation_list);
      for (auto idx_J_A_det : unique_singles[idx_part][first_spin_idx][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        // std::set<int> b_excitation_list;
        // this->get_unique_excitation_list_of_indices(idx_part, second_spin_idx, idx_I_B_det, 1, b_excitation_list);
        for (auto idx_J_B_det : unique_singles[idx_part][second_spin_idx][idx_I_B_det]) {
          std::vector<int> jdet_idx(2);
          jdet_idx[first_spin_idx] = idx_J_A_det;
          jdet_idx[second_spin_idx] = idx_J_B_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
            if (integral != 0.0) {

              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
              // triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(folded_jdet_idx, i_det, integral));
            }
          }
        }
      }
    }
    ham_threads[thread_id].resize(this->N_dets, this->estimate_n_interacting_dets);
    ham_threads[thread_id].reserve(triplet_list_threads[thread_id].size());
    ham_threads[thread_id].setFromTriplets(triplet_list_threads[thread_id].begin(), triplet_list_threads[thread_id].end());
#pragma omp critical
    ham += ham_threads[thread_id];
  }

  //   for (auto thread_id = 0; thread_id < nthreads; thread_id++) {
  //     ham += ham_threads[thread_id];
  //   }

  // #pragma omp parallel
  //   {
  //     int nthreads = omp_get_num_threads();
  //     auto thread_id = omp_get_thread_num();
  //     for (auto t_idx = 0; t_idx < nthreads; t_idx++) {
  //       for (auto trip_elem : triplet_list_threads[t_idx]) {
  //         auto row_idx = trip_elem.row();
  //         if (row_idx % nthreads == thread_id) {
  //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //         }
  //       }
  //     }
  //   }

  // for (auto thread_id = 0; thread_id < nthreads; thread_id++){
  //     std::cout << triplet_list_threads[thread_id].size() << std::endl;
  //     for (auto trip_elem : triplet_list_threads[thread_id]){
  //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //     }
  // }
}

template <typename T> void POLYQUANT_DETSET<T>::single_species_create_ham_singleshot(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin) {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  auto first_spin_idx = idx_spin;
  auto second_spin_idx = other_idx_spin;

  auto nthreads = omp_get_max_threads();

  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  triplet_list_threads.resize(nthreads);

  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  ham_threads.resize(nthreads);

#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();

    for (auto i_det = 0; i_det < this->N_dets; i_det++) {

      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[first_spin_idx];
      auto idx_I_B_det = idet_unfold[second_spin_idx];

      if (i_det % nthreads != thread_id) {
        continue;
      }
      // diagonal
      triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(i_det, i_det, diagonal_Hii[i_det]));
      // loop over connected singles alpha
      for (auto idx_J_A_det : unique_singles[idx_part][first_spin_idx][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        // alpha single
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_J_A_det;
        jdet_idx[second_spin_idx] = idx_I_B_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto integral = same_part_ham_single(idx_part, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }

        // loop over connected beta excitations for a connected double excitation
        for (auto idx_J_B_det : unique_singles[idx_part][second_spin_idx][idx_I_B_det]) {
          std::vector<int> jdet_idx(2);
          jdet_idx[first_spin_idx] = idx_J_A_det;
          jdet_idx[second_spin_idx] = idx_J_B_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
            if (integral != 0.0) {

              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
              // triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(folded_jdet_idx, i_det, integral));
            }
          }
        }
      }

      for (auto idx_J_B_det : unique_singles[idx_part][second_spin_idx][idx_I_B_det]) {
        if (idx_J_B_det < idx_I_B_det) {
          continue;
        }
        // beta singles
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_I_A_det;
        jdet_idx[second_spin_idx] = idx_J_B_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto integral = same_part_ham_single(idx_part, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }

      // loop over alpha double excitations
      for (auto idx_J_A_det : unique_doubles[idx_part][first_spin_idx][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        // alpha double
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_J_A_det;
        jdet_idx[second_spin_idx] = idx_I_B_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }
      // loop over beta double excitations
      for (auto idx_J_B_det : unique_doubles[idx_part][second_spin_idx][idx_I_B_det]) {
        if (idx_J_B_det < idx_I_B_det) {
          continue;
        }
        // alpha double
        std::vector<int> jdet_idx(2);
        jdet_idx[first_spin_idx] = idx_I_A_det;
        jdet_idx[second_spin_idx] = idx_J_B_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto integral = same_part_ham_double(idx_part, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }

      ham_threads[thread_id].resize(this->N_dets, this->estimate_n_interacting_dets);
      ham_threads[thread_id].reserve(triplet_list_threads[thread_id].size());
      ham_threads[thread_id].setFromTriplets(triplet_list_threads[thread_id].begin(), triplet_list_threads[thread_id].end());
      // release memory from the processed triplet list!
      triplet_list_threads[thread_id] = std::vector<Eigen::Triplet<double>>();
      {
#pragma omp critical
        ham += ham_threads[thread_id];
      }
    }

    // for (auto thread_id = 0; thread_id < nthreads; thread_id++) {
    //   ham += ham_threads[thread_id];
    // }

    // #pragma omp parallel
    //   {
    //     int nthreads = omp_get_num_threads();
    //     auto thread_id = omp_get_thread_num();
    //     for (auto t_idx = 0; t_idx < nthreads; t_idx++) {
    //       for (auto trip_elem : triplet_list_threads[t_idx]) {
    //         auto row_idx = trip_elem.row();
    //         if (row_idx % nthreads == thread_id) {
    //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
    //         }
    //       }
    //     }
    //   }

    // for (auto thread_id = 0; thread_id < nthreads; thread_id++){
    //     std::cout << triplet_list_threads[thread_id].size() << std::endl;
    //     for (auto trip_elem : triplet_list_threads[thread_id]){
    //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
    //     }
    // }
  }
}

template <typename T> void POLYQUANT_DETSET<T>::single_species_create_ham() {
  // // diagonal
  // create_ham_diagonal(0, 0);
  // // alpha alpha
  // single_species_create_ham_class_one(0, 0);
  // // beta beta
  // single_species_create_ham_class_one(0, 1);
  // // mixed alpha beta
  // single_species_create_ham_class_two(0, 0, 0, 1);
  single_species_create_ham_singleshot(0, 0, 0, 1);
}

template <typename T> void POLYQUANT_DETSET<T>::two_species_create_ham_class_one(int idx_part, int idx_spin) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto nthreads = omp_get_max_threads();
  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  triplet_list_threads.resize(nthreads);
  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  ham_threads.resize(nthreads);

  auto second_spin_idx = 1 - idx_spin;
  auto other_idx_part = 1 - idx_part;

#pragma omp parallel
  {
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      if (i_det % nthreads != thread_id) {
        continue;
      }
      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[2 * idx_part + first_spin_idx];
      auto idx_I_B_det = idet_unfold[2 * idx_part + second_spin_idx];
      auto idx_I_C_det = idet_unfold[2 * other_idx_part + first_spin_idx];
      auto idx_I_D_det = idet_unfold[2 * other_idx_part + second_spin_idx];
      std::vector<int> excitation_list;
      // this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 1, excitation_list);
      // if (this->unique_dets[idx_part][first_spin_idx][0][0] > 1)
      //   this->get_unique_excitation_list_of_indices(idx_part, first_spin_idx, idx_I_A_det, 2, excitation_list);
      std::set_union(unique_singles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_singles[idx_part][first_spin_idx][idx_I_A_det].end(),
                     unique_doubles[idx_part][first_spin_idx][idx_I_A_det].begin(), unique_doubles[idx_part][first_spin_idx][idx_I_A_det].end(), std::back_inserter(excitation_list));
      for (auto idx_J_A_det : excitation_list) {
        if (idx_J_A_det <= idx_I_A_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * idx_part + first_spin_idx] = idx_J_A_det;
        jdet_idx[2 * idx_part + second_spin_idx] = idx_I_B_det;
        jdet_idx[2 * other_idx_part + first_spin_idx] = idx_I_C_det;
        jdet_idx[2 * other_idx_part + second_spin_idx] = idx_I_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          auto integral = Slater_Condon(i_det, folded_jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            // triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(folded_jdet_idx, i_det, integral));
          }
        }
      }
    }
    ham_threads[thread_id].resize(this->N_dets, this->estimate_n_interacting_dets);
    ham_threads[thread_id].reserve(triplet_list_threads[thread_id].size());
    ham_threads[thread_id].setFromTriplets(triplet_list_threads[thread_id].begin(), triplet_list_threads[thread_id].end());

#pragma omp critical
    ham += ham_threads[thread_id];
  }

  // for (auto thread_id = 0; thread_id < nthreads; thread_id++) {
  //   ham += ham_threads[thread_id];
  // }

  // #pragma omp parallel
  //   {
  //     auto thread_id = omp_get_thread_num();
  //     for (auto t_idx = 0; t_idx < nthreads; t_idx++) {
  //       for (auto trip_elem : triplet_list_threads[t_idx]) {
  //         auto row_idx = trip_elem.row();
  //         if (row_idx % nthreads == thread_id) {
  //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //         }
  //       }
  //     }
  //   }

  // for (auto thread_id = 0; thread_id < nthreads; thread_id++){
  //     std::cout << triplet_list_threads[thread_id].size() << std::endl;
  //     for (auto trip_elem : triplet_list_threads[thread_id]){
  //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //     }
  // }
}

template <typename T> void POLYQUANT_DETSET<T>::two_species_create_ham_class_two(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin) {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  if ((idx_part == other_idx_part && idx_spin == other_idx_spin)) {
    APP_ABORT("two_species_create_ham_class_two called with same particle and spin idxs, which is inconsistent with two species class two contributions.");
  }

  std::vector<std::pair<int, int>> idx_part_spin = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
  std::pair<int, int> idx_A_part_spin = {idx_part, idx_spin};
  std::pair<int, int> idx_B_part_spin = {other_idx_part, other_idx_spin};
  idx_part_spin.erase(std::remove(idx_part_spin.begin(), idx_part_spin.end(), idx_A_part_spin), idx_part_spin.end());
  idx_part_spin.erase(std::remove(idx_part_spin.begin(), idx_part_spin.end(), idx_B_part_spin), idx_part_spin.end());
  if (idx_part_spin.size() != 2) {
    APP_ABORT("two_species_create_ham_class_two idx_part_spin didn't remove the correct spin/part idx combos.");
  }
  std::pair<int, int> idx_C_part_spin = idx_part_spin.back();
  idx_part_spin.pop_back();
  std::pair<int, int> idx_D_part_spin = idx_part_spin.back();
  idx_part_spin.pop_back();

  auto first_spin_idx = idx_spin;
  // auto second_spin_idx = idx_spin - 1 % this->input_integral.mo_one_body_ints[idx_part].size();
  auto second_spin_idx = 1 - idx_spin;
  auto nthreads = omp_get_max_threads();
  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  triplet_list_threads.resize(nthreads);
  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  ham_threads.resize(nthreads);
#pragma omp parallel
  {
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      if (i_det % nthreads != thread_id) {
        continue;
      }
      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[2 * idx_A_part_spin.first + idx_A_part_spin.second];
      auto idx_I_B_det = idet_unfold[2 * idx_B_part_spin.first + idx_B_part_spin.second];
      auto idx_I_C_det = idet_unfold[2 * idx_C_part_spin.first + idx_C_part_spin.second];
      auto idx_I_D_det = idet_unfold[2 * idx_D_part_spin.first + idx_D_part_spin.second];

      // std::set<int> a_excitation_list;
      // this->get_unique_excitation_list_of_indices(idx_A_part_spin.first, idx_A_part_spin.second, idx_I_A_det, 1, a_excitation_list);
      for (auto idx_J_A_det : unique_singles[idx_A_part_spin.first][idx_A_part_spin.second][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        // std::set<int> b_excitation_list;
        // this->get_unique_excitation_list_of_indices(idx_B_part_spin.first, idx_B_part_spin.second, idx_I_B_det, 1, b_excitation_list);
        for (auto idx_J_B_det : unique_singles[idx_B_part_spin.first][idx_B_part_spin.second][idx_I_B_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * idx_A_part_spin.first + idx_A_part_spin.second] = idx_J_A_det;
          jdet_idx[2 * idx_B_part_spin.first + idx_B_part_spin.second] = idx_J_B_det;
          jdet_idx[2 * idx_C_part_spin.first + idx_C_part_spin.second] = idx_I_C_det;
          jdet_idx[2 * idx_D_part_spin.first + idx_D_part_spin.second] = idx_I_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            auto integral = Slater_Condon(i_det, folded_jdet_idx);
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            }
            // triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(folded_jdet_idx, i_det, integral));
          }
        }
      }
    }
    ham_threads[thread_id].resize(this->N_dets, this->estimate_n_interacting_dets);
    ham_threads[thread_id].reserve(triplet_list_threads[thread_id].size());
    ham_threads[thread_id].setFromTriplets(triplet_list_threads[thread_id].begin(), triplet_list_threads[thread_id].end());
#pragma omp critical
    ham += ham_threads[thread_id];
  }
  // for (auto thread_id = 0; thread_id < nthreads; thread_id++) {
  //   ham += ham_threads[thread_id];
  // }
  // #pragma omp parallel
  //   {
  //     auto thread_id = omp_get_thread_num();
  //     for (auto t_idx = 0; t_idx < nthreads; t_idx++) {
  //       for (auto trip_elem : triplet_list_threads[t_idx]) {
  //         auto row_idx = trip_elem.row();
  //         if (row_idx % nthreads == thread_id) {
  //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //         }
  //       }
  //     }
  //   }
  // for (auto thread_id = 0; thread_id < nthreads; thread_id++){
  //     std::cout << triplet_list_threads[thread_id].size() << std::endl;
  //     for (auto trip_elem : triplet_list_threads[thread_id]){
  //         ham.coeffRef(trip_elem.row(), trip_elem.col()) += trip_elem.value();
  //     }
  // }
}

template <typename T> void POLYQUANT_DETSET<T>::two_species_create_ham_singleshot() {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);

  auto nthreads = omp_get_max_threads();

  std::vector<std::vector<Eigen::Triplet<double>>> triplet_list_threads;
  triplet_list_threads.resize(nthreads);

  std::vector<Eigen::SparseMatrix<double, Eigen::RowMajor>> ham_threads;
  ham_threads.resize(nthreads);

  auto quantum_part = (this->input_integral.input_molecule.quantum_particles.begin())->second;
  auto other_quantum_part = (++this->input_integral.input_molecule.quantum_particles.begin())->second;
  auto charge_factor = quantum_part.charge * other_quantum_part.charge;
#pragma omp parallel
  {
    auto thread_id = omp_get_thread_num();
    for (auto i_det = 0; i_det < this->N_dets; i_det++) {
      if (i_det % nthreads != thread_id) {
        continue;
      }
      auto idet_unfold = det_idx_unfold(i_det);
      auto idx_I_A_det = idet_unfold[2 * 0 + 0];
      auto idx_I_B_det = idet_unfold[2 * 0 + 1];
      auto idx_I_C_det = idet_unfold[2 * 1 + 0];
      auto idx_I_D_det = idet_unfold[2 * 1 + 1];

      // diagonal
      triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(i_det, i_det, diagonal_Hii[i_det]));
      // part 0 spin 0 singles
      for (auto idx_J_A_det : unique_singles[0][0][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_J_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_single(0, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
        // A+B doubles
        for (auto idx_J_B_det : unique_singles[0][1][idx_I_B_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * 0 + 0] = idx_J_A_det;
          jdet_idx[2 * 0 + 1] = idx_J_B_det;
          jdet_idx[2 * 1 + 0] = idx_I_C_det;
          jdet_idx[2 * 1 + 1] = idx_I_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            // auto integral = Slater_Condon(i_det, folded_jdet_idx);
            auto integral = 0.0;
            integral += same_part_ham_double(0, idet_unfold, jdet_idx);
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            }
            // triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(folded_jdet_idx, i_det, integral));
          }
        }
        // A+C doubles
        for (auto idx_J_C_det : unique_singles[1][0][idx_I_C_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * 0 + 0] = idx_J_A_det;
          jdet_idx[2 * 0 + 1] = idx_I_B_det;
          jdet_idx[2 * 1 + 0] = idx_J_C_det;
          jdet_idx[2 * 1 + 1] = idx_I_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            // auto integral = Slater_Condon(i_det, folded_jdet_idx);
            auto integral = 0.0;
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            }
          }
        }
        // A+D doubles
        for (auto idx_J_D_det : unique_singles[1][1][idx_I_D_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * 0 + 0] = idx_J_A_det;
          jdet_idx[2 * 0 + 1] = idx_I_B_det;
          jdet_idx[2 * 1 + 0] = idx_I_C_det;
          jdet_idx[2 * 1 + 1] = idx_J_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            // auto integral = Slater_Condon(i_det, folded_jdet_idx);
            auto integral = 0.0;
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            }
          }
        }
      }
      // B singles
      for (auto idx_J_B_det : unique_singles[0][1][idx_I_B_det]) {
        if (idx_J_B_det < idx_I_B_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_J_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_single(0, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
        // B+C doubles
        for (auto idx_J_C_det : unique_singles[1][0][idx_I_C_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * 0 + 0] = idx_I_A_det;
          jdet_idx[2 * 0 + 1] = idx_J_B_det;
          jdet_idx[2 * 1 + 0] = idx_J_C_det;
          jdet_idx[2 * 1 + 1] = idx_I_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            // auto integral = Slater_Condon(i_det, folded_jdet_idx);
            auto integral = 0.0;
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            }
          }
        }
        // B+D doubles
        for (auto idx_J_D_det : unique_singles[1][1][idx_I_D_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * 0 + 0] = idx_I_A_det;
          jdet_idx[2 * 0 + 1] = idx_J_B_det;
          jdet_idx[2 * 1 + 0] = idx_I_C_det;
          jdet_idx[2 * 1 + 1] = idx_J_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            // auto integral = Slater_Condon(i_det, folded_jdet_idx);
            auto integral = 0.0;
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            }
          }
        }
      }
      // C singles
      for (auto idx_J_C_det : unique_singles[1][0][idx_I_C_det]) {
        if (idx_J_C_det < idx_I_C_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_J_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_single(1, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
        // C+D doubles
        for (auto idx_J_D_det : unique_singles[1][1][idx_I_D_det]) {
          std::vector<int> jdet_idx(4);
          jdet_idx[2 * 0 + 0] = idx_I_A_det;
          jdet_idx[2 * 0 + 1] = idx_I_B_det;
          jdet_idx[2 * 1 + 0] = idx_J_C_det;
          jdet_idx[2 * 1 + 1] = idx_J_D_det;
          if (this->dets.find(jdet_idx) != this->dets.end()) {
            auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
            // auto integral = Slater_Condon(i_det, folded_jdet_idx);
            auto integral = 0.0;
            integral += same_part_ham_double(1, idet_unfold, jdet_idx);
            integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
            if (integral != 0) {
              auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
              auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
              triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
            }
          }
        }
      }
      // D singles
      for (auto idx_J_D_det : unique_singles[1][1][idx_I_D_det]) {
        if (idx_J_D_det < idx_I_D_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_J_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_single(1, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_single(0, 1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }
      // A doubles
      for (auto idx_J_A_det : unique_doubles[0][0][idx_I_A_det]) {
        if (idx_J_A_det < idx_I_A_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_J_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_double(0, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }
      // B doubles
      for (auto idx_J_B_det : unique_doubles[0][1][idx_I_B_det]) {
        if (idx_J_B_det < idx_I_B_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_J_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_double(0, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }
      // C doubles
      for (auto idx_J_C_det : unique_doubles[1][0][idx_I_C_det]) {
        if (idx_J_C_det < idx_I_C_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_J_C_det;
        jdet_idx[2 * 1 + 1] = idx_I_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_double(1, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }
      // D doubles
      for (auto idx_J_D_det : unique_doubles[1][1][idx_I_D_det]) {
        if (idx_J_D_det < idx_I_D_det) {
          continue;
        }
        std::vector<int> jdet_idx(4);
        jdet_idx[2 * 0 + 0] = idx_I_A_det;
        jdet_idx[2 * 0 + 1] = idx_I_B_det;
        jdet_idx[2 * 1 + 0] = idx_I_C_det;
        jdet_idx[2 * 1 + 1] = idx_J_D_det;
        if (this->dets.find(jdet_idx) != this->dets.end()) {
          auto folded_jdet_idx = this->dets.find(jdet_idx)->second;
          // auto integral = Slater_Condon(i_det, folded_jdet_idx);
          auto integral = 0.0;
          integral += same_part_ham_double(1, idet_unfold, jdet_idx);
          integral += charge_factor * mixed_part_ham_double(0, 1, idet_unfold, jdet_idx);
          if (integral != 0.0) {
            auto a = i_det < folded_jdet_idx ? i_det : folded_jdet_idx;
            auto b = i_det < folded_jdet_idx ? folded_jdet_idx : i_det;
            triplet_list_threads[thread_id].push_back(Eigen::Triplet<double>(a, b, integral));
          }
        }
      }
    }
    ham_threads[thread_id].resize(this->N_dets, this->estimate_n_interacting_dets);
    ham_threads[thread_id].reserve(triplet_list_threads[thread_id].size());
    ham_threads[thread_id].setFromTriplets(triplet_list_threads[thread_id].begin(), triplet_list_threads[thread_id].end());
    // release memory from the processed triplet list!
    triplet_list_threads[thread_id] = std::vector<Eigen::Triplet<double>>();
    {
#pragma omp critical
      ham += ham_threads[thread_id];
    }
  }
}

template <typename T> void POLYQUANT_DETSET<T>::two_species_create_ham() {

  // // Diagonal Contribution
  // create_ham_diagonal(0, 0);
  // // Four class one contributions
  // // Aa Aa
  // two_species_create_ham_class_one(0, 0);
  // // Ab Ab
  // two_species_create_ham_class_one(0, 1);
  // // Ba Ba
  // two_species_create_ham_class_one(1, 0);
  // // Bb Bb
  // two_species_create_ham_class_one(1, 1);

  // // Aa Ab
  // two_species_create_ham_class_two(0, 0, 0, 1);
  // // Aa Ba
  // two_species_create_ham_class_two(0, 0, 1, 0);
  // // Aa Bb
  // two_species_create_ham_class_two(0, 0, 1, 1);
  // // Ab Ba
  // two_species_create_ham_class_two(0, 1, 1, 0);
  // // Ab Bb
  // two_species_create_ham_class_two(0, 1, 1, 1);
  // // Ba Bb
  // two_species_create_ham_class_two(1, 0, 1, 1);
  two_species_create_ham_singleshot();
}

template <typename T> void POLYQUANT_DETSET<T>::create_ham() {

  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->ham.resize(this->N_dets, this->N_dets);
  std::vector<int> sizes;
  // sizes.resize(this->N_dets, this->N_dets);
  // estimate
  int estimate = std::sqrt(this->N_dets) * 10;
  this->estimate_n_interacting_dets = (estimate < this->N_dets) ? estimate : this->N_dets;
  sizes.resize(this->N_dets, estimate_n_interacting_dets);
  this->ham.reserve(sizes);
  // this->ham.reserve(this->N_dets * this->N_dets);
  auto num_parts = this->input_integral.input_molecule.quantum_particles.size();
  if (num_parts == 1) {
    single_species_create_ham();
  } else if (num_parts == 2) {
    two_species_create_ham();
  } else {
    std::stringstream ss;
    ss << "Hamiltonian building not supported for " << num_parts << " unique quantum particles." << std::endl;
    APP_ABORT(ss.str());
  }
  this->ham.makeCompressed();
  // Polyquant_dump_sparse_mat_to_file(ham, "ci_ham.txt");
}

// template <typename T> void POLYQUANT_DETSET<T>::create_ham() {
//   // this->ham.conservativeResize(this->N_dets, this->N_dets);
//   this->ham.resize(this->N_dets, this->N_dets);
//   // std::vector<Eigen::Triplet<double>> tripletList;
//   std::cout << "Diagonal Ham" << std::endl;
//   for (auto i_det = 0; i_det < this->N_dets; i_det++) {
//     std::cout << i_det << " " << this->Slater_Condon(i_det, i_det) << std::endl;
//     for (auto j_det = 0; j_det < this->N_dets; j_det++) {
//       auto matrix_element = this->Slater_Condon(i_det, j_det);
//       ham(i_det, j_det) = matrix_element;
//     }
//   }
//   Polyquant_dump_mat_to_file(ham, "ci_ham.txt");
// }
} // namespace polyquant
#endif
