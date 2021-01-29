#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "calculation/calculation.hpp"
#include <doctest/doctest.h>

using namespace polyquant;

TEST_SUITE("CI") {
TEST_CASE("CI: one body MO basis") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
  test_calc.run();
  test_calc.scf_calc.input_integral.calculate_mo_1_body_integrals(test_calc.scf_calc.C);

  CHECK(test_calc.scf_calc.input_integral.mo_one_body_ints[0][0](0,0) == 
        doctest::Approx(-32.7032520).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  CHECK(test_calc.scf_calc.input_integral.mo_one_body_ints[0][0](0,1) ==
        doctest::Approx(-0.5580913772).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
}

TEST_CASE("CI: two body MO basis") {
  POLYQUANT_CALCULATION test_calc;
  test_calc.setup_calculation("../../tests/data/h2o_sto3gfile/h2o.json");
  test_calc.run();
  test_calc.scf_calc.input_integral.calculate_mo_2_body_integrals(test_calc.scf_calc.C);

  CHECK(test_calc.scf_calc.input_integral.mo_two_body_ints[0][0][0][0](0,0) == 
        doctest::Approx(4.74449478).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  CHECK(test_calc.scf_calc.input_integral.mo_two_body_ints[0][0][0][0](0,1) == 
        doctest::Approx(0.4166223).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
  CHECK(test_calc.scf_calc.input_integral.mo_two_body_ints[0][0][0][0](0,2) == 
        doctest::Approx(1.00454538).epsilon(POLYQUANT_TEST_EPSILON_LOOSE));
}
}
