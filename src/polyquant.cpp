// LCOV_EXCL_START
#if !defined(DOXYGEN_SHOULD_SKIP_THIS)
#define EIGEN_USE_MKL_ALL
#include <Eigen/Core>
#include <calculation/calculation.hpp>
#include <cxxopts.hpp>
#include <string>

using namespace polyquant;

int main(int argc, char **argv) {
  POLYQUANT_TIMER timer("TOTAL RUNTIME");
  Eigen::initParallel();
  cxxopts::Options options("polyquant", "Multiple quantum particles.");
  options.add_options()("i,input", "input filename",
                        cxxopts::value<std::string>())("h,help", "Print usage");
  auto input_parameters = options.parse(argc, argv);

  if (input_parameters.count("help")) {
    std::cout << options.help() << std::endl;
  } else if (input_parameters.count("input")) {
    if (input_parameters.count("input") == 1) {
      std::string filename = input_parameters["input"].as<std::string>();
      // set up calculation object
      POLYQUANT_CALCULATION calc = POLYQUANT_CALCULATION(filename);
      // run calculation
      calc.run();
    } else {
      // todo throw error and quit nicely some app abort
      std::cout << "Too many input files provided!" << std::endl;
    }
  } else {
    std::cout << options.help() << std::endl;
  }
}
#endif // DOXYGEN_SHOULD_SKIP_THIS
// LCOV_EXCL_STOP
