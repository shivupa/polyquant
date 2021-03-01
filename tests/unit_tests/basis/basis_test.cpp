#include "basis/basis.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include <doctest/doctest.h>

using namespace polyquant;
TEST_SUITE("BASIS") {
  TEST_CASE("BASIS: Set up basis from library.") {
    POLYQUANT_INPUT test_inp("../../tests/data/h2o_sto3glibrary/h2o.json");
    POLYQUANT_MOLECULE test_mol(test_inp);
    POLYQUANT_BASIS test_bas;
    test_bas.load_basis(test_inp, test_mol);
    CHECK(test_bas.num_basis == 7);
    CHECK(test_bas.basis[0].O[0] ==
          doctest::Approx(1.4304631499).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
  TEST_CASE("BASIS: Set up basis from file.") {
    POLYQUANT_INPUT test_inp("../../tests/data/h2o_sto3gfile/h2o.json");
    POLYQUANT_MOLECULE test_mol(test_inp);
    POLYQUANT_BASIS test_bas(test_inp, test_mol);
    CHECK(test_bas.num_basis == 7);
    CHECK(test_bas.basis[0].O[0] ==
          doctest::Approx(1.4304631499).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  }
}
