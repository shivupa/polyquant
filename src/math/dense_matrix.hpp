#include <io/io.hpp>

#ifndef PYCI_DENSE_MATRIX_H
#define PYCI_DENSE_MATRIX_H
namespace selci {
/**
 * @brief chooses the  default matrix type
 *
 */
#include <math/dense_matrix_stl.hpp>
typedef DENSE_MATRIX_STL DENSE_MATRIX;
} // namespace selci
#endif
