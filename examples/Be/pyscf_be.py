import pyscf
from pyscf import gto, fci
basis_str = """
Be    S
      2.940000E+03           6.800000E-04          -1.230000E-04           0.000000E+00
      4.412000E+02           5.236000E-03          -9.660000E-04           0.000000E+00
      1.005000E+02           2.660600E-02          -4.831000E-03           0.000000E+00
      2.843000E+01           9.999300E-02          -1.931400E-02           0.000000E+00
      9.169000E+00           2.697020E-01          -5.328000E-02           0.000000E+00
      3.196000E+00           4.514690E-01          -1.207230E-01           0.000000E+00
      1.159000E+00           2.950740E-01          -1.334350E-01           0.000000E+00
      1.811000E-01           1.258700E-02           5.307670E-01           0.000000E+00
      5.890000E-02          -3.756000E-03           5.801170E-01           1.000000E+00
Be    P
      3.619000E+00           2.911100E-02           0.000000E+00
      7.110000E-01           1.693650E-01           0.000000E+00
      1.951000E-01           5.134580E-01           0.000000E+00
      6.018000E-02           4.793380E-01           1.000000E+00
Be    D
      2.354000E-01           1.0000000
"""
mol = pyscf.M(
        atom = ' Be 0.0, 0.0, 0.0',
    unit = 'b',
    cart = False,
    symmetry='D2h',
    #basis = {'Be': gto.parse(basis_str)},
    basis = 'cc-pvdz', #{'Be': gto.parse(basis_str)},
    verbose=9)

mf = mol.RHF()
mf.run()
mf.analyze()
mc = fci.FCI(mol, mf.mo_coeff)


mc.nroots=13
mc.run()
e = mc.e_tot
norb = mf.mo_energy.size
nelec = (2,2)
thresh = 0.1
for i, c in enumerate(mc.ci):
    print(f"State {i:}")
    print(mc.spin_square(c, norb, nelec))
    #for na,a in enumerate(c):
    #    if abs(a) > thresh:
    #        print(na,a)
    #c = mc.to_fcivec(c)
    #print('state = %d, E = %.9f, S^2=%.4f' %
    #      (i, e[i], pyscf.fci.spin_op.spin_square(c, norb, nelec)[0]))

exit()
cisolver = pyscf.fci.FCI(mf)
print('E(FCI) = %.12f' % cisolver.kernel()[0])


# from pyscf.tools import fcidump
# fcidump.from_scf(mf, 'fcidump.example1', tol=0)
# exit()
# mycc = mf.CISD().run()
# print('RCISD correlation energy', mycc.e_corr)
# 
# #mf = mol.UHF().run()
# #mycc = mf.CISD().run()
# #print('UCISD correlation energy', mycc.e_corr)
# 
# 
# t = mol.intor('int1e_kin')
# v = mol.intor('int1e_nuc')
# h = t + v
# 
# h_mo = mf.mo_coeff.T @ h @ mf.mo_coeff
# s_mo = mf.mo_coeff.T @ mol.intor('int1e_ovlp') @ mf.mo_coeff
# 
# 
# eri_4fold = pyscf.ao2mo.kernel(mol, mf.mo_coeff)
# 
# 
# from utils import cisd
# cisd(mol, printroots=2)
