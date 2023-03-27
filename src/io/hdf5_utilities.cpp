#include "io/hdf5_utilities.hpp"

using namespace polyquant;

POLYQUANT_HDF5::POLYQUANT_HDF5(const std::string &fname) { this->create_file(fname); }

void POLYQUANT_HDF5::create_file(const std::string &fname) {
  this->filename = fname;
  if (std::filesystem::exists(filename)) {
    std::stringstream s;
    s << "HDF5 file " << filename << " exists. Opening in Read/Write mode." << std::endl;
    Polyquant_cout(s.str());
  }
  this->hdf5_file = std::make_unique<HighFive::File>(this->filename, HighFive::File::OpenOrCreate);
}

void POLYQUANT_HDF5::write_str(std::string path, std::string val) {
  if (val.size() > 100) {
    APP_ABORT("HDF5 string work around requires a constant sized char array. Recompile with a larger array in POLYQUANT_HDF5::write_str array");
  }
  char val_arr[100];
  // HighFive::FixedLenStringArray<20> val_arr{val.c_str()};
  // char val_arr[val.size() + 1];
  std::copy(val.begin(), val.end(), val_arr);
  // std::array val_arr_std {val.c_str()};
  POLYQUANT_STR_TYPE val_type(val);
  // std::string group_name(path);
  // group_name = group_name.substr(0, group_name.rfind("/" ));
  // std::string attr_name(path);
  // attr_name = attr_name.substr(attr_name.rfind("/") +1);
  // std::cout << "SHIV " << group_name << std::endl;
  // std::cout << this->exist(group_name) << std::endl;
  // if (!this->exist(group_name)){
  //     auto group = (*hdf5_file).createGroup(group_name);
  // }
  // std::cout << this->exist(group_name) << std::endl;
  // std::cout << "SHIV " << attr_name << std::endl;
  // auto group = (*hdf5_file).getGroup(group_name);
  // auto attr = group.createAttribute(attr_name, HighFive::DataSpace{1}, val_type);
  if (!this->exist(path)) {
    auto ds = (*hdf5_file).createDataSet(path, HighFive::DataSpace{1}, val_type);
    ds.write(val_arr);
  } else {
    auto ds = (*hdf5_file).getDataSet(path);
    ds.write(val_arr);
  }

  // std::wstring ws(val.begin(), val.end());
  // attr.write(val_arr);

  // H5Easy::dump(*hdf5_file, path, val_local, H5Easy::DumpMode::Overwrite);
}

void POLYQUANT_HDF5::dump_application() {
  // write generating code name
  Polyquant_cout("dumping application parameters");
  std::string path = "/application/code";
  std::string title = "Polyquant";
  write_str(path, title);
}

void POLYQUANT_HDF5::dump_PBC(bool pbc) {
  // write PBC
  Polyquant_cout("dumping PBC parameters");
  int p = pbc;
  H5Easy::dump(*hdf5_file, "/PBC", p, H5Easy::DumpMode::Overwrite);
}

