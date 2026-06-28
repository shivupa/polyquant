Documentation Conventions
=========================

Polyquant publishes user-facing Sphinx pages and generated C++ API pages. The
API pages are generated from Doxygen comments in ``src`` through Breathe and
Exhale.

Doxygen placement
-----------------

Document public declarations in headers whenever possible. A reader should be
able to understand a class, method, field, or free function from the generated
API without opening the implementation file.

Use implementation comments in ``.cpp`` files for algorithmic details that are
not obvious from the declaration: storage transforms, determinant indexing,
screening logic, convergence safeguards, or format-specific output rules.

Recommended style
-----------------

Use concise block comments:

.. code-block:: cpp

   /**
    * @brief Build the AO overlap matrix for each quantum particle basis.
    *
    * @param threshold Screening threshold in atomic units.
    */

Use ``@param`` for every non-obvious argument and ``@return`` for non-void
functions. Add units for physical quantities such as coordinates, masses,
charges, energies, thresholds, and convergence tolerances.

What to document
----------------

Document public classes, structs, constructors, free functions, public methods,
important public fields, and module-level behavior. For shared pointers passed
through setup methods, say whether the object is retained, mutated, or used
only during setup.

Be explicit about indexing conventions. Polyquant code uses particle indices,
spin indices, irrep indices, determinant indices, AO indices, and MO indices;
comments should make the expected convention clear before a caller has to infer
it from loops.

Document side effects for functions that write files, resize cached matrices,
mutate member containers, read relative paths, call ``APP_ABORT``, or throw
``PolyquantException``.

Generated API ownership
-----------------------

Exhale writes generated reStructuredText under
``docs/source/developer/api`` in the Sphinx source tree used for a docs build.
Those pages are generated output. Edit Doxygen comments in ``src`` or the
Exhale configuration in ``docs/source/conf.py`` instead of hand-editing the
generated API pages.

Documentation build checks
--------------------------

After each substantial docstring batch, run:

.. code-block:: bash

   cmake --preset docs
   cmake --build --preset docs

Fix new Doxygen, Breathe, Exhale, and Sphinx warnings while the changed
declarations are still fresh.
