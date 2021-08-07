#include "io/input.hpp"

using namespace polyquant;

namespace polyquant {
POLYQUANT_INPUT::POLYQUANT_INPUT(const std::string &filename) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->parse_input(filename);
}

void POLYQUANT_INPUT::parse_input(const std::string &filename) {
  std::ifstream inputfile(filename);
  this->input_data = json::parse(inputfile);

  Polyquant_cout("Reading Input File: " + filename);

  Polyquant_cout("Input file: ");
  Polyquant_dump_json(this->input_data);
  Polyquant_cout("End input file");
}
} // namespace polyquant