void POLYQUANT_HDF5::dump_atoms(int num_atom, int num_species, std::vector<int> atomic_species_ids, std::vector<int> atomic_number, std::vector<int> atomic_charge, std::vector<int> core_elec,
                                std::vector<std::string> atomic_names, std::vector<std::vector<double>> atomic_centers) {
  // write atom parameters
  Polyquant_cout("dumping atom parameters");
  std::string atoms_group = "/atoms";

  std::string path;
  // write num_atom
  path = atoms_group + "/number_of_atoms";
  H5Easy::dump(*hdf5_file, path, num_atom, H5Easy::DumpMode::Overwrite);
  // write num_species
  path = atoms_group + "/number_of_species";
  H5Easy::dump(*hdf5_file, path, num_species, H5Easy::DumpMode::Overwrite);
  // write species ids
  path = atoms_group + "/species_ids";
  H5Easy::dump(*hdf5_file, path, atomic_species_ids, H5Easy::DumpMode::Overwrite);
  // write atomic positions
  std::vector<double> flattened_atomic_positions;
  for (auto atomic_position : atomic_centers) {
    flattened_atomic_positions.insert(flattened_atomic_positions.end(), atomic_position.begin(), atomic_position.end());
  }
  path = atoms_group + "/positions";
  // H5Easy::dump(*hdf5_file, path, flattened_atomic_positions, H5Easy::DumpMode::Overwrite);
  if (this->exist(path)) {
    auto dataset = (*hdf5_file).getDataSet(path);
    dataset.write(atomic_centers);
  } else {
    (*hdf5_file).createDataSet(path, atomic_centers);
  }

  for (auto i = 0ul; i < atomic_number.size(); i++) {
    auto species_group = atoms_group + "/species_" + std::to_string(i);
    // dump atomic num
    path = species_group + "/atomic_number";
    H5Easy::dump(*hdf5_file, path, atomic_number[i], H5Easy::DumpMode::Overwrite);
    // dump atomic charge
    path = species_group + "/charge";
    H5Easy::dump(*hdf5_file, path, atomic_charge[i], H5Easy::DumpMode::Overwrite);
    // dump core elec
    path = species_group + "/core";
    H5Easy::dump(*hdf5_file, path, core_elec[i], H5Easy::DumpMode::Overwrite);
    // dump atomic name
    path = species_group + "/name";
    write_str(path, atomic_names[i]);
  }
}
// TODO
void POLYQUANT_HDF5::dump_generalparameters(bool complex_vals, bool ecp, bool restricted, int num_ao, int num_mo, bool bohr_unit, int num_part_alpha, int num_part_beta, int num_part_total,
                                            int multiplicity) {
  // write General parameters
  Polyquant_cout("dumping general parameters");
  std::string parameters_group = "/parameters";

  std::string path;
  // write COMPLEX
  path = parameters_group + "/IsComplex";
  int cmplx = complex_vals;
  H5Easy::dump(*hdf5_file, path, cmplx, H5Easy::DumpMode::Overwrite);
  // write ECP
  path = parameters_group + "/ECP";
  int pseudos = ecp;
  H5Easy::dump(*hdf5_file, path, pseudos, H5Easy::DumpMode::Overwrite);
  // write restricted
  path = parameters_group + "/SpinRestricted";
  int res = restricted;
  H5Easy::dump(*hdf5_file, path, res, H5Easy::DumpMode::Overwrite);
  // write num_ao
  path = parameters_group + "/numAO";
  H5Easy::dump(*hdf5_file, path, num_ao, H5Easy::DumpMode::Overwrite);
  // write num_mo
  path = parameters_group + "/numMO";
  H5Easy::dump(*hdf5_file, path, num_mo, H5Easy::DumpMode::Overwrite);
  // write bohr_unit
  path = parameters_group + "/Unit";
  int bohr_u = 1;
  H5Easy::dump(*hdf5_file, path, bohr_u, H5Easy::DumpMode::Overwrite);
  // write num_part_alpha
  path = parameters_group + "/NbAlpha";
  H5Easy::dump(*hdf5_file, path, num_part_alpha, H5Easy::DumpMode::Overwrite);
  // write num_part_beta
  path = parameters_group + "/NbBeta";
  H5Easy::dump(*hdf5_file, path, num_part_beta, H5Easy::DumpMode::Overwrite);
  // write num_part_total
  path = parameters_group + "/NbTotElec";
  H5Easy::dump(*hdf5_file, path, num_part_total, H5Easy::DumpMode::Overwrite);
  // write multiplicity
  path = parameters_group + "/spin";
  H5Easy::dump(*hdf5_file, path, multiplicity, H5Easy::DumpMode::Overwrite);
}

