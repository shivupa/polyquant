#!/usr/bin/env python
import pyscf
from pyscf import gto

mol = pyscf.M(
    atom="H 0 0 0.3707000; H 0 0 -0.3707000",  # in Angstrom
    basis={
        "H": gto.parse(
            """
    H    S
    107.20423474             0.0007959672
     16.04351239             0.0058692523
      3.61654671             0.0321526568
      0.93543804             0.1285022287
      0.30477121             0.2757362499
      0.10685424             0.4281655102
      0.03746361             0.2987378698
                                """
        )
    },
    symmetry=False,
)

myhf = mol.UHF()
myhf.kernel()
# converged SCF energy = -0.865437433923647
