#ifndef PYCI_DENSE_MATRIX_EIGEN_H
#define PYCI_DENSE_MATRIX_EIGEN_H
#include <Eigen/Dense>
#include <math/matrix.hpp>
namespace selci {

/**
 * @brief A class to represent a dense matrix using the STL
 * Row major
 */
template <typename T> class DENSE_MATRIX : public MATRIX {
public:
  DENSE_MATRIX() : MATRIX(){};
  DENSE_MATRIX(size_t rows, size_t cols) : MATRIX(rows, cols) {
    this->resize(rows, cols);
  };
  DENSE_MATRIX(DENSE_MATRIX<T> const &other) {
    auto shape = other.shape();
    this->resize(shape.first, shape.second);
    // this->data = other.get_data_vec();
    this->set_data_vec(other.get_data_vec());
  };

  T &operator()(const size_t &i, const size_t &j) { return data(i, j); };
  T operator()(const size_t &i, const size_t &j) const { return data(i, j); };

  void operator+=(DENSE_MATRIX<T> const &other) {
    auto this_shape = this->shape();
    auto other_shape = other.shape();
    assert(this_shape.first == other_shape.first);
    assert(this_shape.second == other_shape.second);
    data = data.array() + other.get_data_vec().array();
  };
  void operator-=(DENSE_MATRIX<T> const &other) {
    auto this_shape = this->shape();
    auto other_shape = other.shape();
    assert(this_shape.first == other_shape.first);
    assert(this_shape.second == other_shape.second);
    data = data.array() - other.get_data_vec().array();
  };
  void operator*=(DENSE_MATRIX<T> const &other) {
    auto this_shape = this->shape();
    auto other_shape = other.shape();
    assert(this_shape.first == other_shape.first);
    assert(this_shape.second == other_shape.second);
    data = data.array() * other.get_data_vec().array();
  };
  void operator/=(DENSE_MATRIX<T> const &other) {
    auto this_shape = this->shape();
    auto other_shape = other.shape();
    assert(this_shape.first == other_shape.first);
    assert(this_shape.second == other_shape.second);
    data = data.array() / other.get_data_vec().array();
  };
  void operator^=(T const &val) { data = data.array().pow(val); };
  void operator*=(T const val) { this->data *= val; };
  void operator/=(T const val) { this->data /= val; };
  void operator+=(T const val) { this->data += val; };
  void operator-=(T const val) { this->data -= val; };

  void operator=(DENSE_MATRIX<T> const &other) {
    auto shape = other.shape();
    this->resize(shape.first, shape.second);
    data = other.get_data_vec();
  };

  DENSE_MATRIX<T> &operator+(DENSE_MATRIX<T> &other) {
    DENSE_MATRIX<T> result;
    result = *this;
    result += other;
    return result;
  };

  DENSE_MATRIX<T> &operator-(DENSE_MATRIX<T> &other) {
    DENSE_MATRIX<T> result;
    result = *this;
    result -= other;
    return result;
  };

  DENSE_MATRIX<T> &operator*(DENSE_MATRIX<T> &other) {
    DENSE_MATRIX<T> result;
    result = *this;
    result *= other;
    return result;
  };

  DENSE_MATRIX<T> &operator/(DENSE_MATRIX<T> &other) {
    DENSE_MATRIX<T> result;
    result = *this;
    result /= other;
    return result;
  };

  DENSE_MATRIX<T> &operator^(const T &val) {
    DENSE_MATRIX<T> result;
    result = *this;
    result ^= val;
    return result;
  };

  DENSE_MATRIX<T> &operator+(T &other) {
    DENSE_MATRIX<T> result;
    result = *this;
    result += other;
    return result;
  };

  DENSE_MATRIX<T> &operator-(T &other) {
    DENSE_MATRIX<T> result;
    result = *this;
    result -= other;
    return result;
  };

  DENSE_MATRIX<T> &operator*(T &other) {
    DENSE_MATRIX<T> result;
    result = *this;
    result *= other;
    return result;
  };

  DENSE_MATRIX<T> &operator/(T &other) {
    DENSE_MATRIX<T> result;
    result = *this;
    result /= other;
    return result;
  };

  void set_data_vec(
      const Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> other_data) {
    data = other_data;
    ROWS = data.rows();
    COLS = data.cols();
  };
  Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> &get_data_vec() {
    return data;
  };
  Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> get_data_vec() const {
    return data;
  };
  T *get_data() { return data.data(); };

  std::pair<size_t, size_t> shape() const {
    std::pair<size_t, size_t> ret_shape(ROWS, COLS);
    return ret_shape;
  };
  void resize(size_t rows, size_t cols) {
    ROWS = rows;
    COLS = cols;
    data.resize(rows, cols);
  };
  void fill(const T &fill_val) { data.setConstant(ROWS, COLS, fill_val); };
  T &sum() {
    T result = data.sum();
    return result;
  };

private:
  size_t ROWS = 0;
  size_t COLS = 0;
  Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> data;
};
} // namespace selci
#endif