void POLYQUANT_HDF5::dump_MOs(std::string quantum_part_name, int num_ao, int num_mo, std::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>> E_orb,
                              std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> mo_coeff) {
  // write MO parameters
  Polyquant_cout("dumping MOs");
  std::string super_twist_group = "/Super_Twist";

  // write orbital energies
  std::string path;
  for (auto spin_idx = 0ul; spin_idx < E_orb.size(); spin_idx++) {
    std::stringstream buffer;
    std::string tag = "eigenval_" + std::to_string(spin_idx);
    buffer << "Dumping spin dataset " << tag << " in file " << this->filename << " for particle name " << quantum_part_name << "." << std::endl;
    Polyquant_cout(buffer.str());

    path = super_twist_group + "/" + tag;
    Eigen::Matrix<double, 1, Eigen::Dynamic> E_orb_rowmat = E_orb[spin_idx].transpose();
    // H5Easy::dump(*hdf5_file, path, E_orb_rowmat, H5Easy::DumpMode::Overwrite);
    if (this->exist(path)) {
      auto dataset = (*hdf5_file).getDataSet(path);
      dataset.write(E_orb_rowmat);
    } else {
      (*hdf5_file).createDataSet(path, E_orb_rowmat);
    }

    // write orbital coeffs
    // std::vector<double> flattened_mo_coeff;
    // for (auto i = 0ul; i < num_mo; i++) {
    //   for (auto j = 0ul; j < num_ao; j++) {
    //     flattened_mo_coeff.push_back(mo_coeff[spin_idx](j, i));
    //   }
    // }
    path = super_twist_group + "/eigenset_" + std::to_string(spin_idx);
    // H5Easy::dump(*hdf5_file, path, flattened_mo_coeff, H5Easy::DumpMode::Overwrite);
    H5Easy::dump(*hdf5_file, path, mo_coeff[spin_idx].transpose(), H5Easy::DumpMode::Overwrite);
  }
}

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
  std::string basis_group = "/basisset";
  std::string path;

  // dump number of basis types
  path = basis_group + "/NbElements";
  H5Easy::dump(*hdf5_file, path, unique_shells.size(), H5Easy::DumpMode::Overwrite);
  // dump basis name
  std::string basis_name = fmt::format("LCAOBSet_{}", quantum_part_name);
  path = basis_group + "/name";
  write_str(path, basis_name);
  // loop over shells
  auto atom_idx = 0ul;
  auto shell_idx = 0ul;
  for (auto atom_shells : unique_shells) {
    if (atom_shells.size() == 0) {
      continue; // no basis functions on atom
    }
    shell_idx = 0ul;
    auto atom_basis_group = basis_group + "/atomicBasisSet" + std::to_string(atom_idx);
    // dump number of basis types
    path = atom_basis_group + "/NbBasisGroups";
    H5Easy::dump(*hdf5_file, path, atom_shells.size(), H5Easy::DumpMode::Overwrite);

    if (atom_shells[0].contr[0].pure) {
      // dump cartesian or spherical
      std::string cart_sph = "spherical";
      path = atom_basis_group + "/angular";
      write_str(path, cart_sph);
      // dump expansion type
      std::string expandYlm = "natural";
      path = atom_basis_group + "/expandYlm";
      write_str(path, expandYlm);
    } else {
      std::string cart_sph = "cartesian";
      path = atom_basis_group + "/angular";
      write_str(path, cart_sph);
      // dump expansion type
      std::string expandYlm = "Gamess";
      path = atom_basis_group + "/expandYlm";
      write_str(path, expandYlm);
    }
    // dump atom type and name
    path = atom_basis_group + "/elementType";
    write_str(path, atomic_names[atom_idx]);
    path = atom_basis_group + "/name";
    write_str(path, atomic_names[atom_idx]);
    // dump normalization
    std::string normalized = "no";
    path = atom_basis_group + "/normalized";
    write_str(path, normalized);
    // dump grid data
    int grid_npts = 1001;
    path = atom_basis_group + "/grid_npts";
    H5Easy::dump(*hdf5_file, path, grid_npts, H5Easy::DumpMode::Overwrite);

    int grid_rf = 100;
    path = atom_basis_group + "/grid_rf";
    H5Easy::dump(*hdf5_file, path, grid_rf, H5Easy::DumpMode::Overwrite);

    double grid_ri = 1.0e-6;
    path = atom_basis_group + "/grid_ri";
    H5Easy::dump(*hdf5_file, path, grid_ri, H5Easy::DumpMode::Overwrite);

    std::string grid_type = "log";
    path = atom_basis_group + "/grid_type";
    // H5Easy::dump(*hdf5_file, path, grid_type, H5Easy::DumpMode::Overwrite);
    write_str(path, grid_type);

    shell_idx = 0ul;
    for (auto shell : atom_shells) {
      auto shell_group = atom_basis_group + "/basisGroup" + std::to_string(shell_idx);
      // dump number of radial functions
      path = shell_group + "/NbRadFunc";
      H5Easy::dump(*hdf5_file, path, shell.alpha.size(), H5Easy::DumpMode::Overwrite);
      // write n and l
      path = shell_group + "/n";
      H5Easy::dump(*hdf5_file, path, shell_idx, H5Easy::DumpMode::Overwrite);
      path = shell_group + "/l";
      H5Easy::dump(*hdf5_file, path, shell.contr[0].l, H5Easy::DumpMode::Overwrite);
      // dump basis type
      std::string basis_type = "Gaussian";
      path = shell_group + "/type";
      write_str(path, basis_type);
      // dump basis function id
      std::string basis_id = atomic_names[atom_idx] + std::to_string(shell_idx) + std::to_string(shell.contr[0].l);
      path = shell_group + "/rid";
      write_str(path, basis_id);
      // dump basis function location
      std::vector<double> origin = {shell.O[0], shell.O[1], shell.O[2]};
      path = shell_group + "/Shell_coord";
      H5Easy::dump(*hdf5_file, path, origin, H5Easy::DumpMode::Overwrite);

      auto rad_func_group = shell_group + "/radfunctions";
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
        auto curr_func_group = rad_func_group + "/DataRad" + std::to_string(i);
        // dump exponent and contraction coefficient
        double exponent = shell.alpha[i];
        path = curr_func_group + "/exponent";
        H5Easy::dump(*hdf5_file, path, exponent, H5Easy::DumpMode::Overwrite);
        double contraction = renormed_coefficients[i];
        path = curr_func_group + "/contraction";
        H5Easy::dump(*hdf5_file, path, contraction, H5Easy::DumpMode::Overwrite);
      }
      shell_idx++;
    }
    atom_idx++;
  }
}

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

