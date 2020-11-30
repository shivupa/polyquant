#include "io/io.hpp"
#include <doctest/doctest.h>

using namespace polyquant;

TEST_CASE("IO: Parse input data in constructor.") {

  POLYQUANT_INPUT test_inp("../../tests/unit_tests/data/h2o.json");
  // Check that the fields exist don't check values. The calculation class tests
  // will do that.
  CHECK(test_inp.input_data.contains("molecule"));
  CHECK(test_inp.input_data["molecule"].contains("geometry"));
  CHECK(test_inp.input_data["molecule"].contains("symbols"));
  CHECK(test_inp.input_data["molecule"].contains("molecular_charge"));
  CHECK(test_inp.input_data["molecule"].contains("molecular_multiplicity"));

  CHECK(test_inp.input_data.contains("driver"));

  CHECK(test_inp.input_data.contains("model"));
  CHECK(test_inp.input_data["model"].contains("method"));
  CHECK(test_inp.input_data["model"].contains("basis"));

  CHECK(test_inp.input_data.contains("keywords"));
  CHECK(test_inp.input_data["keywords"].contains("positron"));
  CHECK(test_inp.input_data["keywords"].contains("excess_electron"));
  CHECK(test_inp.input_data["keywords"].contains("polarization_potential"));
  CHECK(test_inp.input_data["keywords"].contains("relax_target"));
}
TEST_CASE("IO: Parse input data in method.") {
  POLYQUANT_INPUT test_inp;
  test_inp.parse_input("../../tests/unit_tests/data/h2o.json");
  CHECK(test_inp.input_data.contains("molecule"));
  CHECK(test_inp.input_data["molecule"].contains("geometry"));
  CHECK(test_inp.input_data["molecule"].contains("symbols"));
  CHECK(test_inp.input_data["molecule"].contains("molecular_charge"));
  CHECK(test_inp.input_data["molecule"].contains("molecular_multiplicity"));

  CHECK(test_inp.input_data.contains("driver"));

  CHECK(test_inp.input_data.contains("model"));
  CHECK(test_inp.input_data["model"].contains("method"));
  CHECK(test_inp.input_data["model"].contains("basis"));

  CHECK(test_inp.input_data.contains("keywords"));
  CHECK(test_inp.input_data["keywords"].contains("positron"));
  CHECK(test_inp.input_data["keywords"].contains("excess_electron"));
  CHECK(test_inp.input_data["keywords"].contains("polarization_potential"));
  CHECK(test_inp.input_data["keywords"].contains("relax_target"));
}
