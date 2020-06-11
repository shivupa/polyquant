#include <io/io.hpp>

#ifndef PYCI_DENSE_VECTOR_H
#define PYCI_DENSE_VECTOR_H
namespace selci {
/**
 * @brief chooses the  default vector type
 *
 */
#ifdef PYCI_USE_DENSE_VECTOR_STL
#include <math/dense_vector_stl.hpp>
typedef DENSE_VECTOR_STL DENSE_VECTOR;
#endif
} // namespace selci
#endif