void POLYQUANT_HDF5::dump_post_mf_to_hdf5_for_QMCPACK(std::vector<std::vector<std::vector<std::vector<uint64_t>>>> dets, Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> C, int N_dets,
                                                      int N_states, int N_mo) {
  auto N_int_per_det = dets[0][0][0].size();
  Polyquant_cout("dumping CI parameters");
  std::string path;
  std::string multidet_group = "/MultiDet";
  for (int part_idx = 0; part_idx < dets.size(); part_idx++) {
    for (int spin_idx = 0; spin_idx < dets[part_idx].size(); spin_idx++) {
      std::string tag = "/CI_" + std::to_string(part_idx * 2 + spin_idx);
      Eigen::Matrix<double, Eigen::Dynamic, 1> flattened_dets;
      flattened_dets.resize(N_dets * N_int_per_det);
      flattened_dets.setZero();
      // std::vector<uint64_t> flattened_dets;
      auto idx = 0;
      for (int i = 0; i < N_dets; i++) {
        for (int j = N_int_per_det - 1; j >= 0; j--) {
          if (j < dets[part_idx][spin_idx][i].size()) {
            // flattened_dets.push_back(dets[part_idx][spin_idx][i][j]);
            flattened_dets[idx] = dets[part_idx][spin_idx][i][j];
          } else {
            // flattened_dets.push_back(0);
            flattened_dets[idx] = 0.0;
          }
          idx++;
        }
      }
      path = multidet_group + tag;
      // H5Easy::dump(*hdf5_file, path, flattened_dets, H5Easy::DumpMode::Overwrite);

      if (this->exist(path)) {
        auto dataset = (*hdf5_file).getDataSet(path);
        dataset.write(flattened_dets);
      } else {
        //(*hdf5_file).createDataSet(path, flattened_dets);
        // dataset.write(flattened_dets);
        auto dataset = (*hdf5_file).createDataSet<uint64_t>(path, HighFive::DataSpace::From(flattened_dets));
        dataset.write(flattened_dets);
      }
    }
  }

  for (auto i = 0ul; i < N_states; i++) {
    std::vector<double> coeff;
    // Eigen::Matrix<double, Eigen::Dynamic, 1> coeff;
    // coeff.resize(N_dets );
    // coeff.setZero();
    for (auto j = 0ul; j < N_dets; j++) {
      coeff.push_back(C(j, i));
      // coeff[j] = C(j, i);
    }
    std::string tag = "/Coeff";
    if (i > 0) {
      tag += "_" + std::to_string(i);
    }

    path = multidet_group + tag;
    // if (this->exist(path)) {
    //   auto dataset = (*hdf5_file).getDataSet(path);
    //   dataset.write(coeff);
    // } else {
    //   auto dataset = (*hdf5_file).createDataSet<uint64_t>(path, HighFive::DataSpace::From(coeff));
    //   dataset.write(coeff);
    // }
    H5Easy::dump(*hdf5_file, path, coeff, H5Easy::DumpMode::Overwrite);
  }

  path = multidet_group + "/NbDet";
  H5Easy::dump(*hdf5_file, path, N_dets, H5Easy::DumpMode::Overwrite);

  path = multidet_group + "/Nbits";
  H5Easy::dump(*hdf5_file, path, N_int_per_det, H5Easy::DumpMode::Overwrite);

  path = multidet_group + "/nexcitedstate";
  H5Easy::dump(*hdf5_file, path, N_states, H5Easy::DumpMode::Overwrite);

  path = multidet_group + "/nstate";
  H5Easy::dump(*hdf5_file, path, N_mo, H5Easy::DumpMode::Overwrite);
}
