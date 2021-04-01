#include "integral/integral.hpp"

using namespace polyquant;

POLYQUANT_INTEGRAL::POLYQUANT_INTEGRAL(const POLYQUANT_INPUT &input,
                                       const POLYQUANT_BASIS &basis,
                                       const POLYQUANT_MOLECULE &molecule) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  Polyquant_cout("INTEGRAL");
  this->setup_integral(input, basis, molecule);
}

void POLYQUANT_INTEGRAL::calculate_overlap() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  if (this->overlap.cols() == 0 && this->overlap.rows() == 0) {
    Polyquant_cout("Calculating One Body Overlap Integrals...");
    auto num_basis = this->input_basis.num_basis;
    libint2::initialize();
    this->overlap.resize(num_basis, num_basis);
    this->overlap.fill(0);
    this->compute_1body_ints(this->overlap, this->input_basis.basis,
                             libint2::Operator::overlap);
    // TODO figure out how to write to file
    Polyquant_dump_mat_to_file(this->overlap, "overlap.txt");
    libint2::finalize();
  }
}

// void POLYQUANT_INTEGRAL::calculate_Schwarz() {
//  auto function = __PRETTY_FUNCTION__;
//  POLYQUANT_TIMER timer(function);
//  if (this->Schwarz.cols() == 0 && this->Schwarz.rows() == 0) {
//    Polyquant_cout("Calculating pseudo One Body Schwarz Integrals...");
//    auto num_basis = this->input_basis.num_basis;
//    libint2::initialize();
//    this->Schwarz.resize(num_basis, num_basis);
//    this->Schwarz.fill(0);
//    this->compute_Schwarz_ints(this->Schwarz, this->input_basis.basis,
//                               libint2::Operator::coulomb);
//    // TODO figure out how to write to file
//    Polyquant_dump_mat_to_file(this->Schwarz, "Schwarz.txt");
//    libint2::finalize();
//  }
//}

void POLYQUANT_INTEGRAL::calculate_kinetic() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  if (this->kinetic.cols() == 0 && this->kinetic.rows() == 0) {
    Polyquant_cout("Calculating One Body Kinetic Integrals...");
    auto num_basis = this->input_basis.num_basis;
    libint2::initialize();
    this->kinetic.resize(num_basis, num_basis);
    this->kinetic.fill(0);
    this->compute_1body_ints(this->kinetic, this->input_basis.basis,
                             libint2::Operator::kinetic);
    Polyquant_dump_mat_to_file(this->kinetic, "kinetic.txt");
    libint2::finalize();
  }
}

