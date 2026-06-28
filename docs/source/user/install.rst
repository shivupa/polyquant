Installation
============

Polyquant is built with CMake and requires a C++20 compiler. The build is a
mix of system dependencies that must be installed before configuring Polyquant
and third-party packages that CMake fetches automatically.

Install explicitly
------------------

Install these before running CMake:

* CMake 3.14 or newer.
* A C++20-capable compiler.
* OpenMP.
* BLAS and LAPACK.
* Boost.
* libmsym.
* Libint2, recommended for normal builds. If CMake cannot find a system
  Libint2, it attempts to fetch the configured Polyquant ``libint`` branch.
* Sphinx, Doxygen, Breathe, Exhale, m2r2, and a Sphinx theme when building
  documentation.
* ``latexmk`` when building the PDF documentation target.
* ``include-what-you-use`` only when you want the optional Debug-build include
  analysis.
* ``clang-format`` and ``cmake-format`` when formatting source and CMake files.

Fetched automatically by CMake
------------------------------

CMake uses ``FetchContent`` for these dependencies:

* ``linalg-cmake-modules`` and ``bilke/cmake-modules``.
* ``nlohmann_json``.
* ``cpr`` for basis-set download support.
* Eigen, when a suitable system ``Eigen3::Eigen`` target is not available.
* Spectra.
* Libint2, only if a system Libint2 was not found.
* ``cppitertools``.
* ``cxxopts``.
* HighFive.
* fmt.
* Catch2.

Release build
-------------

From the repository root:

.. code-block:: bash

   cmake --preset release
   cmake --build --preset release

The release preset writes the executable to ``build/release/bin/polyquant``.

Debug build
-----------

.. code-block:: bash

   cmake --preset debug
   cmake --build --preset debug

The debug preset writes the executable to ``build/debug/bin/polyquant``.

Documentation build
-------------------

.. code-block:: bash

   cmake --preset docs
   cmake --build --preset docs

Tests
-----

.. code-block:: bash

   ctest --preset release

Network-dependent tests are enabled by default in the presets. Disable them
when configuring manually with:

.. code-block:: bash

   cmake -S . -B build/release -DPOLYQUANT_NETWORK_TESTS=0

Build wrapper
-------------

The ``build.sh`` wrapper provides the older build workflow. Its default build
directory is ``build``, so the executable is usually ``build/bin/polyquant``.

The wrapper is controlled by these environment variables:

* ``BUILD_DIR``: build directory, default ``build``.
* ``CMAKE_BUILD_TYPE``: CMake build type, default ``Release``.
* ``POLYQUANT_DOC``: enable documentation targets, default ``1``.
* ``POLYQUANT_TEST``: enable tests, default ``1``.
* ``POLYQUANT_NETWORK_TESTS``: enable tests that need network access,
  default ``1``.
* ``POLYQUANT_CODE_COVERAGE``: enable coverage flags in supported Debug
  builds, default ``1``.
* ``BUILD_PARALLEL_LEVEL``: optional build parallelism passed to CMake.
* ``RUN_TESTS``: run ``ctest`` after building when set to ``1``.
