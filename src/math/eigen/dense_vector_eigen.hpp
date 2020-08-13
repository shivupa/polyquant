#ifndef PYCI_DENSE_VECTOR_EIGEN_H
#define PYCI_DENSE_VECTOR_EIGEN_H
#include <Eigen/Dense>
#include <math/vector.hpp>
namespace selci {

/**
 * @brief A class to represent a dense vector using the STL
 * Row major
 */
template <typename T> class DENSE_VECTOR : public VECTOR {
public:
  DENSE_VECTOR() : VECTOR(){};
  DENSE_VECTOR(size_t n) : VECTOR(n) { this->resize(n); };
  T &operator()(const size_t &i) { return data(i); };
  T operator()(const size_t &i) const { return data(i); };

  void set_data_vec(const Eigen::Matrix<T, Eigen::Dynamic, 1> other_data) {
    data = other_data;
  };
  Eigen::Matrix<T, Eigen::Dynamic, 1> &get_data_vec() { return data; };
  Eigen::Matrix<T, Eigen::Dynamic, 1> get_data_vec() const { return data; };
  T *get_data() { return data.data(); };
  size_t size() { return N; };
  void resize(size_t n) {
    N = n;
    data.resize(n);
  };
  void fill(const T &fill_val) { data.setConstant(N, fill_val); };

private:
  size_t N = 0;
  Eigen::Matrix<T, Eigen::Dynamic, 1> data;
};
} // namespace selci
#endif
