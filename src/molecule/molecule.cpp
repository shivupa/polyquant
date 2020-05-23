#include <molecule/molecule.hpp>

using namespace selci;

PYCI_MOLECULE::PYCI_MOLECULE(const PYCI_INPUT &input) { setup_molecule(input); }

void PYCI_MOLECULE::setup_molecule(const PYCI_INPUT &input) {
  // Store atom symbols
  for (auto label : input.input_data["molecule"]["symbols"]) {
    this->atom_symb.push_back(label);
    this->atom_num.push_back(_atm_symb_to_num[label]);
  }
  // Store number of atoms
  this->num_atom = this->atom_symb.size();
  // Store atom coordinates
  for (int i = 0; i < this->num_atom; ++i) {
    std::vector<double> atom = {};
    for (int j = 0; j < 3; ++j) {
      atom.push_back(input.input_data["molecule"]["geometry"][(i * 3) + j]);
      atom[j] *= this->angstrom_to_bohr;
    }
    this->atom_coord.push_back(atom);
  }
  // Store charge
  this->charge = input.input_data["molecule"]["molecular_charge"];
  // Store multiplicity
  this->multiplicity = input.input_data["molecule"]["molecular_multiplicity"];
  // Calculate total number of electrons
  this->num_elec =
      std::accumulate(this->atom_num.begin(), this->atom_num.end(), 0) -
      this->charge;
  // Calculate number of alpha/beta electrons
  this->num_elec_alpha = ((this->num_elec) + (this->multiplicity - 1)) / 2;
  this->num_elec_beta = ((this->num_elec) - (this->multiplicity - 1)) / 2;
  // TODO AppAbort if num_elec_alpha+num_elec_beta != num_elec

  // Selci_cout(this->dump_xyz());
  this->libint_atom = this->to_libint_atom();
  // Calculate nuclear repulsion energy
  this->calculate_E_nuc();
}

std::string PYCI_MOLECULE::dump_xyz() const {
  std::string temp_xyz = "";
  temp_xyz += std::to_string(this->num_atom);
  temp_xyz += "\n";
  temp_xyz += "PYCI Dumped XYZ";
  for (auto i = 0; i < this->num_atom; i++) {

    temp_xyz += "\n";
    temp_xyz += this->atom_symb[i];
    temp_xyz += "\t";
    temp_xyz += std::to_string(this->atom_coord[i][0] * this->bohr_to_angstrom);
    temp_xyz += "\t";
    temp_xyz += std::to_string(this->atom_coord[i][1] * this->bohr_to_angstrom);
    temp_xyz += "\t";
    temp_xyz += std::to_string(this->atom_coord[i][2] * this->bohr_to_angstrom);
  }
  return temp_xyz;
}

std::vector<libint2::Atom> PYCI_MOLECULE::to_libint_atom() const {
  std::istringstream temp_xyz_stream(this->dump_xyz());
  return libint2::read_dotxyz(temp_xyz_stream);
}

void PYCI_MOLECULE::calculate_E_nuc() {
  this->E_nuc = 0.0;
  for (int i = 0; i < this->num_atom; ++i) {
    for (int j = i + 1; j < this->num_atom; ++j) {
      auto Z_i = atom_num[i];
      auto Z_j = atom_num[j];
      auto dx = (this->atom_coord[j][0] - this->atom_coord[i][0]);
      auto dy = (this->atom_coord[j][1] - this->atom_coord[i][1]);
      auto dz = (this->atom_coord[j][2] - this->atom_coord[i][2]);
      auto r_sq = std::sqrt((dx * dx) + (dy * dy) + (dz * dz));
      this->E_nuc += ((Z_i * Z_j) / r_sq);
    }
  }
}
