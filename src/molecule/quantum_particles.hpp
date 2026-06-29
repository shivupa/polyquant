#ifndef POLYQUANT_QUANTUM_PARTICLE_SET_H
#define POLYQUANT_QUANTUM_PARTICLE_SET_H

/**
 * @file quantum_particles.hpp
 * @brief Quantum particle-type metadata used by SCF and CI setup.
 */

#include "io/utils.hpp"
#include <iostream>
#include <libint2.hpp> // IWYU pragma: keep
#include <numeric>
#include <string>
#include <vector>

namespace polyquant {

/**
 * @brief Describes one quantum particle species in the multicomponent model.
 *
 * A particle type is keyed by label, for example `electron` or a quantum
 * nucleus label. The struct stores particle-wide properties and spin-resolved
 * occupancies, while center-specific positions remain in
 * @ref POLYQUANT_MOLECULE::centers.
 */
struct QUANTUM_PARTICLE_SET {
  /**
   * @brief Single-particle spin quantum number.
   *
   * For example, electrons use 1/2.
   */
  double spin;
  /**
   * @brief Particle mass in atomic units.
   */
  double mass;
  /**
   * @brief Particle charge in proton-charge units.
   */
  double charge;
  /**
   * @brief Spin multiplicity inferred or assigned for this particle type.
   */
  int multiplicity;
  /**
   * @brief Total number of particles of this type.
   */
  int num_parts;
  /**
   * @brief Number of alpha-spin particles for this type.
   */
  int num_parts_alpha;
  /**
   * @brief Number of beta-spin particles for this type.
   */
  int num_parts_beta;
  /**
   * @brief Indices of associated centers in @ref POLYQUANT_MOLECULE::centers.
   *
   * This vector is primarily used for quantum nuclei that share the molecular
   * geometry with the classical center list.
   */
  std::vector<int> center_idx;
  /**
   * @brief Whether same-particle exchange is included for this species.
   */
  bool exchange = true;
  /**
   * @brief Whether this species exchanges with electrons.
   *
   * This is intended for model variants where electron exchange with another
   * fermionic species is enabled explicitly.
   */
  bool electron_exchange = false;
  /**
   * @brief Whether alpha and beta orbitals are constrained to share a spatial basis.
   *
   * Single-particle species are forced to unrestricted treatment.
   */
  bool restricted = false;
};
} // namespace polyquant
#endif
