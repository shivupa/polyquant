#ifndef PYCI_DENSE_VECTOR_STL_H
#define PYCI_DENSE_VECTOR_STL_H
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
  T &operator()(const size_t &i) { return data[i]; };
  T operator()(const size_t &i) const { return data[i]; };

  std::vector<T> &get_data_vec() { return data; };
  std::vector<T> get_data_vec() const { return data; };
  T *get_data() { return data.data(); };
  size_t size() { return N; };
  void resize(size_t n) {
    N = n;
    data.resize(n);
  };
  void fill(const T &fill_val) {
    std::fill(data.begin(), data.end(), fill_val);
  };

private:
  size_t N = 0;
  std::vector<T> data;
};
} // namespace selci
#endif
