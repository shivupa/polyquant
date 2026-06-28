Building Tests and Docs
=======================

This page is for contributors who need to rebuild Polyquant while changing
code, tests, or documentation. User-facing installation steps live in
:doc:`../user/install`.

Preset builds
-------------

The CMake presets define the normal developer entry points:

.. code-block:: bash

   cmake --preset debug
   cmake --build --preset debug

The debug preset writes binaries under ``build/debug/bin`` and enables the
test target. The release preset is the same workflow with optimized compiler
flags:

.. code-block:: bash

   cmake --preset release
   cmake --build --preset release

Run tests through CTest after building:

.. code-block:: bash

   ctest --preset debug
   ctest --preset release

The tests are registered from ``tests/CMakeLists.txt`` with Catch2 discovery.
When ``POLYQUANT_NETWORK_TESTS`` is disabled, tests tagged ``[network]`` are
excluded from discovery:

.. code-block:: bash

   cmake -S . -B build/debug-nonet -G Ninja -DCMAKE_BUILD_TYPE=Debug -DPOLYQUANT_NETWORK_TESTS=0
   cmake --build build/debug-nonet
   ctest --test-dir build/debug-nonet --output-on-failure

Documentation builds
--------------------

Build HTML and PDF documentation with the docs preset:

.. code-block:: bash

   cmake --preset docs
   cmake --build --preset docs

The docs preset enables ``POLYQUANT_DOC`` and builds the
``polyquant_docs_html`` and ``polyquant_docs_pdf`` targets. HTML output is
written below ``build/debug/docs/html`` for the inherited debug build
directory. The PDF target requires ``latexmk`` in addition to the Python
packages in ``docs/requirements.txt``.

The CMake docs path copies ``docs`` and ``README.md`` into the build tree
before running Sphinx. If Sphinx reports a source path in ``build/debug/docs``,
make the correction in the source tree under ``docs/source`` and re-run the
docs preset.

Build wrapper
-------------

``build.sh`` is a compatibility wrapper around ``cmake -S . -B <build-dir>``
and ``cmake --build <build-dir>``. It is useful for one-off local builds or
CI-like jobs that configure through environment variables:

.. code-block:: bash

   BUILD_DIR=build/dev CMAKE_BUILD_TYPE=Debug POLYQUANT_DOC=0 RUN_TESTS=1 ./build.sh

The wrapper honors ``BUILD_DIR``, ``CMAKE_BUILD_TYPE``, ``POLYQUANT_DOC``,
``POLYQUANT_TEST``, ``POLYQUANT_NETWORK_TESTS``,
``POLYQUANT_CODE_COVERAGE``, ``BUILD_PARALLEL_LEVEL``, and ``RUN_TESTS``.

Coverage builds
---------------

The ``coverage`` preset enables ``POLYQUANT_CODE_COVERAGE`` and builds the
``polyquant_coverage`` target:

.. code-block:: bash

   cmake --preset coverage
   cmake --build --preset coverage

Coverage is configured only for debug builds and excludes the build tree,
tests, and system headers.
