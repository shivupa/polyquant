#include "basis/basis.hpp"
#include "calculation/calculation.hpp"
#include "integral/integral.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <h5cpp/hdf5.hpp>
#include <doctest/doctest.h>

using namespace polyquant;
TEST_SUITE("CALCULATION") {
  TEST_CASE("CALCULATION: H2/ano-R0(EMSL basis) SCF.") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2_anor0EMSL//h2.json");
    test_calc.run();
    CHECK(test_calc.scf_calc.converged == true);
    CHECK(test_calc.scf_calc.independent_converged == true);
    CHECK(test_calc.scf_calc.exceeded_iterations == false);
    CHECK(test_calc.scf_calc.E_particles[0] ==doctest::Approx(-1.5791914276).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][0](0) ==doctest::Approx(-0.5870915714).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][1](0) ==doctest::Approx(-0.5870915714).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.C[0][0](0, 0)) ==doctest::Approx(0.1461257697).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.C[0][1](0, 0)) ==doctest::Approx(0.1461257697).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][0](0, 0) ==doctest::Approx(-6.757001547).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][1](0, 0) ==doctest::Approx(-6.757001547).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][0](0, 0) ==doctest::Approx(0.0213527406).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][1](0, 0) ==doctest::Approx(0.0213527406).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[0](0, 0) ==doctest::Approx(-12.1271698441).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_total ==doctest::Approx(-0.8654374339).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CALCULATION: H2O/sto-3g(library) SCF.") {
    POLYQUANT_CALCULATION test_calc;
    test_calc.setup_calculation("../../tests/data/h2o_sto3glibrary/h2o.json");
    test_calc.run();
    CHECK(test_calc.scf_calc.converged == true);
    CHECK(test_calc.scf_calc.independent_converged == true);
    CHECK(test_calc.scf_calc.exceeded_iterations == false);
    CHECK(test_calc.scf_calc.E_particles[0] ==doctest::Approx(-84.1577900311).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][0](0) ==doctest::Approx(-20.2417374167).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][1](0) ==doctest::Approx(-20.2417374167).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.C[0][0](0, 0)) ==doctest::Approx(0.0016846621).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.C[0][1](0, 0)) ==doctest::Approx(0.0016846621).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][0](0, 0) ==doctest::Approx(-7.2719670401).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][1](0, 0) ==doctest::Approx(-7.2719620734).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][0](0, 0) ==doctest::Approx(0.0239084665).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][1](0, 0) ==doctest::Approx(0.0239084665).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[0](0, 0) ==doctest::Approx(-63.7952159349).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_total ==doctest::Approx(-74.962926342808259506).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CALCULATION: H2O/sto-3g(file) SCF.") {
    POLYQUANT_CALCULATION test_calc("../../tests/data/h2o_sto3gfile/h2o.json");
    test_calc.run();
    CHECK(test_calc.scf_calc.converged == true);
    CHECK(test_calc.scf_calc.independent_converged == true);
    CHECK(test_calc.scf_calc.exceeded_iterations == false);
    CHECK(test_calc.scf_calc.E_particles[0] ==doctest::Approx(-84.1577900311).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][0](0) ==doctest::Approx(-20.2417374167).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.C[0][0](0, 0)) ==doctest::Approx(0.0016846621).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][0](0, 0) ==doctest::Approx(-7.2719620734).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][0](0, 0) ==doctest::Approx(0.0239084665).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[0](0, 0) ==doctest::Approx(-63.7952013522).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_total ==doctest::Approx(-74.962926342808259506).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CALCULATION: H2O/sto-3g quantum H SCF library basis.") {
    POLYQUANT_CALCULATION test_calc("../../tests/data/h2o_sto3g_quantumHlibrary/h2o.json");
    test_calc.run();
    CHECK(test_calc.scf_calc.converged == true);
    CHECK(test_calc.scf_calc.independent_converged == true);
    CHECK(test_calc.scf_calc.exceeded_iterations == false);
    CHECK(test_calc.scf_calc.E_particles[0] == doctest::Approx(3.0365625787).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][0](0) ==doctest::Approx(-6.7850710986).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.C[0][0](0, 0)) ==doctest::Approx(0.0108559101).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][0](0, 0) ==doctest::Approx(-54.215088101).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][0](0, 0) ==doctest::Approx(0.0001178508).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[0](0, 0) ==doctest::Approx(63.0329825588).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_particles[1] ==doctest::Approx(-81.1530733704).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[1][0](0) ==doctest::Approx(-20.4054374486).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.C[1][0](0, 0)) ==doctest::Approx(0.0016888836).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[1][0](0, 0) ==doctest::Approx(2.275190008).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[1][0](0, 0) ==doctest::Approx(0.0005147619).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[1](0, 0) ==doctest::Approx(-44.0054532844).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_total == doctest::Approx(-78.1165107917).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CALCULATION: H2O/sto-3g quantum H SCF file basis.") {
    POLYQUANT_CALCULATION test_calc("../../tests/data/h2o_sto3g_quantumHfile/h2o.json");
    test_calc.run();
    CHECK(test_calc.scf_calc.converged == true);
    CHECK(test_calc.scf_calc.independent_converged == true);
    CHECK(test_calc.scf_calc.exceeded_iterations == false);
    CHECK(test_calc.scf_calc.E_particles[0] == doctest::Approx(3.0365625787).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][0](0) ==doctest::Approx(-6.7850710986).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.C[0][0](0, 0)) ==doctest::Approx(0.0108559101).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][0](0, 0) ==doctest::Approx(-54.215088101).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][0](0, 0) ==doctest::Approx(0.0001178508).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[0](0, 0) ==doctest::Approx(63.0329825588).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_particles[1] ==doctest::Approx(-81.1530733704).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[1][0](0) ==doctest::Approx(-20.4054374486).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.C[1][0](0, 0)) ==doctest::Approx(0.0016888836).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[1][0](0, 0) ==doctest::Approx(2.2751900085).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[1][0](0, 0) ==doctest::Approx(0.0005147619).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[1](0, 0) ==doctest::Approx(-44.0054532844).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_total == doctest::Approx(-78.1165107917).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }

  TEST_CASE("CALCULATION: Li-+p/custom basis quantum H SCF.") {
    POLYQUANT_CALCULATION test_calc("../../tests/data/li-_custombasis_wpos/Li_wpos.json");
    test_calc.run();
    CHECK(test_calc.scf_calc.converged == true);
    CHECK(test_calc.scf_calc.independent_converged == true);
    CHECK(test_calc.scf_calc.exceeded_iterations == false);
    CHECK(test_calc.scf_calc.E_particles[0] ==doctest::Approx(-7.7455067859).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[0][0](0) ==doctest::Approx(-2.417238715).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.C[0][0](0, 0)) ==doctest::Approx(0.1966873521).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[0][0](0, 0) ==doctest::Approx(-26.7731982011).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[0][0](0, 0) ==doctest::Approx(0.0393589).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[0](0, 0) ==doctest::Approx(-55.4965821304).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_particles[1] ==doctest::Approx(0.2197833078).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_orbitals[1][0](0) ==doctest::Approx(-0.1098592288).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(std::abs(test_calc.scf_calc.C[1][0](0, 0)) ==doctest::Approx(0.0001239862).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.F[1][0](0, 0) ==doctest::Approx(144.5306083531).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.D[1][0](0, 0) ==doctest::Approx(0.0000000154).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.H_core[1](0, 0) ==doctest::Approx(196.0729238353).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
    CHECK(test_calc.scf_calc.E_total ==doctest::Approx(-7.5257234633).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
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
}
