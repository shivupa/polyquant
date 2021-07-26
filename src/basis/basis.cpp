#include <basis/basis.hpp>

using namespace polyquant;

POLYQUANT_BASIS::POLYQUANT_BASIS(const POLYQUANT_INPUT &input,
                                 const POLYQUANT_MOLECULE &molecule) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->load_basis(input, molecule);
}

void POLYQUANT_BASIS::load_quantum_particle_basis(
    const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule,
    const std::string &quantum_part_key, libint2::BasisSet &qp_basis) {
  for (auto const &[classical_part_key, classical_part] :
       molecule.classical_particles) {
    if (input.input_data["model"]["basis"].contains(quantum_part_key)) {
      load_quantum_particle_atom_basis(input, molecule, quantum_part_key,
                                       classical_part_key, classical_part,
                                       qp_basis);
    } else {
      APP_ABORT("'model->basis' didn't contain a basis for: " +
                quantum_part_key);
    }
  }
}
void POLYQUANT_BASIS::load_quantum_particle_atom_basis(
    const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule,
    const std::string &quantum_part_key, const std::string &classical_part_key,
    const CLASSICAL_PARTICLE_SET &classical_part, libint2::BasisSet &qp_basis) {
  if (input.input_data["model"]["basis"][quantum_part_key].contains(
          classical_part_key)) {
      auto center_basis_idx = 0;
    for (auto center_basis :
         input.input_data["model"]["basis"][quantum_part_key]
                         [classical_part_key]) {
      if (center_basis.contains("library")) {
        load_quantum_particle_atom_basis_library(
            input, molecule, quantum_part_key, classical_part_key, center_basis_idx, qp_basis);
      } else if (center_basis.contains("custom")) {
        load_quantum_particle_atom_basis_custom(
            input, molecule, quantum_part_key, classical_part_key, center_basis_idx,
            classical_part,  qp_basis);
      } else {
        APP_ABORT("'model->basis->" + quantum_part_key + "->" +
                  classical_part_key + "->type' must be library or custom.");
      }
      center_basis_idx++;
    }
  } else {
    Polyquant_cout("'model->basis->" + quantum_part_key +
                   "' didn't contain a basis for: " + classical_part_key);
  }
}

