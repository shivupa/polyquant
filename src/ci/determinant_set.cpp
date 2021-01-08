#ifndef POLYQUANT_DETSET_H
#define POLYQUANT_DETSET_H
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include "molecule/molecule.hpp"
#include "molecule/quantum_particles.hpp"
#include <libint2/chemistry/sto3g_atomic_density.h>
#include <libint2/diis.h>
#include <string>

namespace polyquant {
template<typename T>

int POLYQUANT_DETSET::num_excitation(
      std::vector<std::vector<T>> &Di,
      std::vector<T> &Dj) {
    int excitation_degree = 0;
    for (auto spin = 0; spin < 2; spin++) {
      auto i_spin_idx = spin % Di.size();
      auto j_spin_idx = spin % Dj.size();
      for (auto i = 0; i < Di[i_spin_idx].size(); i++) {
        excitation_degree +=
            std::popcount(Di[i_spin_idx][i] ^ Dj[j_spin_idx][i])
      }
    }
    return excitation_degree / 2;
}

} // namespace polyquant
#endif
