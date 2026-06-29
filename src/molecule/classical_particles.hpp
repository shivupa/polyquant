#ifndef POLYQUANT_CLASSICAL_PARTICLE_SET_H
#define POLYQUANT_CLASSICAL_PARTICLE_SET_H

/**
 * @file classical_particles.hpp
 * @brief Classical particle-type metadata used during molecule construction.
 */

#include "io/utils.hpp"
#include <iostream>
#include <libint2.hpp> // IWYU pragma: keep
#include <numeric>
#include <string>
#include <vector>

namespace polyquant {

/**
 * @brief Describes one classical particle type present in the molecular model.
 *
 * Each instance groups all classical centers that share the same input label,
 * such as all hydrogen nuclei or all ghost centers named `X`. The geometry
 * coordinates themselves live in @ref POLYQUANT_MOLECULE::centers; this struct
 * stores only per-type properties and indices into that coordinate array.
 */
struct CLASSICAL_PARTICLE_SET {
  /**
   * @brief Particle mass in atomic units.
   *
   * Ghost centers used only to carry basis functions may be assigned zero mass.
   */
  double mass;
  /**
   * @brief Particle charge in proton-charge units.
   *
   * This is typically the nuclear charge used for classical Coulomb terms and
   * libint atom construction. Ghost centers carry zero charge.
   */
  double charge;
  /**
   * @brief Number of centers belonging to this particle type.
   */
  int num_parts;
  /**
   * @brief Indices of this type's centers in @ref POLYQUANT_MOLECULE::centers.
   *
   * The indices are zero-based and preserve the input geometry ordering.
   */
  std::vector<int> center_idx;
};
} // namespace polyquant
#endif
