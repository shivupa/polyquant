#include "io/io.hpp"
#include <doctest/doctest.h>

using namespace polyquant;

TEST_CASE("IO: Parse input data.") {
  POLYQUANT_INPUT test_inp("../../tests/data/h2o_sto3glibrary/h2o.json");
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
  CHECK(test_inp.input_data["keywords"].contains("mf_keywords"));
  CHECK(test_inp.input_data["keywords"].contains("pure"));
}
TEST_CASE("IO: Classical symbol to mass conversion.") {
  CHECK(atom_symb_to_mass("H") == 1.00782503223);
  CHECK(atom_symb_to_mass("X") == 0.0);
  CHECK(atom_symb_to_mass("electron") == 0.0);
}
TEST_CASE("IO: Classical symbol to charge conversion.") {
  CHECK(atom_symb_to_num("H") == 1);
  CHECK(atom_symb_to_num("X") == 0);
  CHECK(atom_symb_to_num("electron") == 0);
}
TEST_CASE("IO: Quantum symbol to spin conversion.") {
  CHECK(quantum_symb_to_spin("H") == 0.5);
  CHECK(quantum_symb_to_spin("X") == 0.5);
  CHECK(quantum_symb_to_spin("electron") == 0.5);
}
TEST_CASE("IO: Quantum symbol to mass conversion.") {
  CHECK(quantum_symb_to_mass("H") == 1.00782503223);
  CHECK(quantum_symb_to_mass("X") == 0.0);
  CHECK(quantum_symb_to_mass("electron") == 1.0);
}
TEST_CASE("IO: Quantum symbol to charge conversion.") {
  CHECK(quantum_symb_to_charge("H") == 1);
  CHECK(quantum_symb_to_charge("X") == 0);
  CHECK(quantum_symb_to_charge("electron") == -1);
}
// TODO test hdf5 dumping
