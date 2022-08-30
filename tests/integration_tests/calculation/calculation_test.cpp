#include "basis/basis.hpp"
#include "calculation/calculation.hpp"
#include "integral/integral.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <doctest/doctest.h>
#include <h5cpp/hdf5.hpp>

using namespace polyquant;
TEST_SUITE("CALCULATION") {
  TEST_CASE("CALCULATION: H2/ano-R0(EMSL basis) SCF.") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2_anor0EMSL/h2.json");
    test_calc.run();
    // Verified using pyscf
    // Tue Jul  5 11:02:08 AM EDT 2022
    CHECK(test_calc.scf_calc.converged == true);
    CHECK(test_calc.scf_calc.independent_converged == true);
    CHECK(test_calc.scf_calc.exceeded_iterations == false);
    CHECK(test_calc.scf_calc.E_particles[0] == doctest::Approx(-1.5791914276).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][0](0) == doctest::Approx(-0.5870915714).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][1](0) == doctest::Approx(-0.5870915714).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.C[0][0](0, 0) == doctest::Approx(0.51800237).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.C[0][1](0, 0) == doctest::Approx(0.51800237).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][0](0, 0) == doctest::Approx(-0.5377051).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][1](0, 0) == doctest::Approx(-0.5377051).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][0](0, 0) == doctest::Approx(0.26832645).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][1](0, 0) == doctest::Approx(0.26832645).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[0](0, 0) == doctest::Approx(-0.96504951).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_total == doctest::Approx(-0.8654374339).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CALCULATION: H2O/sto-3g(library) SCF.") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3glibrary/h2o.json");
    test_calc.run();
    // Verified using pyscf
    // Tue Jul  5 11:16:05 AM EDT 2022
    CHECK(test_calc.scf_calc.converged == true);
    CHECK(test_calc.scf_calc.independent_converged == true);
    CHECK(test_calc.scf_calc.exceeded_iterations == false);
    CHECK(test_calc.scf_calc.E_particles[0] == doctest::Approx(-84.1577900311).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][0](0) == doctest::Approx(-20.2417374167).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][1](0) == doctest::Approx(-20.2417374167).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.C[0][0](0, 0) == doctest::Approx(-5.97197546e-03).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.C[0][1](0, 0) == doctest::Approx(-5.97197546e-03).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][0](0, 0) == doctest::Approx(-5.78684584e-01).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][1](0, 0) == doctest::Approx(-5.78684584e-01).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][0](0, 0) == doctest::Approx(3.00443079e-01).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][1](0, 0) == doctest::Approx(3.00443079e-01).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[0](0, 0) == doctest::Approx(-5.07666209).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_total == doctest::Approx(-74.962926342808259506).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CALCULATION: H2O/sto-3g(basis from file) SCF.") {
    POLYQUANT_CALCULATION test_calc("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    // Verified using pyscf
    // Tue Jul  5 11:16:25 AM EDT 2022
    CHECK(test_calc.scf_calc.converged == true);
    CHECK(test_calc.scf_calc.independent_converged == true);
    CHECK(test_calc.scf_calc.exceeded_iterations == false);
    CHECK(test_calc.scf_calc.E_particles[0] == doctest::Approx(-84.1577900311).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][0](0) == doctest::Approx(-20.2417374167).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.C[0][0](0, 0) == doctest::Approx(-5.97197546e-03).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][0](0, 0) == doctest::Approx(-5.78684584e-01).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][0](0, 0) == doctest::Approx(3.00443079e-01).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[0](0, 0) == doctest::Approx(-5.07666209).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_total == doctest::Approx(-74.962926342808259506).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CALCULATION: H2O/sto-3g quantum H SCF library basis.") {
    POLYQUANT_CALCULATION test_calc("../../tests/data/h2o_sto3g_quantumHlibrary/h2o.json");
    test_calc.run();
    CHECK(test_calc.scf_calc.converged == true);
    CHECK(test_calc.scf_calc.independent_converged == true);
    CHECK(test_calc.scf_calc.exceeded_iterations == false);
    CHECK(test_calc.scf_calc.E_particles[0] == doctest::Approx(3.0365625787).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][0](0) == doctest::Approx(-6.7850710986).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.C[0][0](0, 0) == doctest::Approx(-0.0384832).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][0](0, 0) == doctest::Approx(-4.3143).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][0](0, 0) == doctest::Approx(0.00148096).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[0](0, 0) == doctest::Approx(5.01601).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_particles[1] == doctest::Approx(-81.1530733704).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[1][0](0) == doctest::Approx(-20.4054374486).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.C[1][0](0, 0) == doctest::Approx(-0.00598694).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[1][0](0, 0) == doctest::Approx(0.181054).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[1][0](0, 0) == doctest::Approx(0.00646869).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[1](0, 0) == doctest::Approx(-3.50184).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_total == doctest::Approx(-78.1165107917).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CALCULATION: H2O/sto-3g quantum H SCF (basis from file).") {
    POLYQUANT_CALCULATION test_calc("../../tests/data/h2o_sto3g_quantumHfile/h2o.json");
    test_calc.run();
    CHECK(test_calc.scf_calc.converged == true);
    CHECK(test_calc.scf_calc.independent_converged == true);
    CHECK(test_calc.scf_calc.exceeded_iterations == false);
    CHECK(test_calc.scf_calc.E_particles[0] == doctest::Approx(3.0365625787).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][0](0) == doctest::Approx(-6.7850710986).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.C[0][0](0, 0) == doctest::Approx(-0.0384832).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][0](0, 0) == doctest::Approx(-4.3143).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][0](0, 0) == doctest::Approx(0.00148096).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[0](0, 0) == doctest::Approx(5.01601).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_particles[1] == doctest::Approx(-81.1530733704).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[1][0](0) == doctest::Approx(-20.4054374486).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.C[1][0](0, 0) == doctest::Approx(-0.00598694).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[1][0](0, 0) == doctest::Approx(0.181054).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[1][0](0, 0) == doctest::Approx(0.00646869).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[1](0, 0) == doctest::Approx(-3.50184).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_total == doctest::Approx(-78.1165107917).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CALCULATION: Li-+p/custom basis quantum H SCF.") {
    POLYQUANT_CALCULATION test_calc("../../tests/data/li-_custombasis_wpos/Li_wpos.json");
    test_calc.run();
    CHECK(test_calc.scf_calc.converged == true);
    CHECK(test_calc.scf_calc.independent_converged == true);
    CHECK(test_calc.scf_calc.exceeded_iterations == false);
    CHECK(test_calc.scf_calc.E_particles[0] == doctest::Approx(-7.7455067859).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][0](0) == doctest::Approx(-2.417238715).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.C[0][0](0, 0) == doctest::Approx(0.697239).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][0](0, 0) == doctest::Approx(-2.1305440797).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][0](0, 0) == doctest::Approx(0.494599).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[0](0, 0) == doctest::Approx(-4.41628).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_particles[1] == doctest::Approx(0.2197833078).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[1][0](0) == doctest::Approx(-0.1098592288).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.C[1][0](0, 0) == doctest::Approx(0.000439523).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[1][0](0, 0) == doctest::Approx(11.5013794256).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[1][0](0, 0) == doctest::Approx(0.0000000154).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[1](0, 0) == doctest::Approx(15.603).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_total == doctest::Approx(-7.5257234633).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
  TEST_CASE("CALCULATION: Li-+p/custom basis quantum H SCF dump HDF5.") {
    POLYQUANT_CALCULATION test_calc("../../tests/data/li-_custombasis_wpos/Li_wpos_dumpHDF5.json");
    test_calc.run();
    hdf5::file::File f1 = hdf5::file::open("electron_Li_wpos.h5", hdf5::file::AccessFlags::READONLY);
    auto root_group1 = f1.root();
    CHECK(root_group1.exists("PBC") == true);
    CHECK(root_group1.exists("Super_Twist") == true);
    CHECK(root_group1.exists("application") == true);
    CHECK(root_group1.exists("atoms") == true);
    CHECK(root_group1.exists("basisset") == true);
    hdf5::file::File f2 = hdf5::file::open("positron_Li_wpos.h5", hdf5::file::AccessFlags::READONLY);
    auto root_group2 = f2.root();
    CHECK(root_group2.exists("PBC") == true);
    CHECK(root_group2.exists("Super_Twist") == true);
    CHECK(root_group2.exists("application") == true);
    CHECK(root_group2.exists("atoms") == true);
    CHECK(root_group2.exists("basisset") == true);
  }

  TEST_CASE("CALCULATION: H2O/sto-3g(library) CI.") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3glibrary_cisd/h2o.json");
    test_calc.run();
    CHECK(test_calc.scf_calc.converged == true);

    CHECK(test_calc.ci_calc.energies[0] == doctest::Approx(-75.01170307729812).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.ci_calc.energies[1] == doctest::Approx(-74.59209776692875).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));

    std::vector<std::vector<double>> reference_values;
    std::string reference_values_file = "../../tests/data/h2o_sto3glibrary_cisd/cisd_ham_elements.txt";
    Polyquant_read_vecofvec_from_file(reference_values, reference_values_file);
    std::cout << test_calc.ci_calc.detset.N_dets << std::endl;
    auto count = 0;
    for (auto i = 0; i < test_calc.ci_calc.detset.N_dets; i++) {
      for (auto j = 0; j < test_calc.ci_calc.detset.N_dets; j++) {
        auto idx_i_unfold = test_calc.ci_calc.detset.det_idx_unfold(i);
        auto idx_j_unfold = test_calc.ci_calc.detset.det_idx_unfold(j);
        auto ex = test_calc.ci_calc.detset.single_spin_num_excitation(test_calc.ci_calc.detset.unique_dets[0][0][idx_i_unfold[0]], test_calc.ci_calc.detset.unique_dets[0][0][idx_j_unfold[0]]);
        ex += test_calc.ci_calc.detset.single_spin_num_excitation(test_calc.ci_calc.detset.unique_dets[0][1][idx_i_unfold[1]], test_calc.ci_calc.detset.unique_dets[0][1][idx_j_unfold[1]]);
        auto elem_thru_SC = test_calc.ci_calc.detset.Slater_Condon(i, j);
        auto diff = elem_thru_SC - reference_values[count][0];
        CHECK(elem_thru_SC == doctest::Approx(reference_values[count][0]).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
        auto idx_part = 0;
        auto det_i_a = test_calc.ci_calc.detset.get_det(idx_part, 0, idx_i_unfold[idx_part * 2 + 0]);
        auto det_i_b = test_calc.ci_calc.detset.get_det(idx_part, 1, idx_i_unfold[idx_part * 2 + 1]);
        auto det_j_a = test_calc.ci_calc.detset.get_det(idx_part, 0, idx_j_unfold[idx_part * 2 + 0]);
        auto det_j_b = test_calc.ci_calc.detset.get_det(idx_part, 1, idx_j_unfold[idx_part * 2 + 1]);
        auto phase = 1.0;
        std::vector<int> holes, parts;
        holes.clear();
        parts.clear();
        test_calc.ci_calc.detset.get_holes(det_i_a, det_j_a, holes);
        test_calc.ci_calc.detset.get_parts(det_i_a, det_j_a, parts);
        if (holes.size() > 0) {
          phase *= test_calc.ci_calc.detset.get_phase(det_i_a, det_j_a, holes, parts);
        }
        holes.clear();
        parts.clear();
        test_calc.ci_calc.detset.get_holes(det_i_b, det_j_b, holes);
        test_calc.ci_calc.detset.get_parts(det_i_b, det_j_b, parts);
        if (holes.size() > 0) {
          phase *= test_calc.ci_calc.detset.get_phase(det_i_b, det_j_b, holes, parts);
        }
        if (diff > POLYQUANT_TEST_EPSILON_LOOSE) {
          std::cout << ex << "           " << idx_i_unfold[0] << " " << idx_i_unfold[1] << " " << idx_j_unfold[0] << " " << idx_j_unfold[1] << "          " << phase << " "
                    << reference_values[count][1] << "           " << elem_thru_SC << " " << reference_values[count][0] << " = " << diff << std::endl;
        }
        count++;
      }
    }
  }

  TEST_CASE("CALCULATION: H2O/sto-3g(library) CI slow.") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3glibrary_cisd/h2o_slow.json");
    test_calc.run();
    CHECK(test_calc.scf_calc.converged == true);

    CHECK(test_calc.ci_calc.energies[0] == doctest::Approx(-75.01170307729812).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.ci_calc.energies[1] == doctest::Approx(-74.59209776692875).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));

    std::vector<std::vector<double>> reference_values;
    std::string reference_values_file = "../../tests/data/h2o_sto3glibrary_cisd/cisd_ham_elements.txt";
    Polyquant_read_vecofvec_from_file(reference_values, reference_values_file);
    std::cout << test_calc.ci_calc.detset.N_dets << std::endl;
    auto count = 0;
    for (auto i = 0; i < test_calc.ci_calc.detset.N_dets; i++) {
      for (auto j = 0; j < test_calc.ci_calc.detset.N_dets; j++) {
        auto idx_i_unfold = test_calc.ci_calc.detset.det_idx_unfold(i);
        auto idx_j_unfold = test_calc.ci_calc.detset.det_idx_unfold(j);
        auto ex = test_calc.ci_calc.detset.single_spin_num_excitation(test_calc.ci_calc.detset.unique_dets[0][0][idx_i_unfold[0]], test_calc.ci_calc.detset.unique_dets[0][0][idx_j_unfold[0]]);
        ex += test_calc.ci_calc.detset.single_spin_num_excitation(test_calc.ci_calc.detset.unique_dets[0][1][idx_i_unfold[1]], test_calc.ci_calc.detset.unique_dets[0][1][idx_j_unfold[1]]);
        auto elem_thru_SC = test_calc.ci_calc.detset.Slater_Condon(i, j);
        auto diff = elem_thru_SC - reference_values[count][0];
        CHECK(elem_thru_SC == doctest::Approx(reference_values[count][0]).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
        auto idx_part = 0;
        auto det_i_a = test_calc.ci_calc.detset.get_det(idx_part, 0, idx_i_unfold[idx_part * 2 + 0]);
        auto det_i_b = test_calc.ci_calc.detset.get_det(idx_part, 1, idx_i_unfold[idx_part * 2 + 1]);
        auto det_j_a = test_calc.ci_calc.detset.get_det(idx_part, 0, idx_j_unfold[idx_part * 2 + 0]);
        auto det_j_b = test_calc.ci_calc.detset.get_det(idx_part, 1, idx_j_unfold[idx_part * 2 + 1]);
        auto phase = 1.0;
        std::vector<int> holes, parts;
        holes.clear();
        parts.clear();
        test_calc.ci_calc.detset.get_holes(det_i_a, det_j_a, holes);
        test_calc.ci_calc.detset.get_parts(det_i_a, det_j_a, parts);
        if (holes.size() > 0) {
          phase *= test_calc.ci_calc.detset.get_phase(det_i_a, det_j_a, holes, parts);
        }
        holes.clear();
        parts.clear();
        test_calc.ci_calc.detset.get_holes(det_i_b, det_j_b, holes);
        test_calc.ci_calc.detset.get_parts(det_i_b, det_j_b, parts);
        if (holes.size() > 0) {
          phase *= test_calc.ci_calc.detset.get_phase(det_i_b, det_j_b, holes, parts);
        }
        if (diff > 1e-9) {
          std::cout << ex << "           " << idx_i_unfold[0] << " " << idx_i_unfold[1] << " " << idx_j_unfold[0] << " " << idx_j_unfold[1] << "          " << phase << " "
                    << reference_values[count][1] << "           " << elem_thru_SC << " " << reference_values[count][0] << " = " << diff << std::endl;
        }
        count++;
      }
    }
  }
  TEST_CASE("CALCULATION: H2O/sto-3g(library) explicit ham.") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3glibrary_cisd/h2o_explicitham.json");
    test_calc.run();
    CHECK(test_calc.scf_calc.converged == true);

    CHECK(test_calc.ci_calc.energies[0] == doctest::Approx(-75.01170307729812).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.ci_calc.energies[1] == doctest::Approx(-74.59209776692875).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));

    std::vector<std::vector<double>> reference_values;
    std::string reference_values_file = "../../tests/data/h2o_sto3glibrary_cisd/cisd_ham_elements.txt";
    Polyquant_read_vecofvec_from_file(reference_values, reference_values_file);
    std::cout << test_calc.ci_calc.detset.N_dets << std::endl;
    auto count = 0;
    for (auto i = 0; i < test_calc.ci_calc.detset.N_dets; i++) {
      for (auto j = 0; j < test_calc.ci_calc.detset.N_dets; j++) {
        auto idx_i_unfold = test_calc.ci_calc.detset.det_idx_unfold(i);
        auto idx_j_unfold = test_calc.ci_calc.detset.det_idx_unfold(j);
        auto ex = test_calc.ci_calc.detset.single_spin_num_excitation(test_calc.ci_calc.detset.unique_dets[0][0][idx_i_unfold[0]], test_calc.ci_calc.detset.unique_dets[0][0][idx_j_unfold[0]]);
        ex += test_calc.ci_calc.detset.single_spin_num_excitation(test_calc.ci_calc.detset.unique_dets[0][1][idx_i_unfold[1]], test_calc.ci_calc.detset.unique_dets[0][1][idx_j_unfold[1]]);
        auto elem_thru_SC = test_calc.ci_calc.detset.Slater_Condon(i, j);
        auto diff = elem_thru_SC - reference_values[count][0];
        CHECK(elem_thru_SC == doctest::Approx(reference_values[count][0]).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
        auto idx_part = 0;
        auto det_i_a = test_calc.ci_calc.detset.get_det(idx_part, 0, idx_i_unfold[idx_part * 2 + 0]);
        auto det_i_b = test_calc.ci_calc.detset.get_det(idx_part, 1, idx_i_unfold[idx_part * 2 + 1]);
        auto det_j_a = test_calc.ci_calc.detset.get_det(idx_part, 0, idx_j_unfold[idx_part * 2 + 0]);
        auto det_j_b = test_calc.ci_calc.detset.get_det(idx_part, 1, idx_j_unfold[idx_part * 2 + 1]);
        auto phase = 1.0;
        std::vector<int> holes, parts;
        holes.clear();
        parts.clear();
        test_calc.ci_calc.detset.get_holes(det_i_a, det_j_a, holes);
        test_calc.ci_calc.detset.get_parts(det_i_a, det_j_a, parts);
        if (holes.size() > 0) {
          phase *= test_calc.ci_calc.detset.get_phase(det_i_a, det_j_a, holes, parts);
        }
        holes.clear();
        parts.clear();
        test_calc.ci_calc.detset.get_holes(det_i_b, det_j_b, holes);
        test_calc.ci_calc.detset.get_parts(det_i_b, det_j_b, parts);
        if (holes.size() > 0) {
          phase *= test_calc.ci_calc.detset.get_phase(det_i_b, det_j_b, holes, parts);
        }
        if (diff > 1e-9) {
          std::cout << ex << "           " << idx_i_unfold[0] << " " << idx_i_unfold[1] << " " << idx_j_unfold[0] << " " << idx_j_unfold[1] << "          " << phase << " "
                    << reference_values[count][1] << "           " << elem_thru_SC << " " << reference_values[count][0] << " = " << diff << std::endl;
        }
        count++;
      }
    }
  }
}
