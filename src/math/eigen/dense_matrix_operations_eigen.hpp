#ifndef PYCI_DENSE_MATRIX_OPERATIONS_EIGEN_H
#define PYCI_DENSE_MATRIX_OPERATIONS_EIGEN_H
#include <Eigen/Dense>
#include <math/dense_matrix.hpp>
#include <math/dense_vector.hpp>
namespace selci {

inline int symmetric_matrix_triangular_idx(const int &i, const int &j) {
  if (i > j) {
    return ((i * (i + 1)) / 2) + j;
  } else {
    return ((j * (j + 1)) / 2) + i;
  }
};
/**
 * @brief define matrix operations
 *
 */
template <typename T>
void eigenvalues_and_eigenvectors(DENSE_MATRIX<T> &input_matrix,
                                  DENSE_VECTOR<T> &eigenvalues,
                                  DENSE_MATRIX<T> &eigenvectors) {
  Eigen::SelfAdjointEigenSolver<
      Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic>>
      eigensolver(input_matrix.get_data_vec());
  //  if(eigensolver.info() != Eigen::Success){
  // todo abort here
  //}
  eigenvalues.set_data_vec(eigensolver.eigenvalues());
  eigenvectors.set_data_vec(eigensolver.eigenvectors());
};
/**
 * @brief define matrix operations
 *
 */
template <typename T>
void mm_dot(DENSE_MATRIX<T> &A, DENSE_MATRIX<T> &B, DENSE_MATRIX<T> &output,
            bool trans_A = false, bool trans_B = false) {
  if (trans_A && trans_B) {
    output.set_data_vec(A.get_data_vec().transpose() *
                        B.get_data_vec().transpose());
  } else if (trans_A) {
    output.set_data_vec(A.get_data_vec().transpose() * B.get_data_vec());
  } else if (trans_B) {
    output.set_data_vec(A.get_data_vec() * B.get_data_vec().transpose());
  } else {
    output.set_data_vec(A.get_data_vec() * B.get_data_vec());
  }
};
} // namespace selci
#endif
