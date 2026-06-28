Theory Overview
===============

Polyquant implements multicomponent quantum chemistry methods for systems with
more than one quantum particle type, such as electron-positron systems. The
overview here is intentionally short and user-facing; see the references and
developer API documentation for implementation details.

Multicomponent SCF
------------------

Each quantum particle type has its own density matrix and Fock operator. The
same-particle terms include Coulomb and exchange contributions, while mixed
particle terms include Coulomb interactions but no exchange. Particle types can
use restricted or unrestricted treatments.

Polyquant uses separate atomic-orbital basis sets for each quantum particle
type. These basis functions can be centered on atoms or off-atom sites, which is
important for diffuse positron orbitals.

Configuration interaction
-------------------------

The multicomponent CI wave function is a linear combination of products of
Slater determinants, with separate determinant factors for particle and spin
types. Excitation limits can be set flexibly by particle type and spin block.

For small determinant spaces Polyquant can form the Hamiltonian explicitly. For
larger spaces it can use direct CI, where the Hamiltonian is applied through
sigma-vector construction and the eigenproblem is solved iteratively.

QMCPACK workflows
-----------------

Polyquant can generate orbital and multideterminant data for trial wave
functions used in downstream VMC and DMC workflows. CI natural orbitals can be
used to create more compact trial wave functions.

References
----------

Shiv Upadhyay, Anouar Benali, and Kenneth D. Jordan, "Capturing Correlation
Effects in Positron Binding to Atoms and Molecules," Journal of Chemical Theory
and Computation 20, 9879-9893 (2024).
