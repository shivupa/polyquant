import pyscf
import numpy as np

mol = pyscf.M(
    # atom = 'H        0.7569685, 0.0000000, -0.5858752;H       -0.7569685, 0.0000000, -0.5858752;O        0.0000000, 0.0000000,  0.0000000',
    atom=" H 1.430463,    0.000000,    -1.107144; H -1.430463,    0.000000,    -1.107144; O 0.000000,    0.000000,    0.000000",
    unit="b",
    basis="sto-3g",
    verbose=0,
)

mf = mol.RHF().run()
mf.analyze()

t = mol.intor("int1e_kin")
v = mol.intor("int1e_nuc")
h = t + v

h_mo = mf.mo_coeff.T @ h @ mf.mo_coeff

np.savetxt("ref_mo_onebody.txt", h_mo)

from pyscf import ao2mo

mo_ints = ao2mo.kernel(mol, mf.mo_coeff)


def tri(i, j):
    if i > j:
        return int((i * (i + 1)) / 2 + j)
    else:
        return int((j * (j + 1)) / 2 + i)


for i in range(7):
    for j in range(i, 7):
        for k in range(7):
            for l in range(k, 7):
                print(i, j, k, l, mo_ints[tri(i, j)][tri(k, l)])


exit()

cisolver = pyscf.fci.FCI(mf)
print("E(FCI) = %.12f" % cisolver.kernel()[0])

from pyscf.tools import fcidump

fcidump.from_scf(mf, "fcidump.example1", tol=0)
mycc = mf.CISD().run()
print("RCISD correlation energy", mycc.e_corr)

# mf = mol.UHF().run()
# mycc = mf.CISD().run()
# print('UCISD correlation energy', mycc.e_corr)


t = mol.intor("int1e_kin")
v = mol.intor("int1e_nuc")
h = t + v

h_mo = mf.mo_coeff.T @ h @ mf.mo_coeff
s_mo = mf.mo_coeff.T @ mol.intor("int1e_ovlp") @ mf.mo_coeff


eri_4fold = pyscf.ao2mo.kernel(mol, mf.mo_coeff)


from utils import cisd

cisd(mol, printroots=2)
