#include <io/io.hpp>

#ifndef PYCI_VECTOR_H
#define PYCI_VECTOR_H
namespace selci {

/**
 * @brief A class to represent a matrix
 *
 */
class VECTOR {
public:
  VECTOR() = default;
  /**
   * @brief Construct
   *
   * @param
   */
  VECTOR(size_t n) { N = n; }

private:
  size_t N;
};
} // namespace selci
#endif
