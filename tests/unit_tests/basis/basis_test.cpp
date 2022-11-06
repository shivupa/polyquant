#include "basis/basis.hpp"
#include "io/utils.hpp"
#include "molecule/molecule.hpp"
#include <doctest/doctest.h>

using namespace polyquant;
TEST_SUITE("BASIS") {
  TEST_CASE("BASIS: Set up basis from library.") {
    std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3glibrary/h2o.json");
    std::shared_ptr<POLYQUANT_MOLECULE> test_mol = std::make_shared<POLYQUANT_MOLECULE>(test_inp);
    POLYQUANT_BASIS test_bas;
    test_bas.load_basis(test_inp, test_mol);
    CHECK(test_bas.num_basis[0] == 7);
    CHECK(test_bas.basis[0][0].O[1] == doctest::Approx(1.4304631499).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
  TEST_CASE("BASIS: Set up basis from file.") {
    std::shared_ptr<POLYQUANT_INPUT> test_inp = std::make_shared<POLYQUANT_INPUT>("../../tests/data/h2o_sto3gfile/h2o.json");
    std::shared_ptr<POLYQUANT_MOLECULE> test_mol = std::make_shared<POLYQUANT_MOLECULE>(test_inp);
    POLYQUANT_BASIS test_bas(test_inp, test_mol);
    CHECK(test_bas.num_basis[0] == 7);
    CHECK(test_bas.basis[0][0].O[1] == doctest::Approx(1.4304631499).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
}
