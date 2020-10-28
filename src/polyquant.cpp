#if !defined(DOXYGEN_SHOULD_SKIP_THIS)
#include <calculation/calculation.hpp>
#include <cxxopts.hpp>
#include <string>

using namespace polyquant;

int main(int argc, char **argv) {
  cxxopts::Options options("polyquant", "Multiple quantum particles.");
  options.add_options()("i,input", "input filename",
                        cxxopts::value<std::string>())("h,help", "Print usage");
  auto input_parameters = options.parse(argc, argv);

  if (input_parameters.count("help")) {
    std::cout << options.help() << std::endl;
    exit(0);
  }

  // run the input file provided and ensure only 1 input file has been provided
  if (input_parameters.count("input")) {
    if (input_parameters.count("input") == 1) {
      std::string filename = input_parameters["input"].as<std::string>();
      // set up calculation object
      PYCI_CALCULATION calc = PYCI_CALCULATION(filename);
      // run calculation
      calc.run();
    } else {
      // todo throw error and quit nicely some app abort
      std::cout << "Too many input files provided!" << std::endl;
    }
    exit(0);
  }

  // if no parameters have been parsed print help and exit!
  std::cout << options.help() << std::endl;
  exit(0);
}
#endif // DOXYGEN_SHOULD_SKIP_THIS
