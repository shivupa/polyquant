#include "io/hdf5_utilities.hpp"

using namespace polyquant;

POLYQUANT_HDF5::POLYQUANT_HDF5(const std::string &fname) { this->create_file(fname); }

void POLYQUANT_HDF5::create_file(const std::string &fname) {
  this->filename = fname;
  if (std::filesystem::exists(filename)) {
    std::stringstream s;
    s << "HDF5 file " << filename << " exists. Overwriting it." << std::endl;
    Polyquant_cout(s.str());
  }
  this->hdf5_file = hdf5::file::create(this->filename, hdf5::file::AccessFlags::TRUNCATE);
  this->root_group = this->hdf5_file.root();
}

void POLYQUANT_HDF5::dump_application() {
  // write generating code name
  Polyquant_cout("dumping application parameters");
  auto application_group = root_group.create_group("application");
  std::vector<std::string> title = {"Polyquant"};
  auto str_type = hdf5::datatype::String::fixed(9);
  str_type.padding(hdf5::datatype::StringPad::NULLPAD);
  str_type.encoding(hdf5::datatype::CharacterEncoding::ASCII);
  auto dtpl = hdf5::property::DatasetTransferList();
  auto application_title_dataset = application_group.create_dataset("code", str_type, simple_space);
  application_title_dataset.write(title, str_type, simple_space, simple_space, dtpl);
}

void POLYQUANT_HDF5::dump_PBC(bool pbc) {
  // write PBC
  Polyquant_cout("dumping PBC parameters");
  auto PBC_group = root_group.create_group("PBC");
  auto PBC_dataset = PBC_group.create_dataset("PBC", bool_type, simple_space);
  PBC_dataset.write(pbc, bool_type, simple_space);
}

