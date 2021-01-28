import pyscf

mol = pyscf.M(
    atom = 'H        0.7569685, 0.0000000, -0.5858752;H       -0.7569685, 0.0000000, -0.5858752;O        0.0000000, 0.0000000,  0.0000000',
    basis = 'sto-3g')

mf = mol.HF().run()
mycc = mf.CISD().run()
print('RCISD correlation energy', mycc.e_corr)

#mf = mol.UHF().run()
#mycc = mf.CISD().run()
#print('UCISD correlation energy', mycc.e_corr)


t = mol.intor('int1e_kin')
v = mol.intor('int1e_nuc')
h = t + v

h_mo = mf.mo_coeff.T @ h @ mf.mo_coeff
s_mo = mf.mo_coeff.T @ mol.intor('int1e_ovlp') @ mf.mo_coeff


eri_4fold = pyscf.ao2mo.kernel(mol, mf.mo_coeff)

