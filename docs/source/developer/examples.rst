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

Use paths from the release preset build layout:

.. code-block:: bash

   POLYQUANT_BUILD_DIR/release/bin/polyquant -i my_example.json

The ``build.sh`` helper also uses the release preset, so it creates the same
``build/release/bin/polyquant`` executable path.

Documentation expectations
--------------------------

When adding a user-facing example, update :doc:`../user/examples` with the
input file, run command, and a short explanation of what each important command
or input block is doing.