void POLYQUANT_BASIS::load_quantum_particle_atom_basis_library(
    const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule,
    const std::string &quantum_part_key, const std::string &classical_part_key, const int& center_basis_idx,
    libint2::BasisSet &qp_basis) {
  auto center_basis =
      input.input_data["model"]["basis"][quantum_part_key][classical_part_key][center_basis_idx];
  try {
    // library basis with atom type specified
    if (center_basis["library"].contains("atom")) {
      auto libint_atoms = molecule.to_libint_atom(classical_part_key);
      for (auto &libint_atom : libint_atoms) {
        libint_atom.atomic_number =
            atom_symb_to_num(center_basis["library"]["atom"]);
      }
      auto temp_atom_basis = libint2::BasisSet(center_basis["library"]["type"],
                                               libint_atoms, true);
      // std::move(atom_basis.begin(), atom_basis.end(),
      // std::back_inserter(this->basis));
      // this->basis.back().move({{atoms[a].x, atoms[a].y,
      // atoms[a].z}});
      qp_basis.insert(qp_basis.end(), temp_atom_basis.begin(),
                      temp_atom_basis.end());
      qp_basis.set_pure(pure);
      // std::move(atom_basis.begin(), atom_basis.end(),
      //           std::back_inserter(this->basis));
    } else {
      auto libint_atoms = molecule.to_libint_atom(classical_part_key);
      for (auto &libint_atom : libint_atoms) {
        libint_atom.atomic_number = atom_symb_to_num(classical_part_key);
      }
      libint2::BasisSet temp_atom_basis = libint2::BasisSet(
          center_basis["library"]["type"], libint_atoms, true);
      qp_basis.insert(qp_basis.end(), temp_atom_basis.begin(),
                      temp_atom_basis.end());
      qp_basis.set_pure(pure);
    }
  } catch (...) {
    Polyquant_cout("Trying to read basis from EMSL");
    auto libint_atoms = molecule.to_libint_atom(classical_part_key);
    if (center_basis["library"].contains("atom")) {
      for (auto &libint_atom : libint_atoms) {
        libint_atom.atomic_number =
            atom_symb_to_num(center_basis["library"]["atom"]);
      }
    }
    std::string basis_url = "https://www.basissetexchange.org/api/basis/";
    basis_url += center_basis["library"]["type"];
    basis_url += "/format/gaussian94";
    auto r = cpr::Get(cpr::Url{basis_url});
    std::string filename = "EMSL_LOADED_BASIS_";
    filename += quantum_part_key;
    filename += "_";
    filename += classical_part_key;
    filename += ".g94";
    Polyquant_dump_basis_to_file(r.text, filename);
    auto temp_atom_basis = libint2::BasisSet::read_g94_basis_library(filename);
    for (auto &libint_atom : libint_atoms) {
      // check all elements
      std::cout << libint_atom.atomic_number << std::endl;
      for (auto s : temp_atom_basis.at(libint_atom.atomic_number)) {
        Polyquant_cout("Adding basis");
        qp_basis.push_back(std::move(s));
        qp_basis.back().move({{libint_atom.x, libint_atom.y, libint_atom.z}});
      }
    }
    qp_basis.set_pure(pure);
  }
} 
void POLYQUANT_BASIS::load_quantum_particle_atom_basis_custom(
    const POLYQUANT_INPUT &input, const POLYQUANT_MOLECULE &molecule,
    const std::string &quantum_part_key, const std::string &classical_part_key, const int& center_basis_idx,
    const CLASSICAL_PARTICLE_SET &classical_part, libint2::BasisSet &qp_basis) {
  libint2::BasisSet atom_basis = libint2::BasisSet();
  auto center_basis =
      input.input_data["model"]["basis"][quantum_part_key][classical_part_key][center_basis_idx];
  if (center_basis["custom"].contains("type")) {
    if (center_basis["custom"]["type"] == "even-tempered") {
      // TODO
      //{"type" : "even-tempered","end"
      //: 2.8284271247461903e-3,"start" : 32e-1,"num_funcs" :
      // 7,"angular_mom" : 0}
      APP_ABORT("Even tempered basis not implemented yet.");
    } else if (center_basis["custom"]["type"] == "file") {
      auto atom_basis = libint2::BasisSet::read_g94_basis_library(
          center_basis["custom"]["filename"]);
      // std::copy(atom_basis.begin(), atom_basis.end(),
      //           std::back_inserter(this->basis));
      // auto const classical_part =
      // molecule.classical_particles[classical_part_key];
      for (auto center_idx : classical_part.center_idx) {
        // check all elements
        for (auto Z = 1; Z < 100; Z++) {
          for (auto s : atom_basis.at(Z)) {
            qp_basis.push_back(std::move(s));
            qp_basis.back().move({{molecule.centers[center_idx][0],
                                   molecule.centers[center_idx][1],
                                   molecule.centers[center_idx][2]}});
          }
        }
      }
      qp_basis.set_pure(this->pure);
    }
  } else {
    APP_ABORT("'model->basis->" + quantum_part_key + "->" + classical_part_key +
              "->custom' needs a type key.");
  }
}

void POLYQUANT_BASIS::set_pure_from_input(const POLYQUANT_INPUT &input) {
  if (input.input_data.contains("keywords")) {
    if (input.input_data["keywords"].contains("pure")) {
      this->pure = input.input_data["keywords"]["pure"];
    }
  }
}

void POLYQUANT_BASIS::set_libint_shell_norm() {
  libint2::Shell::do_enforce_unit_normalization(false);
  std::stringstream buffer;
  buffer
      << "(Of developer interest only) Enforcing unit normalization in Libint: "
      << std::boolalpha << libint2::Shell::do_enforce_unit_normalization()
      << std::endl;
  Polyquant_cout(buffer.str());
}

