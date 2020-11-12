from pyscf import gto, scf
import numpy as np
from PyscfToQmcpack import savetoqmcpack


mol = gto.Mole()
mol.verbose = 1
# mol.output = 'out_h2o'
mol.atom = """
H   0.7569685 0.0000000 -0.5858752,
H  -0.7569685 0.0000000 -0.5858752"""
mol.symmetry = 0
mol.unit = "Angstrom"
#mol.cart=True
mol.basis="cc-pv5z"
mol.cart=False
mol.build()

myhf = scf.RHF(mol)
b = myhf.get_hcore()
myhf.run()
print(myhf.e_tot)

from pyscf.scf.chkfile import dump_scf
dump_scf(mol, 'h2o.chk', myhf.e_tot, myhf.mo_energy, myhf.mo_coeff, myhf.mo_coeff)

savetoqmcpack(mol, myhf)