void POLYQUANT_INTEGRAL::calculate_nuclear() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  if (this->nuclear.cols() == 0 && this->nuclear.rows() == 0) {
    Polyquant_cout("Calculating One Body Nuclear Integrals...");
    auto num_basis = this->input_basis.num_basis;
    libint2::initialize();
    this->nuclear.resize(num_basis, num_basis);
    this->nuclear.fill(0);
    this->compute_1body_ints(this->nuclear, this->input_basis.basis,
                             libint2::Operator::nuclear,
                             this->input_molecule.to_libint_atom("no_ghost"));
    Polyquant_dump_mat_to_file(this->nuclear, "nuclear.txt");
    libint2::finalize();
  }
}
void POLYQUANT_INTEGRAL::calculate_mo_1_body_integrals(
    std::vector<
        std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>
        &mo_coeffs) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  mo_one_body_ints.resize(mo_coeffs.size());
  for (auto i = 0; i < mo_one_body_ints.size(); i++) {
    mo_one_body_ints[i].resize(mo_coeffs[i].size());
  }
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
#pragma omp parallel for
    for (auto j = 0; j < mo_one_body_ints[quantum_part_idx].size(); j++) {
      mo_one_body_ints[quantum_part_idx][j].resize(
          mo_coeffs[quantum_part_idx][j].cols(),
          mo_coeffs[quantum_part_idx][j].cols());
      mo_one_body_ints[quantum_part_idx][j].setZero();
      mo_one_body_ints[quantum_part_idx][j] =
          mo_coeffs[quantum_part_idx][j].transpose() *
          (kinetic + (-quantum_part.charge * nuclear)) *
          mo_coeffs[quantum_part_idx][j];
      //(kinetic + (-quantum_part.charge * nuclear)) *
    }
    quantum_part_idx++;
  }
}
Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>
POLYQUANT_INTEGRAL::transform_mo_2_body_integrals(
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &mo_coeffs_a,
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &mo_coeffs_b,
    int num_part_alpha, int num_part_beta) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto num_basis = this->input_basis.num_basis;

  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> eri;
  Eigen::Tensor<double, 4> temp1;
  Eigen::Tensor<double, 4> temp2;
  auto eri_size = (num_basis * (num_basis + 1) / 2);
  Polyquant_cout("2elec trans ok");
  eri.resize(eri_size, eri_size);
  Polyquant_cout("2elec trans ok");
  Polyquant_cout(eri_size);
  temp1.resize(num_basis, num_basis, num_basis, num_basis);
  Polyquant_cout("2elec trans ok");
  temp2.resize(num_basis, num_basis, num_basis, num_basis);
  Polyquant_cout("2elec trans ok");
  eri.setZero();
  temp1.setZero();
  temp2.setZero();
  Polyquant_cout("2elec trans ok");
  double elem = 0.0;
  // tmp = np.einsum('pi,pqrs->iqrs', C, I, optimize=True)
  // tmp = np.einsum('qj,iqrs->ijrs', C, tmp, optimize=True)
  // tmp = np.einsum('ijrs,rk->ijks', tmp, C, optimize=True)
  // I_mo = np.einsum('ijks,sl->ijkl', tmp, C, optimize=True)
  for (auto i = 0; i < num_basis; i++) {
    for (auto q = 0; q < num_basis; q++) {
      for (auto r = 0; r < num_basis; r++) {
        for (auto s = 0; s < num_basis; s++) {
          elem = 0.0;
#pragma omp parallel for reduction(+ : elem)
          for (auto p = 0; p < num_basis; p++) {
            elem += mo_coeffs_a(p, i) * this->twoelec(this->idx8(p, q, r, s));
          }
          temp1(i, q, r, s) += elem;
        }
      }
    }
  }
  for (auto i = 0; i < num_basis; i++) {
    for (auto j = 0; j < num_basis; j++) {
      for (auto r = 0; r < num_basis; r++) {
        for (auto s = 0; s < num_basis; s++) {
          elem = 0.0;
#pragma omp parallel for reduction(+ : elem)
          for (auto q = 0; q < num_basis; q++) {
            elem += mo_coeffs_a(q, j) * temp1(i, q, r, s);
          }
          temp2(i, j, r, s) += elem;
        }
      }
    }
  }
  temp1.setZero();
#pragma omp parallel for
  for (auto i = 0; i < num_basis; i++) {
    for (auto j = 0; j < num_basis; j++) {
      for (auto k = 0; k < num_basis; k++) {
        for (auto s = 0; s < num_basis; s++) {
          elem = 0.0;
#pragma omp parallel for reduction(+ : elem)
          for (auto r = 0; r < num_basis; r++) {
            elem += mo_coeffs_b(r, k) * temp2(i, j, r, s);
          }
          temp1(i, j, k, s) += elem;
        }
      }
    }
  }
  // temp2.setZero();
  delete temp2;
#pragma omp parallel for
  for (auto i = 0; i < num_basis; i++) {
    for (auto j = 0; j < num_basis; j++) {
      for (auto k = 0; k < num_basis; k++) {
        for (auto l = 0; l < num_basis; l++) {
          elem = 0.0;
#pragma omp parallel for reduction(+ : elem)
          for (auto s = 0; s < num_basis; s++) {
            elem += mo_coeffs_b(s, l) * temp1(i, j, k, s);
          }
          // temp2(i, j, k, l) += elem;
          eri(this->idx2(i, j), this->idx2(k, l)) = elem;
        }
      }
    }
  }
  // for (auto i = 0; i < num_basis; i++) {
  //   for (auto j = 0; j < num_basis; j++) {
  //     for (auto k = 0; k < num_basis; k++) {
  //       for (auto l = 0; l < num_basis; l++) {
  //         eri(this->idx2(i, j), this->idx2(k, l)) = temp2(i, j, k, l);
  //       }
  //     }
  //   }
  // }
  return eri;
}

