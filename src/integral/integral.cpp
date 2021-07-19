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

void POLYQUANT_INTEGRAL::construct_ijcache(size_t size_in_gb) {
  std::pair<int, int> temp(0, 0);
  this->ijcache_size = (size_in_gb * 1e9) / sizeof(temp);
  polyquant_lfu_cache<std::pair<int, int>, int, PairHash<int>>
      constructed_ijcache(this->ijcache_size);
  this->ijcache = constructed_ijcache;
}
void POLYQUANT_INTEGRAL::construct_ericache(size_t size_in_gb) {
  std::vector<size_t> temp_vec = {0, 0, 0};
  std::pair<std::vector<size_t>, std::vector<size_t>> temp(temp_vec, temp_vec);
  this->ericache_size = (size_in_gb * 1e9) / sizeof(temp);
  polyquant_lfu_cache<std::pair<std::vector<size_t>, std::vector<size_t>>,
                      double, PairVectorHash<size_t>>
      constructed_ericache(this->ericache_size);
  this->ericache = constructed_ericache;
}

void POLYQUANT_INTEGRAL::calculate_overlap() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  libint2::initialize();
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    if (this->overlap[quantum_part_idx].cols() == 0 &&
        this->overlap[quantum_part_idx].rows() == 0) {
      Polyquant_cout("Calculating One Body Overlap Integrals...");
      auto num_basis = this->input_basis.num_basis[quantum_part_idx];
      this->overlap[quantum_part_idx].resize(num_basis, num_basis);
      this->overlap[quantum_part_idx].fill(0);
      this->compute_1body_ints(this->overlap[quantum_part_idx],
                               this->input_basis.basis[quantum_part_idx],
                               libint2::Operator::overlap);
      // TODO figure out how to write to file
      std::stringstream filename;
      filename << "overlap";
      filename << quantum_part_idx;
      filename << ".txt";
      Polyquant_dump_mat_to_file(this->overlap[quantum_part_idx],
                                 filename.str());
    }
    quantum_part_idx++;
  }
  libint2::finalize();
}

void POLYQUANT_INTEGRAL::calculate_Schwarz() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  libint2::initialize();
  auto quantum_part_a_idx = 0ul;
  for (auto const &[quantum_part_a_key, quantum_a_part] :
       this->input_molecule.quantum_particles) {
    auto quantum_part_b_idx = 0ul;
    for (auto const &[quantum_part_b_key, quantum_b_part] :
         this->input_molecule.quantum_particles) {
      if (quantum_part_a_idx > quantum_part_b_idx) {
        continue;
      }
      if (this->Schwarz[quantum_part_a_idx][quantum_part_b_idx].cols() == 0 &&
          this->Schwarz[quantum_part_a_idx][quantum_part_b_idx].rows() == 0) {
        Polyquant_cout("Calculating pseudo One Body Schwarz Integrals...");
        auto num_basis_a = this->input_basis.basis[quantum_part_a_idx].size();
        auto num_basis_b = this->input_basis.basis[quantum_part_b_idx].size();
        this->Schwarz[quantum_part_a_idx][quantum_part_b_idx].resize(
            num_basis_a, num_basis_b);
        this->Schwarz[quantum_part_a_idx][quantum_part_b_idx].fill(0);
        this->compute_Schwarz_ints(
            this->Schwarz[quantum_part_a_idx][quantum_part_b_idx],
            this->input_basis.basis[quantum_part_a_idx],
            this->input_basis.basis[quantum_part_b_idx],
            libint2::Operator::coulomb);
        // TODO figure out how to write to file
        std::stringstream filename;
        filename << "overlap";
        filename << quantum_part_a_idx;
        filename << quantum_part_b_idx;
        filename << ".txt";
        Polyquant_dump_mat_to_file(
            this->Schwarz[quantum_part_a_idx][quantum_part_b_idx],
            "Schwarz.txt");
      }
      quantum_part_b_idx++;
    }
    quantum_part_a_idx++;
  }
  libint2::finalize();
}
void POLYQUANT_INTEGRAL::calculate_unique_shell_pairs(double threshold) {
  if (threshold == -1){
    threshold  = this->tolerance_2e;
  }
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  libint2::initialize();
  auto quantum_part_a_idx = 0ul;
  for (auto const &[quantum_part_a_key, quantum_a_part] :
       this->input_molecule.quantum_particles) {
    if (std::get<0>(this->unique_shell_pairs[quantum_part_a_idx]).size() == 0 &&
        std::get<1>(this->unique_shell_pairs[quantum_part_a_idx]).size() == 0) {
      Polyquant_cout("Calculating pseudo unique shell pairs...");
      this->unique_shell_pairs[quantum_part_a_idx] = this->compute_shellpairs(
          this->input_basis.basis[quantum_part_a_idx], threshold);
    }
    quantum_part_a_idx++;
  }
  libint2::finalize();
}
void POLYQUANT_INTEGRAL::calculate_kinetic() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  libint2::initialize();
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    if (this->kinetic[quantum_part_idx].cols() == 0 &&
        this->kinetic[quantum_part_idx].rows() == 0) {
      Polyquant_cout("Calculating One Body Kinetic Integrals...");
      auto num_basis = this->input_basis.num_basis[quantum_part_idx];
      this->kinetic[quantum_part_idx].resize(num_basis, num_basis);
      this->kinetic[quantum_part_idx].fill(0);
      this->compute_1body_ints(this->kinetic[quantum_part_idx],
                               this->input_basis.basis[quantum_part_idx],
                               libint2::Operator::kinetic);
      std::stringstream filename;
      filename << "kinetic";
      filename << quantum_part_idx;
      filename << ".txt";
      Polyquant_dump_mat_to_file(this->kinetic[quantum_part_idx],
                                 filename.str());
    }
    quantum_part_idx++;
  }
  libint2::finalize();
}

