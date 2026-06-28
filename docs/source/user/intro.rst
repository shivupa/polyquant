Introduction
============

Polyquant performs nonrelativistic quantum calculations for systems containing
one or more quantum particle types. The code supports mean-field calculations,
post-mean-field configuration interaction calculations, symmetry-aware basis
handling, integral generation, and output formats used by downstream quantum
Monte Carlo workflows.

Code layout
-----------

The main source modules follow the calculation flow:

* ``molecule`` parses classical and quantum particles from the input.
* ``symmetry`` manages point-group and spherical symmetry information.
* ``basis`` builds the Gaussian basis sets for each quantum particle type.
* ``integral`` computes AO and MO integrals.
* ``scf`` solves multicomponent self-consistent field problems.
* ``ci`` builds determinant spaces and solves configuration interaction
  problems.
* ``calculation`` coordinates setup, execution, and output.
* ``io`` writes text, MOLDEN, HDF5, FCIDUMP, and QMCPACK-related files.

Input flow
----------

A typical run starts from a JSON input file. Polyquant parses the molecular
geometry and particle definitions, builds symmetry and basis information,
computes integrals, runs the requested mean-field calculation, optionally runs a
CI calculation, and writes any requested output files.
