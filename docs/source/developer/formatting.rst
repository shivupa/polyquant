Formatting and Lint Tools
=========================

Polyquant uses external formatting and include-checking tools, but the current
CMake files do not define a single repository-wide formatting target. Run the
tools directly over the files you change.

C++ formatting
--------------

Use ``clang-format`` for C++ headers and implementation files. Run it from the
repository root so it discovers the checked-in ``.clang-format`` file:

.. code-block:: bash

   clang-format -i src/path/to/file.hpp src/path/to/file.cpp

For a larger source-only pass, review the diff carefully afterward:

.. code-block:: bash

   clang-format -i $(find src tests -name '*.hpp' -o -name '*.cpp')

Do not mix broad mechanical formatting with behavior changes unless the change
is intentionally formatting-only.

CMake formatting
----------------

Use ``cmake-format`` for ``CMakeLists.txt`` and ``.cmake`` files. Run it from
the repository root so it uses ``.cmake-format.json``:

.. code-block:: bash

   cmake-format -i CMakeLists.txt src/CMakeLists.txt tests/CMakeLists.txt

Keep formatting-only CMake changes separate from dependency or target changes
when possible.

Include checks
--------------

Debug builds look for ``include-what-you-use`` or ``iwyu``. If found, CMake
sets ``CMAKE_CXX_INCLUDE_WHAT_YOU_USE`` for the build:

.. code-block:: bash

   cmake --preset debug
   cmake --build --preset debug

IWYU output can be noisy for template-heavy numerical code. Treat it as a
review aid and check that suggested include removals do not rely on transitive
headers from third-party libraries.

Final checks
------------

Before sending a code change for review, run the smallest relevant build and
test command:

.. code-block:: bash

   cmake --build --preset debug
   ctest --preset debug

For documentation-only changes, build the docs preset instead.
