from pyscf import gto, scf
import numpy as np
from PyscfToQmcpack import savetoqmcpack


mol = gto.Mole()
mol.verbose = 1
# mol.output = 'out_h2o'
mol.atom = "Li   0.0000000 0.0000000  0.0000000"
mol.symmetry = 0
mol.unit = "Angstrom"
#mol.cart=True
mol.basis={ "Li": gto.basis.parse('''
Li S 
    642.4189000              0.00214000
     96.7984900              0.01621000
     22.0910900              0.07732000
      6.2010700              0.24579000
      1.9351200              0.47019000
Li S 
      2.1914600              0.03509000
      0.5961300              0.19123000
Li S 
      0.0745500              1.00000000
Li S 
      0.0286700              1.00000000
Li S 
      0.0092000              1.00000000
Li S 
      0.0031000              1.00000000
Li S 
      0.0008000              1.00000000
Li P
      2.1914600              0.00894000
      0.5961300              0.14101000
      0.0745500              0.94535000
Li P
      0.0180000              1.00000000
Li P
      0.0060000              1.00000000
''')}
mol.cart=False
mol.charge=-1
mol.spin=0
mol.build()

myhf = scf.RHF(mol)
b = myhf.get_hcore()
myhf.run()
print(myhf.e_tot)

from pyscf.scf.chkfile import dump_scf
dump_scf(mol, 'Li.chk', myhf.e_tot, myhf.mo_energy, myhf.mo_coeff, myhf.mo_coeff)

savetoqmcpack(mol, myhf)
