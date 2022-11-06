#ifndef POLYQUANT_MOLECULE_H
#define POLYQUANT_MOLECULE_H
#include "io/input.hpp"
#include "io/timer.hpp"
#include "io/utils.hpp"
#include "molecule/classical_particles.hpp"
#include "molecule/quantum_particles.hpp"
#include <algorithm>
#include <iostream>
#include <libint2.hpp> // IWYU pragma, keep
#include <libmsym/msym.h>
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
  POLYQUANT_MOLECULE(std::shared_ptr<POLYQUANT_INPUT> input_params);

  /**
   * @brief Set the up molecule object.
   *
   * @param input a POLYQUANT_INPUT instance
   */
  void setup_molecule(std::shared_ptr<POLYQUANT_INPUT> input_params);
  void set_molecular_charge();
  void set_molecular_multiplicity();
  void set_molecular_restricted();
  void symmetrize_molecule();

  std::string get_label_of_center(const std::array<double, 3> &center_pos) const;

  std::string point_group;
  std::string sub_group;
  msym_context ctx;
  bool do_symmetry = true;

  void parse_particles();
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
  std::vector<libint2::Atom> to_libint_atom(std::string classical_part_key = "all") const;

  std::vector<std::pair<double, std::array<double, 3>>> to_point_charges_for_integrals(std::string classical_part_key = "all") const;
  std::vector<msym_element_t> to_point_msym_charges_for_symmetry(std::string classical_part_key = "all") const;
  void from_point_msym_charges_for_symmetry(std::vector<msym_element_t> &symm_chrgs);
  /**
   * @brief Create an xyz representation of the molecule.
   *
   * @return std::string containing the molecule in xyz format
   */
  std::string dump_xyz(std::string classical_part_key = "all") const;

  std::shared_ptr<POLYQUANT_INPUT> input;

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
