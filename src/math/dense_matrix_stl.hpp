#include <io/io.hpp>
#include <math/matrix.hpp>
#include <vector>

#ifndef PYCI_DENSE_MATRIX_STL_H
#define PYCI_DENSE_MATRIX_STL_H
namespace selci {

/**
 * @brief A class to represent a dense matrix using the STL
 * Row major
 */
template <typename T> class DENSE_MATRIX_STL : public MATRIX {
public:
  DENSE_MATRIX_STL(size_t n, size_t m) : MATRIX(n, m) { this->resize(n, m); };
  T &operator()(const size_t &i, const size_t &j) { return data[i * N + j]; };
  T operator()(const size_t &i, const size_t &j) const {
    return data[i * N + j];
  };

  T get_data() const { return &data.data(); };
  std::pair<size_t, size_t> size() {
    std::pair<size_t, size_t> size(N, M);
    return size;
  };
  void resize(size_t n, size_t m) {
    N = n;
    M = m;
    data.resize(n * m);
  }
  void fill(const T &fill_val) {
    std::fill(data.begin(), data.end(), fill_val);
  };

private:
  size_t N = 0;
  size_t M = 0;
  std::vector<T> data;
};
} // namespace selci
#endif