void POLYQUANT_INTEGRAL::calculate_mo_2_body_integrals(
    std::vector<
        std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>>
        &mo_coeffs) {
  mo_two_body_ints.resize(mo_coeffs.size());
  auto num_basis = this->input_basis.num_basis;
  auto quantum_part_a_idx = 0ul;
  auto quantum_part_b_idx = 0ul;
  for (auto const &[quantum_part_a_key, quantum_part_a] :
       this->input_molecule.quantum_particles) {
    mo_two_body_ints[quantum_part_a_idx].resize(
        mo_coeffs[quantum_part_a_idx].size());
    for (auto spin_a_idx = 0; spin_a_idx < mo_coeffs[quantum_part_a_idx].size();
         spin_a_idx++) {
      mo_two_body_ints[quantum_part_a_idx][spin_a_idx].resize(mo_coeffs.size());
      auto num_part_a = (spin_a_idx == 0) ? quantum_part_a.num_parts_alpha
                                          : quantum_part_a.num_parts_beta;
      quantum_part_b_idx = 0;
      for (auto const &[quantum_part_b_key, quantum_part_b] :
           this->input_molecule.quantum_particles) {
        mo_two_body_ints[quantum_part_a_idx][spin_a_idx][quantum_part_b_idx]
            .resize(mo_coeffs[quantum_part_b_idx].size());
        for (auto spin_b_idx = 0;
             spin_b_idx < mo_coeffs[quantum_part_b_idx].size(); spin_b_idx++) {
          if (quantum_part_b_idx < quantum_part_a_idx) {
            continue;
          }
          auto num_part_b = (spin_b_idx == 0) ? quantum_part_b.num_parts_alpha
                                              : quantum_part_b.num_parts_beta;
          mo_two_body_ints[quantum_part_a_idx][spin_a_idx][quantum_part_b_idx]
                          [spin_b_idx] = transform_mo_2_body_integrals(
                              mo_coeffs[quantum_part_a_idx][spin_a_idx],
                              mo_coeffs[quantum_part_b_idx][spin_b_idx],
                              num_part_a, num_part_b);
        }
        quantum_part_b_idx++;
      }
    }
    quantum_part_a_idx++;
  }
}

// void POLYQUANT_INTEGRAL::calculate_polarization_potential() {
//  if (this->polarization_potential.shape() == std::vector<size_t>({})) {
//    Polyquant_cout("Calculating One Body Polarization Potential
//    Integrals..."); std::vector<std::string> atom_types = {};
//    std::vector<std::string> polarization_types = {};
//    Polyquant_cout(
//        "Parsing the necessary keywords atom_types and
//        polarization_types...");
//    if (this->input_params.input_data.contains("keywords")) {
//      if (this->input_params.input_data["keywords"].contains("atom_types")) {
//        for (auto i : this->input_params.input_data["keywords"]["atom_types"])
//        {
//          std::string atom_type = i;
//          std::transform(atom_type.begin(), atom_type.end(),
//          atom_type.begin(),
//                         ::toupper);
//          atom_types.push_back(atom_type);
//        }
//      }
//      if (this->input_params.input_data["keywords"].contains(
//              "polarization_types")) {
//        for (auto i :
//             this->input_params.input_data["keywords"]["polarization_types"])
//             {
//          std::string polarization_type = i;
//          std::transform(polarization_type.begin(), polarization_type.end(),
//                         polarization_type.begin(), ::toupper);
//          polarization_types.push_back(polarization_type);
//        }
//      }
//    } else {
//      APP_ABORT("Polyquant needs keywords atom_types and polarization_types to
//      do
//      "
//                "a polarization potential calculation.");
//    }
//
//    auto num_basis = this->input_basis.num_basis;
//    this->polarization_potential = Eigen::Matrix<double, Eigen::Dynamic,
//    Eigen::Dynamic>({num_basis, num_basis});
//    this->polarization_potential.fill(0); libint2::initialize();
//
//    for (auto i = 0; i < this->input_molecule.num_atom; i++) {
//      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>
//      atom_polarization_potential({num_basis, num_basis});
//      atom_polarization_potential.fill(0); Eigen::Matrix<double,
//      Eigen::Dynamic, Eigen::Dynamic> operator_coeff; Eigen::Matrix<double,
//      Eigen::Dynamic, Eigen::Dynamic> operator_origin = {
//          this->input_molecule.atom_coord[i][0],
//          this->input_molecule.atom_coord[i][1],
//          this->input_molecule.atom_coord[i][2]};
//      if (polarization_types[i] == "MILLER") {
//        auto search_for_key = this->alpha_miller.find(atom_types[i]);
//        if (search_for_key == this->alpha_miller.end()) {
//          Polyquant_cout("Could not find the following atom type: ");
//          Polyquant_cout(atom_types[i]);
//          APP_ABORT("Polarization Key is incorrect!");
//        } else {
//          operator_coeff = search_for_key->second;
//        }
//      } else if (polarization_types[i] == "EXP") {
//        auto search_for_key = this->alpha_exp.find(atom_types[i]);
//        if (search_for_key == this->alpha_exp.end()) {
//          Polyquant_cout("Could not find the following atom type: ");
//          Polyquant_cout(atom_types[i]);
//          APP_ABORT("Polarization Key is incorrect!");
//        } else {
//          operator_coeff = search_for_key->second;
//        }
//      } else if (polarization_types[i] == "M1") {
//        auto search_for_key = this->alpha_m1.find(atom_types[i]);
//        if (search_for_key == this->alpha_m1.end()) {
//          Polyquant_cout("Could not find the following atom type: ");
//          Polyquant_cout(atom_types[i]);
//          APP_ABORT("Polarization Key is incorrect!");
//        } else {
//          operator_coeff = search_for_key->second;
//        }
//      } else if (polarization_types[i] == "M2") {
//        auto search_for_key = this->alpha_m2.find(atom_types[i]);
//        if (search_for_key == this->alpha_m2.end()) {
//          Polyquant_cout("Could not find the following atom type: ");
//          Polyquant_cout(atom_types[i]);
//          APP_ABORT("Polarization Key is incorrect!");
//        } else {
//          operator_coeff = search_for_key->second;
//        }
//      } else {
//        Polyquant_cout("The following polarization type was not recognized:");
//        Polyquant_cout(polarization_types[i]);
//        APP_ABORT("Polyquant didn't understand what polarization type you
//        wanted.");
//      }
//      this->compute_1body_ints_operator_expanded_in_gaussians(
//          atom_polarization_potential, this->input_basis.basis,
//          operator_origin, operator_coeff, this->operator_exponents);
//
//      this->polarization_potential += atom_polarization_potential;
//    }
//
//    xt::dump_npy("polarization_potential.npy", this->polarization_potential);
//    libint2::finalize();
//  }
//}

