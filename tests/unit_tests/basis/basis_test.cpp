#include "basis/basis.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

using namespace polyquant;
TEST_CASE("BASIS: Set up basis from library.", "[BASIS]") {
  std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3glibrary/h2o.json");
  std::shared_ptr<POLYQUANT_SYMMETRY> test_symm = std::make_shared<POLYQUANT_SYMMETRY>(test_inp);
  std::shared_ptr<POLYQUANT_MOLECULE> test_mol = std::make_shared<POLYQUANT_MOLECULE>(test_inp, test_symm);
  POLYQUANT_BASIS test_bas;
  test_bas.load_basis(test_inp, test_symm, test_mol);
  REQUIRE(test_bas.num_basis[0] == 7);
  REQUIRE_THAT(test_bas.basis[0][0].O[1], Catch::Matchers::WithinAbs(1.4304631499, POLYQUANT_TEST_EPSILON_LOOSE));
}
TEST_CASE("BASIS: Set up basis from file.", "[BASIS]") {
  std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3gfile/h2o.json");
  std::shared_ptr<POLYQUANT_SYMMETRY> test_symm = std::make_shared<POLYQUANT_SYMMETRY>(test_inp);
  std::shared_ptr<POLYQUANT_MOLECULE> test_mol = std::make_shared<POLYQUANT_MOLECULE>(test_inp, test_symm);
  POLYQUANT_BASIS test_bas;
  test_bas.load_basis(test_inp, test_symm, test_mol);
  REQUIRE(test_bas.num_basis[0] == 7);
  REQUIRE_THAT(test_bas.basis[0][0].O[0], Catch::Matchers::WithinAbs(1.4304631499, POLYQUANT_TEST_EPSILON_LOOSE));
}
