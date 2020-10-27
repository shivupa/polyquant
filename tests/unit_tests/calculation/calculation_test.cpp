#include <calculation/calculation.hpp>
#include <doctest/doctest.h>
#include <io/io.hpp>

using namespace selci;

TEST_CASE("CALCULATION: Create calculation object from input object.") {

  PYCI_INPUT test_inp("../../tests/unit_tests/data/h2o.json");

  // Check that the fields exist don't check values. The calculation class tests
  // will do that.
  CHECK(test_inp.input_data.contains("molecule"));
}
