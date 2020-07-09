#include <math/dense_matrix.hpp>
#include <math/dense_vector.hpp>

#include <blas.hh>
#include <lapack.hh>

#include <complex>
#include <cstdint>

#ifndef PYCI_DENSE_MATRIX_OPERATIONS_H
#define PYCI_DENSE_MATRIX_OPERATIONS_H
namespace selci {

int symmetric_matrix_triangular_idx(const int &i, const int &j) {
  if (i > j) {
    return ((i * (i + 1)) / 2) + j;
  } else {
    return ((j * (j + 1)) / 2) + i;
  }
}
/**
 * @brief define matrix operations
 *
 */
template <typename T>
void eigenvalues_and_eigenvectors(DENSE_MATRIX<T> &input_matrix,
                                  DENSE_VECTOR<T> &eigenvalues,
                                  DENSE_MATRIX<T> &eigenvectors) {
  auto shape = input_matrix.shape();
  int64_t n = shape.first;
  // resize and zero out eigenvalues and eigenvectors
  eigenvalues.resize(n);
  eigenvalues.fill(0.0);
  eigenvectors.resize(n, n);
  eigenvectors.fill(0.0);

  int64_t lda = n;
  int64_t ldvl = n;

  T *dummy_eigenvector;
  int64_t ldvr = 0;
  // a general matrix has complex eigenvalues
  // we only need real right now so we will take real
  // TODO remove this dummy
  std::vector<std::complex<T>> dummy_eigenvalues;

  // default to right eigenvectors
  int info =
      lapack::geev(lapack::Job::NoVec, lapack::Job::Vec, n,
                   input_matrix.get_data(), lda, dummy_eigenvalues.data(),
                   eigenvectors.get_data(), dummy_eigenvector, ldvr);
  // TODO check info
  for (auto i = 0; i < n; i++) {
    eigenvalues(i) = dummy_eigenvalues[i].real();
  }

  /*

    size_t upper_triangle_size = (n * (n + 1)) / 2;
    upper_triangle.resize(upper_triangle_size);
    for (auto i = 0; i < n; i++) {
      for (auto j = i; j < n; j++) {
        upper_triangle(symmetric_matrix_triangular_idx(i, j)) =
            input_matrix(i, j);
      }
    }
    // TODO make this an input parameter
    double tolerance = 1.0e-6;
    lapack_int *m;
    double *w;
    double *z;
    lapack_int ldz = n;
    lapack_int *isuppz;
    lapack_int info = LAPACKE_dsyevr(LAPACK_ROW_MAJOR, 'V', 'A', 'U', n,
                                     upper_triangle.get_data(), n, 0.0, 0.0, 0,
    0, tolerance, m, w, z, ldz, isuppz); eigenvalues.resize(n);
    eigenvectors.resize(n, n);
    for (int i = 0; i < n; i++) {
      eigenvalues(i) = w[i];
      for (int j = i; j < n; j++) {
        eigenvectors(i, j) = z[symmetric_matrix_triangular_idx(i, j)];
        eigenvectors(j, i) = z[symmetric_matrix_triangular_idx(i, j)];
      }
    }
    */
}
/**
 * @brief define matrix operations
 *
 */
template <typename T>
void mm_dot(DENSE_MATRIX<T> &A, DENSE_MATRIX<T> &B, DENSE_MATRIX<T> &output,
            bool trans_A = false, bool trans_B = false) {
  auto layout = blas::Layout::ColMajor;
  auto TRANSA = trans_A ? blas::Op::Trans : blas::Op::NoTrans;
  auto TRANSB = trans_B ? blas::Op::Trans : blas::Op::NoTrans;

  auto A_shape = A.shape();
  auto B_shape = B.shape();

  int64_t m = A_shape.first;
  int64_t n = B_shape.first;
  int64_t k = A_shape.second;

  int64_t lda = trans_A ? k : m;
  int64_t ldb = trans_B ? k : n;
  int64_t ldc = n;

  double alpha = 1.0;
  double beta = 0.0;

  output.resize(m, n);
  output.fill(0.0);

  blas::gemm(&layout, &TRANSA, &TRANSB, m, n, k, alpha, A.get_data(), lda,
             B.get_data(), beta, output.get_data(), ldc);

} // namespace selci
#endif
