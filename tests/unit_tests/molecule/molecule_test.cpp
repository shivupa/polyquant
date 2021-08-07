#include "io/utils.hpp"
#include "io/input.hpp"
#include "molecule/molecule.hpp"
#include <doctest/doctest.h>
#include <string>

using namespace polyquant;
TEST_SUITE("MOLECULE") {
  TEST_CASE("MOLECULE: Construct Molecule.") {
    POLYQUANT_INPUT test_inp("../../tests/data/h2o_sto3glibrary/h2o.json");
    POLYQUANT_MOLECULE test_mol;
    test_mol.setup_molecule(test_inp);
    CHECK(test_mol.centers[0][0] ==
          doctest::Approx(1.4304631499).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_mol.charge == 0);
    CHECK(test_mol.multiplicity == 1);
    CHECK(test_mol.restricted == false);
    CHECK(test_mol.E_nuc == doctest::Approx(9.194863688325974)
                                .epsilon(POLYQUANT_TEST_EPSILON_TIGHT));

    std::string xyz_ref =
        "3\nPOLYQUANT Dumped XYZ centers = all\nH    0.756969  "
        "  0.000000    -0.585875\nH    -0.756969    0.000000   "
        " -0.585875\nO    0.000000    0.000000    0.000000";
    std::string xyz_test = test_mol.dump_xyz();
    CHECK(xyz_test == xyz_ref);
  }
  TEST_CASE("MOLECULE: Construct Molecule with no keywords") {
    POLYQUANT_INPUT test_inp(
        "../../tests/data/h2o_sto3glibrary/h2o_nokeyword.json");
    POLYQUANT_MOLECULE test_mol(test_inp);
    CHECK(test_mol.centers[0][0] ==
          doctest::Approx(1.4304631499).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_mol.charge == 0);
    CHECK(test_mol.multiplicity == 1);
    CHECK(test_mol.restricted == true);
  }
  TEST_CASE("MOLECULE: Construct Molecule with quantum nuclei specificed by "
            "center list.") {
    POLYQUANT_INPUT test_inp("../../tests/data/h2o_sto3g_quantumHlibrary/h2o.json");
    POLYQUANT_MOLECULE test_mol(test_inp);
    CHECK(test_mol.centers[1][0] ==
          doctest::Approx(1.4304631499).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_mol.charge == 0);
    CHECK(test_mol.multiplicity == 1);
    CHECK(test_mol.restricted == false);
  }
  TEST_CASE("MOLECULE: Construct Molecule with quantum nuclei specificed by "
            "center label.") {
    POLYQUANT_INPUT test_inp(
        "../../tests/data/h2o_sto3g_quantumHlibrary/h2o_alternate.json");
    POLYQUANT_MOLECULE test_mol(test_inp);
    CHECK(test_mol.centers[1][0] ==
          doctest::Approx(1.4304631499).epsilon(POLYQUANT_TEST_EPSILON_TIGHT));
    CHECK(test_mol.charge == 0);
    CHECK(test_mol.multiplicity == 1);
    CHECK(test_mol.restricted == false);
  }
  TEST_CASE("MOLECULE: Construct Molecule with positron") {
    POLYQUANT_INPUT test_inp(
        "../../tests/data/li-_custombasis_wpos/Li_wpos.json");
    POLYQUANT_MOLECULE test_mol(test_inp);
    CHECK(test_mol.quantum_particles["positron"].spin == 0.5);
    CHECK(test_mol.quantum_particles["positron"].mass == 1.0);
    CHECK(test_mol.quantum_particles["positron"].charge == 1.0);
    CHECK(test_mol.quantum_particles["positron"].multiplicity == 1);
    CHECK(test_mol.quantum_particles["positron"].num_parts == 1);
    CHECK(test_mol.quantum_particles["positron"].num_parts_alpha == 1);
    CHECK(test_mol.quantum_particles["positron"].num_parts_beta == 0);
    CHECK(test_mol.quantum_particles["positron"].restricted == false);
  }
}
