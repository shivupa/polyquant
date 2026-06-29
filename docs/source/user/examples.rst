Examples
========

Polyquant input files are JSON files. The format is slightly modified from
QCSchema: it keeps the familiar ``molecule``, ``driver``, ``model``, and
``keywords`` structure, but generalizes it to multiple quantum particle types.
For example, an input can include both ``electron`` and ``positron`` basis
definitions and can add non-electron particle definitions under
``keywords.quantum_particles``.

Run examples from their example directories when the input file uses relative
paths to basis files.

.. note::
   The examples below refer to a ``POYLQUANT_BUILD_PATH`` which is the path to where
   Polyquant was built. This of course varies on your system.

SCF water example
-----------------

This example runs a water self-consistent field calculation with a custom
electron basis file.

From ``examples/h2o``:

.. code-block:: bash

   POLYQUANT_BUILD_PATH/release/bin/polyquant -i h2o.json

The command calls the ``polyquant`` executable and passes ``h2o.json`` with the
``-i`` option. The executable reads the JSON, builds the molecule, loads
``electron_basis.g94`` relative to the current directory, runs SCF because
``model.method`` is ``scf``, and writes any requested outputs.

Input file:

.. code-block:: json

   {
     "molecule": {
       "geometry": [
           0.7569685, 0.0000000, -0.5858752,
          -0.7569685, 0.0000000, -0.5858752,
           0.0000000, 0.0000000,  0.0000000
       ],
       "symbols": ["H", "H", "O"],
       "molecular_charge": 0,
       "molecular_multiplicity": 1
     },
     "driver": "energy",
     "model": {
       "method": "scf",
       "basis":
           { "electron" :
             {
               "H" : [{ "custom" :
                 {"type" : "file",
                  "filename" : "electron_basis.g94"}}],
               "O" : [{ "custom" :
                 {"type" : "file",
                  "filename" : "electron_basis.g94"}}]
             }
           }
     },
     "keywords": {
       "restricted" : false,
       "mf_keywords" :{
           "convergence_E" : 1e-8,
           "convergence_DM" : 1e-6,
           "iteration_max" : 200,
           "dump_for_qmcpack" : true,
           "diis_extrapolation" : true,
           "diis_size" : 10,
           "diis_damping" : 10.00,
           "Cauchy_Schwarz_screening" : true,
           "incremental_fock" : true
       },
      "pure" : true
     }
   }

Key fields:

* ``molecule.geometry`` and ``molecule.symbols`` define the classical centers.
* ``model.method`` selects the calculation type.
* ``model.basis.electron`` assigns the electron basis by element.
* ``keywords.restricted`` selects restricted or unrestricted mean-field
  treatment.
* ``keywords.mf_keywords`` controls SCF convergence, DIIS, screening, and
  incremental Fock formation.

CI water example
----------------

This example runs a configuration interaction calculation for water using the
library ``sto-3g`` basis.

From ``examples/h2o_ci``:

.. code-block:: bash

   POLYQUANT_BUILD_PATH/release/bin/polyquant -i h2o_fc.json

The command reads ``h2o_fc.json``, performs the mean-field setup needed for the
CI calculation, constructs the requested determinant space (CISD), and solves for the
requested CI states. The example includes a frozen core MO.

Input file:

.. code-block:: json

   {
     "molecule": {
       "geometry": [
           0.7569685, 0.0000000, -0.5858752,
          -0.7569685, 0.0000000, -0.5858752,
           0.0000000, 0.0000000,  0.0000000
       ],
       "symbols": ["H", "H", "O"],
       "molecular_charge": 0,
       "molecular_multiplicity": 1
     },
     "driver": "energy",
     "model": {
       "method": "CI",
       "basis":
           { "electron" :
             {
               "H" : [{ "library" :
                 {"type" : "sto-3g"}}],
               "O" : [{ "library" :
                 {"type" : "sto-3g"}}]
             }
           }
     },
     "keywords": {
       "restricted" : true,
       "dump_for_qmcpack" : true,
       "mf_keywords" :{
           "convergence_E" : 1e-8,
           "convergence_DM" : 1e-6,
           "iteration_max" : 200
       },
      "pure" : true,
      "ci_keywords" : {
          "convergence_E" : 1e-6,
          "num_states" : 2,
          "num_subspace_vec" : 20,
          "slow_diag" : true,
          "excitation_level" : [
              [2,2,2]
          ],
          "frozen_core" : [1],
          "deleted_virtual" : [0]
      }
     }
   }

