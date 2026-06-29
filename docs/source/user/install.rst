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
  Use a version of libint fetched from the Polyquant ``libint`` branch as 
  it has been configured to work with the angular momentum ordering used by
  Polyquant.
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

The build wrapper can also enable documentation for the selected build
configuration:

.. code-block:: bash

   ./build.sh docs
   ./build.sh release docs
   ./build.sh debug docs

Since release is the default build configuration, ``./build.sh docs`` is the
same as ``./build.sh release docs``.

Tests
-----

.. code-block:: bash

   ctest --preset release

You should run tests and test failures shouldn't be ignored.

Network-dependent tests are enabled by default in the presets. Disable them
when configuring manually with:

.. code-block:: bash

   cmake -S . -B build/release -DPOLYQUANT_NETWORK_TESTS=0

Build wrapper
-------------

The ``build.sh`` wrapper is a convenience helper for CMake presets. It defaults
to the release preset:

.. code-block:: bash

   ./build.sh

It also accepts a preset name:

.. code-block:: bash

   ./build.sh docs
   ./build.sh debug
   ./build.sh release docs
   ./build.sh debug docs

The default release build still writes ``build/release/bin/polyquant``. Set
``BUILD_PARALLEL_LEVEL`` to control build parallelism, and set ``RUN_TESTS=1``
to run the matching CTest preset after non-doc builds.
