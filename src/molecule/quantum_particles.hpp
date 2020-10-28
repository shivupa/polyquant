#include "io/io.hpp"
#include <iostream>
#include <libint2.hpp> // IWYU pragma: keep
#include <numeric>
#include <string>
#include <vector>

#ifndef POLYQUANT_QUANTUM_PARTICLE_SET_H
#define POLYQUANT_QUANTUM_PARTICLE_SET_H
namespace polyquant {
struct QUANTUM_PARTICLE_SET {
  double spin;
  double mass;
  double charge;
  double multiplicity;
  int num_parts;
  int num_parts_alpha;
  int num_parts_beta;
  std::vector<int> center_idx;
  bool exchange = true;
  bool electron_exchange = false;
  bool restricted =
      false; // if there is only 1 of a particle it should be unrestricted.
};
} // namespace polyquant
#endif
