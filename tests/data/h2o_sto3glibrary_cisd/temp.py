import pyscf
import numpy as np

O_sto3g_alls = """
O    S
      0.1307093214E+03       0.1543289673E+00
      0.2380886605E+02       0.5353281423E+00
      0.6443608313E+01       0.4446345422E+00
O    S
      0.5033151319E+01      -0.9996722919E-01
      0.1169596125E+01       0.3995128261E+00
      0.3803889600E+00       0.7001154689E+00
O    S
      0.5033151319E+01       0.1559162750E+00
      0.1169596125E+01       0.6076837186E+00
      0.3803889600E+00       0.3919573931E+00
"""

basis_dict = { "H" : "sto-3g" , "O" : pyscf.gto.parse(O_sto3g_alls)}

mol = pyscf.M(
    # atom = 'H        0.7569685, 0.0000000, -0.5858752;H       -0.7569685, 0.0000000, -0.5858752;O        0.0000000, 0.0000000,  0.0000000',
    atom=" H 1.430463,    0.000000,    -1.107144; H -1.430463,    0.000000,    -1.107144; O 0.000000,    0.000000,    0.000000",
    unit="b",
    basis=basis_dict,
    #basis="sto-3g",
    verbose=0,
)

mf = mol.RHF()
mf.conv_tol = 1e-9
mf.run()
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


nmo = mf.mo_coeff.shape[-1]

for i in range(nmo):
    for j in range(i, nmo):
        for k in range(nmo):
            for l in range(k, nmo):
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
