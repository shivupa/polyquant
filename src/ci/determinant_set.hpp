#ifndef POLYQUANT_DETSET_H
#define POLYQUANT_DETSET_H
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include "molecule/quantum_particles.hpp"
#include "scf/epscf.hpp"
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
  void resize(std::size_t size) {
    unique_dets.resize(size);
    for (auto i = 0; i < size; i++) {
      unique_dets[i].resize(2);
    }
  };

  int get_symm_idx(int idx_part, const std::pair<std::vector<T>, std::vector<T>> &D, int &symm_idx);
  void create_det(int idx_part, std::vector<std::vector<int>> &occ);
  void get_unique_excitation_list(int idx_part, int idx_spin, int idx_det, int excitation_level, std::vector<std::vector<T>> &return_dets) const;
  void get_unique_excitation_set(int idx_part, int idx_spin, int idx_det, int excitation_level, std::set<std::vector<T>> &return_dets) const;
  void get_unique_excitation_list_of_indices(int idx_part, int idx_spin, int idx_det, int excitation_level, std::set<int> &return_idx_list) const;
  void create_unique_excitation(int idx_part, int idx_spin, int excitation_level);
  void create_excitation(std::vector<std::tuple<int, int, int>> excitation_level, int max_collective_excitation_level);
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
  std::vector<int> frozen_core;
  std::vector<int> deleted_virtual;

  std::shared_ptr<POLYQUANT_INTEGRAL> input_integral;
  std::shared_ptr<POLYQUANT_BASIS> input_basis;
  std::shared_ptr<POLYQUANT_EPSCF> input_epscf;
  std::shared_ptr<POLYQUANT_MOLECULE> input_molecule;

  void set_basis(std::shared_ptr<POLYQUANT_BASIS> basis) { this->input_basis = basis; };
  void set_integral(std::shared_ptr<POLYQUANT_INTEGRAL> integral) { this->input_integral = integral; };
  void set_epscf(std::shared_ptr<POLYQUANT_EPSCF> scf) { this->input_epscf = scf; };
  void set_molecule(std::shared_ptr<POLYQUANT_MOLECULE> molecule) { this->input_molecule = molecule; };

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
  int curr_symm_block;
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
} // namespace polyquant
#endif