void POLYQUANT_INTEGRAL::calculate_nuclear() {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  libint2::initialize();
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    if (this->nuclear[quantum_part_idx].cols() == 0 &&
        this->nuclear[quantum_part_idx].rows() == 0) {
      Polyquant_cout("Calculating One Body Nuclear Integrals...");
      auto num_basis = this->input_basis.num_basis[quantum_part_idx];
      this->nuclear[quantum_part_idx].resize(num_basis, num_basis);
      this->nuclear[quantum_part_idx].fill(0);
      this->compute_1body_ints(this->nuclear[quantum_part_idx],
                               this->input_basis.basis[quantum_part_idx],
                               libint2::Operator::nuclear,
                               this->input_molecule.to_libint_atom("no_ghost"));
      std::stringstream filename;
      filename << "nuclear";
      filename << quantum_part_idx;
      filename << ".txt";
      Polyquant_dump_mat_to_file(this->nuclear[quantum_part_idx],
                                 filename.str());
    }
    quantum_part_idx++;
  }
  libint2::finalize();
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
          (kinetic[quantum_part_idx] +
           (-quantum_part.charge * nuclear[quantum_part_idx])) *
          mo_coeffs[quantum_part_idx][j];
      //(kinetic + (-quantum_part.charge * nuclear)) *
    }
    quantum_part_idx++;
  }
}

Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>
POLYQUANT_INTEGRAL::transform_mo_2_body_integrals(
    const size_t &quantum_part_a_idx, const size_t &quantum_part_b_idx,
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &mo_coeffs_a,
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &mo_coeffs_b,
    int num_part_alpha, int num_part_beta) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto num_basis_a = this->input_basis.num_basis[quantum_part_a_idx];
  auto num_basis_b = this->input_basis.num_basis[quantum_part_b_idx];

  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> eri;
  Eigen::Tensor<double, 4> temp1;
  Eigen::Tensor<double, 4> temp2;
  auto eri_size_a = (num_basis_a * (num_basis_a + 1) / 2);
  auto eri_size_b = (num_basis_b * (num_basis_b + 1) / 2);
  temp1.resize(num_basis_a, num_basis_a, num_basis_b, num_basis_b);
  temp2.resize(num_basis_a, num_basis_a, num_basis_b, num_basis_b);
  eri.setZero();
  temp1.setZero();
  temp2.setZero();
  double elem = 0.0;
  // tmp = np.einsum('pi,pqrs->iqrs', C, I, optimize=True)
  // tmp = np.einsum('qj,iqrs->ijrs', C, tmp, optimize=True)
  // tmp = np.einsum('ijrs,rk->ijks', tmp, C, optimize=True)
  // I_mo = np.einsum('ijks,sl->ijkl', tmp, C, optimize=True)
  for (auto i = 0; i < num_basis_a; i++) {
    for (auto q = 0; q < num_basis_a; q++) {
      for (auto r = 0; r < num_basis_b; r++) {
        for (auto s = 0; s < num_basis_b; s++) {
          elem = 0.0;
#pragma omp parallel for reduction(+ : elem)
          for (auto p = 0; p < num_basis_a; p++) {
            elem += mo_coeffs_a(p, i) * this->get2e_elem(quantum_part_a_idx,
                                                         quantum_part_b_idx, p,
                                                         q, r, s);
          }
          temp1(i, q, r, s) += elem;
        }
      }
    }
  }
  for (auto i = 0; i < num_basis_a; i++) {
    for (auto j = 0; j < num_basis_a; j++) {
      for (auto r = 0; r < num_basis_b; r++) {
        for (auto s = 0; s < num_basis_b; s++) {
          elem = 0.0;
#pragma omp parallel for reduction(+ : elem)
          for (auto q = 0; q < num_basis_a; q++) {
            elem += mo_coeffs_a(q, j) * temp1(i, q, r, s);
          }
          temp2(i, j, r, s) += elem;
        }
      }
    }
  }
  temp1.setZero();
  for (auto i = 0; i < num_basis_a; i++) {
    for (auto j = 0; j < num_basis_a; j++) {
      for (auto k = 0; k < num_basis_b; k++) {
        for (auto s = 0; s < num_basis_b; s++) {
          elem = 0.0;
#pragma omp parallel for reduction(+ : elem)
          for (auto r = 0; r < num_basis_b; r++) {
            elem += mo_coeffs_b(r, k) * temp2(i, j, r, s);
          }
          temp1(i, j, k, s) += elem;
        }
      }
    }
  }
  // temp2.setZero();
  temp2.resize(0, 0, 0, 0);
  eri.resize(eri_size_a, eri_size_b);
  for (auto i = 0; i < num_basis_a; i++) {
    for (auto j = 0; j < num_basis_a; j++) {
      for (auto k = 0; k < num_basis_b; k++) {
        for (auto l = 0; l < num_basis_b; l++) {
          elem = 0.0;
#pragma omp parallel for reduction(+ : elem)
          for (auto s = 0; s < num_basis_b; s++) {
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
                              quantum_part_a_idx, quantum_part_b_idx,
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

// void POLYQUANT_INTEGRAL::calculate_two_electron() {
//   auto function = __PRETTY_FUNCTION__;
//   POLYQUANT_TIMER timer(function);
//   auto quantum_part_a_idx = 0ul;
//   auto quantum_part_b_idx = 0ul;
//   for (auto const &[quantum_part_a_key, quantum_part_a] :
//        this->input_molecule.quantum_particles) {
//     if (this->twoelec.rows() == 0) {
//       Polyquant_cout("Calculating Two Body Electron Repulsion Integrals...");
//       auto num_basis = this->input_basis.num_basis;
//       libint2::initialize();
//       this->compute_2body_ints(this->twoelec, this->input_basis.basis,
//                                libint2::Operator::coulomb);
//       Polyquant_dump_vec_to_file(this->twoelec, "twoelec.txt");
//       libint2::finalize();
//     }
//     quantum_part_a++;
//   }
// }

double POLYQUANT_INTEGRAL::get2e_elem(const size_t &quantum_part_a_idx,
                                      const size_t &quantum_part_b_idx,
                                      const size_t &i, const size_t &j,
                                      const size_t &k, const size_t &l) {
  std::vector<size_t> part_one = {quantum_part_a_idx, i, j};
  std::vector<size_t> part_two = {quantum_part_b_idx, l, k};
  std::sort(part_one.begin() + 1, part_one.end());
  std::sort(part_two.begin() + 1, part_two.end());
  if (quantum_part_a_idx == quantum_part_b_idx) {
    std::vector<size_t> combined_idxs = {i, j, k, l};
    std::sort(combined_idxs.begin(), combined_idxs.end());
    part_one[1] = combined_idxs[0];
    part_one[2] = combined_idxs[1];
    part_two[1] = combined_idxs[2];
    part_two[2] = combined_idxs[3];
  }
  std::pair<std::vector<size_t>, std::vector<size_t>> eri_idx =
      std::make_pair(part_one, part_two);
  // finish by calculating entire shell if not present and storing entire
  // shell..
  auto cached_eri_elem = this->ericache.get(eri_idx);
  if (cached_eri_elem.has_value()) {
    return cached_eri_elem.value();
  } else {
    libint2::initialize();
    auto shells_a = this->input_basis.basis[part_one[0]];
    auto shells_b = this->input_basis.basis[part_two[0]];

    auto max_nprim = shells_a.max_nprim() > shells_b.max_nprim()
                         ? shells_a.max_nprim()
                         : shells_b.max_nprim();
    auto max_l = shells_a.max_l() > shells_b.max_l() ? shells_a.max_l()
                                                     : shells_b.max_l();
    libint2::Engine engine =
        libint2::Engine(libint2::Operator::coulomb, max_nprim, max_l, 0);
    engine.set_precision(this->tolerance_2e);

    auto shell2bf_a = shells_a.shell2bf();
    auto shell2bf_b = shells_b.shell2bf();
    size_t s1 = 0;
    size_t s2 = 0;
    size_t s3 = 0;
    size_t s4 = 0;
    for (auto shell_start_a : shell2bf_a) {
      if (part_one[1] > shell_start_a) {
        s1++;
      }
      if (part_one[2] > shell_start_a) {
        s2++;
      }
      if (part_one[1] <= shell_start_a && part_one[2] <= shell_start_a) {
        break;
      }
    }
    for (auto shell_start_b : shell2bf_b) {
      if (part_two[1] > shell_start_b) {
        s3++;
      }
      if (part_two[2] > shell_start_b) {
        s4++;
      }
      if (part_one[1] <= shell_start_b && part_one[2] <= shell_start_b) {
        break;
      }
    }

    const auto &buf = engine.results();
    // loop over unique shell pairs, {s1,s2} such that s1 >= s2
    // this is due to the permutational symmetry of the real integrals over
    // Hermitian operators: (1|2) = (2|1)
    auto n1 = shells_a[s1].size();
    auto n2 = shells_a[s2].size();
    auto n3 = shells_b[s3].size();
    auto n4 = shells_b[s4].size();
    engine.compute(shells_a[s1], shells_a[s2], shells_b[s3], shells_b[s4]);
    const auto *buf_1234 = buf[0];
    double return_element = 0.0;
    for (size_t f1 = shell2bf_a[s1], f1234 = 0; f1 < shell2bf_a[s1] + n1;
         ++f1) {
      for (size_t f2 = shell2bf_a[s2]; f2 < shell2bf_a[s2] + n2; ++f2) {
        std::vector<size_t> temp_part_one = {quantum_part_a_idx, f1, f2};
        for (size_t f3 = shell2bf_b[s3]; f3 < shell2bf_b[s3] + n3; ++f3) {
          for (size_t f4 = shell2bf_b[s4]; f4 < shell2bf_b[s4] + n4;
               ++f4, ++f1234) {
            std::vector<size_t> temp_part_two = {quantum_part_b_idx, f3, f4};
            std::pair<std::vector<size_t>, std::vector<size_t>> temp_eri_idx =
                std::make_pair(temp_part_one, temp_part_two);
            if (buf_1234 == nullptr) {
              this->ericache.set(temp_eri_idx, 0.0);
            } else {
              this->ericache.set(temp_eri_idx, buf_1234[f1234]);
            }
            if (part_one[1] == f1 && part_one[2] == f2 && part_two[1] == f3 &&
                part_two[2] == f4) {
              return_element = buf_1234[f1234];
            }
          }
        }
      }
    }
    libint2::finalize();
    return return_element;
  }
}
void POLYQUANT_INTEGRAL::compute_Schwarz_ints(
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> &output_matrix,
    const libint2::BasisSet &shells_a, const libint2::BasisSet &shells_b,
    libint2::Operator obtype) {
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
    engines[0] = libint2::Engine(
        obtype, std::max(shells_a.max_nprim(), shells_b.max_nprim()),
        std::max(shells_a.max_l(), shells_b.max_l()), 0);
    if (nthreads > 1) {
      if (thread_id == 0) {
        Polyquant_cout("Making more engines for each thread");
      }
      for (auto i = 1ul; i < nthreads; i++) {
        engines[i] = engines[0];
      }
    }

    const auto &buf = engines[thread_id].results();
    for (auto s1 = 0l, s12 = 0l; s1 != shells_a.size(); ++s1) {
      auto n1 = shells_a[s1].size();
      for (auto s2 = 0; s2 != shells_b.size(); ++s2, ++s12) {
        if (s12 % nthreads != thread_id) {
          continue;
        }
        auto n2 = shells_b[s2].size();
        auto n12 = n1 * n2;

        engines[thread_id]
            .compute2<libint2::Operator::coulomb, libint2::BraKet::xx_xx, 0>(
                shells_a[s1], shells_b[s2], shells_a[s1], shells_b[s2]);

        Eigen::Map<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>
            buf_mat(buf[0], n12, n12);
        auto norm = buf_mat.lpNorm<Eigen::Infinity>();
        output_matrix(s1, s2) = std::sqrt(norm);
        // output_matrix(s2, s1) = std::sqrt(norm);
      }
    }
  }
}
void POLYQUANT_INTEGRAL::setup_integral(const POLYQUANT_INPUT &input,
                                        const POLYQUANT_BASIS &basis,
                                        const POLYQUANT_MOLECULE &molecule) {
  this->input_params = input;
  this->input_basis = basis;
  this->input_molecule = molecule;
  this->construct_ijcache();
  this->construct_ericache();
  this->overlap.resize(molecule.quantum_particles.size());
  this->kinetic.resize(molecule.quantum_particles.size());
  this->nuclear.resize(molecule.quantum_particles.size());
  this->orth_X.resize(molecule.quantum_particles.size());
  this->Schwarz.resize(molecule.quantum_particles.size());
  this->unique_shell_pairs.resize(molecule.quantum_particles.size());
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    this->Schwarz[quantum_part_idx].resize(molecule.quantum_particles.size());
    this->unique_shell_pairs[quantum_part_idx].resize(
        molecule.quantum_particles.size());
    quantum_part_idx++;
  }
}

std::tuple<std::unordered_map<size_t, std::vector<size_t>>,
           std::vector<std::vector<std::shared_ptr<libint2::ShellPair>>>>
POLYQUANT_INTEGRAL::compute_shellpairs(const libint2::BasisSet &bs1,
                                       const double threshold) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  // if bs2 became an argument then this could be used to calculate unique
  // shells between basis sets, however at this time we don't require that.
  const BasisSet &bs2 = bs1;
#pragma omp parallel
  {
    const auto nsh1 = bs1.size();
    const auto nsh2 = bs2.size();
    const auto bs1_equiv_bs2 = (&bs1 == &bs2);
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    std::vector<libint2::Engine> engines;

    engines.reserve(nthreads);
    engines.emplace_back(Operator::overlap,
                         std::max(bs1.max_nprim(), bs2.max_nprim()),
                         std::max(bs1.max_l(), bs2.max_l()), 0);
    for (size_t i = 1; i != nthreads; ++i) {
      engines.push_back(engines[0]);
    }

    Polyquant_cout("Computing non-negligible shell-pair list");
    std::unordered_map<size_t, std::vector<size_t>> splist;
    auto &engine = engines[thread_id];
    const auto &buf = engine.results();
    // loop over permutationally-unique set of shells
    for (auto s1 = 0l, s12 = 0l; s1 != nsh1; ++s1) {
      if (splist.find(s1) == splist.end()) {
#pragma omp critical(insert_s1)
        { splist.insert(std::make_pair(s1, std::vector<size_t>())); }
      }

      auto n1 = bs1[s1].size(); // number of basis functions in this shell
      auto s2_max = bs1_equiv_bs2 ? s1 : nsh2 - 1;
      for (auto s2 = 0; s2 <= s2_max; ++s2, ++s12) {
        if (s12 % nthreads != thread_id) {
          continue;
        }

        auto on_same_center = (bs1[s1].O == bs2[s2].O);
        bool significant = on_same_center;
        if (not on_same_center) {
          auto n2 = bs2[s2].size();
          engines[thread_id].compute(bs1[s1], bs2[s2]);
          Eigen::Map<const Matrix> buf_mat(buf[0], n1, n2);
          auto norm = buf_mat.norm();
          significant = (norm >= threshold);
        }

        if (significant) {
#pragma omp critical(insert_s2)
          { splist[s1].emplace_back(s2); }
        }
      }
    }
  }

#pragma omp parallel
  {
    const auto nsh1 = bs1.size();
    const auto nsh2 = bs2.size();
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto s1 = 0l; s1 != nsh1; ++s1) {
      if (s1 % nthreads == thread_id) {
        auto &list = splist[s1];
        std::sort(list.begin(), list.end());
      }
    }
  }

#pragma omp parallel
  {
    const auto nsh1 = bs1.size();
    const auto nsh2 = bs2.size();
    for (auto s1 = 0l; s1 != nsh1; ++s1) {
      if (s1 % nthreads == thread_id) {
        auto &list = splist[s1];
        std::sort(list.begin(), list.end());
      }
    }
  }
  /// to use precomputed shell pair data must decide on max precision a priori
  const auto max_engine_precision =
      std::numeric_limits<double>::epsilon() / 1e10;
  const auto ln_max_engine_precision = std::log(max_engine_precision);
  std::vector<std::vector<std::shared_ptr<libint2::ShellPair>>> spdata(
      splist.size());
#pragma omp parallel
  {
    int nthreads = omp_get_num_threads();
    auto thread_id = omp_get_thread_num();
    for (auto s1 = 0l; s1 != nsh1; ++s1) {
      if (s1 % nthreads == thread_id) {
        for (const auto &s2 : splist[s1]) {
          spdata[s1].emplace_back(std::make_shared<libint2::ShellPair>(
              bs1[s1], bs2[s2], ln_max_engine_precision));
        }
      }
    }
  }
  return std::make_tuple(splist, spdata);
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
/**
 * @details This follows the HF test in the Libint2 repo. It constructs the
 * integral engines and splits up the calculation of integrals on each OpenMP
 * rank.
 */
// void POLYQUANT_INTEGRAL::compute_2body_ints(
//     Eigen::Matrix<double, Eigen::Dynamic, 1> &output_vec,
//     const libint2::BasisSet &shells, libint2::Operator obtype) {
//   // Following the HF test in the Libint2 repo
//   // construct the overlap integrals engine
// #pragma omp parallel
//   {
//     int nthreads = omp_get_num_threads();
//     auto thread_id = omp_get_thread_num();
//
//     std::vector<libint2::Engine> engines;
//     if (thread_id == 0) {
//       std::string message =
//           "Computing on " + std::to_string(nthreads) + " threads.";
//       Polyquant_cout(message);
//     }
//     engines.resize(nthreads);
//     engines[0] = libint2::Engine(obtype, shells.max_nprim(), shells.max_l(),
//     0); engines[0].set_precision(this->tolerance_2e); if (nthreads > 1) {
//       if (thread_id == 0) {
//         Polyquant_cout("Making more engines for each thread");
//       }
//       for (auto i = 1ul; i < nthreads; i++) {
//         engines[i] = engines[0];
//       }
//     }
//
//     auto shell2bf = shells.shell2bf();
//
//     // buf[0] points to the target shell set after every call to
//     // engine.compute()
//     const auto &buf = engines[thread_id].results();
//     // loop over unique shell pairs, {s1,s2} such that s1 >= s2
//     // this is due to the permutational symmetry of the real integrals over
//     // Hermitian operators: (1|2) = (2|1)
//     for (auto s1 = 0l, s1234 = 0l; s1 != shells.size(); ++s1) {
//       auto bf1_first = shell2bf[s1]; // first basis function in this shell
//       auto n1 = shells[s1].size();
//       for (auto s2 = 0l; s2 <= s1; ++s2) {
//         auto bf2_first = shell2bf[s2];
//         auto n2 = shells[s2].size();
//         for (auto s3 = 0l; s3 <= s1; ++s3) {
//           auto bf3_first = shell2bf[s3]; // first basis function in this
//           shell auto n3 = shells[s3].size(); for (auto s4 = 0l; s4 <= (s1 ==
//           s3 ? s2 : s3); ++s4) {
//             auto bf4_first = shell2bf[s4];
//             auto n4 = shells[s4].size();
//             if ((s1234++) % nthreads != thread_id)
//               continue;
//             // compute shell pair
//             engines[thread_id].compute(shells[s1], shells[s2], shells[s3],
//                                        shells[s4]);
//             const auto *buf_1234 = buf[0];
//             if (buf_1234 == nullptr)
//               continue; // if all integrals screened out, skip to next
//               quartet
//             for (size_t f1 = 0, f1234 = 0; f1 != n1; ++f1) {
//               const auto bf1 = f1 + bf1_first;
//               for (size_t f2 = 0; f2 != n2; ++f2) {
//                 const auto bf2 = f2 + bf2_first;
//                 for (size_t f3 = 0; f3 != n3; ++f3) {
//                   const auto bf3 = f3 + bf3_first;
//                   for (size_t f4 = 0; f4 != n4; ++f4, ++f1234) {
//                     const auto bf4 = f4 + bf4_first;
//                     size_t location = this->idx8(bf1, bf2, bf3, bf4);
//                     output_vec(location) = buf_1234[f1234];
//                   }
//                 }
//               }
//             }
//           }
//         }
//       }
//     }
//   }
// }

void POLYQUANT_INTEGRAL::symmetric_orthogonalization() {
  Polyquant_cout("Calculating Symmetric Orthogonalization Matrix...");
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  auto quantum_part_idx = 0ul;
  for (auto const &[quantum_part_key, quantum_part] :
       this->input_molecule.quantum_particles) {
    if (this->orth_X[quantum_part_idx].cols() == 0 &&
        this->orth_X[quantum_part_idx].rows() == 0) {
      auto num_basis = this->input_basis.num_basis[quantum_part_idx];
      this->orth_X[quantum_part_idx].resize(num_basis, num_basis);
      Eigen::Matrix<double, Eigen::Dynamic, 1> s;
      Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> L;
      Eigen::SelfAdjointEigenSolver<
          Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>>
          eigensolver(this->overlap[quantum_part_idx]);
      if (eigensolver.info() != Eigen::Success)
        (APP_ABORT("Error diagonalizing overlap matrix for symmetric "
                   "orthogonalization."));
      s = eigensolver.eigenvalues();
      L = eigensolver.eigenvectors();
      s = s.array().rsqrt();
      this->orth_X[quantum_part_idx] = s.asDiagonal();
      this->orth_X[quantum_part_idx] =
          L * this->orth_X[quantum_part_idx] * L.transpose();
    }
    quantum_part_idx++;
  }
}