void POLYQUANT_INTEGRAL::calculate_two_electron() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  if (this->twoelec.rows() == 0) {
    Polyquant_cout("Calculating Two Body Electron Repulsion Integrals...");
    auto num_basis = this->input_basis.num_basis;
    libint2::initialize();
    // the upper triangle of a square matrix is size N*(N-1)/2
    // this is that but where N=M*(M-1)/2
    auto two_elec_size = ((num_basis) * (num_basis + 1) *
                          ((num_basis * num_basis) + (num_basis) + 2)) /
                         8;

    this->twoelec.resize(two_elec_size);
    this->compute_2body_ints(this->twoelec, this->input_basis.basis,
                             libint2::Operator::coulomb);
    Polyquant_dump_vec_to_file(this->twoelec, "twoelec.txt");
    libint2::finalize();
  }
}

// void POLYQUANT_INTEGRAL::compute_Schwarz_ints(
//    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &output_matrix,
//    const libint2::BasisSet &shells, libint2::Operator obtype) {
//  // Following the HF test in the Libint2 repo
//  // construct the overlap integrals engine
//#pragma omp parallel
//  {
//    int nthreads = omp_get_num_threads();
//    auto thread_id = omp_get_thread_num();
//
//    std::vector<libint2::Engine> engines;
//    if (thread_id == 0) {
//      std::string message =
//          "Computing on " + std::to_string(nthreads) + " threads.";
//      Polyquant_cout(message);
//    }
//    engines.resize(nthreads);
//    engines[0] = libint2::Engine(obtype, shells.max_nprim(), shells.max_l(),
//    0); if (nthreads > 1) {
//      if (thread_id == 0) {
//        Polyquant_cout("Making more engines for each thread");
//      }
//      for (auto i = 1ul; i < nthreads; i++) {
//        engines[i] = engines[0];
//      }
//    }
//
//    auto shell2bf = shells.shell2bf();
//    const auto &buf = engines[thread_id].results();
//    for (auto s1 = 0l, s12 = 0l; s1 != shells.size(); ++s1) {
//      auto n1 = shells[s1].size();
//      for (auto s2 = 0; s2 <= s1; ++s2, ++s12) {
//        if (s12 % nthreads != thread_id) {
//          continue;
//        }
//        auto n2 = shells[s2].size();
//        auto n12 = n1 * n2;
//
//        engines[thread_id]
//            .compute2<libint2::Operator::coulomb, libint2::BraKet::xx_xx, 0>(
//                shells[s1], shells[s2], shells[s1], shells[s2]);
//
//        Eigen::Map<const Eigen::Matrix<double, Eigen::Dynamic,
//        Eigen::Dynamic>>
//            buf_mat(buf[0], n12, n12);
//        auto norm = buf_mat.lpNorm<Eigen::Infinity>();
//        output_matrix(s1, s2) = std::sqrt(norm);
//        output_matrix(s2, s1) = std::sqrt(norm);
//      }
//    }
//  }
//}
void POLYQUANT_INTEGRAL::setup_integral(const POLYQUANT_INPUT &input,
                                        const POLYQUANT_BASIS &basis,
                                        const POLYQUANT_MOLECULE &molecule) {
  this->input_params = input;
  this->input_basis = basis;
  this->input_molecule = molecule;
}

