from pyscf import gto
import numpy as np
mol = gto.Mole()
mol.verbose = 1
#mol.output = 'out_h2o'
mol.atom = '''
O   0.0000000 0.0000000  0.0000000,
H   0.7569685 0.0000000 -0.5858752,
H  -0.7569685 0.0000000 -0.5858752'''
mol.symmetry = 1
mol.unit='Angstrom'
mol.build()

print("PYTHON CHECK WITH PYSCF")


print("OVERLAP CHECK")
b = mol.intor('int1e_ovlp_sph')
a = np.loadtxt("ovlp.txt",skiprows=2)
print(np.allclose(a,b))
print(a-b)



print("KINETIC CHECK")
b = mol.intor('int1e_kin_sph')
a = np.loadtxt("kin.txt",skiprows=2)
print(np.allclose(a,b))
print(a-b)



print("NUCLEAR CHECK")
b = mol.intor('int1e_nuc_sph')
a = np.loadtxt("nuc.txt",skiprows=2)
print(np.allclose(a,b))
print(a-b)
