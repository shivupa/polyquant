#include <integral/integral.hpp>

using namespace selci;

PYCI_INTEGRAL::PYCI_INTEGRAL(const PYCI_INPUT &input, const PYCI_BASIS &basis,
                             const PYCI_MOLECULE &molecule) {
  Selci_cout("INTEGRAL");
  this->setup_integral(input, basis, molecule);
}

void PYCI_INTEGRAL::calculate_overlap() {
  if (this->overlap.shape() == std::pair<size_t, size_t>(0, 0)) {
    Selci_cout("Calculating One Body Overlap Integrals...");
    auto num_basis = this->input_basis.num_basis;
    libint2::initialize();
    this->overlap.resize(num_basis, num_basis);
    this->overlap.fill(0);
    this->compute_1body_ints(this->overlap, this->input_basis.basis,
                             libint2::Operator::overlap);
    // TODO figure out how to write to file
    // xt::dump_npy("overlap.npy", this->overlap);
    libint2::finalize();
  }
}

void PYCI_INTEGRAL::calculate_kinetic() {
  if (this->kinetic.shape() == std::pair<size_t, size_t>(0, 0)) {
    Selci_cout("Calculating One Body Kinetic Integrals...");
    auto num_basis = this->input_basis.num_basis;
    libint2::initialize();
    this->kinetic.resize(num_basis, num_basis);
    this->kinetic.fill(0);
    this->compute_1body_ints(this->kinetic, this->input_basis.basis,
                             libint2::Operator::kinetic);
    // xt::dump_npy("kinetic.npy", this->kinetic);
    libint2::finalize();
  }
}

void PYCI_INTEGRAL::calculate_nuclear() {
  if (this->nuclear.shape() == std::pair<size_t, size_t>(0, 0)) {
    Selci_cout("Calculating One Body Nuclear Integrals...");
    auto num_basis = this->input_basis.num_basis;
    libint2::initialize();
    this->nuclear.resize(num_basis, num_basis);
    this->nuclear.fill(0);
    this->compute_1body_ints(this->nuclear, this->input_basis.basis,
                             libint2::Operator::nuclear,
                             this->input_molecule.libint_atom);
    // xt::dump_npy("nuclear.npy", this->nuclear);
    libint2::finalize();
  }
}

// void PYCI_INTEGRAL::calculate_polarization_potential() {
//  if (this->polarization_potential.shape() == std::vector<size_t>({})) {
//    Selci_cout("Calculating One Body Polarization Potential Integrals...");
//    std::vector<std::string> atom_types = {};
//    std::vector<std::string> polarization_types = {};
//    Selci_cout(
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
//      APP_ABORT("Selci needs keywords atom_types and polarization_types to do
//      "
//                "a polarization potential calculation.");
//    }
//
//    auto num_basis = this->input_basis.num_basis;
//    this->polarization_potential = DENSE_MATRIX<double>({num_basis,
//    num_basis}); this->polarization_potential.fill(0); libint2::initialize();
//
//    for (auto i = 0; i < this->input_molecule.num_atom; i++) {
//      DENSE_MATRIX<double> atom_polarization_potential({num_basis,
//      num_basis}); atom_polarization_potential.fill(0); DENSE_MATRIX<double>
//      operator_coeff; DENSE_MATRIX<double> operator_origin = {
//          this->input_molecule.atom_coord[i][0],
//          this->input_molecule.atom_coord[i][1],
//          this->input_molecule.atom_coord[i][2]};
//      if (polarization_types[i] == "MILLER") {
//        auto search_for_key = this->alpha_miller.find(atom_types[i]);
//        if (search_for_key == this->alpha_miller.end()) {
//          Selci_cout("Could not find the following atom type: ");
//          Selci_cout(atom_types[i]);
//          APP_ABORT("Polarization Key is incorrect!");
//        } else {
//          operator_coeff = search_for_key->second;
//        }
//      } else if (polarization_types[i] == "EXP") {
//        auto search_for_key = this->alpha_exp.find(atom_types[i]);
//        if (search_for_key == this->alpha_exp.end()) {
//          Selci_cout("Could not find the following atom type: ");
//          Selci_cout(atom_types[i]);
//          APP_ABORT("Polarization Key is incorrect!");
//        } else {
//          operator_coeff = search_for_key->second;
//        }
//      } else if (polarization_types[i] == "M1") {
//        auto search_for_key = this->alpha_m1.find(atom_types[i]);
//        if (search_for_key == this->alpha_m1.end()) {
//          Selci_cout("Could not find the following atom type: ");
//          Selci_cout(atom_types[i]);
//          APP_ABORT("Polarization Key is incorrect!");
//        } else {
//          operator_coeff = search_for_key->second;
//        }
//      } else if (polarization_types[i] == "M2") {
//        auto search_for_key = this->alpha_m2.find(atom_types[i]);
//        if (search_for_key == this->alpha_m2.end()) {
//          Selci_cout("Could not find the following atom type: ");
//          Selci_cout(atom_types[i]);
//          APP_ABORT("Polarization Key is incorrect!");
//        } else {
//          operator_coeff = search_for_key->second;
//        }
//      } else {
//        Selci_cout("The following polarization type was not recognized:");
//        Selci_cout(polarization_types[i]);
//        APP_ABORT("Selci didn't understand what polarization type you
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

