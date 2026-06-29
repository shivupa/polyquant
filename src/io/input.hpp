#ifndef POLYQUANT_INPUTCLASS_H
#define POLYQUANT_INPUTCLASS_H

/**
 * @file input.hpp
 * @brief Input-file loading and JSON path normalization helpers.
 */
#include "io/timer.hpp"
#include "io/utils.hpp"
#include <Eigen/Dense>
#include <Eigen/Eigen>
#include <algorithm>
#include <cctype>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <libint2.hpp>       // IWYU pragma: keep
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <string>
#include <vector>
// TODO switch to #include <format> once it is supported
/**
 * @brief Convenience alias for the JSON type used throughout Polyquant input parsing.
 */
using json = nlohmann::json;

namespace polyquant {

/**
 * @brief Owns the parsed Polyquant JSON input tree.
 *
 * The input object reads a single JSON file into `input_data`, then rewrites
 * relative values stored under keys named `filename` so they resolve against
 * the directory containing the original input file. The resulting JSON tree is
 * shared across the rest of the calculation stack.
 */
class POLYQUANT_INPUT {
public:
  POLYQUANT_INPUT() = default;
  /**
   * @brief Construct and parse a Polyquant JSON input file.
   *
   * @param filename Path to the JSON input file.
   */
  POLYQUANT_INPUT(const std::string &filename);
  /**
   * @brief Read, parse, normalize, and echo the input file.
   *
   * Side effects include filesystem reads, JSON parsing, path rewriting for
   * nested `filename` fields, and printing the normalized JSON document. The
   * method aborts if the file cannot be opened or if JSON parsing throws.
   *
   * @param filename Path to the JSON input file.
   */
  void parse_input(const std::string &filename);
  /**
   * @brief Rewrite relative `filename` entries inside a JSON subtree.
   *
   * Objects are traversed recursively. Any string-valued field named
   * `filename` is converted to a lexically-normal absolute-like path rooted at
   * `base_path` unless it is already absolute.
   *
   * @param node JSON object or array to rewrite in place.
   * @param base_path Directory containing the top-level input file.
   */
  void resolve_relative_filenames(json &node, const std::filesystem::path &base_path);
  /**
   * @brief Parsed and normalized input JSON tree.
   */
  json input_data;
};
} // namespace polyquant
#endif
