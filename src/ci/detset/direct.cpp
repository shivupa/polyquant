
#include "ci/determinant_set.hpp"

using namespace polyquant;

template <typename T>
Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> POLYQUANT_DETSET<T>::operator*(const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &mat_in) const {
  auto function = __PRETTY_FUNCTION__;
  POLYQUANT_TIMER timer(function);
  Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> output;
  output.resize(this->rows(), mat_in.cols());
  output.setZero();
  if (slow_diag == true) {
    Polyquant_cout("Using slow sigma");
    create_sigma_slow(output, mat_in);
  } else {
    create_sigma(output, mat_in);
  }
  return output;
}

template <typename T>
void POLYQUANT_DETSET<T>::create_sigma(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                       const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {
  auto num_parts = this->input_integral->input_molecule->quantum_particles.size();
  if (num_parts == 1) {
    sigma_one_species(sigma, C);
  } else if (num_parts == 2) {
    sigma_two_species(sigma, C);
  } else {
    std::stringstream ss;
    ss << "Sigma vector building not supported for " << num_parts << " unique quantum particles." << std::endl;
    APP_ABORT(ss.str());
  }
}

template <typename T>
void POLYQUANT_DETSET<T>::create_sigma_slow(Eigen::Ref<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> sigma,
                                            const Eigen::Ref<const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>> &C) const {
  // Cij = Aik Bkj
  for (auto i = 0; i < this->N_dets; i++) {
    for (auto j = 0; j < C.cols(); j++) {
      auto reduced_val = 0.0;
#pragma omp parallel for reduction(+ : reduced_val)
      for (auto k = 0; k < this->N_dets; k++) {
        reduced_val += this->Slater_Condon(i, k) * C(k, j);
      }
      sigma(i, j) = reduced_val;
    }
  }
}

template class POLYQUANT_DETSET<uint64_t>;
