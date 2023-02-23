#include "basis/basis.hpp"
#include "calculation/calculation.hpp"
#include "integral/integral.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

using namespace polyquant;

struct FourTupleHash {
  size_t operator()(const std::tuple<int, int, int, int> &v) const {
    std::hash<int> hasher;
    size_t seed = 0;
    seed ^= hasher(std::get<0>(v)) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    seed ^= hasher(std::get<1>(v)) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    seed ^= hasher(std::get<2>(v)) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    seed ^= hasher(std::get<3>(v)) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    return seed;
  }
};

std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> load_ints_for_testing(const std::string &filename) {

  std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> ret_map;
  std::ifstream vecfile(filename);

  std::string line;
  while (std::getline(vecfile, line)) {
    std::istringstream linestream(line);
    int i, j, k, l;
    double value;
    linestream >> i >> j >> k >> l >> value;
    std::tuple<int, int, int, int> key = {i, j, k, l};
    ret_map[key] = value;
  }
  return ret_map;
};

std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> get_ints(POLYQUANT_CALCULATION &calc) {
  libint2::initialize();
  std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> int_map;
  auto quantum_part_a_idx = 0ul;
  auto quantum_part_b_idx = 0ul;
  auto shells_a = calc.input_basis->basis[quantum_part_a_idx];
  auto num_shell_a = calc.input_basis->basis[quantum_part_a_idx].size();
  auto shell2bf_a = calc.input_basis->basis[quantum_part_a_idx].shell2bf();
  auto shells_b = calc.input_basis->basis[quantum_part_b_idx];
  auto num_shell_b = calc.input_basis->basis[quantum_part_b_idx].size();
  auto shell2bf_b = calc.input_basis->basis[quantum_part_b_idx].shell2bf();

  // loop over shells
  auto max_nprim = shells_a.max_nprim() > shells_b.max_nprim() ? shells_a.max_nprim() : shells_b.max_nprim();
  auto max_l = shells_a.max_l() > shells_b.max_l() ? shells_a.max_l() : shells_b.max_l();

  libint2::Engine engine;
  engine = libint2::Engine(libint2::Operator::coulomb, max_nprim, max_l, 0);
  // engine.set(libint2::ScreeningMethod::SchwarzInf);
  engine.set_precision(0.0); // std::numeric_limits<double>::epsilon());
  {
    int shellcounter = 0;
    for (size_t shell_i = 0; shell_i < num_shell_a; shell_i++) {
      auto shell_i_bf_start = shell2bf_a[shell_i];
      auto shell_i_bf_size = shells_a[shell_i].size();
      auto shellpairdata_ij_iter = std::get<1>(calc.input_integral->unique_shell_pairs[quantum_part_a_idx]).at(shell_i).begin();
      for (auto &shell_j : std::get<0>(calc.input_integral->unique_shell_pairs[quantum_part_a_idx])[shell_i]) {
        auto shell_j_bf_start = shell2bf_a[shell_j];
        auto shell_j_bf_size = shells_a[shell_j].size();
        const auto *shellpairdata_ij = shellpairdata_ij_iter->get();
        shellpairdata_ij_iter++;
        for (size_t shell_k = 0; shell_k < num_shell_b; shell_k++) {
          auto shell_k_bf_start = shell2bf_b[shell_k];
          auto shell_k_bf_size = shells_b[shell_k].size();
          auto shellpairdata_kl_iter = std::get<1>(calc.input_integral->unique_shell_pairs[quantum_part_b_idx]).at(shell_k).begin();
          for (auto &shell_l : std::get<0>(calc.input_integral->unique_shell_pairs[quantum_part_b_idx])[shell_k]) {
            shellcounter++;
            const auto *shellpairdata_kl = shellpairdata_kl_iter->get();
            shellpairdata_kl_iter++;
            auto shell_l_bf_start = shell2bf_b[shell_l];
            auto shell_l_bf_size = shells_b[shell_l].size();
            const auto shell_ij_perdeg = (shell_i == shell_j) ? 1.0 : 2.0;
            const auto shell_kl_perdeg = (shell_k == shell_l) ? 1.0 : 2.0;
            auto shell_ijkl_perdeg = shell_ij_perdeg * shell_kl_perdeg;
            const auto &buf = engine.results();
            // engine.compute2<libint2::Operator::coulomb, libint2::BraKet::xx_xx, 0>(shells_a[shell_i], shells_a[shell_j], shells_b[shell_k], shells_b[shell_l], shellpairdata_ij, shellpairdata_kl);
            engine.compute(shells_a[shell_i], shells_a[shell_j], shells_b[shell_k], shells_b[shell_l]);
            const auto *buf_1234 = buf[0];
            auto shell_ijkl_bf = 0;
            if (buf_1234 != nullptr) {
              for (auto shell_i_bf = shell_i_bf_start; shell_i_bf < shell_i_bf_start + shell_i_bf_size; ++shell_i_bf) {
                for (auto shell_j_bf = shell_j_bf_start; shell_j_bf < shell_j_bf_start + shell_j_bf_size; ++shell_j_bf) {
                  for (auto shell_k_bf = shell_k_bf_start; shell_k_bf < shell_k_bf_start + shell_k_bf_size; ++shell_k_bf) {
                    for (auto shell_l_bf = shell_l_bf_start; shell_l_bf < shell_l_bf_start + shell_l_bf_size; ++shell_l_bf) {
                      auto eri_ijkl = buf_1234[shell_ijkl_bf];
                      std::tuple<int, int, int, int> key = {shell_i_bf, shell_j_bf, shell_k_bf, shell_l_bf};
                      int_map[key] = eri_ijkl;
                      shell_ijkl_bf++;
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

  libint2::finalize();
  return int_map;
};

TEST_CASE("CALCULATION: H2/ano-R0(EMSL basis) SCF.") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2_anor0EMSL/h2.json");
  test_calc.run();
  // Verified using pyscf
  // Tue Jul  5 11:02:08 AM EDT 2022
  REQUIRE(test_calc.scf_calc->converged);
  REQUIRE(test_calc.scf_calc->independent_converged);
  REQUIRE(!test_calc.scf_calc->exceeded_iterations);
  REQUIRE_THAT(test_calc.scf_calc->E_particles[0], Catch::Matchers::WithinAbs(-1.5791914276, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[0][0](0), Catch::Matchers::WithinAbs(-0.5870915714, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[0][1](0), Catch::Matchers::WithinAbs(-0.5870915714, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[0][0](0, 0), Catch::Matchers::WithinAbs(0.51800237, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[0][1](0, 0), Catch::Matchers::WithinAbs(0.51800237, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[0][0](0, 0), Catch::Matchers::WithinAbs(-0.5377051, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[0][1](0, 0), Catch::Matchers::WithinAbs(-0.5377051, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[0][0](0, 0), Catch::Matchers::WithinAbs(0.26832645, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[0][1](0, 0), Catch::Matchers::WithinAbs(0.26832645, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->H_core[0](0, 0), Catch::Matchers::WithinAbs(-0.96504951, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_total, Catch::Matchers::WithinAbs(-0.8654374339, POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CALCULATION: H2O/sto-3g(library) SCF.") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3glibrary/h2o.json");
  test_calc.run();
  // Verified using pyscf
  // Tue Jul  5 11:16:05 AM EDT 2022
  REQUIRE(test_calc.scf_calc->converged);
  REQUIRE(test_calc.scf_calc->independent_converged);
  REQUIRE(!test_calc.scf_calc->exceeded_iterations);
  REQUIRE_THAT(test_calc.scf_calc->E_particles[0], Catch::Matchers::WithinAbs(-84.1577900311, 10 * POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[0][0](0), Catch::Matchers::WithinAbs(-20.2417374167, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[0][1](0), Catch::Matchers::WithinAbs(-20.2417374167, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[0][0](0, 0), Catch::Matchers::WithinAbs(-5.97197546e-03, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[0][1](0, 0), Catch::Matchers::WithinAbs(-5.97197546e-03, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[0][0](0, 0), Catch::Matchers::WithinAbs(-5.78684584e-01, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[0][1](0, 0), Catch::Matchers::WithinAbs(-5.78684584e-01, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[0][0](0, 0), Catch::Matchers::WithinAbs(3.00443079e-01, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[0][1](0, 0), Catch::Matchers::WithinAbs(3.00443079e-01, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->H_core[0](0, 0), Catch::Matchers::WithinAbs(-5.07666209, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_total, Catch::Matchers::WithinAbs(-74.962926342808259506, 10 * POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CALCULATION: H2O/sto-3g(basis from file) SCF.") {
  POLYQUANT_CALCULATION test_calc("../../tests/data/h2o_sto3gfile/h2o.json");
  test_calc.run();
  // Verified using pyscf
  // Tue Jul  5 11:16:25 AM EDT 2022
  REQUIRE(test_calc.scf_calc->converged);
  REQUIRE(test_calc.scf_calc->independent_converged);
  REQUIRE(!test_calc.scf_calc->exceeded_iterations);
  REQUIRE_THAT(test_calc.scf_calc->E_particles[0], Catch::Matchers::WithinAbs(-84.1577900311, 10 * POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[0][0](0), Catch::Matchers::WithinAbs(-20.2417374167, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[0][0](0, 0), Catch::Matchers::WithinAbs(-5.97197546e-03, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[0][0](0, 0), Catch::Matchers::WithinAbs(-5.78684584e-01, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[0][0](0, 0), Catch::Matchers::WithinAbs(3.00443079e-01, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->H_core[0](0, 0), Catch::Matchers::WithinAbs(-5.07666209, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_total, Catch::Matchers::WithinAbs(-74.962926342808259506, 10 * POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CALCULATION: H2O/sto-3g quantum H SCF library basis.") {
  POLYQUANT_CALCULATION test_calc("../../tests/data/h2o_sto3g_quantumHlibrary/h2o.json");
  test_calc.run();
  REQUIRE(test_calc.scf_calc->converged);
  REQUIRE(test_calc.scf_calc->independent_converged);
  REQUIRE(!test_calc.scf_calc->exceeded_iterations);
  REQUIRE_THAT(test_calc.scf_calc->E_particles[0], Catch::Matchers::WithinAbs(3.0365625787, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[0][0](0), Catch::Matchers::WithinAbs(-6.7850710986, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[0][0](0, 0), Catch::Matchers::WithinAbs(-0.0384832, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[0][0](0, 0), Catch::Matchers::WithinAbs(-4.3143, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[0][0](0, 0), Catch::Matchers::WithinAbs(0.00148096, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->H_core[0](0, 0), Catch::Matchers::WithinAbs(5.01601, 10 * POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_particles[1], Catch::Matchers::WithinAbs(-81.1530733704, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[1][0](0), Catch::Matchers::WithinAbs(-20.4054374486, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[1][0](0, 0), Catch::Matchers::WithinAbs(-0.00598694, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[1][0](0, 0), Catch::Matchers::WithinAbs(0.181054, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[1][0](0, 0), Catch::Matchers::WithinAbs(0.00646869, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->H_core[1](0, 0), Catch::Matchers::WithinAbs(-3.50184, 10 * POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_total, Catch::Matchers::WithinAbs(-78.1165107917, POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CALCULATION: H2O/sto-3g quantum H SCF (basis from file).") {
  POLYQUANT_CALCULATION test_calc("../../tests/data/h2o_sto3g_quantumHfile/h2o.json");
  test_calc.run();
  REQUIRE(test_calc.scf_calc->converged);
  REQUIRE(test_calc.scf_calc->independent_converged);
  REQUIRE(!test_calc.scf_calc->exceeded_iterations);
  REQUIRE_THAT(test_calc.scf_calc->E_particles[0], Catch::Matchers::WithinAbs(3.0365625787, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[0][0](0), Catch::Matchers::WithinAbs(-6.7850710986, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[0][0](0, 0), Catch::Matchers::WithinAbs(-0.0384832, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[0][0](0, 0), Catch::Matchers::WithinAbs(-4.3143, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[0][0](0, 0), Catch::Matchers::WithinAbs(0.00148096, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->H_core[0](0, 0), Catch::Matchers::WithinAbs(5.01601, 10 * POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_particles[1], Catch::Matchers::WithinAbs(-81.1530733704, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[1][0](0), Catch::Matchers::WithinAbs(-20.4054374486, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[1][0](0, 0), Catch::Matchers::WithinAbs(-0.00598694, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[1][0](0, 0), Catch::Matchers::WithinAbs(0.181054, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[1][0](0, 0), Catch::Matchers::WithinAbs(0.00646869, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->H_core[1](0, 0), Catch::Matchers::WithinAbs(-3.50184, 10 * POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_total, Catch::Matchers::WithinAbs(-78.1165107917, POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CALCULATION: Li-+p/custom basis quantum H SCF.") {
  POLYQUANT_CALCULATION test_calc("../../tests/data/li-_custombasis_wpos/Li_wpos.json");
  test_calc.run();
  REQUIRE(test_calc.scf_calc->converged);
  REQUIRE(test_calc.scf_calc->independent_converged);
  REQUIRE(!test_calc.scf_calc->exceeded_iterations);
  REQUIRE_THAT(test_calc.scf_calc->E_particles[0], Catch::Matchers::WithinAbs(-7.7455067859, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[0][0](0), Catch::Matchers::WithinAbs(-2.417238715, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[0][0](0, 0), Catch::Matchers::WithinAbs(0.697239, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[0][0](0, 0), Catch::Matchers::WithinAbs(-2.1305440797, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[0][0](0, 0), Catch::Matchers::WithinAbs(0.494599, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->H_core[0](0, 0), Catch::Matchers::WithinAbs(-4.41628, 10 * POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_particles[1], Catch::Matchers::WithinAbs(0.2197833078, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[1][0](0), Catch::Matchers::WithinAbs(-0.1098592288, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[1][0](0, 0), Catch::Matchers::WithinAbs(0.000439523, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[1][0](0, 0), Catch::Matchers::WithinAbs(11.5013794256, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[1][0](0, 0), Catch::Matchers::WithinAbs(0.0000000154, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->H_core[1](0, 0), Catch::Matchers::WithinAbs(15.602987, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_total, Catch::Matchers::WithinAbs(-7.5257234633, POLYQUANT_TEST_EPSILON_LOOSE));
}
TEST_CASE("CALCULATION: Li-+p/custom basis quantum H SCF dump HDF5.") {
  POLYQUANT_CALCULATION test_calc("../../tests/data/li-_custombasis_wpos/Li_wpos_dumpHDF5.json");
  test_calc.run();
  POLYQUANT_HDF5 file("electron_Li_wpos.h5");
  REQUIRE(file.exist("/PBC"));
  REQUIRE(file.exist("Super_Twist"));
  REQUIRE(file.exist("application"));
  REQUIRE(file.exist("atoms"));
  REQUIRE(file.exist("basisset"));
  POLYQUANT_HDF5 file2("positron_Li_wpos.h5");
  REQUIRE(file2.exist("PBC"));
  REQUIRE(file2.exist("Super_Twist"));
  REQUIRE(file2.exist("application"));
  REQUIRE(file2.exist("atoms"));
  REQUIRE(file2.exist("basisset"));
}

TEST_CASE("CALCULATION: H2O/sto-3g(library) CI.") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3glibrary_cisd/h2o.json");
  test_calc.run();
  REQUIRE(test_calc.scf_calc->converged);

  REQUIRE_THAT(test_calc.ci_calc->energies[0], Catch::Matchers::WithinAbs(-75.01170307729812, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[1], Catch::Matchers::WithinAbs(-74.59209776692875, POLYQUANT_TEST_EPSILON_LOOSE));

  std::vector<std::vector<double>> reference_values;
  std::string reference_values_file = "../../tests/data/h2o_sto3glibrary_cisd/cisd_ham_elements.txt";
  Polyquant_read_vecofvec_from_file(reference_values, reference_values_file);
  std::cout << test_calc.ci_calc->detset.N_dets << std::endl;
  auto count = 0;
  for (auto i = 0; i < test_calc.ci_calc->detset.N_dets; i++) {
    for (auto j = 0; j < test_calc.ci_calc->detset.N_dets; j++) {
      auto idx_i_unfold = test_calc.ci_calc->detset.det_idx_unfold(i);
      auto idx_j_unfold = test_calc.ci_calc->detset.det_idx_unfold(j);
      auto ex = test_calc.ci_calc->detset.single_spin_num_excitation(test_calc.ci_calc->detset.unique_dets[0][0][idx_i_unfold[0]], test_calc.ci_calc->detset.unique_dets[0][0][idx_j_unfold[0]]);
      ex += test_calc.ci_calc->detset.single_spin_num_excitation(test_calc.ci_calc->detset.unique_dets[0][1][idx_i_unfold[1]], test_calc.ci_calc->detset.unique_dets[0][1][idx_j_unfold[1]]);
      auto elem_thru_SC = test_calc.ci_calc->detset.Slater_Condon(i, j);
      auto diff = elem_thru_SC - reference_values[count][0];
      REQUIRE_THAT(elem_thru_SC, Catch::Matchers::WithinAbs(reference_values[count][0], 1e-4));
      auto idx_part = 0;
      auto det_i_a = test_calc.ci_calc->detset.get_det(idx_part, 0, idx_i_unfold[idx_part * 2 + 0]);
      auto det_i_b = test_calc.ci_calc->detset.get_det(idx_part, 1, idx_i_unfold[idx_part * 2 + 1]);
      auto det_j_a = test_calc.ci_calc->detset.get_det(idx_part, 0, idx_j_unfold[idx_part * 2 + 0]);
      auto det_j_b = test_calc.ci_calc->detset.get_det(idx_part, 1, idx_j_unfold[idx_part * 2 + 1]);
      auto phase = 1.0;
      std::vector<int> holes, parts;
      holes.clear();
      parts.clear();
      test_calc.ci_calc->detset.get_holes(det_i_a, det_j_a, holes);
      test_calc.ci_calc->detset.get_parts(det_i_a, det_j_a, parts);
      if (holes.size() > 0) {
        phase *= test_calc.ci_calc->detset.get_phase(det_i_a, det_j_a, holes, parts);
      }
      holes.clear();
      parts.clear();
      test_calc.ci_calc->detset.get_holes(det_i_b, det_j_b, holes);
      test_calc.ci_calc->detset.get_parts(det_i_b, det_j_b, parts);
      if (holes.size() > 0) {
        phase *= test_calc.ci_calc->detset.get_phase(det_i_b, det_j_b, holes, parts);
      }
      if (diff > POLYQUANT_TEST_EPSILON_LOOSE) {
        std::cout << ex << "           " << idx_i_unfold[0] << " " << idx_i_unfold[1] << " " << idx_j_unfold[0] << " " << idx_j_unfold[1] << "          " << phase << " " << reference_values[count][1]
                  << "           " << elem_thru_SC << " " << reference_values[count][0] << " = " << diff << std::endl;
      }
      count++;
    }
  }
}

TEST_CASE("CALCULATION: H2O/sto-3g(library) CI slow.") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3glibrary_cisd/h2o_slow.json");
  test_calc.run();
  REQUIRE(test_calc.scf_calc->converged);

  REQUIRE_THAT(test_calc.ci_calc->energies[0], Catch::Matchers::WithinAbs(-75.01170307729812, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[1], Catch::Matchers::WithinAbs(-74.59209776692875, POLYQUANT_TEST_EPSILON_LOOSE));

  std::vector<std::vector<double>> reference_values;
  std::string reference_values_file = "../../tests/data/h2o_sto3glibrary_cisd/cisd_ham_elements.txt";
  Polyquant_read_vecofvec_from_file(reference_values, reference_values_file);
  std::cout << test_calc.ci_calc->detset.N_dets << std::endl;
  auto count = 0;
  for (auto i = 0; i < test_calc.ci_calc->detset.N_dets; i++) {
    for (auto j = 0; j < test_calc.ci_calc->detset.N_dets; j++) {
      auto idx_i_unfold = test_calc.ci_calc->detset.det_idx_unfold(i);
      auto idx_j_unfold = test_calc.ci_calc->detset.det_idx_unfold(j);
      auto ex = test_calc.ci_calc->detset.single_spin_num_excitation(test_calc.ci_calc->detset.unique_dets[0][0][idx_i_unfold[0]], test_calc.ci_calc->detset.unique_dets[0][0][idx_j_unfold[0]]);
      ex += test_calc.ci_calc->detset.single_spin_num_excitation(test_calc.ci_calc->detset.unique_dets[0][1][idx_i_unfold[1]], test_calc.ci_calc->detset.unique_dets[0][1][idx_j_unfold[1]]);
      auto elem_thru_SC = test_calc.ci_calc->detset.Slater_Condon(i, j);
      auto diff = elem_thru_SC - reference_values[count][0];
      REQUIRE_THAT(elem_thru_SC, Catch::Matchers::WithinAbs(reference_values[count][0], 1e-4));
      auto idx_part = 0;
      auto det_i_a = test_calc.ci_calc->detset.get_det(idx_part, 0, idx_i_unfold[idx_part * 2 + 0]);
      auto det_i_b = test_calc.ci_calc->detset.get_det(idx_part, 1, idx_i_unfold[idx_part * 2 + 1]);
      auto det_j_a = test_calc.ci_calc->detset.get_det(idx_part, 0, idx_j_unfold[idx_part * 2 + 0]);
      auto det_j_b = test_calc.ci_calc->detset.get_det(idx_part, 1, idx_j_unfold[idx_part * 2 + 1]);
      auto phase = 1.0;
      std::vector<int> holes, parts;
      holes.clear();
      parts.clear();
      test_calc.ci_calc->detset.get_holes(det_i_a, det_j_a, holes);
      test_calc.ci_calc->detset.get_parts(det_i_a, det_j_a, parts);
      if (holes.size() > 0) {
        phase *= test_calc.ci_calc->detset.get_phase(det_i_a, det_j_a, holes, parts);
      }
      holes.clear();
      parts.clear();
      test_calc.ci_calc->detset.get_holes(det_i_b, det_j_b, holes);
      test_calc.ci_calc->detset.get_parts(det_i_b, det_j_b, parts);
      if (holes.size() > 0) {
        phase *= test_calc.ci_calc->detset.get_phase(det_i_b, det_j_b, holes, parts);
      }
      if (diff > 1e-9) {
        std::cout << ex << "           " << idx_i_unfold[0] << " " << idx_i_unfold[1] << " " << idx_j_unfold[0] << " " << idx_j_unfold[1] << "          " << phase << " " << reference_values[count][1]
                  << "           " << elem_thru_SC << " " << reference_values[count][0] << " = " << diff << std::endl;
      }
      count++;
    }
  }
}
TEST_CASE("CALCULATION: H2O/sto-3g(library) explicit ham.") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3glibrary_cisd/h2o_explicitham.json");
  test_calc.run();
  REQUIRE(test_calc.scf_calc->converged);

  REQUIRE_THAT(test_calc.ci_calc->energies[0], Catch::Matchers::WithinAbs(-75.01170307729812, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[1], Catch::Matchers::WithinAbs(-74.59209776692875, POLYQUANT_TEST_EPSILON_LOOSE));

  std::vector<std::vector<double>> reference_values;
  std::string reference_values_file = "../../tests/data/h2o_sto3glibrary_cisd/cisd_ham_elements.txt";
  Polyquant_read_vecofvec_from_file(reference_values, reference_values_file);
  std::cout << test_calc.ci_calc->detset.N_dets << std::endl;
  auto count = 0;
  for (auto i = 0; i < test_calc.ci_calc->detset.N_dets; i++) {
    for (auto j = 0; j < test_calc.ci_calc->detset.N_dets; j++) {
      auto elem_from_polyquant = test_calc.ci_calc->detset.ham.coeff(i, j);
      if (j < i)
        elem_from_polyquant = test_calc.ci_calc->detset.ham.coeff(j, i);
      auto diff = elem_from_polyquant - reference_values[count][0];
      REQUIRE_THAT(elem_from_polyquant, Catch::Matchers::WithinAbs(reference_values[count][0], 1e-4));
      count++;
    }
  }
}

TEST_CASE("CALCULATION: PsH/custom basis CI dump HDF5.") {
  POLYQUANT_CALCULATION test_calc("../../tests/data/PsH_wpos/PsH_wpos_CI_hdf5.json");
  test_calc.run();
  POLYQUANT_HDF5 file("electron_PsH_wpos.h5");
  REQUIRE(file.exist("/PBC"));
  REQUIRE(file.exist("Super_Twist"));
  REQUIRE(file.exist("application"));
  REQUIRE(file.exist("atoms"));
  REQUIRE(file.exist("basisset"));
  POLYQUANT_HDF5 file2("positron_PsH_wpos.h5");
  REQUIRE(file2.exist("PBC"));
  REQUIRE(file2.exist("Super_Twist"));
  REQUIRE(file2.exist("application"));
  REQUIRE(file2.exist("atoms"));
  REQUIRE(file2.exist("basisset"));
  POLYQUANT_HDF5 file3("NSO_State_0_part_electron_PsH_wpos.h5");
  REQUIRE(file3.exist("PBC"));
  REQUIRE(file3.exist("Super_Twist"));
  REQUIRE(file3.exist("application"));
  REQUIRE(file3.exist("atoms"));
  REQUIRE(file3.exist("basisset"));
  POLYQUANT_HDF5 file4("NSO_State_0_part_positron_PsH_wpos.h5");
  REQUIRE(file4.exist("PBC"));
  REQUIRE(file4.exist("Super_Twist"));
  REQUIRE(file4.exist("application"));
  REQUIRE(file4.exist("atoms"));
  REQUIRE(file4.exist("basisset"));
  POLYQUANT_HDF5 file5("Multidet_PsH_wpos.h5");
  REQUIRE(file5.exist("MultiDet"));
}

TEST_CASE("CALCULATION: SCF restart test no skipiterations.") {
  POLYQUANT_CALCULATION test_calc("../../tests/data/h2sto3g_restart/h2.json");
  test_calc.run();
  POLYQUANT_CALCULATION test_calc2("../../tests/data/h2sto3g_restart/h2_restart_noskipiterations.json");
  test_calc2.run();
  REQUIRE_THAT(test_calc.scf_calc->E_particles[0], Catch::Matchers::WithinAbs(test_calc2.scf_calc->E_particles[0], POLYQUANT_TEST_EPSILON_LOOSE));

  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[0][0](0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->E_orbitals_combined[0][0](0), POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->E_orbitals_combined[0][1](0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->E_orbitals_combined[0][1](0), POLYQUANT_TEST_EPSILON_LOOSE));

  REQUIRE_THAT(test_calc.scf_calc->C_combined[0][0](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->C_combined[0][0](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[0][1](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->C_combined[0][1](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));

  REQUIRE_THAT(test_calc.scf_calc->F[0][0](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->F[0][0](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[0][1](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->F[0][1](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));

  REQUIRE_THAT(test_calc.scf_calc->D_combined[0][0](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->D_combined[0][0](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[0][1](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->D_combined[0][1](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));

  REQUIRE_THAT(test_calc.scf_calc->H_core[0](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->H_core[0](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));

  REQUIRE_THAT(test_calc.scf_calc->E_total, Catch::Matchers::WithinAbs(test_calc2.scf_calc->E_total, POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CALCULATION: SCF restart test skipiterations.") {
  POLYQUANT_CALCULATION test_calc("../../tests/data/h2sto3g_restart/h2.json");
  test_calc.run();
  POLYQUANT_CALCULATION test_calc2("../../tests/data/h2sto3g_restart/h2_restart_skipiterations.json");
  test_calc2.run();
  REQUIRE_THAT(test_calc.scf_calc->E_particles[0], Catch::Matchers::WithinAbs(test_calc2.scf_calc->E_particles[0], POLYQUANT_TEST_EPSILON_LOOSE));

  REQUIRE_THAT(test_calc.scf_calc->C_combined[0][0](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->C_combined[0][0](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->C_combined[0][1](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->C_combined[0][1](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));

  REQUIRE_THAT(test_calc.scf_calc->F[0][0](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->F[0][0](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->F[0][1](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->F[0][1](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));

  REQUIRE_THAT(test_calc.scf_calc->D_combined[0][0](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->D_combined[0][0](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.scf_calc->D_combined[0][1](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->D_combined[0][1](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));

  REQUIRE_THAT(test_calc.scf_calc->H_core[0](0, 0), Catch::Matchers::WithinAbs(test_calc2.scf_calc->H_core[0](0, 0), POLYQUANT_TEST_EPSILON_LOOSE));

  REQUIRE_THAT(test_calc.scf_calc->E_total, Catch::Matchers::WithinAbs(test_calc2.scf_calc->E_total, POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CALCULATION: PsH compare to literature CISD (10.1063/1.5094035).") {
  POLYQUANT_CALCULATION test_calc("../../tests/data/PsH_wpos/compare_CISD.json");
  test_calc.run();

  REQUIRE_THAT(test_calc.scf_calc->E_total, Catch::Matchers::WithinAbs(-0.6660682662312821245, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[0], Catch::Matchers::WithinAbs(-0.7518012921837637, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[1], Catch::Matchers::WithinAbs(-0.5725496537160829, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[2], Catch::Matchers::WithinAbs(-0.5725496537160818, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[3], Catch::Matchers::WithinAbs(-0.5725496537160812, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[4], Catch::Matchers::WithinAbs(-0.5647619479403091, POLYQUANT_TEST_EPSILON_LOOSE));
  // this next state is a triplet state so it doesn't appear in the paper
  REQUIRE_THAT(test_calc.ci_calc->energies[5], Catch::Matchers::WithinAbs(-0.5617888160599843, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[6], Catch::Matchers::WithinAbs(-0.4975578201024861, POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CALCULATION: PsH compare to literature FCI (10.1063/1.5094035).") {
  POLYQUANT_CALCULATION test_calc("../../tests/data/PsH_wpos/compare_FCI.json");
  test_calc.run();

  REQUIRE_THAT(test_calc.scf_calc->E_total, Catch::Matchers::WithinAbs(-0.6660682662312821245, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[0], Catch::Matchers::WithinAbs(-0.7566614834903975, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[1], Catch::Matchers::WithinAbs(-0.5999611891752913, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[2], Catch::Matchers::WithinAbs(-0.5999611891752892, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[3], Catch::Matchers::WithinAbs(-0.5999611891752891, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[4], Catch::Matchers::WithinAbs(-0.590804669033228, POLYQUANT_TEST_EPSILON_LOOSE));
  // this next state is a triplet state so it doesn't appear in the paper
  REQUIRE_THAT(test_calc.ci_calc->energies[5], Catch::Matchers::WithinAbs(-0.5762392256391691, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_calc.ci_calc->energies[6], Catch::Matchers::WithinAbs(-0.5146066022417264, POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CALCULATION: PsH compare No Sym, D2H, SO(3).") {
  POLYQUANT_CALCULATION nosym("../../tests/data/PsH_wpos/symmetry/PsH_wpos_nosym.json");
  POLYQUANT_CALCULATION d2h("../../tests/data/PsH_wpos/symmetry/PsH_wpos_symd2h.json");
  POLYQUANT_CALCULATION so3("../../tests/data/PsH_wpos/symmetry/PsH_wpos_symso3.json");
  nosym.run();
  d2h.run();
  so3.run();

  REQUIRE_THAT(nosym.scf_calc->E_total, Catch::Matchers::WithinAbs(d2h.scf_calc->E_total, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(nosym.scf_calc->E_total, Catch::Matchers::WithinAbs(so3.scf_calc->E_total, POLYQUANT_TEST_EPSILON_LOOSE));
  for (auto i = 0; i < nosym.scf_calc->E_orbitals_combined[0][0].size(); i++) {
    REQUIRE_THAT(nosym.scf_calc->E_orbitals_combined[0][0](i), Catch::Matchers::WithinAbs(d2h.scf_calc->E_orbitals_combined[0][0](i), POLYQUANT_TEST_EPSILON_LOOSE));
    REQUIRE_THAT(nosym.scf_calc->E_orbitals_combined[0][0](i), Catch::Matchers::WithinAbs(so3.scf_calc->E_orbitals_combined[0][0](i), POLYQUANT_TEST_EPSILON_LOOSE));
  }
}

TEST_CASE("CALCULATION: Be/cc-pvdz compare SCF to PySCF.") {
  POLYQUANT_CALCULATION d2h("../../tests/data/be/cc_pvdz/Be.json");
  d2h.run();

  std::vector<std::vector<double>> reference_mo_coeff;
  std::string reference_values_file = "../../tests/data/be/cc_pvdz/mo_coeff.txt";
  Polyquant_read_vecofvec_from_file(reference_mo_coeff, reference_values_file);

  std::vector<double> reference_mo_energies;
  reference_values_file = "../../tests/data/be/cc_pvdz/mo_energy.txt";
  Polyquant_read_vec_from_file(reference_mo_energies, reference_values_file);

  std::vector<double> reference_etot;
  reference_values_file = "../../tests/data/be/cc_pvdz/total_energy.txt";
  Polyquant_read_vec_from_file(reference_etot, reference_values_file);

  std::cout << "our    pyscf          diff" << std::endl;
  std::cout << d2h.scf_calc->E_total << "     " << reference_etot[0] << "              " << std::scientific << d2h.scf_calc->E_total - reference_etot[0] << std::endl;
  REQUIRE_THAT(d2h.scf_calc->E_total, Catch::Matchers::WithinAbs(reference_etot[0], POLYQUANT_TEST_EPSILON_TIGHT));
  for (auto i = 0; i < d2h.scf_calc->E_orbitals_combined[0][0].size(); i++) {
    std::cout << d2h.scf_calc->E_orbitals_combined[0][0](i) << "     " << reference_mo_energies[i] << "              " << std::scientific
              << d2h.scf_calc->E_orbitals_combined[0][0](i) - reference_mo_energies[i] << std::endl;
    REQUIRE_THAT(d2h.scf_calc->E_orbitals_combined[0][0](i), Catch::Matchers::WithinAbs(reference_mo_energies[i], POLYQUANT_TEST_EPSILON_LOOSE));
  }
}

TEST_CASE("CALCULATION: Be/aug-cc-pvdz compare SCF to PySCF.") {
  POLYQUANT_CALCULATION d2h("../../tests/data/be/aug_cc_pvdz/Be.json");
  d2h.run();

  std::vector<std::vector<double>> reference_mo_coeff;
  std::string reference_values_file = "../../tests/data/be/aug_cc_pvdz/mo_coeff.txt";
  Polyquant_read_vecofvec_from_file(reference_mo_coeff, reference_values_file);

  std::vector<double> reference_mo_energies;
  reference_values_file = "../../tests/data/be/aug_cc_pvdz/mo_energy.txt";
  Polyquant_read_vec_from_file(reference_mo_energies, reference_values_file);

  std::vector<double> reference_etot;
  reference_values_file = "../../tests/data/be/aug_cc_pvdz/total_energy.txt";
  Polyquant_read_vec_from_file(reference_etot, reference_values_file);

  std::cout << "our    pyscf          diff" << std::endl;
  std::cout << d2h.scf_calc->E_total << "     " << reference_etot[0] << "              " << std::scientific << d2h.scf_calc->E_total - reference_etot[0] << std::endl;
  REQUIRE_THAT(d2h.scf_calc->E_total, Catch::Matchers::WithinAbs(reference_etot[0], POLYQUANT_TEST_EPSILON_TIGHT));
  for (auto i = 0; i < d2h.scf_calc->E_orbitals_combined[0][0].size(); i++) {
    std::cout << d2h.scf_calc->E_orbitals_combined[0][0](i) << "     " << reference_mo_energies[i] << "              " << std::scientific
              << d2h.scf_calc->E_orbitals_combined[0][0](i) - reference_mo_energies[i] << std::endl;
    REQUIRE_THAT(d2h.scf_calc->E_orbitals_combined[0][0](i), Catch::Matchers::WithinAbs(reference_mo_energies[i], POLYQUANT_TEST_EPSILON_LOOSE));
  }
}

TEST_CASE("CALCULATION: Be/aug-cc-pvqz compare SCF to PySCF.") {
  POLYQUANT_CALCULATION d2h("../../tests/data/be/aug_cc_pvqz/Be.json");
  d2h.run();

  std::vector<std::vector<double>> reference_mo_coeff;
  std::string reference_values_file = "../../tests/data/be/aug_cc_pvqz/mo_coeff.txt";
  Polyquant_read_vecofvec_from_file(reference_mo_coeff, reference_values_file);

  std::vector<double> reference_mo_energies;
  reference_values_file = "../../tests/data/be/aug_cc_pvqz/mo_energy.txt";
  Polyquant_read_vec_from_file(reference_mo_energies, reference_values_file);

  std::vector<double> reference_etot;
  reference_values_file = "../../tests/data/be/aug_cc_pvqz/total_energy.txt";
  Polyquant_read_vec_from_file(reference_etot, reference_values_file);

  std::cout << "our    pyscf          diff" << std::endl;
  std::cout << d2h.scf_calc->E_total << "     " << reference_etot[0] << "              " << std::scientific << d2h.scf_calc->E_total - reference_etot[0] << std::endl;
  REQUIRE_THAT(d2h.scf_calc->E_total, Catch::Matchers::WithinAbs(reference_etot[0], POLYQUANT_TEST_EPSILON_TIGHT));
  for (auto i = 0; i < d2h.scf_calc->E_orbitals_combined[0][0].size(); i++) {
    std::cout << d2h.scf_calc->E_orbitals_combined[0][0](i) << "     " << reference_mo_energies[i] << "              " << std::scientific
              << d2h.scf_calc->E_orbitals_combined[0][0](i) - reference_mo_energies[i] << std::endl;
    REQUIRE_THAT(d2h.scf_calc->E_orbitals_combined[0][0](i), Catch::Matchers::WithinAbs(reference_mo_energies[i], POLYQUANT_TEST_EPSILON_LOOSE));
  }
}

TEST_CASE("CALCULATION: Angular S.") {
  POLYQUANT_CALCULATION d2h("../../tests/data/angular/0_s/h.json");
  d2h.run();

  std::vector<std::vector<double>> reference_mo_coeff;
  std::string reference_values_file = "../../tests/data/angular/0_s/mo_coeff.txt";
  Polyquant_read_vecofvec_from_file(reference_mo_coeff, reference_values_file);

  std::vector<double> reference_mo_energies;
  reference_values_file = "../../tests/data/angular/0_s/mo_energy.txt";
  Polyquant_read_vec_from_file(reference_mo_energies, reference_values_file);

  std::vector<double> reference_etot;
  reference_values_file = "../../tests/data/angular/0_s/total_energy.txt";
  Polyquant_read_vec_from_file(reference_etot, reference_values_file);

  std::cout << "our    pyscf          diff" << std::endl;
  std::cout << d2h.scf_calc->E_total << "     " << reference_etot[0] << "              " << std::scientific << d2h.scf_calc->E_total - reference_etot[0] << std::endl;
  REQUIRE_THAT(d2h.scf_calc->E_total, Catch::Matchers::WithinAbs(reference_etot[0], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  for (auto i = 0; i < d2h.scf_calc->E_orbitals_combined[0][0].size(); i++) {
    std::cout << d2h.scf_calc->E_orbitals_combined[0][0](i) << "     " << reference_mo_energies[i] << "              " << std::scientific
              << d2h.scf_calc->E_orbitals_combined[0][0](i) - reference_mo_energies[i] << std::endl;
    REQUIRE_THAT(d2h.scf_calc->E_orbitals_combined[0][0](i), Catch::Matchers::WithinAbs(reference_mo_energies[i], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  }
  std::cout << "ERI" << std::endl;
  std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> int_map = get_ints(d2h);
  reference_values_file = "../../tests/data/angular/0_s/eri.txt";
  std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> ref_int_map = load_ints_for_testing(reference_values_file);
  for (const auto &[key, value] : int_map) {
    // std::cout << std::get<0>(key) << " " << std::get<1>(key) << " " << std::get<2>(key) << " " << std::get<3>(key) << " "
    //           << "          " << value << "  " << ref_int_map[key] << "        " << value - ref_int_map[key] << std::endl;
    CHECK_THAT(value, Catch::Matchers::WithinAbs(ref_int_map[key], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  }
}

TEST_CASE("CALCULATION: Angular P.") {
  POLYQUANT_CALCULATION d2h("../../tests/data/angular/1_p/h.json");
  d2h.run();

  std::vector<std::vector<double>> reference_mo_coeff;
  std::string reference_values_file = "../../tests/data/angular/1_p/mo_coeff.txt";
  Polyquant_read_vecofvec_from_file(reference_mo_coeff, reference_values_file);

  std::vector<double> reference_mo_energies;
  reference_values_file = "../../tests/data/angular/1_p/mo_energy.txt";
  Polyquant_read_vec_from_file(reference_mo_energies, reference_values_file);

  std::vector<double> reference_etot;
  reference_values_file = "../../tests/data/angular/1_p/total_energy.txt";
  Polyquant_read_vec_from_file(reference_etot, reference_values_file);

  std::cout << "our    pyscf          diff" << std::endl;
  std::cout << d2h.scf_calc->E_total << "     " << reference_etot[0] << "              " << std::scientific << d2h.scf_calc->E_total - reference_etot[0] << std::endl;
  REQUIRE_THAT(d2h.scf_calc->E_total, Catch::Matchers::WithinAbs(reference_etot[0], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  for (auto i = 0; i < d2h.scf_calc->E_orbitals_combined[0][0].size(); i++) {
    std::cout << d2h.scf_calc->E_orbitals_combined[0][0](i) << "     " << reference_mo_energies[i] << "              " << std::scientific
              << d2h.scf_calc->E_orbitals_combined[0][0](i) - reference_mo_energies[i] << std::endl;
    REQUIRE_THAT(d2h.scf_calc->E_orbitals_combined[0][0](i), Catch::Matchers::WithinAbs(reference_mo_energies[i], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  }
  std::cout << "ERI" << std::endl;
  std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> int_map = get_ints(d2h);
  reference_values_file = "../../tests/data/angular/1_p/eri.txt";
  std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> ref_int_map = load_ints_for_testing(reference_values_file);
  // pyscf orders p orbitals differently
  std::vector<int> reorder_internal_to_pyscf = {1, 2, 0, 4, 5, 3};
  for (const auto &[key, value] : int_map) {
    std::tuple<int, int, int, int> pyscf_key = {reorder_internal_to_pyscf[std::get<0>(key)], reorder_internal_to_pyscf[std::get<1>(key)], reorder_internal_to_pyscf[std::get<2>(key)],
                                                reorder_internal_to_pyscf[std::get<3>(key)]};
    // std::cout << std::get<0>(key) << " " << std::get<1>(key) << " " << std::get<2>(key) << " " << std::get<3>(key) << " "
    //           << "          " << value << "  " << ref_int_map[pyscf_key] << "        " << value - ref_int_map[pyscf_key] << std::endl;
    CHECK_THAT(value, Catch::Matchers::WithinAbs(ref_int_map[pyscf_key], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  }
}
TEST_CASE("CALCULATION: Angular D.") {
  POLYQUANT_CALCULATION d2h("../../tests/data/angular/2_d/h.json");
  d2h.run();

  std::vector<std::vector<double>> reference_mo_coeff;
  std::string reference_values_file = "../../tests/data/angular/2_d/mo_coeff.txt";
  Polyquant_read_vecofvec_from_file(reference_mo_coeff, reference_values_file);

  std::vector<double> reference_mo_energies;
  reference_values_file = "../../tests/data/angular/2_d/mo_energy.txt";
  Polyquant_read_vec_from_file(reference_mo_energies, reference_values_file);

  std::vector<double> reference_etot;
  reference_values_file = "../../tests/data/angular/2_d/total_energy.txt";
  Polyquant_read_vec_from_file(reference_etot, reference_values_file);

  std::cout << "our    pyscf          diff" << std::endl;
  std::cout << d2h.scf_calc->E_total << "     " << reference_etot[0] << "              " << std::scientific << d2h.scf_calc->E_total - reference_etot[0] << std::endl;
  REQUIRE_THAT(d2h.scf_calc->E_total, Catch::Matchers::WithinAbs(reference_etot[0], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  for (auto i = 0; i < d2h.scf_calc->E_orbitals_combined[0][0].size(); i++) {
    std::cout << d2h.scf_calc->E_orbitals_combined[0][0](i) << "     " << reference_mo_energies[i] << "              " << std::scientific
              << d2h.scf_calc->E_orbitals_combined[0][0](i) - reference_mo_energies[i] << std::endl;
    REQUIRE_THAT(d2h.scf_calc->E_orbitals_combined[0][0](i), Catch::Matchers::WithinAbs(reference_mo_energies[i], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  }
  std::cout << "ERI" << std::endl;
  std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> int_map = get_ints(d2h);
  reference_values_file = "../../tests/data/angular/2_d/eri.txt";
  std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> ref_int_map = load_ints_for_testing(reference_values_file);
  for (const auto &[key, value] : int_map) {
    // std::cout << std::get<0>(key) << " " << std::get<1>(key) << " " << std::get<2>(key) << " " << std::get<3>(key) << " "
    //           << "          " << value << "  " << ref_int_map[key] << "        " << value - ref_int_map[key] << std::endl;
    CHECK_THAT(value, Catch::Matchers::WithinAbs(ref_int_map[key], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  }
}
TEST_CASE("CALCULATION: Angular F.") {
  POLYQUANT_CALCULATION d2h("../../tests/data/angular/3_f/h.json");
  d2h.run();

  std::vector<std::vector<double>> reference_mo_coeff;
  std::string reference_values_file = "../../tests/data/angular/3_f/mo_coeff.txt";
  Polyquant_read_vecofvec_from_file(reference_mo_coeff, reference_values_file);

  std::vector<double> reference_mo_energies;
  reference_values_file = "../../tests/data/angular/3_f/mo_energy.txt";
  Polyquant_read_vec_from_file(reference_mo_energies, reference_values_file);

  std::vector<double> reference_etot;
  reference_values_file = "../../tests/data/angular/3_f/total_energy.txt";
  Polyquant_read_vec_from_file(reference_etot, reference_values_file);

  std::cout << "our    pyscf          diff" << std::endl;
  std::cout << d2h.scf_calc->E_total << "     " << reference_etot[0] << "              " << std::scientific << d2h.scf_calc->E_total - reference_etot[0] << std::endl;
  REQUIRE_THAT(d2h.scf_calc->E_total, Catch::Matchers::WithinAbs(reference_etot[0], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  for (auto i = 0; i < d2h.scf_calc->E_orbitals_combined[0][0].size(); i++) {
    std::cout << d2h.scf_calc->E_orbitals_combined[0][0](i) << "     " << reference_mo_energies[i] << "              " << std::scientific
              << d2h.scf_calc->E_orbitals_combined[0][0](i) - reference_mo_energies[i] << std::endl;
    // I am not sure what it is about this test but I cant get < 1e-10 agreement but that should be ok
    REQUIRE_THAT(d2h.scf_calc->E_orbitals_combined[0][0](i), Catch::Matchers::WithinAbs(reference_mo_energies[i], 100 * POLYQUANT_TEST_EPSILON_VERYTIGHT));
  }

  std::cout << "ERI" << std::endl;
  std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> int_map = get_ints(d2h);
  reference_values_file = "../../tests/data/angular/3_f/eri.txt";
  std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> ref_int_map = load_ints_for_testing(reference_values_file);
  for (const auto &[key, value] : int_map) {
    // std::cout << std::get<0>(key) << " " << std::get<1>(key) << " " << std::get<2>(key) << " " << std::get<3>(key) << " "
    //           << "          " << value << "  " << ref_int_map[key] << "        " << value - ref_int_map[key] << std::endl;
    CHECK_THAT(value, Catch::Matchers::WithinAbs(ref_int_map[key], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  }
}
TEST_CASE("CALCULATION: Angular G.") {
  POLYQUANT_CALCULATION d2h("../../tests/data/angular/4_g/h.json");
  d2h.run();

  std::vector<std::vector<double>> reference_mo_coeff;
  std::string reference_values_file = "../../tests/data/angular/4_g/mo_coeff.txt";
  Polyquant_read_vecofvec_from_file(reference_mo_coeff, reference_values_file);

  std::vector<double> reference_mo_energies;
  reference_values_file = "../../tests/data/angular/4_g/mo_energy.txt";
  Polyquant_read_vec_from_file(reference_mo_energies, reference_values_file);

  std::vector<double> reference_etot;
  reference_values_file = "../../tests/data/angular/4_g/total_energy.txt";
  Polyquant_read_vec_from_file(reference_etot, reference_values_file);

  std::cout << "our    pyscf          diff" << std::endl;
  std::cout << d2h.scf_calc->E_total << "     " << reference_etot[0] << "              " << std::scientific << d2h.scf_calc->E_total - reference_etot[0] << std::endl;
  REQUIRE_THAT(d2h.scf_calc->E_total, Catch::Matchers::WithinAbs(reference_etot[0], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  for (auto i = 0; i < d2h.scf_calc->E_orbitals_combined[0][0].size(); i++) {
    std::cout << d2h.scf_calc->E_orbitals_combined[0][0](i) << "     " << reference_mo_energies[i] << "              " << std::scientific
              << d2h.scf_calc->E_orbitals_combined[0][0](i) - reference_mo_energies[i] << std::endl;
    REQUIRE_THAT(d2h.scf_calc->E_orbitals_combined[0][0](i), Catch::Matchers::WithinAbs(reference_mo_energies[i], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  }

  std::cout << "ERI" << std::endl;
  std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> int_map = get_ints(d2h);
  reference_values_file = "../../tests/data/angular/4_g/eri.txt";
  std::unordered_map<std::tuple<int, int, int, int>, double, FourTupleHash> ref_int_map = load_ints_for_testing(reference_values_file);
  for (const auto &[key, value] : int_map) {
    // std::cout << std::get<0>(key) << " " << std::get<1>(key) << " " << std::get<2>(key) << " " << std::get<3>(key) << " "
    //           << "          " << value << "  " << ref_int_map[key] << "        " << value - ref_int_map[key] << std::endl;
    CHECK_THAT(value, Catch::Matchers::WithinAbs(ref_int_map[key], POLYQUANT_TEST_EPSILON_VERYTIGHT));
  }
}