/**
 * @details This follows the HF test in the Libint2 repo. It constructs the
 * integral engines for each OpenMP rank and splits up the calulation of
 * integrals.
 */
void POLYQUANT_INTEGRAL::compute_1body_ints(
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &output_matrix,
    const libint2::BasisSet &shells, libint2::Operator obtype,
    const std::vector<libint2::Atom> &atoms) {
  // omp_lock_t writelock;

  // omp_init_lock(&writelock);
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    std::vector<libint2::Engine> engines;
    if (thread_id == 0) {
      std::string message =
          "Computing on " + std::to_string(nthreads) + " threads.";
      Polyquant_cout(message);
    }
    // construct the one body integrals engine
    engines.resize(nthreads);
    engines[0] = libint2::Engine(obtype, shells.max_nprim(), shells.max_l(), 0);
    // nuclear attraction ints engine needs to know where the charges sit
    // the nuclei are charges in this case; in QM/MM there will also be
    // classical charges
    if (obtype == libint2::Operator::nuclear) {
      engines[0].set_params(libint2::make_point_charges(atoms));
    }
    if (nthreads > 1) {
      if (thread_id == 0) {
        Polyquant_cout("Making more engines for each thread");
      }
      for (auto i = 1ul; i < nthreads; i++) {
        engines[i] = engines[0];
      }
    }
    auto shell2bf = shells.shell2bf();

    // buf[0] points to the target shell set after every call to
    // engine.compute()
    const auto &buf = engines[thread_id].results();
    // loop over unique shell pairs, {s1,s2} such that s1 >= s2
    // this is due to the permutational symmetry of the real integrals over
    // Hermitian operators: (1|2) = (2|1)
    for (auto s1 = 0l; s1 < shells.size(); ++s1) {
      auto bf1 = shell2bf[s1]; // first basis function in this shell
      auto n1 = shells[s1].size();
      for (auto s2 = s1; s2 < shells.size(); ++s2) {
        auto bf2 = shell2bf[s2];
        auto n2 = shells[s2].size();
        auto s12 = s1 + s2; // s1_offset + s2;
        if (s12 % nthreads != thread_id) {
          continue;
        }
        engines[thread_id].compute(shells[s1], shells[s2]);
        // Polyquant_cout(message);
        const auto *buf_12 = buf[0];
        // Write values to the matrix
        if (buf_12 == nullptr) {
          continue; // if all integrals screened out, skip to next pair
        }
        for (size_t f1 = 0, f12 = 0; f1 != n1; ++f1) {
          for (size_t f2 = 0; f2 != n2; ++f2, ++f12) {
            output_matrix(bf1 + f1, bf2 + f2) = buf_12[f12];
            output_matrix(bf2 + f2, bf1 + f1) = buf_12[f12];
          }
        }
      }
    }
  }
}

