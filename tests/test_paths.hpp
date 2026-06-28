#ifndef POLYQUANT_TEST_PATHS_HPP
#define POLYQUANT_TEST_PATHS_HPP

#include <string>

inline std::string TestDataPath(const std::string &relative_path) { return std::string(POLYQUANT_TEST_DATA_DIR) + "/" + relative_path; }

#endif
