# selci
SELected Configuration Interaction

## Dependencies

### For a production build
- [PETSc](https://gitlab.com/petsc/petsc)
   `PETSc`, pronounced PET-see (the S is silent), is a suite of data structures and routines for the scalable (parallel) solution of scientific applications modeled by partial differential equations.

   `Selci` uses PETSc for MPI distributed data storage.
- [SLEPc](https://gitlab.com/slepc/slepc)
   Scalable Library for Eigenvalue Problem Computations

   `Selci` uses SLEPc for MPI distributed matrix diagonalization.
- [onqtam/doctest](https://github.com/onqtam/doctest)
   The fastest feature-rich C++11/14/17/20 single-header testing framework for unit tests and TDD 

   `Selci` uses doctest for testing.
- [nlohmann/json](https://github.com/nlohmann/json)
   JSON for Modern C++

   `Selci` uses `nlohmann/json` to parse the [MolSSI/QCSchema](https://github.com/MolSSI/QCSchema)
- [whoshuu/cpr](https://github.com/whoshuu/cpr)
   C++ Requests: Curl for People, a spiritual port of Python Requests

   `Selci` uses `whoshuu/cpr` to query the [MolSSI-BSE/basis_set_exchange](https://github.com/MolSSI-BSE/basis_set_exchange) for basis sets.
- [evaleev/libint](https://github.com/evaleev/libint)
   Libint is a high-performance library for computing Gaussian integrals in quantum mechanics

   `Selci` uses `evaleev/libint` to calculate integrals over gaussian basis functions.
- [xtensor-stack/xtensor](https://github.com/xtensor-stack/xtensor)
   C++ tensors with broadcasting and lazy computing 

   `Selci` uses `xtensor-stack/xtensor` to handle arrays for the SCF portion of the code.
- [xtensor-stack/xsimd](https://github.com/xtensor-stack/xsimd)
   C++ wrappers for SIMD intrinsics and parallelized, optimized mathematical functions (SSE, AVX, NEON, AVX512)

   `Selci` doesn't actually use `xtensor-stack/xsimd` yet...

- [xtensor-stack/xtensor-blas](https://github.com/xtensor-stack/xtensor-blas)
   BLAS extension to xtensor 

   `Selci` uses `xtensor-stack/xtensor-blas` to solve eigenvalue problems.
### For a debug build
- [include_what_you_use](https://github.com/include-what-you-use/include-what-you-use)
   `include_what_you_use` lets you check that the headers aren't including too much unnecessary stuff.

### For documentation:
`Selci` uses a combination of libraries to generate documentations from comments included in the source:
- [doxygen](http://www.doxygen.nl/)
- [breathe](https://github.com/michaeljones/breathe)
- [exhale](https://github.com/svenevs/exhale)
- [sphinx](http://www.sphinx-doc.org/en/master/)
- [m2r](https://github.com/miyakogi/m2r)

### For formatting the source
- [clang-format](https://clang.llvm.org/)
   
   `Selci` uses `clang-format` to format all of the `hpp` and `cpp` files
- [cmake-format](https://github.com/cheshirekow/cmake_format)

   `Selci` uses `cmake-format` to format all of the `CMakeLists.txt`

### To install dependencies on Arch:

```bash
pacman -Syu clang
yay -Syu petsc slepc doctest nlohmann-json cpr-git libint2 cmake-format include-what-you-use doxygen
pip install sphinx sphinx-rtd-theme breathe exhale m2r --user
```
