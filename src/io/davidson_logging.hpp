#ifndef POLYQUANT_OUTPUT_DAVIDSON_LOGGING_H
#define POLYQUANT_OUTPUT_DAVIDSON_LOGGING_H
#include <Eigen/Core>
#include <Eigen/SparseCore>
#include <Spectra/DavidsonSymEigsSolver.h>
#include <Spectra/MatOp/DenseSymMatProd.h>
#include <Spectra/MatOp/SparseSymMatProd.h>
#include <iomanip>
#include <iostream>
#include <type_traits>

namespace polyquant {

// Derived Logger
template <typename Scalar, typename Vector> class DavidsonDerivedLogger : public Spectra::LoggerBase<Scalar, Vector> {
  // This derived logging class could have some reference to an ostream or call to another class that wraps ostreams etc.
public:
  DavidsonDerivedLogger(){};
  inline void iteration_log(const Spectra::IterationData<Scalar, Vector> &data) override final {
    std::cout << "                                                                                            " << std::endl;
    std::cout << "    Iteration                       :   " << data.iteration << std::endl;
    std::cout << "    Number of converged eigenvalues :   " << data.number_of_converged << std::endl;
    std::cout << "    Size of subspace                :   " << data.subspace_size << std::endl;
    std::cout << "    ------------------------------------------------------------------------              " << std::endl;
    std::cout << "       " << std::setw(20) << "Current Eigenvalue" << std::setw(20) << "Converged?" << std::setw(20) << "Residue" << std::endl;
    std::cout << "    ------------------------------------------------------------------------              " << std::endl;
    for (int i = 0; i < data.current_eigenvalues.size(); i++) {
      std::cout << "       " << std::setw(20) << data.current_eigenvalues[i] << std::setw(20) << data.current_eig_converged[i] << std::setw(20) << data.residues[i] << std::endl;
    }
    std::cout << "                                                                                            " << std::endl;
  };
};
} // namespace polyquant
#endif
