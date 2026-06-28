Adding Examples
===============

Examples are part of the public documentation surface. A new example should be
runnable from its own directory and should not depend on a developer's absolute
filesystem paths.

Directory structure
-------------------

Put each example in a focused directory under ``examples``. Keep required input
files next to the JSON file when possible:

.. code-block:: text

   examples/my_example/
     my_example.json
     electron_basis.g94
     positron_basis.g94
     run.sh
     clean.sh

Only include generated output when it is intentionally used as reference data
or as an external-tool input that cannot be regenerated cheaply.

Input files
-----------

Polyquant inputs are JSON files derived from QCSchema and extended for
multiple quantum particle types. When adding an example, make the particle
definitions, basis choices, driver, model, and key method settings visible in
the JSON rather than relying on hidden defaults.

For custom basis files, prefer relative paths such as ``electron_basis.g94``.
Document that the command should be run from the example directory, or write
the script so it changes to its own directory before launching Polyquant.

Run commands
------------

Use commands that work with both normal build layouts when practical:

.. code-block:: bash

   ../../build/release/bin/polyquant -i my_example.json
   ../../build/bin/polyquant -i my_example.json

The first path matches preset release builds from the repository root. The
second path matches the legacy ``build.sh`` default build directory.

Scripts
-------

Keep ``run.sh`` scripts small and explicit. They may call external tools such
as QMCPACK, ``convert4qmc``, ``qmca``, ``h5dump``, Python plotting scripts, or
comparison programs, but those tools should be commented or documented as
external requirements rather than core Polyquant dependencies.

Use ``clean.sh`` only for generated files from that example. Avoid removing
shared basis files, checked-in reference files, or files outside the example
directory.

Documentation expectations
--------------------------

When adding a user-facing example, update :doc:`../user/examples` with the
input file, run command, and a short explanation of what each important command
or input block is doing.
