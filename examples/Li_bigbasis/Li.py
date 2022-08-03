import pyscf

mol = pyscf.M(
        atom = 'Li 0.000000,    0.000000,    0.000000',
    unit = 'b',
    symmetry= None, 
    basis = 'aug-cc-pvqz', spin=1, verbose=9)

mf = mol.HF().run().TDA().run()
exit()
mf.analyze()
mycc = mf.CIS().run()
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


from utils import cisd
cisd(mol, printroots=2)
