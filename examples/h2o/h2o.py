from pyscf import gto, scf
import numpy as np

mol = gto.Mole()
mol.verbose = 1
# mol.output = 'out_h2o'
mol.atom = """
O   0.0000000 0.0000000  0.0000000,
H   0.7569685 0.0000000 -0.5858752,
H  -0.7569685 0.0000000 -0.5858752"""
mol.symmetry = 1
mol.unit = "Angstrom"
mol.build()

print("PYTHON CHECK WITH PYSCF")


print("OVERLAP CHECK")
b = mol.intor("int1e_ovlp_sph")
a = np.load("overlap.npy")
print(np.allclose(a, b))
print(np.max(a - b))


print("KINETIC CHECK")
b = mol.intor("int1e_kin_sph")
a = np.load("kinetic.npy")
print(np.allclose(a, b))
print(np.max(a - b))


print("NUCLEAR CHECK")
b = mol.intor("int1e_nuc_sph")
a = np.load("nuclear.npy")
print(np.allclose(a, b))
print(np.max(a - b))


print("TWO ELEC CHECK")
b = mol.intor("cint2e_sph", aosym="s8")
a = np.load("twoelec.npy")
print(np.allclose(a, b))
print(np.max(a - b))


print("HCORE")
n = mol.nelec[0]
myhf = scf.RHF(mol)
b = myhf.get_hcore()
a = np.load("hcore.npy")
print(np.allclose(a, b))
print(np.max(a - b))


print("Initial Fock")
myhf = scf.RHF(mol)
b = myhf.get_hcore()
a = np.load("F.npy")
print(np.allclose(a, b))
print(np.max(a - b))



