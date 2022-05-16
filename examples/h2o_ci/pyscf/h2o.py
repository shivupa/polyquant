from pyscf import gto, scf
import numpy as np
from PyscfToQmcpack import savetoqmcpack


mol = gto.Mole()
mol.verbose = 1
# mol.output = 'out_h2o'
mol.atom = """
O   0.0000000 0.0000000  0.0000000,
H   0.7569685 0.0000000 -0.5858752,
H  -0.7569685 0.0000000 -0.5858752"""
mol.symmetry = 0
mol.unit = "Angstrom"
#mol.cart=True
mol.basis='sto-3g'
mol.cart=False
mol.verbose=6
mol.build()

myhf = scf.RHF(mol)
b = myhf.get_hcore()
myhf.run()
myhf.analyze()
print(myhf.e_tot)

from pyscf.scf.chkfile import dump_scf
dump_scf(mol, 'h2o.chk', myhf.e_tot, myhf.mo_energy, myhf.mo_coeff, myhf.mo_coeff)

savetoqmcpack(mol, myhf)
