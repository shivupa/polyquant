#include <io/io.hpp>

#ifndef PYCI_MATRIX_H
#define PYCI_MATRIX_H
namespace selci {

/**
 * @brief A class to represent a matrix
 *
 */
class MATRIX {
public:
  MATRIX() = default;
  /**
   * @brief Construct
   *
   * @param
   */
  MATRIX(size_t n, size_t m) {
    N = n;
    M = m;
  }

private:
  size_t N;
  size_t M;
};
} // namespace selci
#endif
