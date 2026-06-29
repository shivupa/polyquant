#ifndef POLYQUANT_MOLECULE_H
#define POLYQUANT_MOLECULE_H

/**
 * @file molecule.hpp
 * @brief Molecular geometry and particle-type bookkeeping for Polyquant.
 */

#include "io/input.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include "molecule/classical_particles.hpp"
#include "molecule/quantum_particles.hpp"
#include "symmetry/symmetry.hpp"
#include <algorithm>
#include <iostream>
#include <libint2.hpp> // IWYU pragma, keep
#include <libmsym/msym.h>
#include <numeric>
#include <string>
#include <vector>

namespace polyquant {

/**
 * @brief Stores molecular geometry, particle types, and symmetry-facing views.
 *
 * The molecule object owns the parsed center coordinates and partitions them
 * into classical and quantum particle maps. Coordinates are stored internally
 * in bohr. Classical particle entries drive nuclear repulsion, libint atom
 * generation, and symmetry point charges; quantum particle entries define the
 * particle species later consumed by SCF and CI code.
 */
class POLYQUANT_MOLECULE {
public:
  /**
   * @brief Construct an empty molecule.
   */
  POLYQUANT_MOLECULE() = default;
  /**
   * @brief Destroy the molecule object.
   */
  ~POLYQUANT_MOLECULE() {}
  /**
   * @brief Construct and immediately initialize the molecule from parsed input.
   *
   * @param input_params Parsed input data shared with the calculation driver.
   * @param input_symmetry Symmetry helper used for point-group detection and
   * coordinate symmetrization.
   */
  POLYQUANT_MOLECULE(std::shared_ptr<POLYQUANT_INPUT> input_params, std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry);

  /**
   * @brief Populate the molecule from the input JSON.
   *
   * This routine reads molecular charge, electron multiplicity, geometry,
   * classical and quantum particle partitions, optional symmetry operations,
   * and the classical repulsion energy. It also writes the possibly
   * symmetrized geometry to `polyquant_used_geometry.xyz`.
   *
   * @param input_params Parsed input data shared with the calculation driver.
   * @param input_symmetry Symmetry helper used for point-group detection and
   * coordinate symmetrization.
   */
  void setup_molecule(std::shared_ptr<POLYQUANT_INPUT> input_params, std::shared_ptr<POLYQUANT_SYMMETRY> input_symmetry);
  /**
   * @brief Read the total molecular charge from the `molecule` input section.
   *
   * @throws APP_ABORT if `molecule.molecular_charge` is missing.
   */
  void set_molecular_charge();
  /**
   * @brief Read the electronic spin multiplicity from the `molecule` input section.
   *
   * The multiplicity is interpreted as the electron multiplicity and is later
   * used when constructing the electron particle type.
   *
   * @throws APP_ABORT if `molecule.molecular_multiplicity` is missing.
   */
  void set_molecular_multiplicity();
  /**
   * @brief Read the global restricted/unrestricted mean-field preference.
   *
   * Missing input defaults to restricted treatment.
   */
  void set_molecular_restricted();
  /**
   * @brief Symmetrize the geometry through libmsym when symmetry is enabled.
   *
   * The method updates @ref centers in place and records the detected point
   * group in the shared symmetry object.
   */
  void symmetrize_molecule();

  /**
   * @brief Find the labeled classical center matching a Cartesian position.
   *
   * @param center_pos Center position in bohr.
   * @return String label in the form `<symbol><occurrence_index>`.
   *
   * @throws APP_ABORT if no center matches within a fixed numerical threshold.
   */
  std::string get_label_of_center(const std::array<double, 3> &center_pos) const;

  /**
   * @brief Parse geometry and particle specifications from the input JSON.
   *
   * Coordinates are converted from angstrom to bohr. The method classifies
   * centers as classical or quantum nuclei, applies optional nuclear charge
   * overrides, creates additional non-nuclear quantum particles, and finally
   * constructs the electron particle type from charge balance.
   */
  void parse_particles();
  /**
   * @brief Print the parsed molecule and particle summary to Polyquant output.
   */
  void print_molecule();

