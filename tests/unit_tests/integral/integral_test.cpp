#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include <doctest/doctest.h>

using namespace polyquant;

TEST_CASE("INTEGRAL triangular matrix") { 
  CHECK(symmetric_matrix_triangular_idx(0,0) == 0);
  CHECK(symmetric_matrix_triangular_idx(2,5) == 0);
}

TEST_CASE("INTEGRAL overlap") { 
  POLYQUANT_INPUT test_inp(
      "../../tests/unit_tests/data/h2o_sto3glibrary/h2o.json");
  POLYQUANT_MOLECULE test_mol(test_inp);
  POLYQUANT_BASIS test_bas(test_inp, test_mol);
  POLYQUANT_INTEGRAL test_int;
  test_int.setup_integral(test_inp, test_bas, test_mol);
  test_int.calculate_overlap();
  CHECK(test_int.overlap(0,0) == doctest::Approx().epsilon(0.0001));
  CHECK(test_int.overlap(3,5) == 0);
}