Key fields:

* ``model.method`` is ``CI``, so Polyquant runs the CI path after mean-field
  setup.
* ``library`` basis entries request a basis from the basis library rather than
  a local ``.g94`` file.
* ``ci_keywords.num_states`` selects how many CI roots to solve for.
* ``ci_keywords.num_subspace_vec`` controls the iterative diagonalization
  subspace size.
* ``ci_keywords.slow_diag`` selects explicit Hamiltonian diagonalization for
  this small example.
* ``ci_keywords.excitation_level`` defines the allowed excitation space.
* ``frozen_core`` and ``deleted_virtual`` remove occupied core and virtual
  orbitals from the CI active space.

Electron-positron example
-------------------------

This example adds a positron as a second quantum particle type and uses separate
custom basis files for electrons and the positron.

From ``examples/PsH_separatebasissets/wpos``:

.. code-block:: bash

   POLYQUANT_BUILD_PATH/release/bin/polyquant -i PsH_wpos_fast.json

The command reads the electron and positron basis files relative to the example
directory, runs the multicomponent calculation, and writes ``H_wpos.h5`` when
``dump_for_qmcpack`` is enabled.

Input file:

.. code-block:: json

   {
     "molecule": {
       "geometry": [
           0.0000000, 0.0000000,  0.0000000
       ],
       "symbols": ["H"],
       "molecular_charge": 0,
       "molecular_multiplicity": 1
     },
     "driver": "energy",
     "model": {
       "method": "CI",
       "basis":
           { "electron" :
             {"H" : [{ "custom" :
                 {"type" : "file",
                  "filename" : "electron_basis.g94"}}]},
             "positron" :
             {"H" : [{ "custom" :
                 {"type" : "file",
                  "filename" : "positron_basis.g94"}}]}
           }
     },
     "keywords": {
       "restricted" : true,
       "dump_for_qmcpack" : true,
       "hdf5_filename_qmcpack" : "H_wpos.h5",
       "quantum_particles" : [
           { "name" : "positron",
             "spin" : 0.5,
             "mass" : 1,
             "charge" : 1,
             "num_particles_alpha" : 1,
             "num_particles_beta" : 0,
             "particle_multiplicity" : 2,
             "exchange" : true,
             "electron_exchange" : false,
             "restricted" : false
           }
       ],
       "mf_keywords" :{
           "convergence_E" : 1e-12,
           "convergence_DM" : 1e-10,
           "iteration_max" : 200,
           "from_file" : false,
           "incremental_fock" : true
       },
      "ci_keywords" : {
          "convergence_E" : 1e-8,
          "num_states" : 5,
          "slow_diag" : false,
          "num_subspace_vec" : 20,
          "excitation_level" : [
              [1,1,1],
              [1,0,1]
              ]
      },
      "pure" : true
         }
   }

Key fields:

* ``model.basis`` has separate sections for ``electron`` and ``positron``.
* ``keywords.quantum_particles`` adds the positron particle type and its spin,
  mass, charge, particle count, exchange behavior, and restricted/unrestricted
  setting.
* ``hdf5_filename_qmcpack`` controls the HDF5 output filename used by downstream
  QMCPACK workflows.
* ``ci_keywords.slow_diag`` is ``false``, so the example uses the direct CI
  path rather than explicit Hamiltonian diagonalization.

Outputs and external tools
--------------------------

Depending on the input, Polyquant can write text output, MOLDEN orbital files,
HDF5 files, FCIDUMP files, and QMCPACK-related files. 
For QMCPACK, ``convert4qmc`` should be able to directly read the Polyquant HDF5 file.

Bugs?
-----

* Report an issue on Github: github.com/shivupa/polyquant


