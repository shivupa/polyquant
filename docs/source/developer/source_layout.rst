Source Layout
=============

Polyquant keeps the source tree close to the calculation pipeline. The command
line executable in ``src/polyquant.cpp`` parses options and hands the input
file to ``POLYQUANT_CALCULATION``.

Core modules
------------

``src/calculation`` coordinates an input-driven run. It creates the input,
symmetry, molecule, basis, and integral objects, runs the requested mean-field
and post-mean-field methods, and dispatches output generation.

``src/io`` contains input parsing, timers, text utilities, MOLDEN writing,
FCIDUMP writing, HDF5 writing, and Davidson logging helpers. File-writing
helpers should document paths, side effects, and external format assumptions.

``src/molecule`` stores classical particles and quantum particles parsed from
the JSON input. This module owns particle counts, charges, masses,
coordinates, labels, and the split between classical and quantum particle
types.

``src/symmetry`` maps input symmetry choices into libmsym and SO(3) metadata.
Code that consumes symmetry should be explicit about whether it expects
ordinary point-group irreps, spherical symmetry labels, or no symmetry.

``src/basis`` loads Gaussian basis sets for each quantum particle type,
including library basis names and custom Gaussian94 files. It also builds AO
labels and symmetry-adapted basis transformations.

``src/integral`` builds overlap, kinetic, nuclear attraction, two-particle,
orthogonalization, frozen-core, and MO-transformed integral data. Expensive
routines should document indexing conventions and storage layout.

``src/scf`` implements multicomponent self-consistent field calculations.
``POLYQUANT_EPSCF`` handles electron-positron and more general multiparticle
mean-field workflows, including per-particle density and Fock matrices.

``src/ci`` implements multicomponent configuration interaction. The
``POLYQUANT_EPCI`` class sets up post-SCF CI calculations, while
``src/ci/detset`` contains determinant generation, indexing, Slater-Condon
rules, sigma-vector routines, explicit Hamiltonian construction, spin
expectation values, and one-particle RDM construction.

Tests and data
--------------

``tests/unit_tests`` covers module-level behavior. ``tests/integration_tests``
covers calculation-level workflows. Test inputs and reference files live under
``tests/data`` and are exposed to tests through the ``POLYQUANT_TEST_DATA_DIR``
compile definition.

Examples
--------

``examples`` contains runnable inputs and external comparison scripts. Treat
example JSON files as user documentation assets: keep relative basis paths
portable, and avoid assuming an absolute build directory in committed example
scripts.
