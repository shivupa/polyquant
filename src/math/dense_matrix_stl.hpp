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
template <typename T> class DENSE_MATRIX : public MATRIX {
public:
  DENSE_MATRIX() : MATRIX(){};
  DENSE_MATRIX(size_t n, size_t m) : MATRIX(n, m) { this->resize(n, m); };
  T &operator()(const size_t &i, const size_t &j) { return data[i * N + j]; };
  T operator()(const size_t &i, const size_t &j) const {
    return data[i * N + j];
  };

  void operator+=(const DENSE_MATRIX<T>& other) const {
    assert(other.shape() == this->shape());
    auto other_vec = other.get_data_vec();
    std::transform(this->data.begin( ), this->data.end( ), other_vec.begin( ), this->data.begin( ),std::plus<T>( ));
  };


  std::vector<T> &get_data_vec() { return &data; };
  T *get_data() { return data.data(); };

  std::pair<size_t, size_t> shape() {
    std::pair<size_t, size_t> shape(N, M);
    return shape;
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
