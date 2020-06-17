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
  DENSE_MATRIX(size_t rows, size_t cols) : MATRIX(rows, cols) {
    this->resize(rows, cols);
  };
  DENSE_MATRIX(DENSE_MATRIX<T> &other) {
    auto shape = other.shape();
    this->resize(shape.first, shape.second);
    this->data = other.get_data_vec();
  };

  T &operator()(const size_t &i, const size_t &j) {
    return data[i * ROWS + j];
  };
  T operator()(const size_t &i, const size_t &j) const {
    return data[i * ROWS + j];
  };

  void operator+=(DENSE_MATRIX<T> &other) {
    auto this_shape = this->shape();
    auto other_shape = other.shape();
    assert(this_shape.first == other_shape.first);
    assert(this_shape.second == other_shape.second);
    auto other_vec = other.get_data_vec();
    std::transform(this->data.begin(), this->data.end(), other_vec.begin(),
                   this->data.begin(), std::plus<T>());
  };
  void operator-=(DENSE_MATRIX<T> &other) {
    auto this_shape = this->shape();
    auto other_shape = other.shape();
    assert(this_shape.first == other_shape.first);
    assert(this_shape.second == other_shape.second);
    auto other_vec = other.get_data_vec();
    std::transform(this->data.begin(), this->data.end(), other_vec.begin(),
                   this->data.begin(), std::minus<T>());
  };
  void operator*=(DENSE_MATRIX<T> &other) {
    auto this_shape = this->shape();
    auto other_shape = other.shape();
    assert(this_shape.first == other_shape.first);
    assert(this_shape.second == other_shape.second);
    auto other_vec = other.get_data_vec();
    std::transform(this->data.begin(), this->data.end(), other_vec.begin(),
                   this->data.begin(), std::multiplies<T>());
  };
  void operator/=(DENSE_MATRIX<T> &other) {
    auto this_shape = this->shape();
    auto other_shape = other.shape();
    assert(this_shape.first == other_shape.first);
    assert(this_shape.second == other_shape.second);
    auto other_vec = other.get_data_vec();
    std::transform(this->data.begin(), this->data.end(), other_vec.begin(),
                   this->data.begin(), std::divides<T>());
  };
  void operator^=(const T &val) {
    for (auto i : this->data) {
      i = std ::pow(i, val);
    }
  };
  void operator*=(const T &val) { this->data *= val; };
  void operator/=(const T &val) { this->data /= val; };
  void operator+=(const T &val) { this->data += val; };
  void operator-=(const T &val) { this->data -= val; };

  void operator=(DENSE_MATRIX<T> &other) {
    auto shape = other.shape();
    this->resize(shape.first, shape.second);
    auto other_vec = other.get_data_vec();
    this->data.assign(other_vec.begin(), other_vec.end());
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

  std::vector<T> &get_data_vec() { return data; };
  T *get_data() { return data.data(); };

  std::pair<size_t, size_t> shape() {
    std::pair<size_t, size_t> ret_shape(ROWS, COLS);
    return ret_shape;
  };
  void resize(size_t rows, size_t cols) {
    ROWS = rows;
    COLS = cols;
    data.resize(rows * cols);
  }
  void fill(const T &fill_val) {
    std::fill(data.begin(), data.end(), fill_val);
  };
  T &sum() {
    T result;
    for (auto &n : this->data) {
      result += n;
    }
    return result;
  };

private:
  size_t ROWS = 0;
  size_t COLS = 0;
  std::vector<T> data;
};
} // namespace selci
#endif
