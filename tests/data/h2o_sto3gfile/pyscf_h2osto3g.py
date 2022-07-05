#!/usr/bin/env python
import pyscf
from pyscf import gto

mol = pyscf.M(
    atom="H  0.7569685 0.0000000 -0.5858752; H  -0.7569685 0.0000000 -0.5858752; O 0.0000000 0.0000000  0.0000000",
    basis="sto-3g",
    symmetry=False,
)

myhf = mol.UHF()
myhf.kernel()