// double POLYQUANT_INTEGRAL::primitive_integral_operator_expanded_in_gaussians(
//    const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &origin1,
//    const double &cont_coeff1, const double &exp1, const xt::xarray<int>
//    &angular_momentum_1, const Eigen::Matrix<double, Eigen::Dynamic,
//    Eigen::Dynamic> &origin2, const double &cont_coeff2, const double &exp2,
//    const xt::xarray<int> &angular_momentum_2, const Eigen::Matrix<double,
//    Eigen::Dynamic, Eigen::Dynamic> &operator_origin, const
//    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &operator_coeff,
//    const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>
//    &operator_exps) {
//  double integral_value = 0.0;
//  double nu = (exp1 * exp2) / (exp1 + exp2);
//  auto r_ab = ((exp1 * origin1) + (exp2 * origin2)) / (exp1 + exp2);
//  for (auto m = 0; m < operator_coeff.size(); m++) {
//    double lambda =
//        ((exp1 + exp2) * operator_exps(m)) / (exp1 + exp2 + operator_exps(m));
//    auto r_abc = ((exp1 * origin1) + (exp2 * origin2) +
//                  (operator_exps(m) * operator_origin)) /
//                 (exp1 + exp2 + operator_exps(m));
//
//    double loop_integral_value = 0.0;
//    loop_integral_value = operator_coeff(m);
//    loop_integral_value *= std::exp(
//        -lambda * std::pow(xt::linalg::norm(operator_origin - r_ab, 2), 2));
//    double H_x = 0;
//    double H_y = 0;
//    double H_z = 0;
//    // eq A10 https://arxiv.org/pdf/1809.03250.pdf
//    for (auto s_x_1 = 0; s_x_1 <= angular_momentum_1[0]; s_x_1++) {
//      for (auto s_x_2 = 0; s_x_2 <= angular_momentum_2[0]; s_x_2++) {
//        double val = libint2::math::bc(angular_momentum_1[0], s_x_1);
//        val *= libint2::math::bc(angular_momentum_2[0], s_x_2);
//        val *= 0.5;
//        val *= (1 + std::pow(-1, s_x_1 + s_x_2));
//        val *= std::pow((r_abc[0] - origin1[0]), angular_momentum_1[0] -
//        s_x_1); val *= std::pow((r_abc[0] - origin2[0]), angular_momentum_2[0]
//        - s_x_2); val *= std::pow(exp1 + exp2 + operator_exps(m),
//                        ((-(1.0 + s_x_1 + s_x_2)) / 2.0));
//        val *= std::tgamma((1.0 + s_x_1 + s_x_2) / 2.0);
//        H_x += val;
//      }
//    }
//    for (auto s_y_1 = 0; s_y_1 <= angular_momentum_1[1]; s_y_1++) {
//      for (auto s_y_2 = 0; s_y_2 <= angular_momentum_2[1]; s_y_2++) {
//        double val = libint2::math::bc(angular_momentum_1[1], s_y_1);
//        val *= libint2::math::bc(angular_momentum_2[1], s_y_2);
//        val *= 0.5;
//        val *= (1 + std::pow(-1, s_y_1 + s_y_2));
//        val *= std::pow((r_abc[1] - origin1[1]), angular_momentum_1[1] -
//        s_y_1); val *= std::pow((r_abc[1] - origin2[1]), angular_momentum_2[1]
//        - s_y_2); val *= std::pow(exp1 + exp2 + operator_exps(m),
//                        ((-(1.0 + s_y_1 + s_y_2)) / 2.0));
//        val *= std::tgamma((1.0 + s_y_1 + s_y_2) / 2.0);
//        H_y += val;
//      }
//    }
//    for (auto s_z_1 = 0; s_z_1 <= angular_momentum_1[2]; s_z_1++) {
//      for (auto s_z_2 = 0; s_z_2 <= angular_momentum_2[2]; s_z_2++) {
//        double val = libint2::math::bc(angular_momentum_1[2], s_z_1);
//        val *= libint2::math::bc(angular_momentum_2[2], s_z_2);
//        val *= 0.5;
//        val *= (1 + std::pow(-1, s_z_1 + s_z_2));
//        val *= std::pow((r_abc[2] - origin1[2]), angular_momentum_1[2] -
//        s_z_1); val *= std::pow((r_abc[2] - origin2[2]), angular_momentum_2[2]
//        - s_z_2); val *= std::pow(exp1 + exp2 + operator_exps(m),
//                        ((-(1.0 + s_z_1 + s_z_2)) / 2.0));
//        val *= std::tgamma((1.0 + s_z_1 + s_z_2) / 2.0);
//        H_z += val;
//      }
//    }
//    loop_integral_value *= H_x * H_y * H_z;
//    integral_value += loop_integral_value;
//  }
//
//  // calculate the scaling prefactor \exp^{-\nu |r_A - r_B|^2}
//  double prefactor =
//      std::exp(-nu * std::pow(xt::linalg::norm(origin1 - origin2, 2), 2));
//  integral_value *= prefactor;
//  // multiply integral by contraction coefficients and return it!
//  integral_value *= cont_coeff1;
//  integral_value *= cont_coeff2;
//  return integral_value;
//}

/**
 * @details This follows the eri test in the Libint2 repo. It doesn't construct
 * an engine to calculate integrals over shells, but it instead calculates the
 * integrals explicitly over basis functions. This is less efficient, but this
 * integral type is not a part of libint.
 */
