#include "io/input.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include "symmetry/symmetry.hpp"
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>
#include <string>

using namespace polyquant;
TEST_CASE("MOLECULE: Construct Molecule.", "[MOLECULE]") {
  std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3glibrary/h2o.json");
  POLYQUANT_MOLECULE test_mol;
  std::shared_ptr<POLYQUANT_SYMMETRY> test_symm = std::make_shared<POLYQUANT_SYMMETRY>(test_inp);
  test_mol.setup_molecule(test_inp, test_symm);
  REQUIRE_THAT(test_mol.centers[0][1], Catch::Matchers::WithinAbs(1.4304631499, POLYQUANT_TEST_EPSILON_TIGHT));
  REQUIRE(test_mol.charge == 0);
  REQUIRE(test_mol.multiplicity == 1);
  REQUIRE(!test_mol.restricted);
  REQUIRE_THAT(test_mol.E_nuc, Catch::Matchers::WithinAbs(9.194863688325974, POLYQUANT_TEST_EPSILON_TIGHT));

  std::string xyz_ref = "3\nPOLYQUANT Dumped XYZ centers = all\nH    0.000000    0.756968    -0.516949\nH    -0.000000    -0.756968    -0.516949\nO    0.000000    0.000000    0.068926";
  std::string xyz_test = test_mol.dump_xyz();
  REQUIRE(xyz_test == xyz_ref);
}
TEST_CASE("MOLECULE: Construct Molecule with no keywords", "[MOLECULE]") {
  std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3glibrary/h2o_nokeyword.json");
  std::shared_ptr<POLYQUANT_SYMMETRY> test_symm = std::make_shared<POLYQUANT_SYMMETRY>(test_inp);
  POLYQUANT_MOLECULE test_mol(test_inp, test_symm);
  REQUIRE_THAT(test_mol.centers[0][1], Catch::Matchers::WithinAbs(1.4304631499, POLYQUANT_TEST_EPSILON_TIGHT));
  REQUIRE(test_mol.charge == 0);
  REQUIRE(test_mol.multiplicity == 1);
  REQUIRE(test_mol.restricted);
}
TEST_CASE("MOLECULE: Construct Molecule with quantum nuclei specificed by center list.", "[MOLECULE]") {
  std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3g_quantumHlibrary/h2o.json");
  std::shared_ptr<POLYQUANT_SYMMETRY> test_symm = std::make_shared<POLYQUANT_SYMMETRY>(test_inp);
  POLYQUANT_MOLECULE test_mol(test_inp, test_symm);
  REQUIRE_THAT(test_mol.centers[1][1], Catch::Matchers::WithinAbs(1.4304631499, POLYQUANT_TEST_EPSILON_TIGHT));
  REQUIRE(test_mol.charge == 0);
  REQUIRE(test_mol.multiplicity == 1);
  REQUIRE(!test_mol.restricted);
}
TEST_CASE("MOLECULE: Construct Molecule with quantum nuclei specificed by "
          "center label.",
          "[MOLECULE]") {
  std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3g_quantumHlibrary/h2o_alternate.json");
  std::shared_ptr<POLYQUANT_SYMMETRY> test_symm = std::make_shared<POLYQUANT_SYMMETRY>(test_inp);
  POLYQUANT_MOLECULE test_mol(test_inp, test_symm);
  REQUIRE_THAT(test_mol.centers[1][1], Catch::Matchers::WithinAbs(1.4304631499, POLYQUANT_TEST_EPSILON_TIGHT));
  REQUIRE(test_mol.charge == 0);
  REQUIRE(test_mol.multiplicity == 1);
  REQUIRE(!test_mol.restricted);
}
TEST_CASE("MOLECULE: Construct Molecule with positron", "[MOLECULE]") {
  std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/li-_custombasis_wpos/Li_wpos.json");
  std::shared_ptr<POLYQUANT_SYMMETRY> test_symm = std::make_shared<POLYQUANT_SYMMETRY>(test_inp);
  POLYQUANT_MOLECULE test_mol(test_inp, test_symm);
  REQUIRE(test_mol.quantum_particles["positron"].spin == 0.5);
  REQUIRE(test_mol.quantum_particles["positron"].mass == 1.0);
  REQUIRE(test_mol.quantum_particles["positron"].charge == 1.0);
  REQUIRE(test_mol.quantum_particles["positron"].multiplicity == 1);
  REQUIRE(test_mol.quantum_particles["positron"].num_parts == 1);
  REQUIRE(test_mol.quantum_particles["positron"].num_parts_alpha == 1);
  REQUIRE(test_mol.quantum_particles["positron"].num_parts_beta == 0);
  REQUIRE(!test_mol.quantum_particles["positron"].restricted);
}
