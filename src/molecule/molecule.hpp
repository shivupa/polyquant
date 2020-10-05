#include <algorithm>
#include <io/io.hpp>
#include <iostream>
#include <libint2.hpp> // IWYU pragma, keep
#include <molecule/classical_particles.hpp>
#include <molecule/quantum_particles.hpp>
#include <numeric>
#include <string>
#include <vector>

#ifndef PYCI_MOLECULE_H
#define PYCI_MOLECULE_H
namespace selci {

/**
 * @brief A class to store information about a molecule
 *
 */
class PYCI_MOLECULE {
public:
  PYCI_MOLECULE() = default;
  /**
   * @brief Construct a new pyci molecule object given an input object with a
   * call to setup_molecule.
   *
   * @param input a PYCI_INPUT instance
   */
  PYCI_MOLECULE(const PYCI_INPUT &input);

  /**
   * @brief Set the up molecule object.
   *
   * @param input a PYCI_INPUT instance
   */
  void setup_molecule(const PYCI_INPUT &input);
  void set_molecular_charge(const PYCI_INPUT &input);
  void set_molecular_multiplicity(const PYCI_INPUT &input);
  void parse_particles(const PYCI_INPUT &input);

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
  std::vector<libint2::Atom> to_libint_atom() const;

  /**
   * @brief Create an xyz representation of the molecule.
   *
   * @return std::string containing the molecule in xyz format
   */
  std::string dump_xyz() const;

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

  int atom_symb_to_num(std::string key) {
    if (_atm_symb_to_num.count(key)) {
      return _atm_symb_to_num[key];
    } else {
      return 0;
    }
  };

  double atom_symb_to_mass(std::string key) {
    if (_atm_symb_to_mass.count(key)) {
      return _atm_symb_to_mass[key];
    } else {
      return 0.0;
    }
  };

  double quantum_symb_to_spin(std::string key) {
    // if (_atm_symb_to_mass.count(key)) {
    //   return _atm_symb_to_mass[key];
    // } else {
    return 0.50;
    // }
  };

  double quantum_symb_to_mass(std::string key) {
    if (_atm_symb_to_mass.count(key)) {
      return _atm_symb_to_mass[key];
    } else {
      return 0.0;
    }
  };

  int quantum_symb_to_charge(std::string key) {
    if (_atm_symb_to_num.count(key)) {
      return _atm_symb_to_num[key];
    } else {
      return 0;
    }
  };

private:
  /**
   * @brief a map from atomic symbols to atomic numbers
   *
   */
  std::map<std::string, int> _atm_symb_to_num = {
      {"H", 1},   {"He", 2},  {"Li", 3},  {"Be", 4},  {"B", 5},
      {"C", 6},   {"N", 7},   {"O", 8},   {"F", 9},   {"Ne", 10},
      {"Na", 11}, {"Mg", 12}, {"Al", 13}, {"Si", 14}, {"P", 15},
      {"S", 16},  {"Cl", 17}, {"Ar", 18}, {"K", 19},
  };
  std::map<std::string, int> _atm_symb_to_mass = {
      {"H", 1.00782503223},  {"He", 4.00260325413},  {"Li", 7.0160034366},
      {"Be", 9.012183065},   {"B", 11.00930536},     {"C", 12.0},
      {"N", 14.00307400443}, {"O", 15.99491461957},  {"F", 18.99840316273},
      {"Ne", 19.9924401762}, {"Na", 22.989769282},   {"Mg", 23.985041697},
      {"Al", 26.98153853},   {"Si", 27.97692653465}, {"P", 30.97376199842},
      {"S", 31.9720711744},  {"Cl", 34.968852682},   {"Ar", 39.9623831237},
      {"K", 38.9637064864},
  };
};
} // namespace selci
#endif
