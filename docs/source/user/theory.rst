Theory Overview
===============

Polyquant implements multicomponent quantum chemistry methods for systems with
more than one quantum particle type, such as electron-positron systems. The
overview here is intentionally short and user-facing; see the references and
developer API documentation for implementation details.

Multicomponent SCF
------------------

Each quantum particle type has its own density matrix and Fock operator. 
If a particle is restricted spin then there is only 1 density matrix and Fock operator.
Otherwise there are 2 for unrestricted calculations.
The same-particle terms include Coulomb and exchange contributions, while mixed
particle terms include Coulomb interactions but no exchange.

Polyquant uses separate atomic-orbital basis sets for each quantum particle
type. These basis functions can be centered on atoms or off-atom sites, which is
important for diffuse positron orbitals.

The total SCF energy combines the energy contributions from all quantum
particle types with the repulsion energy of the fixed classical particles. The
classical term includes interactions among the point charges defined by the
input geometry, while each quantum contribution is evaluated from that
particle type's density, one-particle terms, and Fock matrix.

For coupled multicomponent systems, Polyquant can first converge independent
particle densities with inter-particle interactions disabled. After those
density matrices are stable, the mixed-particle interactions are enabled and
the fully coupled SCF procedure continues. DIIS extrapolation is used to
accelerate convergence, and incremental Fock formation can reuse the previous
Fock matrix once density changes are small enough.

The AO overlap matrix must be orthogonalized before solving the Fock
eigenvalue problem. Symmetric orthogonalization preserves the full AO space but
does not remove near-linear dependencies. Canonical orthogonalization
diagonalizes the overlap matrix and drops directions with very small overlap
eigenvalues, which is useful for diffuse or redundant basis sets.

Polyquant supports symmetry at a high level through Abelian point groups
provided by libmsym. Symmetry partitions orbitals and determinant spaces into
irreducible-representation blocks, reducing the amount of work when the input
geometry and basis are compatible with the selected symmetry.

Configuration interaction
-------------------------

The multicomponent CI wave function is a linear combination of products of
Slater determinants, with separate determinant factors for particle and spin
types. Excitation limits can be set flexibly by particle type and spin block.

For small determinant spaces Polyquant can form the Hamiltonian explicitly. For
larger spaces it can use direct CI, where the Hamiltonian is applied through
sigma-vector construction and the eigenproblem is solved iteratively.

The iterative CI path uses Davidson diagonalization to compute the lowest
energy roots without storing every Hamiltonian matrix element. In this mode
Polyquant repeatedly applies the Hamiltonian to trial vectors, expands a
subspace, and checks the requested energy convergence threshold.

Determinants are stored as compact bit representations for each particle type
and spin block. Polyquant keeps maps from these per-block determinants to the
variational determinant space so that Hamiltonian, sigma-vector, and density
matrix routines can find connected determinants efficiently.

Spin purification is available through spin-penalty terms based on
``S^2``. These terms are useful when a CI expansion contains states with
unwanted spin contamination and the user wants to bias the solution toward a
target spin expectation value.

Natural orbitals are generated from CI one-particle reduced density matrices.
They are often useful because highly occupied natural orbitals can represent
correlation effects with fewer important determinants, making downstream trial
wave functions more compact.

QMCPACK workflows
-----------------

Polyquant can generate orbital and multideterminant data for trial wave
functions used in downstream VMC and DMC workflows. CI natural orbitals can be
used to create more compact trial wave functions.

Further details
---------------

Further details and equations can be found in

Shiv Upadhyay, Anouar Benali, and Kenneth D. Jordan, "Capturing Correlation
Effects in Positron Binding to Atoms and Molecules," Journal of Chemical Theory
and Computation 20, 9879-9893 (2024).
