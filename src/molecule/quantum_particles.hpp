#include <io/io.hpp>
#include <iostream>
#include <libint2.hpp> // IWYU pragma: keep
#include <numeric>
#include <string>
#include <vector>

#ifndef PYCI_QUANTUM_PARTICLE_SET_H
#define PYCI_QUANTUM_PARTICLE_SET_H
namespace selci {
struct QUANTUM_PARTICLE_SET {
  double spin;
  double mass;
  double charge;
  int num_parts;
  std::vector<int> center_idx;
  bool exchange = true;
  bool electron_exchange = false;
};
} // namespace selci
#endif
