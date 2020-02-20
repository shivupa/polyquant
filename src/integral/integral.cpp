#include <integral/integral.hpp>

PYCI_INTEGRAL::PYCI_INTEGRAL(const PYCI_INPUT &input, const PYCI_BASIS &basis,
                             const PYCI_MOLECULE &molecule) {
  this->setup_integral(input, basis, molecule);
}

void PYCI_INTEGRAL::setup_integral(const PYCI_INPUT &input,
                                   const PYCI_BASIS &basis,
                                   const PYCI_MOLECULE &molecule) {
  this->input_basis = basis;
  auto num_basis = this->input_basis.num_basis;
  libint2::initialize();

  Selci_cout("INTEGRAL");
  Selci_cout("Calculating One Body Integrals...");
  this->overlap = xt::zeros<double>({num_basis, num_basis});
  this->compute_1body_ints(this->overlap, this->input_basis.basis,
                           libint2::Operator::overlap);

  this->kinetic = xt::zeros<double>({num_basis, num_basis});
  this->compute_1body_ints(this->kinetic, this->input_basis.basis,
                           libint2::Operator::kinetic);

  this->nuclear = xt::zeros<double>({num_basis, num_basis});
  this->compute_1body_ints(this->nuclear, this->input_basis.basis,
                           libint2::Operator::nuclear, molecule.libint_atom);

  Selci_cout("Calculating Two Body Integrals...");
  // the upper triangle of a square matrix is size N*(N-1)/2
  // this is that but where N=M*(M-1)/2
  auto two_elec_size = ((num_basis) * (num_basis + 1) *
                        ((num_basis * num_basis) + (num_basis) + 2)) /
                       8;
  this->twoelec = xt::zeros<double>({two_elec_size});
  this->compute_2body_ints(this->twoelec, this->input_basis.basis,
                           libint2::Operator::coulomb);
  xt::dump_npy("overlap.npy", this->overlap);
  xt::dump_npy("kinetic.npy", this->kinetic);
  xt::dump_npy("nuclear.npy", this->nuclear);
  xt::dump_npy("twoelec.npy", this->twoelec);

  libint2::finalize();
}

/**
 * @details This follows the HF test in the Libint2 repo. It constructs the
 * integral engine. This all needs to be flipped around so we are using the
 * SLEPc/PETSc get domain and calculating the integrals on each process that we
 * need to. Right now we calculate them all on each rank.
 */
void PYCI_INTEGRAL::compute_1body_ints(
    xt::xarray<double> &output_matrix, const libint2::BasisSet &shells,
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

/**
 * @details This follows the HF test in the Libint2 repo. It constructs the
 * integral engine. This all needs to be flipped around so we are using the
 * SLEPc/PETSc get domain and calculating the integrals on each process that we
 * need to. Right now we calculate them all on each rank.
 */
void PYCI_INTEGRAL::compute_2body_ints(xt::xarray<double> &output_vec,
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

  // buf[0] points to the target shell set after every call to engine.compute()
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
  if (i > j) {
    return ((i * (i + 1)) / 2) + j;
  } else {
    return ((j * (j + 1)) / 2) + i;
  }
}

int PYCI_INTEGRAL::idx8(const int &i, const int &j, const int &k,
                        const int &l) {
  return PYCI_INTEGRAL::idx2(PYCI_INTEGRAL::idx2(i, j),
                             PYCI_INTEGRAL::idx2(k, l));
}

void PYCI_INTEGRAL::symmetric_orthogonalization() {
  auto num_basis = this->input_basis.num_basis;
  auto eigen_S = xt::linalg::eigh(this->overlap);
  auto s = std::get<0>(eigen_S);
  auto L = std::get<1>(eigen_S);
  this->orth_X = xt::zeros<double>({num_basis, num_basis});
  for (size_t i = 0; i < s.size(); i++) {
    this->orth_X(i, i) = 1.0 / std::sqrt(s(i));
  }
  this->orth_X =
      xt::linalg::dot(L, xt::linalg::dot(this->orth_X, xt::transpose(L)));
}