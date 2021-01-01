#include "basis/basis.hpp"
#include "calculation/calculation.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include <doctest/doctest.h>

using namespace polyquant;

TEST_CASE("CALCULATION: H2O/sto-3g(library) SCF.") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3glibrary/h2o.json");
  test_calc.run();
  CHECK(test_calc.scf_calc.converged == true);
  CHECK(test_calc.scf_calc.independent_converged == true);
  CHECK(test_calc.scf_calc.exceeded_iterations == false);
  CHECK(test_calc.scf_calc.E_particles[0] ==
        doctest::Approx(-84.1577900311).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.E_orbitals[0][0](0) ==
        doctest::Approx(-20.2417374167).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.E_orbitals[0][1](0) ==
        doctest::Approx(-20.2417374167).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.C[0][0](0, 0) ==
        doctest::Approx(-0.0016846621).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.C[0][1](0, 0) ==
        doctest::Approx(-0.0016846621).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.F[0][0](0, 0) ==
        doctest::Approx(-7.2719670401).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  CHECK(test_calc.scf_calc.F[0][1](0, 0) ==
        doctest::Approx(-7.2719620734).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.D[0][0](0, 0) ==
        doctest::Approx(0.0239084665).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.D[0][1](0, 0) ==
        doctest::Approx(0.0239084665).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.H_core[0](0, 0) ==
        doctest::Approx(-63.7952159349).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  CHECK(test_calc.scf_calc.E_total ==
        doctest::Approx(-74.962926342808259506)
            .epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
}

TEST_CASE("CALCULATION: H2O/sto-3g(file) SCF.") {
  POLYQUANT_CALCULATION test_calc("../../tests/data/h2o_sto3gfile/h2o.json");
  test_calc.run();
  CHECK(test_calc.scf_calc.converged == true);
  CHECK(test_calc.scf_calc.independent_converged == true);
  CHECK(test_calc.scf_calc.exceeded_iterations == false);
  CHECK(test_calc.scf_calc.E_particles[0] ==
        doctest::Approx(-84.1577900311).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.E_orbitals[0][0](0) ==
        doctest::Approx(-20.2417374167).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.C[0][0](0, 0) ==
        doctest::Approx(-0.0016846621).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.F[0][0](0, 0) ==
        doctest::Approx(-7.2719620734).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  CHECK(test_calc.scf_calc.D[0][0](0, 0) ==
        doctest::Approx(0.0239084665).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.H_core[0](0, 0) ==
        doctest::Approx(-63.7952013522).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  CHECK(test_calc.scf_calc.E_total ==
        doctest::Approx(-74.962926342808259506)
            .epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
}

TEST_CASE("CALCULATION: H2O/sto-3g quantum H SCF.") {
  POLYQUANT_CALCULATION test_calc(
      "../../tests/data/h2o_sto3g_quantumH/h2o.json");
  test_calc.run();
  CHECK(test_calc.scf_calc.converged == true);
  CHECK(test_calc.scf_calc.independent_converged == true);
  CHECK(test_calc.scf_calc.exceeded_iterations == false);
  CHECK(test_calc.scf_calc.E_particles[0] ==
        doctest::Approx(5.1185050215).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.E_orbitals[0][0](0) ==
        doctest::Approx(0.3143565801).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.C[0][0](0, 0) ==
        doctest::Approx(-0.1892928897).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.F[0][0](0, 0) ==
        doctest::Approx(7.1294071739).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.D[0][0](0, 0) ==
        doctest::Approx(0.0358317981).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.H_core[0](0, 0) ==
        doctest::Approx(63.0329825588).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.E_particles[1] ==
        doctest::Approx(-77.6980835647).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.E_orbitals[1][0](0) ==
        doctest::Approx(-19.7861429503).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.C[1][0](0, 0) ==
        doctest::Approx(0.0017372664).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.F[1][0](0, 0) ==
        doctest::Approx(-0.5106604203).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.D[1][0](0, 0) ==
        doctest::Approx(0.0110199757).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.H_core[1](0, 0) ==
        doctest::Approx(-44.0054532844).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.E_total ==
        doctest::Approx(-72.579578543195324869)
            .epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
}

TEST_CASE("CALCULATION: Li-+p/custom basis quantum H SCF.") {
  POLYQUANT_CALCULATION test_calc(
      "../../tests/data/li-_custombasis_wpos/Li_wpos.json");
  test_calc.run();
  CHECK(test_calc.scf_calc.converged == true);
  CHECK(test_calc.scf_calc.independent_converged == true);
  CHECK(test_calc.scf_calc.exceeded_iterations == false);
  CHECK(test_calc.scf_calc.E_particles[0] ==
        doctest::Approx(-7.7455071536).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.E_orbitals[0][0](0) ==
        doctest::Approx(-2.4172393464).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.C[0][0](0, 0) ==
        doctest::Approx(0.1966873521).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.F[0][0](0, 0) ==
        doctest::Approx(-26.7732062339).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.D[0][0](0, 0) ==
        doctest::Approx(0.0393589).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.H_core[0](0, 0) ==
        doctest::Approx(-55.4965821304).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.E_particles[1] ==
        doctest::Approx(0.2197836903).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.E_orbitals[1][0](0) ==
        doctest::Approx(-0.1098594161).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.C[1][0](0, 0) ==
        doctest::Approx(0.0001239862).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.F[1][0](0, 0) ==
        doctest::Approx(144.5305988661).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.D[1][0](0, 0) ==
        doctest::Approx(0.0000000154).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.H_core[1](0, 0) ==
        doctest::Approx(196.0729238353).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
  CHECK(test_calc.scf_calc.E_total ==
        doctest::Approx(-7.5257234633).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
}

TEST_CASE("CALCULATION: Li-+p/custom basis quantum H SCF dump HDF5.") {
  POLYQUANT_CALCULATION test_calc(
      "../../tests/data/li-_custombasis_wpos/Li_wpos_dumpHDF5.json");
  test_calc.run();
  hdf5::file::File f1 =
      hdf5::file::open("Li_wpos.h5", hdf5::file::AccessFlags::READONLY);
  auto root_group = f1.root();

  CHECK(root_group.exists("PBC") == true);
  CHECK(root_group.exists("Super_Twist") == true);
  CHECK(root_group.exists("application") == true);
  CHECK(root_group.exists("atoms") == true);
  CHECK(root_group.exists("basisset") == true);
}
