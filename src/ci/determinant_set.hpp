#ifndef POLYQUANT_DETSET_H
#define POLYQUANT_DETSET_H
#include "basis/basis.hpp"
#include "integral/integral.hpp"
#include "io/io.hpp"
#include <bit>
#include <bitset>
#include <string>

namespace polyquant {
template<typename T>
class POLYQUANT_DETSET {
public:
  POLYQUANT_DETSET() = default;

  int num_excitation(std::vector<T> &Di,
                     std::vector<T> &Dj);
  std::vector<T> create_det(std::vector<int> &occ, 
                     std::vector<T> &Dj);
  std::vector<int>
  get_holes(std::vector<T> &Di,
            std::vector<T> &Dj);
  std::vector<int>
  get_parts(std::vector<T> &Di,
            std::vector<T> &Dj);

  /**
   * @brief determinant set (number of quantum particles, alpha/beta)
   *
   */
  std::vector<std::vector<T>> dets;
  int max_orb;
};
} // namespace polyquant
#endif
