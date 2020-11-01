#ifndef POLYQUANT_CLASSICAL_PARTICLE_SET_H
#define POLYQUANT_CLASSICAL_PARTICLE_SET_H
#include "io/io.hpp"
#include <iostream>
#include <libint2.hpp> // IWYU pragma: keep
#include <numeric>
#include <string>
#include <vector>

namespace polyquant {
struct CLASSICAL_PARTICLE_SET {
  // double spin; <- only quantum
  double mass;
  double charge;
  int num_parts;
  std::vector<int> center_idx;
  // bool exchange; <- only quantum
  // bool electron_exchange; <- only quantum
};
} // namespace polyquant
#endif