// void POLYQUANT_INTEGRAL::compute_1body_ints_operator_expanded_in_gaussians(
//     Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &output_matrix,
//     const libint2::BasisSet &shells, const Eigen::Matrix<double,
//     Eigen::Dynamic, Eigen::Dynamic> &operator_origin, const
//     Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &operator_coeff,
//     const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>
//     &operator_exps) {
//   auto shell2bf = shells.shell2bf();
//   // loop over unique shell pairs, {s1,s2} such that s1 >= s2
//   // this is due to the permutational symmetry of the real integrals over
//   // Hermitian operators: (1|2) = (2|1)
//   for (auto s1 = 0; s1 != shells.size(); ++s1) {
//     auto bf1 = shell2bf[s1]; // first basis function in this shell
//     Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> origin1 =
//     {shells[s1].O[0], shells[s1].O[1],
//                                   shells[s1].O[2]};
//     for (auto s2 = s1; s2 != shells.size(); ++s2) {
//       auto bf2 = shell2bf[s2];
//       Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> origin2 =
//       {shells[s2].O[0], shells[s2].O[1],
//                                     shells[s2].O[2]};
//       for (auto contr1 = 0; contr1 != shells[s1].contr.size(); contr1++) {
//         for (auto contr2 = 0; contr2 != shells[s2].contr.size(); contr2++) {
//           {
//             int f1 = 0;
//             int am1 = shells[s1].contr[contr1].l;
//             int l1, m1, n1;
//             FOR_CART(l1, m1, n1, am1) {
//               xt::xarray<int> angular_momentum_1 = {l1, m1, n1};
//               int f2 = 0;
//               int am2 = shells[s2].contr[contr2].l;
//               int l2, m2, n2;
//               FOR_CART(l2, m2, n2, am2) {
//                 // This entire function is extremely complicated at first
//                 // glance. We iterate over shells so shells2bf goes from a
//                 shell
//                 // to the index of the first basis function in a shell. Then
//                 we
//                 // iterate over the number of contractions in each basis
//                 // function. Then FOR_CART iterates over the basis functions
//                 of
//                 // each angular momentum in this shell. l+m+n = am is the
//                 total
//                 // angular momentum . FOR_CART makes the lmn pairs, we use f1
//                 // and f2 to keep track of which function we are working
//                 with.
//                 // So to index the array the correct index is (bf1+f1,
//                 bf2+f2).
//                 // Inside of FOR_CART, we now loop over the contracted
//                 gaussians
//                 // that make up each of the basis functions. The looping
//                 assumes
//                 // that the alpha vector and the contraction coefficient
//                 vector
//                 // is of the same size, which it should be. Finally we are
//                 able
//                 // to calculate the integral over two primitive gaussians.
//                 xt::xarray<int> angular_momentum_2 = {l2, m2, n2};
//                 for (auto idx_exp_coeff1 = 0;
//                      idx_exp_coeff1 < shells[s1].alpha.size();
//                      idx_exp_coeff1++) {
//                   auto exp1 = shells[s1].alpha[idx_exp_coeff1];
//                   auto cont_coeff1 =
//                       shells[s1].contr[contr1].coeff[idx_exp_coeff1];
//
//                   for (auto idx_exp_coeff2 = 0;
//                        idx_exp_coeff2 < shells[s2].alpha.size();
//                        idx_exp_coeff2++) {
//                     auto exp2 = shells[s2].alpha[idx_exp_coeff2];
//                     auto cont_coeff2 =
//                         shells[s2].contr[contr2].coeff[idx_exp_coeff2];
//
//                     // now we are ready to calculate the integral over a
//                     // primitive gaussian
//                     auto integral_value =
//                         this->primitive_integral_operator_expanded_in_gaussians(
//                             origin1, cont_coeff1, exp1, angular_momentum_1,
//                             origin2, cont_coeff2, exp2, angular_momentum_2,
//                             operator_origin, operator_coeff, operator_exps);
//                     output_matrix(bf1 + f1, bf2 + f2) += integral_value;
//                     output_matrix(bf2 + f2, bf1 + f1) += integral_value;
//                   }
//                 }
//                 ++f2;
//               }
//               END_FOR_CART
//               ++f1;
//             }
//             END_FOR_CART
//           }
//         }
//       }
//       // for (size_t f1 = 0, f12 = 0; f1 != n1; ++f1) {
//       //   for (size_t f2 = 0; f2 != n2; ++f2, ++f12) {
//       //     output_matrix(bf1 + f1, bf2 + f2) = buf_12[f12];
//       //     output_matrix(bf2 + f2, bf1 + f1) = buf_12[f12];
//       //   }
//       // }
//     }
//     // auto computed_shell = xt::view(output_matrix, xt::range(bf1, bf1 +
//     n1),
//     //                                xt::range(bf2, bf2 + n2));
//     // std::vector<std::size_t> shape = {n1, n2};
//     // computed_shell = xt::adapt(&buf, n1 + n2, xt::acquire_ownership(),
//     // shape);
//   }
// }

