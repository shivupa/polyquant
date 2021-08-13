#include "io/hdf5_utilities.hpp"

using namespace polyquant;
void Polyquant_dump_post_mf_to_hdf5_for_QMCPACK(
    const std::string &filename,
    std::vector<std::vector<std::vector<std::vector<uint64_t>>>> dets,
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C, int N_dets,
    int N_states, int N_mo) {
  using namespace hdf5;
  auto simple_space = hdf5::dataspace::Simple({1});
  auto bool_type = datatype::create<bool>();
  auto int_type = datatype::create<int>();
  auto double_type = datatype::create<double>();
  auto N_int_per_det = dets[0][0][0].size();

  file::File f = file::open(filename, file::AccessFlags::READWRITE);
  node::Group root_group = f.root();
  Polyquant_cout("dumping CI parameters");
  auto multidet_group = root_group.create_group("MultiDet");
  for (int part_idx = 0; part_idx < dets.size(); part_idx++) {
    for (int spin_idx = 0; spin_idx < dets[part_idx].size(); spin_idx++) {
      std::string tag = "CI_" + std::to_string(part_idx * 2 + spin_idx);
      std::vector<uint64_t> flattened_dets;
      for (int i = 0; i < N_dets; i++) {
        for (int j = 0; j < N_int_per_det; j++) {
          flattened_dets.push_back(dets[part_idx][spin_idx][i][j]);
        }
      }
      auto det_dataset = multidet_group.create_dataset(
          tag, datatype::create<std::vector<uint64_t>>(),
          hdf5::dataspace::Simple({N_dets, N_int_per_det}));
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
    auto coeff_dataset = multidet_group.create_dataset(
        tag, datatype::create<std::vector<double>>(),
        hdf5::dataspace::Simple({N_dets}));
    coeff_dataset.write(coeff);
  }

  auto NbDet_dataset =
      multidet_group.create_dataset("NbDet", int_type, simple_space);
  NbDet_dataset.write(N_dets, int_type, simple_space);

  auto Nbits_dataset =
      multidet_group.create_dataset("Nbits", int_type, simple_space);
  Nbits_dataset.write(N_int_per_det, int_type, simple_space);

  auto nexcitedstate_dataset =
      multidet_group.create_dataset("nexcitedstate", int_type, simple_space);
  nexcitedstate_dataset.write(N_states, int_type, simple_space);

  auto nstate_dataset =
      multidet_group.create_dataset("nstate", int_type, simple_space);
  nstate_dataset.write(N_mo, int_type, simple_space);
}
void hdf5dump_application(hdf5::node::Group &root_group) {
  using namespace hdf5;
  auto simple_space = hdf5::dataspace::Simple({1});
  // write generating code name
  Polyquant_cout("dumping application parameters");
  auto application_group = root_group.create_group("application");
  std::vector<std::string> title = {"Polyquant"};
  auto str_type = datatype::String::fixed(9);
  str_type.padding(datatype::StringPad::NULLPAD);
  str_type.encoding(datatype::CharacterEncoding::ASCII);
  auto dtpl = hdf5::property::DatasetTransferList();
  auto application_title_dataset =
      application_group.create_dataset("code", str_type, simple_space);
  application_title_dataset.write(title, str_type, simple_space, simple_space,
                                  dtpl);
}
void hdf5dump_PBC(hdf5::node::Group &root_group, bool pbc) {
  using namespace hdf5;
  auto simple_space = hdf5::dataspace::Simple({1});
  auto bool_type = datatype::create<bool>();
  // write PBC
  Polyquant_cout("dumping PBC parameters");
  auto PBC_group = root_group.create_group("PBC");
  auto PBC_dataset = PBC_group.create_dataset("PBC", bool_type, simple_space);
  PBC_dataset.write(pbc, bool_type, simple_space);
}
void hdf5dump_generalparameters(hdf5::node::Group &root_group,
                                bool complex_vals, bool ecp, bool restricted,
                                int num_ao, int num_mo, bool bohr_unit,
                                int num_part_alpha, int num_part_beta,
                                int num_part_total, int multiplicity) {
  using namespace hdf5;
  auto simple_space = hdf5::dataspace::Simple({1});
  auto bool_type = datatype::create<bool>();
  // write General parameters
  Polyquant_cout("dumping general parameters");
  auto parameters_group = root_group.create_group("parameters");
  // write COMPLEX
  auto IsComplex_dataset =
      parameters_group.create_dataset("IsComplex", bool_type, simple_space);
  IsComplex_dataset.write(complex_vals, bool_type, simple_space);
  // write ECP
  auto ECP_dataset =
      parameters_group.create_dataset("ECP", bool_type, simple_space);
  ECP_dataset.write(ecp, bool_type, simple_space);
  // write restricted
  auto SpinRestricted_dataset = parameters_group.create_dataset(
      "SpinRestricted", bool_type, simple_space);
  SpinRestricted_dataset.write(restricted, bool_type, simple_space);
  // write num_ao
  auto numAO_dataset =
      parameters_group.create_dataset("numAO", int_type, simple_space);
  numAO_dataset.write(num_ao, int_type, simple_space);
  // write num_mo
  auto numMO_dataset =
      parameters_group.create_dataset("numMO", int_type, simple_space);
  numMO_dataset.write(num_mo, int_type, simple_space);
  // write bohr_unit
  auto bohr_unit_dataset =
      parameters_group.create_dataset("Unit", bool_type, simple_space);
  bohr_unit_dataset.write(bohr_unit, bool_type, simple_space);
  // write num_part_alpha
  auto NbAlpha_dataset =
      parameters_group.create_dataset("NbAlpha", int_type, simple_space);
  NbAlpha_dataset.write(num_part_alpha, int_type, simple_space);
  // write num_part_beta
  auto NbBeta_dataset =
      parameters_group.create_dataset("NbBeta", int_type, simple_space);
  NbBeta_dataset.write(num_part_beta, int_type, simple_space);
  // write num_part_total
  auto NbTotElec_dataset =
      parameters_group.create_dataset("NbTotElec", int_type, simple_space);
  NbTotElec_dataset.write(num_part_total, int_type, simple_space);
  // write multiplicity
  auto Spin_dataset =
      parameters_group.create_dataset("spin", int_type, simple_space);
  Spin_dataset.write(multiplicity, int_type, simple_space);
}
void hdf5dump_MOs(
    hdf5::node::Group &root_group, std::vector<std::string> quantum_part_names,
    std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> E_orb,
    std::vector<
        std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>
        mo_coeff) {
  // write MO parameters
  Polyquant_cout("dumping MOs");
  auto super_twist_group = root_group.create_group("Super_Twist");

  auto Spin_dataset_offset = 0;
  for (auto idx = 0ul; idx < E_orb.size(); idx++) {
    if (E_orb[idx].size() == 1) {
      std::stringstream buffer;
      buffer << "Spin dataset " << Spin_dataset_offset + 0 << " "
             << "corresponds to " << quantum_part_names[idx]
             << " alpha and beta particles (restricted calculation).";
      Polyquant_cout(buffer.str());
    } else if (E_orb[idx].size() == 2) {
      std::stringstream buffer;
      buffer << "Spin dataset " << Spin_dataset_offset + 0 << " "
             << "corresponds to " << quantum_part_names[idx]
             << " alpha particles (unrestricted calculation)." << std::endl;
      buffer << "Spin dataset " << Spin_dataset_offset + 1 << " "
             << "corresponds to " << quantum_part_names[idx]
             << " beta particles (unrestricted calculation).";
      Polyquant_cout(buffer.str());
    }
    Spin_dataset_offset += 2;
  }
  // write orbital energies
  Spin_dataset_offset = 0;
  for (auto part_idx = 0ul; part_idx < E_orb.size(); part_idx++) {
    for (auto spin_idx = 0ul; spin_idx < E_orb[part_idx].size(); spin_idx++) {
      std::string tag =
          "eigenval_" + std::to_string(Spin_dataset_offset + spin_idx);
      std::vector<double> orbital_energies(
          E_orb[part_idx][spin_idx].data(),
          E_orb[part_idx][spin_idx].data() + E_orb[part_idx][spin_idx].size());
      auto E_orb_dataset = super_twist_group.create_dataset(
          tag, datatype::create<std::vector<double>>(),
          hdf5::dataspace::Simple({1, orbital_energies.size()}));
      E_orb_dataset.write(orbital_energies);
      // write orbital coeffs
      std::vector<double> flattened_mo_coeff;
      for (auto i = 0ul; i < num_ao; i++) {
        for (auto j = 0ul; j < num_mo; j++) {
          flattened_mo_coeff.push_back(mo_coeff[part_idx][spin_idx](j, i));
        }
      }
      tag = "eigenset_" + std::to_string(Spin_dataset_offset + spin_idx);
      auto mo_coeff_dataset = super_twist_group.create_dataset(
          tag, datatype::create<std::vector<double>>(),
          hdf5::dataspace::Simple({num_ao, num_mo}));
      mo_coeff_dataset.write(flattened_mo_coeff);
    }
    Spin_dataset_offset += 2;
  }
}
void hdf5dump_atoms(hdf5::node::Group &root_group, int num_atom,
                    int num_species, std::vector<int> atomic_species_ids,
                    std::vector<int> atomic_number,
                    std::vector<int> atomic_charge, std::vector<int> core_elec,
                    std::vector<std::string> atomic_names,
                    std::vector<std::vector<double>> atomic_centers) {
  // write atom parameters
  Polyquant_cout("dumping atom parameters");
  auto atoms_group = root_group.create_group("atoms");

  // write num_atom
  auto num_atom_dataset =
      atoms_group.create_dataset("number_of_atoms", int_type, simple_space);
  num_atom_dataset.write(num_atom, int_type, simple_space);
  // write num_species
  auto num_species_dataset =
      atoms_group.create_dataset("number_of_species", int_type, simple_space);
  num_species_dataset.write(num_species, int_type, simple_space);
  // write species ids
  auto atomic_species_ids_dataset = atoms_group.create_dataset(
      "species_ids", vec_int_type, dataspace::create(atomic_species_ids));
  atomic_species_ids_dataset.write(atomic_species_ids);
  // write atomic positions
  std::vector<double> flattened_atomic_positions;
  for (auto atomic_position : atomic_centers) {
    flattened_atomic_positions.insert(flattened_atomic_positions.end(),
                                      atomic_position.begin(),
                                      atomic_position.end());
  }
  auto atomic_positions_dataset = atoms_group.create_dataset(
      "positions", datatype::create<std::vector<double>>(),
      hdf5::dataspace::Simple(
          {atomic_centers.size(), atomic_centers[0].size()}));
  atomic_positions_dataset.write(flattened_atomic_positions);

  for (auto i = 0ul; i < atomic_number.size(); i++) {
    auto species_group =
        atoms_group.create_group("species_" + std::to_string(i));
    // dump atomic num
    auto atomic_number_dataset =
        species_group.create_dataset("atomic_number", int_type, simple_space);
    atomic_number_dataset.write(atomic_number[i], int_type, simple_space);
    // dump atomic charge
    auto atomic_charge_dataset =
        species_group.create_dataset("charge", int_type, simple_space);
    atomic_charge_dataset.write(atomic_charge[i], int_type, simple_space);
    // dump core elec
    auto atomic_core_elec_dataset =
        species_group.create_dataset("core", int_type, simple_space);
    atomic_core_elec_dataset.write(core_elec[i], int_type, simple_space);
    // dump atomic name
    auto str_type = datatype::String::fixed(atomic_names[i].size());
    str_type.padding(datatype::StringPad::NULLPAD);
    str_type.encoding(datatype::CharacterEncoding::ASCII);
    auto dtpl = hdf5::property::DatasetTransferList();
    auto atomic_name_dataset =
        species_group.create_dataset("name", str_type, simple_space);
    atomic_name_dataset.write(atomic_names[i], str_type, simple_space,
                              simple_space, dtpl);
  }
}
void hdf5dump_basis(hdf5::node::Group &root_group,
                    std::vector<std::vector<libint2::Shell>> unique_shells) {
  // lambda for removing normalization
  // auto gaussianint_lambda = [](auto n, auto alpha) {
  //   auto n1 = (n + 1) * 0.5;
  //   return std::tgamma(n1) / (2.0 * std::pow(alpha, n1));
  // };
  // auto gtonorm_lambda = [&gaussianint_lambda](auto l, auto exponent) {
  //   auto gint_val = gaussianint_lambda((l * 2) + 2, 2.0 * exponent);
  //   return 1.0 / std::sqrt(gint_val);
  // };
  Polyquant_cout("dumping basis parameters");
  auto basis_group = root_group.create_group("basisset");

  // dump number of basis types
  auto NbElements_dataset =
      basis_group.create_dataset("NbElements", int_type, simple_space);
  NbElements_dataset.write(unique_shells.size(), int_type, simple_space);
  // dump basis name
  std::string basis_name = "LCAOBSet";
  auto str_type = datatype::String::fixed(basis_name.size());
  str_type.padding(datatype::StringPad::NULLPAD);
  str_type.encoding(datatype::CharacterEncoding::ASCII);
  auto dtpl = hdf5::property::DatasetTransferList();
  auto basis_name_dataset =
      basis_group.create_dataset("name", str_type, simple_space);
  basis_name_dataset.write(basis_name, str_type, simple_space, simple_space,
                           dtpl);
  // loop over shells
  auto atom_idx = 0ul;
  auto shell_idx = 0ul;
  for (auto atom_shells : unique_shells) {
    shell_idx = 0ul;
    auto atom_basis_group =
        basis_group.create_group("atomicBasisSet" + std::to_string(atom_idx));
    // dump number of basis types
    auto NbBasisGroups_dataset = atom_basis_group.create_dataset(
        "NbBasisGroups", int_type, simple_space);
    NbBasisGroups_dataset.write(atom_shells.size(), int_type, simple_space);

    if (atom_shells[0].contr[0].pure) {
      // dump cartesian or spherical
      std::string cart_sph = "spherical";
      auto str_type = datatype::String::fixed(cart_sph.size());
      str_type.padding(datatype::StringPad::NULLPAD);
      str_type.encoding(datatype::CharacterEncoding::ASCII);
      auto dtpl = hdf5::property::DatasetTransferList();
      auto cart_sph_dataset =
          atom_basis_group.create_dataset("angular", str_type, simple_space);
      cart_sph_dataset.write(cart_sph, str_type, simple_space, simple_space,
                             dtpl);
      // dump expansion type
      std::string expandYlm = "natural";
      str_type = datatype::String::fixed(expandYlm.size());
      str_type.padding(datatype::StringPad::NULLPAD);
      str_type.encoding(datatype::CharacterEncoding::ASCII);
      dtpl = hdf5::property::DatasetTransferList();
      auto expandYlm_dataset =
          atom_basis_group.create_dataset("expandYlm", str_type, simple_space);
      expandYlm_dataset.write(expandYlm, str_type, simple_space, simple_space,
                              dtpl);
    } else {
      // dump cartesian or spherical
      std::string cart_sph = "cartesian";
      auto str_type = datatype::String::fixed(cart_sph.size());
      str_type.padding(datatype::StringPad::NULLPAD);
      str_type.encoding(datatype::CharacterEncoding::ASCII);
      auto dtpl = hdf5::property::DatasetTransferList();
      auto cart_sph_dataset =
          atom_basis_group.create_dataset("angular", str_type, simple_space);
      cart_sph_dataset.write(cart_sph, str_type, simple_space, simple_space,
                             dtpl);
      // dump expansion type
      std::string expandYlm = "Gamess";
      str_type = datatype::String::fixed(expandYlm.size());
      str_type.padding(datatype::StringPad::NULLPAD);
      str_type.encoding(datatype::CharacterEncoding::ASCII);
      dtpl = hdf5::property::DatasetTransferList();
      auto expandYlm_dataset =
          atom_basis_group.create_dataset("expandYlm", str_type, simple_space);
      expandYlm_dataset.write(expandYlm, str_type, simple_space, simple_space,
                              dtpl);
    }
    // dump atom type and name
    auto str_type = datatype::String::fixed(atomic_names[atom_idx].size());
    str_type.padding(datatype::StringPad::NULLPAD);
    str_type.encoding(datatype::CharacterEncoding::ASCII);
    auto dtpl = hdf5::property::DatasetTransferList();
    auto atom_basis_elementType_dataset =
        atom_basis_group.create_dataset("elementType", str_type, simple_space);
    atom_basis_elementType_dataset.write(atomic_names[atom_idx], str_type,
                                         simple_space, simple_space, dtpl);
    auto atom_basis_name_dataset =
        atom_basis_group.create_dataset("name", str_type, simple_space);
    atom_basis_name_dataset.write(atomic_names[atom_idx], str_type,
                                  simple_space, simple_space, dtpl);
    // dump normalization
    std::string normalized = "no";
    str_type = datatype::String::fixed(normalized.size());
    str_type.padding(datatype::StringPad::NULLPAD);
    str_type.encoding(datatype::CharacterEncoding::ASCII);
    dtpl = hdf5::property::DatasetTransferList();
    auto atom_basis_normalization_dataset =
        atom_basis_group.create_dataset("normalized", str_type, simple_space);
    atom_basis_normalization_dataset.write(normalized, str_type, simple_space,
                                           simple_space, dtpl);
    // dump grid data
    int grid_npts = 1001;
    auto grid_npts_dataset =
        atom_basis_group.create_dataset("grid_npts", int_type, simple_space);
    grid_npts_dataset.write(grid_npts, int_type, simple_space);

    int grid_rf = 100;
    auto grid_rf_dataset =
        atom_basis_group.create_dataset("grid_rf", int_type, simple_space);
    grid_rf_dataset.write(grid_rf, int_type, simple_space);

    double grid_ri = 1.0e-6;
    auto grid_ri_dataset =
        atom_basis_group.create_dataset("grid_ri", double_type, simple_space);
    grid_ri_dataset.write(grid_ri, double_type, simple_space);

    std::string grid_type = "log";
    str_type = datatype::String::fixed(grid_type.size());
    str_type.padding(datatype::StringPad::NULLPAD);
    str_type.encoding(datatype::CharacterEncoding::ASCII);
    dtpl = hdf5::property::DatasetTransferList();
    auto grid_type_dataset =
        atom_basis_group.create_dataset("grid_type", str_type, simple_space);
    grid_type_dataset.write(grid_type, str_type, simple_space, simple_space,
                            dtpl);
    shell_idx = 0ul;
    for (auto shell : atom_shells) {
      auto shell_group = atom_basis_group.create_group(
          "basisGroup" + std::to_string(shell_idx));
      // dump number of radial functions
      auto NbRadFunc_dataset =
          shell_group.create_dataset("NbRadFunc", int_type, simple_space);
      NbRadFunc_dataset.write(shell.alpha.size(), int_type, simple_space);
      // write n and l
      auto n_dataset = shell_group.create_dataset("n", int_type, simple_space);
      n_dataset.write(shell_idx, int_type, simple_space);
      auto l_dataset = shell_group.create_dataset("l", int_type, simple_space);
      l_dataset.write(shell.contr[0].l, int_type, simple_space);
      // dump basis type
      std::string basis_type = "Gaussian";
      str_type = datatype::String::fixed(basis_type.size());
      str_type.padding(datatype::StringPad::NULLPAD);
      str_type.encoding(datatype::CharacterEncoding::ASCII);
      dtpl = hdf5::property::DatasetTransferList();
      auto basis_type_dataset =
          shell_group.create_dataset("type", str_type, simple_space);
      basis_type_dataset.write(basis_type, str_type, simple_space, simple_space,
                               dtpl);
      // dump basis function id
      std::string basis_id = atomic_names[atom_idx] +
                             std::to_string(shell_idx) +
                             std::to_string(shell.contr[0].l);
      str_type = datatype::String::fixed(basis_id.size());
      str_type.padding(datatype::StringPad::NULLPAD);
      str_type.encoding(datatype::CharacterEncoding::ASCII);
      dtpl = hdf5::property::DatasetTransferList();
      auto basis_id_dataset =
          shell_group.create_dataset("rid", str_type, simple_space);
      basis_id_dataset.write(basis_id, str_type, simple_space, simple_space,
                             dtpl);
      // dump basis function location
      std::vector<double> origin = {shell.O[0], shell.O[1], shell.O[2]};
      auto basis_position_dataset = shell_group.create_dataset(
          "Shell_coord", datatype::create<std::vector<double>>(),
          dataspace::create(origin));
      basis_position_dataset.write(origin);
      auto rad_func_group = shell_group.create_group("radfunctions");
      for (auto i = 0ul; i < shell.alpha.size(); ++i) {
        auto curr_func_group =
            rad_func_group.create_group("DataRad" + std::to_string(i));
        // dump exponent and contraction coefficient
        double exponent = shell.alpha[i];
        auto exponent_dataset = curr_func_group.create_dataset(
            "exponent", double_type, simple_space);
        exponent_dataset.write(exponent, double_type, simple_space);
        double contraction = shell.contr[0].coeff.at(i);
        // // REMOVE NORMALIZATION FACTOR FROM LIBINT
        // // SEE SHELL.H
        // //
        //
https://github.com/evaleev/libint/blob/3bf3a07b58650fe2ed4cd3dc6517d741562e1249/include/libint2/shell.h#L263
        // const auto sqrt_Pi_cubed =
        // double{5.56832799683170784528481798212}; const auto two_alpha
        // = 2.0 * exponent; const auto two_alpha_to_am32 =
        //     std::pow(two_alpha, (shell.contr[0].l + 1)) *
        //     std::sqrt(two_alpha);
        // const auto normalization_factor =
        //     std::sqrt(std::pow(2.0, shell.contr[0].l) * two_alpha_to_am32
        //     /
        //               (sqrt_Pi_cubed *
        //                libint2::math::df_Kminus1[2 * shell.contr[0].l]));
        // contraction /= normalization_factor;
        // Remove pyscf norm
        // aply pyscf _nomalize_contracted_ao
        // std::cout << "before unnormalizing at output " << exponent << " "
        //          << contraction << std::endl;
        // contraction /= gtonorm_lambda(shell.contr[0].l, exponent);
        // std::cout << "after unnormalizing at output " << exponent << " "
        //           << contraction << std::endl;
        // std::stringstream buffer;
        // auto a = gtonorm_lambda(shell.contr[0].l, exponent);
        // std::cout << a << std::endl;
        auto contraction_dataset = curr_func_group.create_dataset(
            "contraction", double_type, simple_space);
        contraction_dataset.write(contraction, double_type, simple_space);
      }
      shell_idx++;
    }
    atom_idx++;
  }
}
void Polyquant_dump_mf_to_hdf5_for_QMCPACK(
    const std::string &filename, bool pbc, bool complex_vals, bool ecp,
    bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha,
    int num_part_beta, int num_part_total, int multiplicity, int num_atom,
    int num_species, std::vector<std::string> quantum_part_names,
    std::vector<std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>>> E_orb,
    std::vector<
        std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>
        mo_coeff,
    std::vector<int> atomic_species_ids, std::vector<int> atomic_number,
    std::vector<int> atomic_charge, std::vector<int> core_elec,
    std::vector<std::string> atomic_names,
    std::vector<std::vector<double>> atomic_centers,
    std::vector<std::vector<libint2::Shell>> unique_shells) {
  using namespace hdf5;
  auto simple_space = hdf5::dataspace::Simple({1});
  auto bool_type = datatype::create<bool>();
  auto int_type = datatype::create<int>();
  auto double_type = datatype::create<double>();
  auto vec_int_type = datatype::create<std::vector<int>>();
  // create file
  Polyquant_cout("dumping file");
  file::File f = file::create(filename, file::AccessFlags::TRUNCATE);
  node::Group root_group = f.root();
  hdf5dump_application(root_group);
  hdf5dump_PBC(root_group, pbc);
  hdf5dump_generalparameters(root_group, complex_vals, ecp, restricted, num_ao,
                             num_mo, bohr_unit, num_part_alpha, num_part_beta,
                             num_part_total, multiplicity);
  hdf5dump_MOs(root_group, quantum_part_names, E_orb, mo_coeff);
  hdf5dump_atoms(root_group, num_atom, num_species, atomic_species_ids,
                 atomic_number, atomic_charge, core_elec, atomic_names,
                 atomic_centers);
  hdf5dump_basis(root_group, unique_shells);
}
