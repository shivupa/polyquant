#include <io/io.hpp>
#include <iostream>
#include <libint2.hpp> // IWYU pragma: keep
#include <numeric>
#include <string>
#include <vector>

#ifndef PYCI_MOLECULE_H
#define PYCI_MOLECULE_H
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

  /**
   * @brief Calculate the nuclear repulsion energy.
   *
   */
  void calculate_E_nuc();

  /**
   * @brief Create a vector of libint atoms which is needed to use the libint
   * library.
   *
   * @return std::vector<libint2::Atom> the vector of atoms
   */
  std::vector<libint2::Atom> to_libint_atom() const;

  /**
   * @brief Create an xyz representation of the molecule.
   *
   * @return std::string containing the molecule in xyz format
   */
  std::string dump_xyz() const;

  /**
   * @brief a list of atomic symbols
   *
   */
  std::vector<std::string> atom_symb;

  /**
   * @brief the number of atoms
   *
   */
  int num_atom;
  /**
   * @brief a list of x,y,z coordinates
   *
   */
  std::vector<std::vector<double>> atom_coord;
  /**
   * @brief a list of atomic numbers
   *
   */
  std::vector<int> atom_num;
  /**
   * @brief the list of libint atom objects
   *
   */
  std::vector<libint2::Atom> libint_atom;
  /**
   * @brief the total number of electrons
   *
   */
  int num_elec;
  /**
   * @brief the number of alpha electrons
   *
   */
  int num_elec_alpha;
  /**
   * @brief the number of beta electrons
   *
   */
  int num_elec_beta;
  /**
   * @brief the molecular charge
   *
   */
  int charge;
  /**
   * @brief the spin multiplicity
   *
   */
  int multiplicity;
  /**
   * @brief the nuclear repulsion energy
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
  std::map<std::string, int> _atm_symb_to_num = {
      {"H", 1},   {"He", 2},  {"Li", 3}, {"Be", 4},  {"B", 5},   {"C", 6},
      {"N", 7},   {"O", 8},   {"F", 9},  {"Ne", 10}, {"Na", 11}, {"Mg", 12},
      {"Al", 13}, {"Si", 14}, {"P", 15}, {"S", 16},  {"Cl", 17}, {"Ar", 18}};
};
#endif