/**
 * @details This follows the HF test in the Libint2 repo. It constructs the
 * integral engines and splits up the calculation of integrals on each OpenMP
 * rank.
 */
void POLYQUANT_INTEGRAL::compute_2body_ints(
    Eigen::Matrix<double, Eigen::Dynamic, 1> &output_vec,
    const libint2::BasisSet &shells, libint2::Operator obtype) {
  // Following the HF test in the Libint2 repo
  // construct the overlap integrals engine
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();

    std::vector<libint2::Engine> engines;
    if (thread_id == 0) {
      std::string message =
          "Computing on " + std::to_string(nthreads) + " threads.";
      Polyquant_cout(message);
    }
    engines.resize(nthreads);
    engines[0] = libint2::Engine(obtype, shells.max_nprim(), shells.max_l(), 0);
    engines[0].set_precision(this->tolerance_2e);
    if (nthreads > 1) {
      if (thread_id == 0) {
        Polyquant_cout("Making more engines for each thread");
      }
      for (auto i = 1ul; i < nthreads; i++) {
        engines[i] = engines[0];
      }
    }

    auto shell2bf = shells.shell2bf();

    // buf[0] points to the target shell set after every call to
    // engine.compute()
    const auto &buf = engines[thread_id].results();
    // loop over unique shell pairs, {s1,s2} such that s1 >= s2
    // this is due to the permutational symmetry of the real integrals over
    // Hermitian operators: (1|2) = (2|1)
    for (auto s1 = 0l, s1234 = 0l; s1 != shells.size(); ++s1) {
      auto bf1_first = shell2bf[s1]; // first basis function in this shell
      auto n1 = shells[s1].size();
      for (auto s2 = 0l; s2 <= s1; ++s2) {
        auto bf2_first = shell2bf[s2];
        auto n2 = shells[s2].size();
        for (auto s3 = 0l; s3 <= s1; ++s3) {
          auto bf3_first = shell2bf[s3]; // first basis function in this shell
          auto n3 = shells[s3].size();
          for (auto s4 = 0l; s4 <= (s1 == s3 ? s2 : s3); ++s4) {
            auto bf4_first = shell2bf[s4];
            auto n4 = shells[s4].size();
            if ((s1234++) % nthreads != thread_id)
              continue;
            // compute shell pair
            engines[thread_id].compute(shells[s1], shells[s2], shells[s3],
                                       shells[s4]);
            const auto *buf_1234 = buf[0];
            if (buf_1234 == nullptr)
              continue; // if all integrals screened out, skip to next quartet
            for (size_t f1 = 0, f1234 = 0; f1 != n1; ++f1) {
              const auto bf1 = f1 + bf1_first;
              for (size_t f2 = 0; f2 != n2; ++f2) {
                const auto bf2 = f2 + bf2_first;
                for (size_t f3 = 0; f3 != n3; ++f3) {
                  const auto bf3 = f3 + bf3_first;
                  for (size_t f4 = 0; f4 != n4; ++f4, ++f1234) {
                    const auto bf4 = f4 + bf4_first;
                    size_t location = this->idx8(bf1, bf2, bf3, bf4);
                    output_vec(location) = buf_1234[f1234];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

void POLYQUANT_INTEGRAL::symmetric_orthogonalization() {
  Polyquant_cout("Calculating Symmetric Orthogonalization Matrix...");
  if (this->orth_X.cols() == 0 && this->orth_X.rows() == 0) {
    auto num_basis = this->input_basis.num_basis;
    this->orth_X.resize(num_basis, num_basis);
    Eigen::Matrix<double, Eigen::Dynamic, 1> s;
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> L;
    Eigen::SelfAdjointEigenSolver<
        Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>
        eigensolver(this->overlap);
    if (eigensolver.info() != Eigen::Success)
      (APP_ABORT("Error diagonalizing overlap matrix for symmetric "
                 "orthogonalization."));
    s = eigensolver.eigenvalues();
    L = eigensolver.eigenvectors();
    s = s.array().rsqrt();
    this->orth_X = s.asDiagonal();
    this->orth_X = L * this->orth_X * L.transpose();
  }
}
