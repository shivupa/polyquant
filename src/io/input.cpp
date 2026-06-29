/**
 * @file input.cpp
 * @brief Implementation of JSON input loading and relative-path rewriting.
 */

#include "io/input.hpp"

using namespace polyquant;

namespace polyquant {
POLYQUANT_INPUT::POLYQUANT_INPUT(const std::string &filename) {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  this->parse_input(filename);
}

void POLYQUANT_INPUT::parse_input(const std::string &filename) {
  const auto input_path = std::filesystem::absolute(filename);
  std::ifstream inputfile(filename);
  if (!inputfile) {
    APP_ABORT("Could not open input file: " + filename);
  }
  // Parse first, then normalize embedded filenames against the directory that
  // contains the top-level input file so downstream loaders can use direct paths.
  this->input_data = json::parse(inputfile);
  this->resolve_relative_filenames(this->input_data, input_path.parent_path());

  Polyquant_cout("Reading Input File: " + filename);

  Polyquant_cout("Input file: ");
  Polyquant_dump_json(this->input_data);
  Polyquant_cout("End input file");
}

void POLYQUANT_INPUT::resolve_relative_filenames(json &node, const std::filesystem::path &base_path) {
  // Only keys literally named "filename" are rewritten; all other strings are
  // left untouched even if they happen to look like paths.
  if (node.is_object()) {
    for (auto &[key, value] : node.items()) {
      if (key == "filename" && value.is_string()) {
        std::filesystem::path file_path = value.get<std::string>();
        if (file_path.is_relative()) {
          value = (base_path / file_path).lexically_normal().string();
        }
      } else {
        resolve_relative_filenames(value, base_path);
      }
    }
  } else if (node.is_array()) {
    for (auto &value : node) {
      resolve_relative_filenames(value, base_path);
    }
  }
}
} // namespace polyquant