  /**
   * @brief Compute the classical Coulomb repulsion energy.
   *
   * Only classical centers with nonzero charge contribute. The result is
   * stored in @ref E_nuc in Hartree.
   */
  void calculate_E_nuc();

  /**
   * @brief Convert classical centers to libint atom records.
   *
   * @param classical_part_key Particle-type filter. Use `"all"` for all
   * centers or `"no_ghost"` to skip ghost centers.
   * @return Vector of libint atoms with coordinates in bohr.
   */
  std::vector<libint2::Atom> to_libint_atom(std::string classical_part_key = "all") const;

  /**
   * @brief Convert classical centers to point charges for integral code.
   *
   * @param classical_part_key Particle-type filter. Use `"all"` for all
   * centers or `"no_ghost"` to skip zero-charge ghost centers.
   * @return Vector of `(charge, position)` pairs with positions in bohr.
   */
  std::vector<std::pair<double, std::array<double, 3>>> to_point_charges_for_integrals(std::string classical_part_key = "all") const;
  /**
   * @brief Convert classical centers to libmsym element records.
   *
   * Ghost centers are encoded as deuterium placeholders because libmsym
   * expects a named element.
   *
   * @param classical_part_key Particle-type filter. Use `"all"` for all
   * centers or `"no_ghost"` to skip ghost centers.
   * @return Vector of libmsym element records in input center order.
   */
  std::vector<msym_element_t> to_point_msym_charges_for_symmetry(std::string classical_part_key = "all") const;
  /**
   * @brief Update stored center coordinates from symmetrized libmsym elements.
   *
   * @param symm_chrgs Symmetrized element list aligned with the classical
   * center ordering produced by @ref to_point_msym_charges_for_symmetry.
   */
  void from_point_msym_charges_for_symmetry(std::vector<msym_element_t> &symm_chrgs);
  /**
   * @brief Create an xyz representation of the molecule.
   *
   * @param classical_part_key Particle-type filter. Use `"all"` for all
   * centers or `"no_ghost"` to skip ghost centers.
   * @return XYZ-format string with coordinates converted to angstrom.
   */
  std::string dump_xyz(std::string classical_part_key = "all") const;

  /**
   * @brief Shared parsed input object used to build this molecule.
   */
  std::shared_ptr<POLYQUANT_INPUT> input;
  /**
   * @brief Shared symmetry helper used during molecule setup.
   */
  std::shared_ptr<POLYQUANT_SYMMETRY> input_symm;

  /**
   * @brief Cartesian center coordinates in bohr.
   *
   * The outer index is the zero-based center index referenced by
   * @ref CLASSICAL_PARTICLE_SET::center_idx and
   * @ref QUANTUM_PARTICLE_SET::center_idx.
   */
  std::vector<std::vector<double>> centers;

  /**
   * @brief Classical particle types keyed by input label.
   */
  std::map<std::string, CLASSICAL_PARTICLE_SET> classical_particles;

  /**
   * @brief Quantum particle types keyed by input label.
   */
  std::map<std::string, QUANTUM_PARTICLE_SET> quantum_particles;

  /**
   * @brief Cached libint atom list for classical particles when needed.
   */
  std::vector<libint2::Atom> libint_classical_particles;

  /**
   * @brief Total molecular charge.
   */
  int charge;
  /**
   * @brief Spin multiplicity of the electron particle type.
   */
  int multiplicity;

  /**
   * @brief Global restricted/unrestricted mean-field preference.
   */
  bool restricted;
  /**
   * @brief Classical Coulomb repulsion energy in Hartree.
   */
  double E_nuc;

  /**
   * @brief bohr to angstroms conversion todo remove
   *        the 2018 CODATA reference set, available at https://physics.nist.gov/cuu/pdf/wall_2018.pdf
   *
   */
  double bohr_to_angstrom = 0.529177210903;
  /**
   * @brief angstroms to bohr conversion todo remove
   *
   */
  double angstrom_to_bohr = 1 / bohr_to_angstrom;
};
} // namespace polyquant
#endif
