#ifndef POLYQUANT_DETSET_H
#define POLYQUANT_DETSET_H

/**
 * @file determinant_set.hpp
 * @brief Determinant-space storage and CI Hamiltonian/sigma interfaces.
 */

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
#include <cppitertools/combinations.hpp>
#include <inttypes.h>
#include <iostream>
#include <iterator>
#include <set>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>

namespace polyquant {

/**
 * @brief Determinant-space container and operator interface for Polyquant CI.
 *
 * The template parameter `T` is the unsigned integer type used to store packed
 * occupation bit strings. Each quantum particle type stores separate unique
 * determinant lists for alpha and beta spin channels. Full multicomponent
 * determinants are represented indirectly through indices into those unique
 * lists.
 *
 * Bitstrings are stored with the highest orbital packed toward the front of the
 * vector. Orbital indices used by the public APIs are zero-based.
 */
template <typename T> class POLYQUANT_DETSET {
public:
  /**
   * @brief Construct an empty determinant set.
   */
  POLYQUANT_DETSET() {}
  /**
   * @brief Destroy the determinant set.
   */
  ~POLYQUANT_DETSET() {}
  /**
   * @brief Resize the per-particle unique-determinant containers.
   *
   * Each particle is initialized with two spin slots.
   */
  void resize(std::size_t size) {
    unique_dets.resize(size);
    for (size_t i = 0ul; i < size; i++) {
      unique_dets[i].resize(2);
    }
  };

  /**
   * @brief Determine the symmetry-block index for a spin-paired determinant.
   */
  void get_symm_idx(int idx_part, const std::pair<std::vector<T>, std::vector<T>> &D, int &symm_idx);
  /**
   * @brief Create and store the reference determinant for one particle type.
   *
   * @param idx_part Particle-type index.
   * @param occ Spin-resolved occupied-orbital lists.
   */
  void create_det(int idx_part, std::vector<std::vector<int>> &occ);
  /**
   * @brief Enumerate unique excited determinants as bitstrings.
   */
  void get_unique_excitation_list(int idx_part, int idx_spin, int idx_det, int excitation_level, std::vector<std::vector<T>> &return_dets) const;
  /**
   * @brief Enumerate unique excited determinants into a set container.
   */
  void get_unique_excitation_set(int idx_part, int idx_spin, int idx_det, int excitation_level, std::set<std::vector<T>> &return_dets) const;
  /**
   * @brief Enumerate indices of connected unique determinants.
   */
  void get_unique_excitation_list_of_indices(int idx_part, int idx_spin, int idx_det, int excitation_level, std::set<int> &return_idx_list) const;
  /**
   * @brief Generate all unique spin-specific excitations up to a given level.
   */
  void create_unique_excitation(int idx_part, int idx_spin, int excitation_level);
  /**
   * @brief Build the full variational determinant space from per-species excitation limits.
   */
  void create_excitation(std::vector<std::tuple<int, int, int>> excitation_level, int max_collective_excitation_level);
  /**
   * @brief Build lookup maps from packed unique determinants to their indices.
   */
  void create_unique_det_index_maps();
  /**
   * @brief Precompute connectivity maps for single excitations.
   */
  void create_unique_excitation_map_singles();
  /**
   * @brief Iterate over connected unique double excitations for one spin block.
   *
   * This helper deduplicates connected determinants before invoking the callback.
   */
  template <typename Callback> void for_each_unique_double(int idx_part, int idx_spin, int idx_det, Callback callback) const {
    T one = 1;
    std::vector<int> occ, virt;
    auto det = this->unique_dets[idx_part][idx_spin][idx_det];
    this->get_occ_virt(idx_part, det, occ, virt);

    if (occ.size() < 2 || virt.size() < 2) {
      return;
    }
    if (unique_det_indices.empty()) {
      APP_ABORT("for_each_unique_double called before unique determinant index maps were created.");
    }

    const auto &unique_det_index = unique_det_indices[idx_part][idx_spin];
    std::vector<size_t> connected_indices;
    for (auto &&iocc : iter::combinations(occ, 2)) {
      for (auto &&ivirt : iter::combinations(virt, 2)) {
        std::vector<T> temp_det(det);
        for (auto &occbit : iocc) {
          auto int_idx = (temp_det.size() - one) - (occbit >> bit_kind_shift);
          temp_det[int_idx] &= ~(one << (occbit & (bit_kind_size - one)));
        }
        for (auto &virtbit : ivirt) {
          auto int_idx = (temp_det.size() - one) - (virtbit >> bit_kind_shift);
          temp_det[int_idx] |= one << (virtbit & (bit_kind_size - one));
        }
        auto it = unique_det_index.find(temp_det);
        if (it != unique_det_index.end()) {
          connected_indices.push_back(it->second);
        }
      }
    }

    std::sort(connected_indices.begin(), connected_indices.end());
    connected_indices.erase(std::unique(connected_indices.begin(), connected_indices.end()), connected_indices.end());
    for (auto idx : connected_indices) {
      callback(idx);
    }
  }

  /**
   * @brief Count the number of spin-orbital excitations between two same-spin determinants.
   */
  int single_spin_num_excitation(const std::vector<T> &Di, const std::vector<T> &Dj) const;
  /**
   * @brief Count the total excitation rank between two spin-paired determinants.
   */
  int num_excitation(const std::pair<std::vector<T>, std::vector<T>> &Di, const std::pair<std::vector<T>, std::vector<T>> &Dj) const;
  /**
   * @brief Extract hole orbital indices between two determinants.
   */
  void get_holes(std::vector<T> &Di, std::vector<T> &Dj, std::vector<int> &holes) const;
  /**
   * @brief Extract particle orbital indices between two determinants.
   */
  void get_parts(std::vector<T> &Di, std::vector<T> &Dj, std::vector<int> &parts) const;
  /**
   * @brief Compute the fermionic phase for an excitation.
   */
  double get_phase(std::vector<T> &Di, std::vector<T> &Dj, std::vector<int> &holes, std::vector<int> &parts) const;
  /**
   * @brief Extract occupied and virtual orbital lists from one determinant.
   */
  void get_occ_virt(int idx_part, std::vector<T> &D, std::vector<int> &occ, std::vector<int> &virt) const;

  /**
   * @brief Diagonal same-particle Slater-Condon contribution.
   */
  double same_part_ham_diag(int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const;
  /**
   * @brief Single-excitation same-particle Slater-Condon contribution.
   */
  double same_part_ham_single(int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const;
  /**
   * @brief Double-excitation same-particle Slater-Condon contribution.
   */
  double same_part_ham_double(int idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const;
  /**
   * @brief Diagonal mixed-particle Slater-Condon contribution.
   */
  double mixed_part_ham_diag(int idx_part, int other_idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const;
  /**
   * @brief Single-excitation mixed-particle Slater-Condon contribution.
   */
  double mixed_part_ham_single(int idx_part, int other_idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const;
  /**
   * @brief Double-excitation mixed-particle Slater-Condon contribution.
   */
  double mixed_part_ham_double(int idx_part, int other_idx_part, std::vector<int> i_unfold, std::vector<int> j_unfold) const;

  /**
   * @brief Return one packed determinant without frozen-core orbitals restored.
   */
  std::vector<T> get_det(int idx_part, int idx_spin, int i) const;
  /**
   * @brief Return one packed determinant with frozen-core orbitals restored.
   */
  std::vector<T> get_det_withfcorbs(int idx_part, int idx_spin, int i) const;
  /**
   * @brief Print the current determinant space.
   */
  void print_determinants();
  // /**
  //  * @brief determinant set (number of quantum particles, alpha/beta, det num
  //  * bitstrings)
  //  * the bitstrings are stored from highest orbital to lowest orbital
  //  *
  //  */
  // std::vector<std::unordered_set<std::pair<std::vector<T>, std::vector<T>>, PairVectorHash<T>>> dets;
  /**
   * @brief Unique determinants for each particle type and spin channel.
   *
   * Indexing: `particle, alpha/beta, determinant index, packed-word index`.
   */
  std::vector<std::vector<std::vector<std::vector<T>>>> unique_dets;
  /**
   * @brief Estimated number of interacting determinant pairs.
   */
  int estimate_n_interacting_dets;

  /**
   * @brief Cached same-spin single-excitation connectivity.
   *
   * Indexing: `particle_type_idx, spin_idx, det_i, connected_det_j`.
   */
  std::vector<std::vector<std::vector<std::vector<size_t>>>> unique_singles;
  /**
   * @brief Lookup tables from packed unique determinants to their local indices.
   */
  std::vector<std::vector<std::unordered_map<std::vector<T>, std::size_t, VectorHash<T>>>> unique_det_indices;
  /**
   * @brief Map from a full determinant index tuple to the global variational-space index.
   *
   * The key length is `2 * number_of_particle_types`, ordered as
   * `(particle0 alpha, particle0 beta, particle1 alpha, particle1 beta, ...)`.
   *
   */
  std::unordered_map<std::vector<int>, int, VectorHash<int>> dets;

  /**
   * @brief Active-orbital counts after frozen-core and deleted-virtual removal.
   */
  std::vector<int> max_orb;
  /**
   * @brief Frozen-core energy contribution per particle type.
   */
  std::vector<double> frozen_core_energy;
  /**
   * @brief Number of frozen occupied orbitals per particle type.
   */
  std::vector<int> frozen_core;
  /**
   * @brief Number of deleted highest virtual orbitals per particle type.
   */
  std::vector<int> deleted_virtual;

  /**
   * @brief Shared transformed integral object.
   */
  std::shared_ptr<POLYQUANT_INTEGRAL> input_integral;
  /**
   * @brief Shared symmetry helper.
   */
  std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry;
  /**
   * @brief Shared basis description.
   */
  std::shared_ptr<POLYQUANT_BASIS> input_basis;
  /**
   * @brief Shared SCF reference state.
   */
  std::shared_ptr<POLYQUANT_EPSCF> input_epscf;
  /**
   * @brief Shared molecule description.
   */
  std::shared_ptr<POLYQUANT_MOLECULE> input_molecule;

  /**
   * @brief Attach the symmetry helper used by determinant generation and labeling.
   */
  void set_symmetry(std::shared_ptr<POLYQUANT_SYMMETRY> symmetry) { this->input_symmetry = symmetry; };
  /**
   * @brief Attach the basis object.
   */
  void set_basis(std::shared_ptr<POLYQUANT_BASIS> basis) { this->input_basis = basis; };
  /**
   * @brief Attach the integral object.
   */
  void set_integral(std::shared_ptr<POLYQUANT_INTEGRAL> integral) { this->input_integral = integral; };
  /**
   * @brief Attach the SCF reference object.
   */
  void set_epscf(std::shared_ptr<POLYQUANT_EPSCF> scf) { this->input_epscf = scf; };
  /**
   * @brief Attach the molecule object.
   */
  void set_molecule(std::shared_ptr<POLYQUANT_MOLECULE> molecule) { this->input_molecule = molecule; };

  /**
   * @brief Cached Hamiltonian diagonal for Davidson and direct-sigma use.
   */
  mutable Eigen::Matrix<double, Eigen::Dynamic, 1> diagonal_Hii;
  /**
   * @brief Precompute the Hamiltonian diagonal over the current determinant space.
   */
  void precompute_diagonal_Slater_Condon() const;
  /**
   * @brief Evaluate one Hamiltonian matrix element between two determinants.
   */
  double Slater_Condon(int i_det, int j_det) const;

  /**
   * @brief Scalar type required by Spectra operator interfaces.
   */
  using Scalar = double;
  /**
   * @brief Number of rows in the CI Hamiltonian.
   */
  int rows() const {
    const int rows = this->N_dets;
    return rows;
  }
  /**
   * @brief Number of columns in the CI Hamiltonian.
   */
  int cols() const {
    const int cols = this->N_dets;
    return cols;
  }

  /**
   * @brief Random-access Hamiltonian entry used by Spectra's Davidson solver.
   */
  double operator()(int i, int j) const { return this->Slater_Condon(i, j); }

  /**
   * @brief Add the one-species diagonal class contribution to a sigma vector.
   */
  void sigma_one_species_diagonal_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                               const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const;
  /**
   * @brief Add the one-species class-one contribution to a sigma vector.
   */
  void sigma_one_species_class_one_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const;
  /**
   * @brief Add the one-species class-two contribution to a sigma vector.
   */
  void sigma_one_species_class_two_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin, int other_idx_part,
                                                int other_idx_spin) const;
  /**
   * @brief Add one-species singleshot contributions without an explicit sparse Hamiltonian.
   */
  void sigma_one_species_class_singleshot(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma, const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C,
                                          int idx_part, int idx_spin, int other_idx_part, int other_idx_spin) const;
  /**
   * @brief Build the full one-species sigma action.
   */
  void sigma_one_species(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma, const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const;
  /**
   * @brief Add the two-species diagonal class contribution to a sigma vector.
   */
  void sigma_two_species_diagonal_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                               const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const;
  /**
   * @brief Add the two-species class-one contribution to a sigma vector.
   */
  void sigma_two_species_class_one_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin) const;
  /**
   * @brief Add the two-species class-two contribution to a sigma vector.
   */
  void sigma_two_species_class_two_contribution(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                                const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C, int idx_part, int idx_spin, int other_idx_part,
                                                int other_idx_spin) const;
  /**
   * @brief Add all two-species singleshot contributions without an explicit sparse Hamiltonian.
   */
  void sigma_two_species_class_singleshot(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                          const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const;
  /**
   * @brief Build the full two-species sigma action.
   */
  void sigma_two_species(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma, const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const;

  /**
   * @brief Apply the CI Hamiltonian to one or more trial vectors.
   */
  void create_sigma(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma, const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const;
  /**
   * @brief Reference implementation of the sigma build used for validation/debugging.
   */
  void create_sigma_slow(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma, const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const;

  /**
   * @brief Build a CI one-particle RDM in the active MO basis.
   */
  void create_1rdm(const int state_idx, const int quantum_part_idx, const int quantum_part_spin_idx, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &MO_rdm1,
                   const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const;

  /**
   * @brief Evaluate `S^2` for one or more CI states.
   */
  void evaluate_s2(Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &S_squared, const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const;

  /**
   * @brief Matrix-free Hamiltonian application used by operator-style code paths.
   */
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> operator*(const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &mat_in) const;

  /**
   * @brief Assemble the Hamiltonian diagonal for one particle/spin class.
   */
  void create_ham_diagonal(int idx_part, int idx_spin);

  /**
   * @brief Assemble the sparse Hamiltonian for the single-species case.
   */
  void single_species_create_ham();
  /**
   * @brief Assemble single-species class-one sparse Hamiltonian terms.
   */
  void single_species_create_ham_class_one(int idx_part, int idx_spin);
  /**
   * @brief Assemble single-species class-two sparse Hamiltonian terms.
   */
  void single_species_create_ham_class_two(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin);
  /**
   * @brief Assemble single-species sparse Hamiltonian terms in singleshot mode.
   */
  void single_species_create_ham_singleshot(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin);

  /**
   * @brief Assemble the sparse Hamiltonian for the two-species case.
   */
  void two_species_create_ham();
  /**
   * @brief Assemble two-species class-one sparse Hamiltonian terms.
   */
  void two_species_create_ham_class_one(int idx_part, int idx_spin);
  /**
   * @brief Assemble two-species class-two sparse Hamiltonian terms.
   */
  void two_species_create_ham_class_two(int idx_part, int idx_spin, int other_idx_part, int other_idx_spin);
  /**
   * @brief Assemble two-species sparse Hamiltonian terms in singleshot mode.
   */
  void two_species_create_ham_singleshot();

  /**
   * @brief Assemble the explicit sparse CI Hamiltonian.
   */
  void create_ham();
  /**
   * @brief Add a spin-penalty operator to the CI Hamiltonian.
   */
  void create_S_sq_penalty(std::string type, std::vector<double> expected_S2, std::vector<double> spin_penalty);
  /**
   * @brief Build the singleshot sparse matrix for `(S^2 - expected S^2)` of one particle type.
   */
  void create_S_sq_minus_expected_S_sq_matrix_singleshot(Eigen::SparseMatrix<double, Eigen::RowMajor> &S2_pen, int idx_part, double expected_S2_for_part);
  /**
   * @brief Expand one global determinant index into its per-particle/spin indices.
   */
  std::vector<int> det_idx_unfold(std::size_t det_idx) const;

  /**
   * @brief Explicit sparse CI Hamiltonian, when `build_matrix` is enabled.
   */
  Eigen::SparseMatrix<double, Eigen::RowMajor> ham;
  /**
   * @brief Flattened determinant-index tuples for fast unfolding.
   */
  std::vector<int> unfolded_dets;
  /**
   * @brief Stride of one flattened determinant tuple.
   */
  int unfolded_stride = 0;
  /**
   * @brief Thread-local sigma work buffers for matrix-free CI.
   */
  mutable std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma_workspace_;
  /**
   * @brief Number of threads for which sigma workspaces are currently prepared.
   */
  mutable int sigma_workspace_nthreads_ = 0;
  /**
   * @brief Number of determinants in the current CI variational space.
   */
  int N_dets;
  /**
   * @brief Number of determinants before symmetry filtering within the chosen excitation space.
   */
  int N_dets_complete_space;
  /**
   * @brief Current symmetry block index when symmetry partitioning is active.
   */
  int curr_symm_block;
  /**
   * @brief Enable the slower reference diagonal build path.
   */
  bool slow_diag = false;
  /**
   * @brief Build an explicit sparse Hamiltonian instead of using matrix-free sigma builds.
   */
  bool build_matrix = true;
  /**
   * @brief Use the singleshot sparse/matrix-free construction path.
   */
  bool use_singleshot = true;
  /**
   * @brief Screening threshold for Hamiltonian or sigma construction.
   */
  double screening_threshold = 0.0;

  /**
   * @brief Bit shift used to map orbital indices into packed-word indices.
   *
   * This constant assumes 64-bit storage.
   */
  static const T bit_kind_shift = 6;
  /**
   * @brief Number of bits stored in one packed word.
   */
  static const T bit_kind_size = 8 * sizeof(T);
};
} // namespace polyquant
#endif
