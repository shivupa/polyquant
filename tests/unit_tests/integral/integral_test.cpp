#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

using namespace polyquant;

TEST_CASE("INTEGRAL: triangular matrix", "[INTEGRAL]") {
  REQUIRE(symmetric_matrix_triangular_idx(0, 0) == 0);
  REQUIRE(symmetric_matrix_triangular_idx(2, 5) == 17);
  REQUIRE(symmetric_matrix_triangular_idx(4, 3) == 13);
}

TEST_CASE("INTEGRAL: overlap AO basis", "[INTEGRAL]") {
  std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3glibrary/h2o.json");
  std::shared_ptr<POLYQUANT_SYMMETRY> test_symm = std::make_shared<POLYQUANT_SYMMETRY>(test_inp);
  std::shared_ptr<POLYQUANT_MOLECULE> test_mol = std::make_shared<POLYQUANT_MOLECULE>(test_inp, test_symm);
  std::shared_ptr<POLYQUANT_BASIS> test_bas = std::make_shared<POLYQUANT_BASIS>(test_inp, test_symm, test_mol);
  POLYQUANT_INTEGRAL test_int;
  test_int.setup_integral(test_inp, test_symm, test_bas, test_mol);
  test_int.calculate_overlap();
  // Verified using pyscf
  // Tue Jul  5 12:27:07 PM EDT 2022
  REQUIRE_THAT(test_int.overlap[0](0, 0), Catch::Matchers::WithinAbs(1.0, POLYQUANT_TEST_EPSILON_TIGHT));
  REQUIRE_THAT(test_int.overlap[0](3, 5), Catch::Matchers::WithinAbs(0.0, POLYQUANT_TEST_EPSILON_TIGHT));
}

TEST_CASE("INTEGRAL: kinetic AO basis", "[INTEGRAL]") {
  std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3glibrary/h2o.json");
  std::shared_ptr<POLYQUANT_SYMMETRY> test_symm = std::make_shared<POLYQUANT_SYMMETRY>(test_inp);
  std::shared_ptr<POLYQUANT_MOLECULE> test_mol = std::make_shared<POLYQUANT_MOLECULE>(test_inp, test_symm);
  std::shared_ptr<POLYQUANT_BASIS> test_bas = std::make_shared<POLYQUANT_BASIS>(test_inp, test_symm, test_mol);
  POLYQUANT_INTEGRAL test_int(test_inp, test_symm, test_bas, test_mol);
  test_int.calculate_kinetic();
  // Verified using pyscf
  // Tue Jul  5 12:27:19 PM EDT 2022
  REQUIRE_THAT(test_int.kinetic[0](0, 0), Catch::Matchers::WithinAbs(0.7600318835666091, POLYQUANT_TEST_EPSILON_TIGHT));
  REQUIRE_THAT(test_int.kinetic[0](3, 5), Catch::Matchers::WithinAbs(0.0, POLYQUANT_TEST_EPSILON_TIGHT));
}

TEST_CASE("INTEGRAL: nuclear AO basis", "[INTEGRAL]") {
  std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3glibrary/h2o.json");
  std::shared_ptr<POLYQUANT_SYMMETRY> test_symm = std::make_shared<POLYQUANT_SYMMETRY>(test_inp);
  std::shared_ptr<POLYQUANT_MOLECULE> test_mol = std::make_shared<POLYQUANT_MOLECULE>(test_inp, test_symm);
  std::shared_ptr<POLYQUANT_BASIS> test_bas = std::make_shared<POLYQUANT_BASIS>(test_inp, test_symm, test_mol);
  POLYQUANT_INTEGRAL test_int(test_inp, test_symm, test_bas, test_mol);
  test_int.calculate_nuclear();
  // Verified using pyscf
  // Tue Jul  5 12:33:46 PM EDT 2022
  REQUIRE_THAT(test_int.nuclear[0](0, 0), Catch::Matchers::WithinAbs(-5.836693971481976, POLYQUANT_TEST_EPSILON_TIGHT));
  REQUIRE_THAT(test_int.nuclear[0](3, 5), Catch::Matchers::WithinAbs(0.22351644812734084, POLYQUANT_TEST_EPSILON_TIGHT));
}
TEST_CASE("INTEGRAL: symmetric orthogonalization AO basis", "[INTEGRAL]") {
  std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3glibrary/h2o.json");
  std::shared_ptr<POLYQUANT_SYMMETRY> test_symm = std::make_shared<POLYQUANT_SYMMETRY>(test_inp);
  std::shared_ptr<POLYQUANT_MOLECULE> test_mol = std::make_shared<POLYQUANT_MOLECULE>(test_inp, test_symm);
  std::shared_ptr<POLYQUANT_BASIS> test_bas = std::make_shared<POLYQUANT_BASIS>(test_inp, test_symm, test_mol);
  POLYQUANT_INTEGRAL test_int;
  test_int.setup_integral(test_inp, test_symm, test_bas, test_mol);
  test_int.calculate_overlap();
  test_int.symmetric_orthogonalization();
  REQUIRE_THAT(test_int.orth_X[0][0](0, 0), Catch::Matchers::WithinAbs(0.7921547798, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_int.orth_X[0][2](6, 0), Catch::Matchers::WithinAbs(1.0, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_int.orth_X[0][3](0, 0), Catch::Matchers::WithinAbs(0.9206084339, POLYQUANT_TEST_EPSILON_LOOSE));
}
TEST_CASE("INTEGRAL: canonical orthogonalization AO basis", "[INTEGRAL]") {
  std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3glibrary/h2o.json");
  std::shared_ptr<POLYQUANT_SYMMETRY> test_symm = std::make_shared<POLYQUANT_SYMMETRY>(test_inp);
  std::shared_ptr<POLYQUANT_MOLECULE> test_mol = std::make_shared<POLYQUANT_MOLECULE>(test_inp, test_symm);
  std::shared_ptr<POLYQUANT_BASIS> test_bas = std::make_shared<POLYQUANT_BASIS>(test_inp, test_symm, test_mol);
  POLYQUANT_INTEGRAL test_int;
  test_int.setup_integral(test_inp, test_symm, test_bas, test_mol);
  test_int.calculate_overlap();
  test_int.canonical_orthogonalization();
  REQUIRE_THAT(test_int.orth_X[0][0](0, 0), Catch::Matchers::WithinAbs(0.7472872747, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_int.orth_X[0][2](6, 0), Catch::Matchers::WithinAbs(1.0, POLYQUANT_TEST_EPSILON_LOOSE));
  REQUIRE_THAT(test_int.orth_X[0][3](0, 0), Catch::Matchers::WithinAbs(-0.8748307425, POLYQUANT_TEST_EPSILON_LOOSE));
}
