/**
 * @file polyquant.cpp
 * @brief Command-line entry point for the `polyquant` executable.
 *
 * The executable accepts `-i/--input <file>` to run a single Polyquant JSON
 * job and `-h/--help` to print usage. A successful run initializes Eigen
 * threading, prints the program banner, constructs a
 * `POLYQUANT_CALCULATION`, and dispatches the requested workflow, which may
 * read the input file and produce text, HDF5, FCIDUMP, MOLDEN, or other output
 * files depending on the selected model and keywords.
 *
 * User-facing failures are reported through `PolyquantException`; the process
 * then exits with status code 1.
 */
// LCOV_EXCL_START
#if !defined(DOXYGEN_SHOULD_SKIP_THIS)

// LAPACKE + BOOST conflict copied from https://github.com/xianyi/OpenBLAS/issues/1992 and https://github.com/ValeevGroup/BTAS/commit/f8d095eada6f694408201d7f66a52b9740cdf24e
#include <complex>
#ifndef lapack_complex_float
#define lapack_complex_float std::complex<float>
#endif
#ifndef lapack_complex_double
#define lapack_complex_double std::complex<double>
#endif

#define EIGEN_USE_BLAS
#define EIGEN_USE_LAPACKE
#include <Eigen/Core>
#include <calculation/calculation.hpp>
#include <cxxopts.hpp>
#include <io/utils.hpp>
#include <string>

using namespace polyquant;

int main(int argc, char **argv) {
  try {
    Eigen::initParallel();
    // The CLI intentionally supports only one explicit input file at a time;
    // additional unmatched arguments are treated as a usage error.
    cxxopts::Options options("polyquant", "polyquant -- A software package for nonrelativistically treating multiple interacting quantum species.");
    options.add_options()("i,input", "input filename", cxxopts::value<std::string>())("h,help", "Print usage");
    options.allow_unrecognised_options();
    auto input_parameters = options.parse(argc, argv);

    if (input_parameters.unmatched().size() > 0) {
      Polyquant_cout(options.help());
      APP_ABORT("Too many input files provided!");
    } else if (input_parameters.count("help")) {
      Polyquant_cout(options.help());
    } else if (input_parameters.count("input")) {
      if (input_parameters.count("input") == 1) {
        POLYQUANT_TIMER timer("TOTAL RUNTIME");
        Polyquant_dump_program_header();
        std::string filename = input_parameters["input"].as<std::string>();
        POLYQUANT_CALCULATION calc = POLYQUANT_CALCULATION(filename);
        calc.run();
      } else {
        Polyquant_cout(options.help());
        APP_ABORT("Too many input files provided!");
      }
    } else {
      Polyquant_cout(options.help());
    }
  } catch (const PolyquantException &) {
    return 1;
  }
}
#endif // DOXYGEN_SHOULD_SKIP_THIS
// LCOV_EXCL_STOP
