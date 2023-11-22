#include "io/input.hpp"
#include <catch2/catch_test_macros.hpp>

using namespace polyquant;
TEST_CASE("IO: Parse input data.", "[IO]") {
  POLYQUANT_INPUT test_inp("../../tests/data/h2o_sto3glibrary/h2o.json");
  // Check that the fields exist don't check values. The calculation class
  // tests will do that.
  REQUIRE(test_inp.input_data.contains("molecule"));
  REQUIRE(test_inp.input_data["molecule"].contains("geometry"));
  REQUIRE(test_inp.input_data["molecule"].contains("symbols"));
  REQUIRE(test_inp.input_data["molecule"].contains("molecular_charge"));
  REQUIRE(test_inp.input_data["molecule"].contains("molecular_multiplicity"));

  REQUIRE(test_inp.input_data.contains("driver"));

  REQUIRE(test_inp.input_data.contains("model"));
  REQUIRE(test_inp.input_data["model"].contains("method"));
  REQUIRE(test_inp.input_data["model"].contains("basis"));

  REQUIRE(test_inp.input_data.contains("keywords"));
  REQUIRE(test_inp.input_data["keywords"].contains("mf_keywords"));
  REQUIRE(test_inp.input_data["keywords"].contains("pure"));
}
TEST_CASE("IO: Classical symbol to mass conversion.", "[IO]") {
  REQUIRE(atom_symb_to_mass("H") == 1.00782503223);
  REQUIRE(atom_symb_to_mass("X") == 0.0);
  REQUIRE(atom_symb_to_mass("electron") == 0.0);
}
TEST_CASE("IO: Classical symbol to charge conversion.", "[IO]") {
  REQUIRE(atom_symb_to_num("H") == 1);
  REQUIRE(atom_symb_to_num("X") == 0);
  REQUIRE(atom_symb_to_num("electron") == 0);
}
TEST_CASE("IO: Quantum symbol to spin conversion.", "[IO]") {
  REQUIRE(quantum_symb_to_spin("H") == 0.5);
  REQUIRE(quantum_symb_to_spin("X") == 0.5);
  REQUIRE(quantum_symb_to_spin("electron") == 0.5);
}
TEST_CASE("IO: Quantum symbol to mass conversion.", "[IO]") {
  REQUIRE(quantum_symb_to_mass("H") == 1.00782503223);
  REQUIRE(quantum_symb_to_mass("X") == 0.0);
  REQUIRE(quantum_symb_to_mass("electron") == 1.0);
}
TEST_CASE("IO: Quantum symbol to charge conversion.", "[IO]") {
  REQUIRE(quantum_symb_to_charge("H") == 1);
  REQUIRE(quantum_symb_to_charge("X") == 0);
  REQUIRE(quantum_symb_to_charge("electron") == -1);
}

// TODO test hdf5 dumping
