#ifndef POLYQUANT_OUTPUT_DAVIDSON_LOGGING_H
#define POLYQUANT_OUTPUT_DAVIDSON_LOGGING_H

/**
 * @file davidson_logging.hpp
 * @brief Spectra Davidson iteration logging helpers.
 */
#include "io/timer.hpp"
#include <Eigen/Core>
#include <Eigen/SparseCore>
#include <Spectra/DavidsonSymEigsSolver.h>
#include <Spectra/MatOp/DenseSymMatProd.h>
#include <Spectra/MatOp/SparseSymMatProd.h>
#include <chrono>
#include <fmt/format.h>
#include <iomanip>
#include <iostream>
#include <type_traits>

namespace polyquant {

/**
 * @brief Spectra logger that prints Davidson iteration summaries.
 *
 * The logger owns an internal `POLYQUANT_TIMER` used to time each iteration.
 * It can also add a constant shift back to the reported eigenvalues so printed
 * values match the physical Hamiltonian rather than the shifted matrix solved
 * internally.
 *
 * @tparam Scalar Scalar type used by the Davidson solver.
 * @tparam Vector Spectra vector type.
 */
template <typename Scalar, typename Vector> class DavidsonDerivedLogger : public Spectra::LoggerBase<Scalar, Vector> {
  // This derived logging class could have some reference to an ostream or call to another class that wraps ostreams etc.
public:
  /**
   * @brief Timer used to measure one Davidson iteration at a time.
   */
  POLYQUANT_TIMER runtime = POLYQUANT_TIMER();
  /**
   * @brief Constant spectral shift added back when printing eigenvalues.
   */
  Scalar constant_shift = 0.0;
  /**
   * @brief Construct a logger with no spectral shift.
   */
  DavidsonDerivedLogger() { runtime.set_print_on_destruction(false); };
  /**
   * @brief Construct a logger with a known constant spectral shift.
   *
   * @param constant_shift Shift to add back to printed eigenvalues.
   */
  DavidsonDerivedLogger(Scalar constant_shift) {
    runtime.set_print_on_destruction(false);
    this->set_constant_shift(constant_shift);
  };
  /**
   * @brief Update the constant shift used for printed eigenvalues.
   *
   * @param constant_shift Shift to add back to reported eigenvalues.
   */
  void set_constant_shift(Scalar constant_shift) { this->constant_shift = constant_shift; };

  /**
   * @brief Spectra callback invoked at the start of one Davidson iteration.
   */
  inline void call_iteration_start() override final { runtime.set_start_time(); };
  /**
   * @brief Spectra callback invoked at the end of one Davidson iteration.
   *
   * This prints the iteration number, convergence count, subspace size,
   * iteration runtime, current eigenvalues, convergence flags, and residuals.
   *
   * @param data Iteration snapshot provided by Spectra.
   */
  inline void call_iteration_end(const Spectra::IterationData<Scalar, Vector> &data) override final {
    runtime.set_end_time();
    std::string pad(7, ' ');
    std::string divider(95, '-');
    std::string middivider(81, '-');
    middivider = fmt::format("{:^95}", middivider);
    Polyquant_cout(divider);
    std::string line;
    line = pad;
    line += fmt::format("{:<33}:{:>33d}", "Iteration", data.iteration);
    Polyquant_cout(line);
    line = pad;
    line += fmt::format("{:<33}:{:>33d}", "Number of converged eigenvalues", data.number_of_converged);
    Polyquant_cout(line);
    line = pad;
    line += fmt::format("{:<33}:{:>33d}", "Size of subspace", data.subspace_size);
    Polyquant_cout(line);
    line = pad;
    auto duration = runtime.get_duration();
    auto d = std::chrono::duration_cast<std::chrono::days>(duration);
    duration -= d;
    auto h = std::chrono::duration_cast<std::chrono::hours>(duration);
    duration -= h;
    auto m = std::chrono::duration_cast<std::chrono::minutes>(duration);
    duration -= m;
    auto s = std::chrono::duration_cast<std::chrono::seconds>(duration);
    duration -= s;
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(duration);
    duration -= ms;
    auto us = std::chrono::duration_cast<std::chrono::microseconds>(duration);
    duration -= us;
    auto ns = std::chrono::duration_cast<std::chrono::nanoseconds>(duration);
    duration -= ns;
    std::string rt = fmt::format("{}d:{}h:{}m:{}s:{}ms:{}us:{}ns", d.count(), h.count(), m.count(), s.count(), ms.count(), us.count(), ns.count());
    line += fmt::format("{:<33}:{:>33}", "Iteration time", rt);
    Polyquant_cout(line);
    Polyquant_cout(middivider);
    line = pad;
    line += fmt::format("{:^27}{:^27}{:^27}", "Current Eigenvalue", "Converged?", "Residue");
    Polyquant_cout(line);
    Polyquant_cout(middivider);
    for (int i = 0; i < data.current_eigenvalues.size(); i++) {
      line = pad;
      auto curr_eig = fmt::format("{:>20.10f}", data.current_eigenvalues[i] + constant_shift);
      auto curr_eig_conv = fmt::format("{:^20}", data.current_eig_converged[i]);
      auto res = fmt::format("{:>20.10f}", data.residues[i]);
      line += fmt::format("{:<27}{:<27}{:<27}", curr_eig, curr_eig_conv, res);
      Polyquant_cout(line);
    }
    Polyquant_cout(divider);
  };
};
} // namespace polyquant
#endif
