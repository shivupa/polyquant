from pyscf import gto, scf
import numpy as np

mol = gto.Mole()
mol.verbose = 1
# mol.output = 'out_h2o'
mol.atom = """
Li   0.0000000 0.0000000  0.0000000"""
mol.symmetry = 0
mol.unit = "Angstrom"
mol.spin = 1
mol.basis = "aug-cc-pvqz"
mol.build()
myhf = scf.UHF(mol)
myhf.run()
print(myhf.e_tot)