void POLYQUANT_HDF5::dump_atoms(int num_atom, int num_species, std::vector<int> atomic_species_ids, std::vector<int> atomic_number, std::vector<int> atomic_charge, std::vector<int> core_elec,
                                std::vector<std::string> atomic_names, std::vector<std::vector<double>> atomic_centers) {
  // write atom parameters
  Polyquant_cout("dumping atom parameters");
  auto atoms_group = root_group.create_group("atoms");
  // write num_atom
  auto num_atom_dataset = atoms_group.create_dataset("number_of_atoms", int_type, simple_space);
  num_atom_dataset.write(num_atom, int_type, simple_space);
  // write num_species
  auto num_species_dataset = atoms_group.create_dataset("number_of_species", int_type, simple_space);
  num_species_dataset.write(num_species, int_type, simple_space);
  // write species ids
  auto atomic_species_ids_dataset = atoms_group.create_dataset("species_ids", vec_int_type, hdf5::dataspace::create(atomic_species_ids));
  atomic_species_ids_dataset.write(atomic_species_ids);
  // write atomic positions
  std::vector<double> flattened_atomic_positions;
  for (auto atomic_position : atomic_centers) {
    flattened_atomic_positions.insert(flattened_atomic_positions.end(), atomic_position.begin(), atomic_position.end());
  }
  auto atomic_positions_dataset = atoms_group.create_dataset("positions", vec_double_type, hdf5::dataspace::Simple({atomic_centers.size(), atomic_centers[0].size()}));
  atomic_positions_dataset.write(flattened_atomic_positions);

  for (auto i = 0ul; i < atomic_number.size(); i++) {
    auto species_group = atoms_group.create_group("species_" + std::to_string(i));
    // dump atomic num
    auto atomic_number_dataset = species_group.create_dataset("atomic_number", int_type, simple_space);
    atomic_number_dataset.write(atomic_number[i], int_type, simple_space);
    // dump atomic charge
    auto atomic_charge_dataset = species_group.create_dataset("charge", int_type, simple_space);
    atomic_charge_dataset.write(atomic_charge[i], int_type, simple_space);
    // dump core elec
    auto atomic_core_elec_dataset = species_group.create_dataset("core", int_type, simple_space);
    atomic_core_elec_dataset.write(core_elec[i], int_type, simple_space);
    // dump atomic name
    auto str_type = hdf5::datatype::String::fixed(atomic_names[i].size());
    str_type.padding(hdf5::datatype::StringPad::NULLPAD);
    str_type.encoding(hdf5::datatype::CharacterEncoding::ASCII);
    auto dtpl = hdf5::property::DatasetTransferList();
    auto atomic_name_dataset = species_group.create_dataset("name", str_type, simple_space);
    atomic_name_dataset.write(atomic_names[i], str_type, simple_space, simple_space, dtpl);
  }
}
// TODO
void POLYQUANT_HDF5::dump_generalparameters(bool complex_vals, bool ecp, bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha, int num_part_beta, int num_part_total,
                                            int multiplicity) {
  // write General parameters
  Polyquant_cout("dumping general parameters");
  auto parameters_group = root_group.create_group("parameters");
  // write COMPLEX
  auto IsComplex_dataset = parameters_group.create_dataset("IsComplex", bool_type, simple_space);
  IsComplex_dataset.write(complex_vals, bool_type, simple_space);
  // write ECP
  auto ECP_dataset = parameters_group.create_dataset("ECP", bool_type, simple_space);
  ECP_dataset.write(ecp, bool_type, simple_space);
  // write restricted
  auto SpinRestricted_dataset = parameters_group.create_dataset("SpinRestricted", bool_type, simple_space);
  SpinRestricted_dataset.write(restricted, bool_type, simple_space);
  // write num_ao
  auto numAO_dataset = parameters_group.create_dataset("numAO", int_type, simple_space);
  numAO_dataset.write(num_ao, int_type, simple_space);
  // write num_mo
  auto numMO_dataset = parameters_group.create_dataset("numMO", int_type, simple_space);
  numMO_dataset.write(num_mo, int_type, simple_space);
  // write bohr_unit
  auto bohr_unit_dataset = parameters_group.create_dataset("Unit", bool_type, simple_space);
  bohr_unit_dataset.write(bohr_unit, bool_type, simple_space);
  // write num_part_alpha
  auto NbAlpha_dataset = parameters_group.create_dataset("NbAlpha", int_type, simple_space);
  NbAlpha_dataset.write(num_part_alpha, int_type, simple_space);
  // write num_part_beta
  auto NbBeta_dataset = parameters_group.create_dataset("NbBeta", int_type, simple_space);
  NbBeta_dataset.write(num_part_beta, int_type, simple_space);
  // write num_part_total
  auto NbTotElec_dataset = parameters_group.create_dataset("NbTotElec", int_type, simple_space);
  NbTotElec_dataset.write(num_part_total, int_type, simple_space);
  // write multiplicity
  auto Spin_dataset = parameters_group.create_dataset("spin", int_type, simple_space);
  Spin_dataset.write(multiplicity, int_type, simple_space);
}
// TODO
void POLYQUANT_HDF5::dump_MOs(std::string quantum_part_name, int num_ao, int num_mo, std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>> E_orb,
                              std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff) {
  // write MO parameters
  Polyquant_cout("dumping MOs");
  auto super_twist_group = root_group.create_group("Super_Twist");

  // write orbital energies
  for (auto spin_idx = 0ul; spin_idx < E_orb.size(); spin_idx++) {
    std::string tag = "eigenval_" + std::to_string(spin_idx);
    std::stringstream buffer;
    buffer << "Dumping spin dataset " << tag << " in file " << this->filename << " for particle name " << quantum_part_name << "." << std::endl;
    Polyquant_cout(buffer.str());
    std::vector<double> orbital_energies(E_orb[spin_idx].data(), E_orb[spin_idx].data() + E_orb[spin_idx].size());
    auto E_orb_dataset = super_twist_group.create_dataset(tag, vec_double_type, hdf5::dataspace::Simple({1, orbital_energies.size()}));
    E_orb_dataset.write(orbital_energies);
    // write orbital coeffs
    std::vector<double> flattened_mo_coeff;
    for (auto i = 0ul; i < num_ao; i++) {
      for (auto j = 0ul; j < num_mo; j++) {
        flattened_mo_coeff.push_back(mo_coeff[spin_idx](j, i));
      }
    }
    tag = "eigenset_" + std::to_string(spin_idx);
    auto mo_coeff_dataset = super_twist_group.create_dataset(tag, vec_double_type, hdf5::dataspace::Simple({static_cast<size_t>(num_ao), static_cast<size_t>(num_mo)}));
    mo_coeff_dataset.write(flattened_mo_coeff);
  }
}
// TODO
void POLYQUANT_HDF5::dump_basis(std::string quantum_part_name, std::vector<std::string> atomic_names, std::vector<std::vector<libint2::Shell>> unique_shells) {
  // apply the shell normalization used in
  // https://github.com/pyscf/pyscf/blob/53e2069b4a3a2e0616bdf4d8c2e3f898c10a8330/pyscf/gto/mole.py#L827
  //_nomalize_contracted_ao in pyscf/gto/mole.py
  // lambda for normalization
  auto gaussianint_lambda = [](auto n, auto alpha) {
    auto n1 = (n + 1.0) * 0.5;
    return std::tgamma(n1) / (2.0 * std::pow(alpha, n1));
  };
  auto gtonorm_lambda = [&gaussianint_lambda](auto l, auto exponent) {
    auto gint_val = gaussianint_lambda((l * 2.0) + 2.0, 2.0 * exponent);
    return 1.0 / std::sqrt(gint_val);
  };
  auto libint_norm = [](auto l, auto alpha) {
    // used in libint -> const auto sqrt_Pi_cubed = double{5.56832799683170784528481798212};
    const auto sqrt_Pi_cubed = double{5.56832799683170784528481798212};
    // const auto sqrt_Pi_cubed = std::pow(std::numbers::pi_v<double>, 1.5);
    const auto two_alpha = 2.0 * alpha;
    const auto two_alpha_to_am32 = std::pow(two_alpha, (l + 1)) * std::sqrt(two_alpha);
    const auto normalization_factor = std::sqrt(std::pow(2.0, l) * two_alpha_to_am32 / (sqrt_Pi_cubed * libint2::math::df_Kminus1[2 * l]));
    return normalization_factor;
  };
  // lambda for removing normalization
  Polyquant_cout("dumping basis parameters");
  auto basis_group = root_group.create_group("basisset");

  // dump number of basis types
  auto NbElements_dataset = basis_group.create_dataset("NbElements", int_type, simple_space);
  NbElements_dataset.write(unique_shells.size(), int_type, simple_space);
  // dump basis name
  std::string basis_name = fmt::format("LCAOBSet_{}", quantum_part_name);
  auto str_type = hdf5::datatype::String::fixed(basis_name.size());
  str_type.padding(hdf5::datatype::StringPad::NULLPAD);
  str_type.encoding(hdf5::datatype::CharacterEncoding::ASCII);
  auto dtpl = hdf5::property::DatasetTransferList();
  auto basis_name_dataset = basis_group.create_dataset("name", str_type, simple_space);
  basis_name_dataset.write(basis_name, str_type, simple_space, simple_space, dtpl);
  // loop over shells
  auto atom_idx = 0ul;
  auto shell_idx = 0ul;
  for (auto atom_shells : unique_shells) {
    shell_idx = 0ul;
    auto atom_basis_group = basis_group.create_group("atomicBasisSet" + std::to_string(atom_idx));
    // dump number of basis types
    auto NbBasisGroups_dataset = atom_basis_group.create_dataset("NbBasisGroups", int_type, simple_space);
    NbBasisGroups_dataset.write(atom_shells.size(), int_type, simple_space);

    if (atom_shells[0].contr[0].pure) {
      // dump cartesian or spherical
      std::string cart_sph = "spherical";
      auto str_type = hdf5::datatype::String::fixed(cart_sph.size());
      str_type.padding(hdf5::datatype::StringPad::NULLPAD);
      str_type.encoding(hdf5::datatype::CharacterEncoding::ASCII);
      auto dtpl = hdf5::property::DatasetTransferList();
      auto cart_sph_dataset = atom_basis_group.create_dataset("angular", str_type, simple_space);
      cart_sph_dataset.write(cart_sph, str_type, simple_space, simple_space, dtpl);
      // dump expansion type
      std::string expandYlm = "natural";
      str_type = hdf5::datatype::String::fixed(expandYlm.size());
      str_type.padding(hdf5::datatype::StringPad::NULLPAD);
      str_type.encoding(hdf5::datatype::CharacterEncoding::ASCII);
      dtpl = hdf5::property::DatasetTransferList();
      auto expandYlm_dataset = atom_basis_group.create_dataset("expandYlm", str_type, simple_space);
      expandYlm_dataset.write(expandYlm, str_type, simple_space, simple_space, dtpl);
    } else {
      // dump cartesian or spherical
      std::string cart_sph = "cartesian";
      auto str_type = hdf5::datatype::String::fixed(cart_sph.size());
      str_type.padding(hdf5::datatype::StringPad::NULLPAD);
      str_type.encoding(hdf5::datatype::CharacterEncoding::ASCII);
      auto dtpl = hdf5::property::DatasetTransferList();
      auto cart_sph_dataset = atom_basis_group.create_dataset("angular", str_type, simple_space);
      cart_sph_dataset.write(cart_sph, str_type, simple_space, simple_space, dtpl);
      // dump expansion type
      std::string expandYlm = "Gamess";
      str_type = hdf5::datatype::String::fixed(expandYlm.size());
      str_type.padding(hdf5::datatype::StringPad::NULLPAD);
      str_type.encoding(hdf5::datatype::CharacterEncoding::ASCII);
      dtpl = hdf5::property::DatasetTransferList();
      auto expandYlm_dataset = atom_basis_group.create_dataset("expandYlm", str_type, simple_space);
      expandYlm_dataset.write(expandYlm, str_type, simple_space, simple_space, dtpl);
    }
    // dump atom type and name
    auto str_type = hdf5::datatype::String::fixed(atomic_names[atom_idx].size());
    str_type.padding(hdf5::datatype::StringPad::NULLPAD);
    str_type.encoding(hdf5::datatype::CharacterEncoding::ASCII);
    auto dtpl = hdf5::property::DatasetTransferList();
    auto atom_basis_elementType_dataset = atom_basis_group.create_dataset("elementType", str_type, simple_space);
    atom_basis_elementType_dataset.write(atomic_names[atom_idx], str_type, simple_space, simple_space, dtpl);
    auto atom_basis_name_dataset = atom_basis_group.create_dataset("name", str_type, simple_space);
    atom_basis_name_dataset.write(atomic_names[atom_idx], str_type, simple_space, simple_space, dtpl);
    // dump normalization
    std::string normalized = "no";
    str_type = hdf5::datatype::String::fixed(normalized.size());
    str_type.padding(hdf5::datatype::StringPad::NULLPAD);
    str_type.encoding(hdf5::datatype::CharacterEncoding::ASCII);
    dtpl = hdf5::property::DatasetTransferList();
    auto atom_basis_normalization_dataset = atom_basis_group.create_dataset("normalized", str_type, simple_space);
    atom_basis_normalization_dataset.write(normalized, str_type, simple_space, simple_space, dtpl);
    // dump grid data
    int grid_npts = 1001;
    auto grid_npts_dataset = atom_basis_group.create_dataset("grid_npts", int_type, simple_space);
    grid_npts_dataset.write(grid_npts, int_type, simple_space);

    int grid_rf = 100;
    auto grid_rf_dataset = atom_basis_group.create_dataset("grid_rf", int_type, simple_space);
    grid_rf_dataset.write(grid_rf, int_type, simple_space);

    double grid_ri = 1.0e-6;
    auto grid_ri_dataset = atom_basis_group.create_dataset("grid_ri", double_type, simple_space);
    grid_ri_dataset.write(grid_ri, double_type, simple_space);

    std::string grid_type = "log";
    str_type = hdf5::datatype::String::fixed(grid_type.size());
    str_type.padding(hdf5::datatype::StringPad::NULLPAD);
    str_type.encoding(hdf5::datatype::CharacterEncoding::ASCII);
    dtpl = hdf5::property::DatasetTransferList();
    auto grid_type_dataset = atom_basis_group.create_dataset("grid_type", str_type, simple_space);
    grid_type_dataset.write(grid_type, str_type, simple_space, simple_space, dtpl);
    shell_idx = 0ul;
    for (auto shell : atom_shells) {
      auto shell_group = atom_basis_group.create_group("basisGroup" + std::to_string(shell_idx));
      // dump number of radial functions
      auto NbRadFunc_dataset = shell_group.create_dataset("NbRadFunc", int_type, simple_space);
      NbRadFunc_dataset.write(shell.alpha.size(), int_type, simple_space);
      // write n and l
      auto n_dataset = shell_group.create_dataset("n", int_type, simple_space);
      n_dataset.write(shell_idx, int_type, simple_space);
      auto l_dataset = shell_group.create_dataset("l", int_type, simple_space);
      l_dataset.write(shell.contr[0].l, int_type, simple_space);
      // dump basis type
      std::string basis_type = "Gaussian";
      str_type = hdf5::datatype::String::fixed(basis_type.size());
      str_type.padding(hdf5::datatype::StringPad::NULLPAD);
      str_type.encoding(hdf5::datatype::CharacterEncoding::ASCII);
      dtpl = hdf5::property::DatasetTransferList();
      auto basis_type_dataset = shell_group.create_dataset("type", str_type, simple_space);
      basis_type_dataset.write(basis_type, str_type, simple_space, simple_space, dtpl);
      // dump basis function id
      std::string basis_id = atomic_names[atom_idx] + std::to_string(shell_idx) + std::to_string(shell.contr[0].l);
      str_type = hdf5::datatype::String::fixed(basis_id.size());
      str_type.padding(hdf5::datatype::StringPad::NULLPAD);
      str_type.encoding(hdf5::datatype::CharacterEncoding::ASCII);
      dtpl = hdf5::property::DatasetTransferList();
      auto basis_id_dataset = shell_group.create_dataset("rid", str_type, simple_space);
      basis_id_dataset.write(basis_id, str_type, simple_space, simple_space, dtpl);
      // dump basis function location
      std::vector<double> origin = {shell.O[0], shell.O[1], shell.O[2]};
      auto basis_position_dataset = shell_group.create_dataset("Shell_coord", hdf5::datatype::create<std::vector<double>>(), hdf5::dataspace::create(origin));
      basis_position_dataset.write(origin);
      auto rad_func_group = shell_group.create_group("radfunctions");
      std::vector<double> renormed_coefficients;
      for (auto p = 0ul; p < shell.alpha.size(); ++p) {
        renormed_coefficients.push_back(shell.contr[0].coeff[p]);
      }
      auto l = shell.contr[0].l;
      for (auto p = 0ul; p < shell.alpha.size(); ++p) {
        renormed_coefficients[p] /= libint_norm(l, shell.alpha[p]);
      }
      // apply pyscf gtonorm
      for (auto p = 0ul; p < shell.alpha.size(); ++p) {
        renormed_coefficients[p] *= gtonorm_lambda(l, shell.alpha[p]);
      }
      // apply pyscf _nomalize_contracted_ao
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> ee;
      ee.setZero(shell.alpha.size(), shell.alpha.size());
      for (auto i = 0ul; i < shell.alpha.size(); ++i) {
        for (auto j = 0ul; j < shell.alpha.size(); ++j) {
          auto n1 = l * 2 + 2;
          auto alpha = shell.alpha[i] + shell.alpha[j];
          ee(i, j) = gaussianint_lambda(l * 2 + 2, alpha);
        }
      }
      double s1 = 0.0;
      for (auto p = 0ul; p < shell.alpha.size(); ++p) {
        for (auto q = 0ul; q < shell.alpha.size(); ++q) {
          s1 += renormed_coefficients[p] * ee(p, q) * renormed_coefficients[q];
        }
      }
      s1 = 1.0 / std::sqrt(s1);
      for (auto p = 0ul; p < shell.alpha.size(); ++p) {
        renormed_coefficients[p] *= s1;
      }
      // remove pyscf gtonorm
      for (auto p = 0ul; p < shell.alpha.size(); ++p) {
        renormed_coefficients[p] /= gtonorm_lambda(l, shell.alpha[p]);
      }

      for (auto i = 0ul; i < shell.alpha.size(); ++i) {
        auto curr_func_group = rad_func_group.create_group("DataRad" + std::to_string(i));
        // dump exponent and contraction coefficient
        double exponent = shell.alpha[i];
        auto exponent_dataset = curr_func_group.create_dataset("exponent", double_type, simple_space);
        exponent_dataset.write(exponent, double_type, simple_space);
        double contraction = renormed_coefficients[i];
        auto contraction_dataset = curr_func_group.create_dataset("contraction", double_type, simple_space);
        contraction_dataset.write(contraction, double_type, simple_space);
      }
      shell_idx++;
    }
    atom_idx++;
  }
}
// TODO
void POLYQUANT_HDF5::dump_mf_to_hdf5_for_QMCPACK(bool pbc, bool complex_vals, bool ecp, bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha, int num_part_beta,
                                                 int num_part_total, int multiplicity, int num_atom, int num_species, std::string quantum_part_name,
                                                 std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>> E_orb, std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff,
                                                 std::vector<int> atomic_species_ids, std::vector<int> atomic_number, std::vector<int> atomic_charge, std::vector<int> core_elec,
                                                 std::vector<std::string> atomic_names, std::vector<std::vector<double>> atomic_centers, std::vector<std::vector<libint2::Shell>> unique_shells) {
  // create file
  Polyquant_cout("dumping file");
  this->dump_application();
  this->dump_PBC(pbc);
  this->dump_generalparameters(complex_vals, ecp, restricted, num_ao, num_mo, bohr_unit, num_part_alpha, num_part_beta, num_part_total, multiplicity);
  this->dump_MOs(quantum_part_name, num_ao, num_mo, E_orb, mo_coeff);
  this->dump_atoms(num_atom, num_species, atomic_species_ids, atomic_number, atomic_charge, core_elec, atomic_names, atomic_centers);
  this->dump_basis(quantum_part_name, atomic_names, unique_shells);
}
// TODO
void POLYQUANT_HDF5::dump_post_mf_to_hdf5_for_QMCPACK(std::vector<std::vector<std::vector<std::vector<uint64_t>>>> dets, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C, int N_dets,
                                                      int N_states, int N_mo) {
  auto N_int_per_det = dets[0][0][0].size();
  Polyquant_cout("dumping CI parameters");
  auto multidet_group = root_group.create_group("MultiDet");
  for (int part_idx = 0; part_idx < dets.size(); part_idx++) {
    for (int spin_idx = 0; spin_idx < dets[part_idx].size(); spin_idx++) {
      std::string tag = "CI_" + std::to_string(part_idx * 2 + spin_idx);
      std::vector<uint64_t> flattened_dets;
      for (int i = 0; i < N_dets; i++) {
        for (int j = 0; j < N_int_per_det; j++) {
          if (j < dets[part_idx][spin_idx][i].size()) {
            flattened_dets.push_back(dets[part_idx][spin_idx][i][j]);
          } else {
            flattened_dets.push_back(0);
          }
        }
      }
      auto det_dataset =
          multidet_group.create_dataset(tag, hdf5::datatype::create<std::vector<uint64_t>>(), hdf5::dataspace::Simple({static_cast<size_t>(N_dets), static_cast<size_t>(N_int_per_det)}));
      det_dataset.write(flattened_dets);
    }
  }

  for (auto i = 0ul; i < N_states; i++) {
    std::vector<double> coeff;
    for (auto j = 0ul; j < N_dets; j++) {
      coeff.push_back(C(j, i));
    }
    std::string tag = "Coeff";
    if (i > 0) {
      tag += "_" + std::to_string(i);
    }
    auto coeff_dataset = multidet_group.create_dataset(tag, hdf5::datatype::create<std::vector<double>>(), hdf5::dataspace::Simple({static_cast<size_t>(N_dets)}));
    coeff_dataset.write(coeff);
  }

  auto NbDet_dataset = multidet_group.create_dataset("NbDet", int_type, simple_space);
  NbDet_dataset.write(N_dets, int_type, simple_space);

  auto Nbits_dataset = multidet_group.create_dataset("Nbits", int_type, simple_space);
  Nbits_dataset.write(N_int_per_det, int_type, simple_space);

  auto nexcitedstate_dataset = multidet_group.create_dataset("nexcitedstate", int_type, simple_space);
  nexcitedstate_dataset.write(N_states, int_type, simple_space);

  auto nstate_dataset = multidet_group.create_dataset("nstate", int_type, simple_space);
  nstate_dataset.write(N_mo, int_type, simple_space);
}
