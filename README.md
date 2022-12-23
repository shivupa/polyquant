# polyquant

[![Polyquant CMake Build](https://github.com/shivupa/polyquant/actions/workflows/polyquant.yml/badge.svg?branch=main)](https://github.com/shivupa/polyquant/actions/workflows/polyquant.yml)

Polyquant uses C++20. This is required because the CI operations use https://en.cppreference.com/w/cpp/header/bit.

## Dependencies 

### Dependencies that must be installed by the user
- [libeigen/eigen](https://gitlab.com/libeigen/eigen)
  Eigen is a C++ template library for linear algebra: matrices, vectors, numerical solvers, and related algorithms.

- [boostorg/boost](https://github.com/boostorg/boost)
  Super-project for modularized Boost 

- [ mcodev31/libmsym](https://github.com/mcodev31/libmsym)
   molecular point group symmetry lib 

### For a production build (These are installed via CMake's FetchContent)
- [onqtam/doctest](https://github.com/onqtam/doctest)
   The fastest feature-rich C++11/14/17/20 single-header testing framework for unit tests and TDD 
   `Polyquant` uses doctest for testing.

- [nlohmann/json](https://github.com/nlohmann/json)
   JSON for Modern C++

   `Polyquant` uses `nlohmann/json` to parse the [MolSSI/QCSchema](https://github.com/MolSSI/QCSchema)
- [evaleev/libint](https://github.com/evaleev/libint)
   Libint is a high-performance library for computing Gaussian integrals in quantum mechanics

   `Polyquant` uses `evaleev/libint` to calculate integrals over gaussian basis functions.
   To convert for qmcpack you need to configure with [-with-cartgauss-ordering=gamess](https://github.com/evaleev/libint/wiki#configuring-libint-compiler)

   The `libint` branch has a configured library compatible with polyquant. It is recommended to build the libint branch, install, and then build the main branch.

- [BlueBrain/HighFive](https://github.com/BlueBrain/HighFive)
   HighFive - Header-only C++ HDF5 interface 

   `Polyquant` uses `BlueBrain/HighFive` to dump HDF5 files for use with QMCPACK and for restarts.

### For a debug build
- [include_what_you_use](https://github.com/include-what-you-use/include-what-you-use)
   `include_what_you_use` lets you check that the headers aren't including too much unnecessary stuff.

### For documentation:
`Polyquant` uses a combination of libraries to generate documentations from comments included in the source:
- [doxygen](http://www.doxygen.nl/)
- [breathe](https://github.com/michaeljones/breathe)
- [exhale](https://github.com/svenevs/exhale)
- [sphinx](http://www.sphinx-doc.org/en/master/)
- [m2r](https://github.com/miyakogi/m2r)

### For formatting the source
- [clang-format](https://clang.llvm.org/)
   
   `Polyquant` uses `clang-format` to format all of the `hpp` and `cpp` files

- [cmake-format](https://github.com/cheshirekow/cmake_format)

   `Polyquant` uses `cmake-format` to format all of the `CMakeLists.txt`

### To install dependencies on Arch:

```bash
pacman -Syu clang
yay -Syu cmake-format include-what-you-use doxygen
pip install sphinx sphinx-rtd-theme breathe exhale m2r --user
```
