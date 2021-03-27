#ifndef POLYQUANT_MOLECULE_H
#define POLYQUANT_MOLECULE_H
#include "io/io.hpp"
#include "molecule/classical_particles.hpp"
#include "molecule/quantum_particles.hpp"
#include <algorithm>
#include <iostream>
#include <libint2.hpp> // IWYU pragma, keep
#include <numeric>
#include <string>
#include <vector>

namespace polyquant {

/**
 * @brief A class to store information about a molecule
 *
 */
class POLYQUANT_MOLECULE {
public:
  POLYQUANT_MOLECULE() = default;
  /**
   * @brief Construct a new polyquant molecule object given an input object with
   * a call to setup_molecule.
   *
   * @param input a POLYQUANT_INPUT instance
   */
  POLYQUANT_MOLECULE(const POLYQUANT_INPUT &input);

  /**
   * @brief Set the up molecule object.
   *
   * @param input a POLYQUANT_INPUT instance
   */
  void setup_molecule(const POLYQUANT_INPUT &input);
  void set_molecular_charge(const POLYQUANT_INPUT &input);
  void set_molecular_multiplicity(const POLYQUANT_INPUT &input);
  void set_molecular_restricted(const POLYQUANT_INPUT &input);
  void parse_particles(const POLYQUANT_INPUT &input);
  void print_molecule();

  /**
   * @brief Calculate the nuclear repulsion energy.
   *
   */
  void calculate_E_nuc();

  /**
   * @brief Create a vector of libint atoms which is needed to use the libint
   * library.
   *
   * @return std::vector<libint2,,Atom> the vector of atoms
   */
  std::vector<libint2::Atom>
  to_libint_atom(std::string classical_part_key = "all") const;

  /**
   * @brief Create an xyz representation of the molecule.
   *
   * @return std::string containing the molecule in xyz format
   */
  std::string dump_xyz(std::string classical_part_key = "all") const;

  std::vector<std::vector<double>> centers;

  std::map<std::string, CLASSICAL_PARTICLE_SET> classical_particles;

  std::map<std::string, QUANTUM_PARTICLE_SET> quantum_particles;

  std::vector<libint2::Atom> libint_classical_particles;

  /**
   * @brief the molecular charge
   *
   */
  int charge;
  /**
   * @brief the spin multiplicity of ONLY the electrons
   *
   */
  int multiplicity;

  bool restricted;
  /**
   * @brief the nuclear repulsion energy of the classical nuclei
   *
   */
  double E_nuc;

  /**
   * @brief bohr to angstroms conversion todo remove
   *
   */
  double bohr_to_angstrom = 0.52917721092;
  /**
   * @brief angstroms to bohr conversion todo remove
   *
   */
  double angstrom_to_bohr = 1 / bohr_to_angstrom;

private:
  /**
   * @brief a map from atomic symbols to atomic numbers
   *
   */

}; // namespace polyquant
} // namespace polyquant
#endif