void PYCI_INTEGRAL::calculate_two_electron() {
  if (this->twoelec.size() == 0) {
    Selci_cout("Calculating Two Body Electron Repulsion Integrals...");
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
    // xt::dump_npy("twoelec.npy", this->twoelec);
    libint2::finalize();
  }
}

void PYCI_INTEGRAL::setup_integral(const PYCI_INPUT &input,
                                   const PYCI_BASIS &basis,
                                   const PYCI_MOLECULE &molecule) {
  this->input_params = input;
  this->input_basis = basis;
  this->input_molecule = molecule;
}

/**
 * @details This follows the HF test in the Libint2 repo. It constructs the
 * integral engine. This all needs to be flipped around so we are using the
 * SLEPc/PETSc get domain and calculating the integrals on each process that we
 * need to. Right now we calculate them all on each rank.
 */
void PYCI_INTEGRAL::compute_1body_ints(
    DENSE_MATRIX<double> &output_matrix, const libint2::BasisSet &shells,
    libint2::Operator obtype, const std::vector<libint2::Atom> &atoms) {

  // This all needs to be flipped around so we are using
  // the SLEPc/PETSc get domain and calculating the integrals
  // on each process that we need to. Right now we calculate
  // them on each rank

  // construct the overlap integrals engine
  libint2::Engine engine(obtype, shells.max_nprim(), shells.max_l(), 0);

  // nuclear attraction ints engine needs to know where the charges sit
  // the nuclei are charges in this case; in QM/MM there will also be classical
  // charges
  if (obtype == libint2::Operator::nuclear) {
    engine.set_params(libint2::make_point_charges(atoms));
  }

  auto shell2bf = shells.shell2bf();

  // buf[0] points to the target shell set after every call to engine.compute()
  const auto &buf = engine.results();
  // loop over unique shell pairs, {s1,s2} such that s1 >= s2
  // this is due to the permutational symmetry of the real integrals over
  // Hermitian operators: (1|2) = (2|1)
  for (auto s1 = 0; s1 != shells.size(); ++s1) {
    auto bf1 = shell2bf[s1]; // first basis function in this shell
    auto n1 = shells[s1].size();
    for (auto s2 = s1; s2 != shells.size(); ++s2) {
      auto bf2 = shell2bf[s2];
      auto n2 = shells[s2].size();
      // Todo use symmetry
      // compute shell pair
      engine.compute(shells[s1], shells[s2]);
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
  // auto computed_shell = xt::view(output_matrix, xt::range(bf1, bf1 + n1),
  //                                xt::range(bf2, bf2 + n2));
  // std::vector<std::size_t> shape = {n1, n2};
  // computed_shell = xt::adapt(&buf, n1 + n2, xt::acquire_ownership(), shape);
}

// double PYCI_INTEGRAL::primitive_integral_operator_expanded_in_gaussians(
//    const DENSE_MATRIX<double> &origin1, const double &cont_coeff1,
//    const double &exp1, const xt::xarray<int> &angular_momentum_1,
//    const DENSE_MATRIX<double> &origin2, const double &cont_coeff2,
//    const double &exp2, const xt::xarray<int> &angular_momentum_2,
//    const DENSE_MATRIX<double> &operator_origin,
//    const DENSE_MATRIX<double> &operator_coeff,
//    const DENSE_MATRIX<double> &operator_exps) {
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
// void PYCI_INTEGRAL::compute_1body_ints_operator_expanded_in_gaussians(
//     DENSE_MATRIX<double> &output_matrix, const libint2::BasisSet &shells,
//     const DENSE_MATRIX<double> &operator_origin,
//     const DENSE_MATRIX<double> &operator_coeff,
//     const DENSE_MATRIX<double> &operator_exps) {
//   auto shell2bf = shells.shell2bf();
//   // loop over unique shell pairs, {s1,s2} such that s1 >= s2
//   // this is due to the permutational symmetry of the real integrals over
//   // Hermitian operators: (1|2) = (2|1)
//   for (auto s1 = 0; s1 != shells.size(); ++s1) {
//     auto bf1 = shell2bf[s1]; // first basis function in this shell
//     DENSE_MATRIX<double> origin1 = {shells[s1].O[0], shells[s1].O[1],
//                                   shells[s1].O[2]};
//     for (auto s2 = s1; s2 != shells.size(); ++s2) {
//       auto bf2 = shell2bf[s2];
//       DENSE_MATRIX<double> origin2 = {shells[s2].O[0], shells[s2].O[1],
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
 * integral engine. This all needs to be flipped around so we are using the
 * SLEPc/PETSc get domain and calculating the integrals on each process that
 * we need to. Right now we calculate them all on each rank.
 */
void PYCI_INTEGRAL::compute_2body_ints(DENSE_VECTOR<double> &output_vec,
                                       const libint2::BasisSet &shells,
                                       libint2::Operator obtype) {
  // Following the HF test in the Libint2 repo
  // construct the overlap integrals engine

  // This also needs to be flipped around so we are using
  // the SLEPc/PETSc get domain and calculating the integrals
  // on each process that we need to. This is harder cause
  // we have to go from an idx8 to the ijkl separated.
  libint2::Engine engine(obtype, shells.max_nprim(), shells.max_l(), 0);

  auto shell2bf = shells.shell2bf();

  // buf[0] points to the target shell set after every call to
  // engine.compute()
  const auto &buf = engine.results();
  // loop over unique shell pairs, {s1,s2} such that s1 >= s2
  // this is due to the permutational symmetry of the real integrals over
  // Hermitian operators: (1|2) = (2|1)
  for (auto s1 = 0; s1 != shells.size(); ++s1) {
    auto bf1_first = shell2bf[s1]; // first basis function in this shell
    auto n1 = shells[s1].size();
    for (auto s2 = 0; s2 <= s1; ++s2) {
      auto bf2_first = shell2bf[s2];
      auto n2 = shells[s2].size();
      for (auto s3 = 0; s3 <= s1; ++s3) {
        auto bf3_first = shell2bf[s3]; // first basis function in this shell
        auto n3 = shells[s3].size();
        for (auto s4 = 0; s4 <= (s1 == s3 ? s2 : s3); ++s4) {
          auto bf4_first = shell2bf[s4];
          auto n4 = shells[s4].size();
          // Todo use symmetry
          // compute shell pair
          engine.compute(shells[s1], shells[s2], shells[s3], shells[s4]);
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
          // std::vector<PetscInt> insert_idx(n1 + n2 + n3 + n4);
          // for (auto i : Petsc_bf1) {
          //   for (auto j : Petsc_bf2) {
          //     for (auto k : Petsc_bf3) {
          //       for (auto l : Petsc_bf4) {
          //         insert_idx.push_back(this->idx8(i, j, k, l));
          //       }
          //     }
          //   }
          // }
          // std::cout << insert_idx.size() << std::endl;

          // VecSetValues(output_vec, insert_idx.size(), insert_idx.data(),
          // buf[0], INSERT_VALUES);
        }
      }
    }
  }
}

int PYCI_INTEGRAL::idx2(const int &i, const int &j) {
  symmetric_matrix_triangular_idx(i, j);
}

int PYCI_INTEGRAL::idx8(const int &i, const int &j, const int &k,
                        const int &l) {
  return PYCI_INTEGRAL::idx2(PYCI_INTEGRAL::idx2(i, j),
                             PYCI_INTEGRAL::idx2(k, l));
}

void PYCI_INTEGRAL::symmetric_orthogonalization() {
  Selci_cout("Calculating Symmetric Orthogonalization Matrix...");
  if (this->orth_X.shape() == std::pair<size_t, size_t>(0, 0)) {
    auto num_basis = this->input_basis.num_basis;
    DENSE_VECTOR<double> s;
    DENSE_MATRIX<double> L;
    eigenvalues_and_eigenvectors(this->overlap, s, L);
    for (size_t i = 0; i < s.size(); i++) {
      this->orth_X(i, i) = 1.0 / std::sqrt(s(i));
    }
    DENSE_MATRIX<double> temp;
    mm_dot(this->orth_X, L, temp, false, true);
    DENSE_MATRIX<double> temp2;
    mm_dot(L, this->orth_X, temp2, false, false);
    for (size_t i = 0; i < this->orth_X.shape().first; i++) {
      for (size_t j = 0; j < this->orth_X.shape().second; j++) {
        this->orth_X(i, j) = temp2(i, j);
      }
    }
  }
}
}