void POLYQUANT_BASIS::apply_pyscf_normalization() {
  // apply the shell normalization used in
  // https://github.com/pyscf/pyscf/blob/53e2069b4a3a2e0616bdf4d8c2e3f898c10a8330/pyscf/gto/mole.py#L827
  //_nomalize_contracted_ao in pyscf/gto/mole.py
  // lambda for normalization
  auto gaussianint_lambda = [](auto n, auto alpha) {
    auto n1 = (n + 1) * 0.5;
    return std::tgamma(n1) / (2.0 * std::pow(alpha, n1));
  };
  auto gtonorm_lambda = [&gaussianint_lambda](auto l, auto exponent) {
    auto gint_val = gaussianint_lambda((l * 2) + 2, 2.0 * exponent);
    return 1.0 / std::sqrt(gint_val);
  };
  for (auto &quantum_particle_basis : this->basis) {
    for (auto &shell : quantum_particle_basis) {
      // REMOVE NORMALIZATION FACTOR FROM LIBINT
      // SEE SHELL.H
      // https://github.com/evaleev/libint/blob/3bf3a07b58650fe2ed4cd3dc6517d741562e1249/include/libint2/shell.h#L263
      // used in libint -> const auto sqrt_Pi_cubed =
      // double{5.56832799683170784528481798212};
      const auto sqrt_Pi_cubed = std::pow(std::numbers::pi_v<double>, 1.5);
      for (auto p = 0ul; p < shell.alpha.size(); ++p) {
        auto exponent = shell.alpha[p];
        const auto two_alpha = 2.0 * exponent;
        const auto two_alpha_to_am32 =
            std::pow(two_alpha, (shell.contr[0].l + 1)) * std::sqrt(two_alpha);
        const auto normalization_factor = std::sqrt(
            std::pow(2.0, shell.contr[0].l) * two_alpha_to_am32 /
            (sqrt_Pi_cubed * libint2::math::df_Kminus1[2 * shell.contr[0].l]));
        shell.contr[0].coeff.at(p) /= normalization_factor;
      }

      auto l = shell.contr[0].l;
      // apply pyscf gtonorm
      for (auto p = 0ul; p < shell.alpha.size(); ++p) {
        // std::cout << "before gto pyscf norm "<< shell.alpha[p] << " " <<
        // shell.contr[0].coeff.at(p)
        // << std::endl;
        shell.contr[0].coeff.at(p) *= gtonorm_lambda(l, shell.alpha[p]);
        // std::cout << "after gto pyscf norm "<< shell.alpha[p] << " " <<
        // shell.contr[0].coeff.at(p)
        //           << std::endl;
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
          s1 += shell.contr[0].coeff.at(p) * ee(p, q) *
                shell.contr[0].coeff.at(q);
        }
      }
      s1 = 1.0 / std::sqrt(s1);
      for (auto p = 0ul; p < shell.alpha.size(); ++p) {
        // std::cout << "before _nomalize_contracted_ao "<< shell.alpha[p] << "
        // "
        // << shell.contr[0].coeff.at(p)
        // << std::endl;
        shell.contr[0].coeff.at(p) *= s1;
        // std::cout << "after _nomalize_contracted_ao " << shell.alpha[p] << "
        // "
        //           << shell.contr[0].coeff.at(p) << std::endl;
      }
    }
    for (auto shell : quantum_particle_basis) {
      std::cout << shell << std::endl;
    }
  }
}

void POLYQUANT_BASIS::load_basis(const POLYQUANT_INPUT &input,
                                 const POLYQUANT_MOLECULE &molecule) {
  Polyquant_cout("BASIS");
  this->set_pure_from_input(input);
  this->set_libint_shell_norm();
  // parse basis name from data
  if (input.input_data.contains("model")) {
    if (input.input_data["model"].contains("basis")) {
      for (auto const &[quantum_part_key, quantum_part] :
           molecule.quantum_particles) {
        libint2::BasisSet qp_basis = libint2::BasisSet();
        load_quantum_particle_basis(input, molecule, quantum_part_key,
                                    qp_basis);
        this->basis.emplace_back(qp_basis);
        Polyquant_cout("Added basis for " + quantum_part_key);
        size_t nb = libint2::nbf(qp_basis);
        Polyquant_cout("Number of basis functions: " + std::to_string(nb));
        this->num_basis.emplace_back(nb);
      }
    } else {
      APP_ABORT(
          "Cannot set up basis. Input json missing 'model->basis' section.");
    }
  } else {
    APP_ABORT("Cannot set up basis. Input json missing 'model' section.");
  }
  this->apply_pyscf_normalization();
}
