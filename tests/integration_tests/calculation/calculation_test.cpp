#include "basis/basis.hpp"
#include "calculation/calculation.hpp"
#include "integral/integral.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

using namespace polyquant;
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
