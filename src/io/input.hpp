#ifndef POLYQUANT_INPUTCLASS_H
#define POLYQUANT_INPUTCLASS_H
#include "io/timer.hpp"
#include "io/utils.hpp"
#include <Eigen/Dense>
#include <Eigen/Eigen>
#include <algorithm>
#include <cctype>
#include <chrono>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <libint2.hpp>       // IWYU pragma: keep
#include <nlohmann/json.hpp> // IWYU pragma: keep
#include <string>
#include <vector>
// TODO switch to #include <format> once it is supported
using json = nlohmann::json;

namespace polyquant {

/**
 * @brief A class to hold information parsed from a QCSchema json
 *
 */
class POLYQUANT_INPUT {
public:
  POLYQUANT_INPUT() = default;
  /**
   * @brief Construct a new polyquant input object using the parse_input
   * function.
   *
   * @param filename the file to parse.
   */
  POLYQUANT_INPUT(const std::string &filename);
  /**
   * @brief the function where a file is actually parsed.
   *
   * @param filename the file to parse.
   */
  void parse_input(const std::string &filename);
  /**
   * @brief the json object to store the input
   *
   */
  json input_data;
};
} // namespace polyquant
#endif
