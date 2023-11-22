from pyscf import gto, scf
import basis_set_exchange
import numpy as np

mol = gto.M(
    atom = """
    Be     0.000000    0.000000    0.0000""",
    basis = {'Be' : gto.load(basis_set_exchange.api.get_basis('cc-pVDZ', augment_diffuse=0, elements='Be', fmt='nwchem'), 'Be')},
    symmetry = 'D2h'
)
myhf = scf.HF(mol)
myhf.kernel()


#for i in myhf.mo_energy:
#    print("{:>30.20f}".format(i))
np.savetxt("mo_energy.txt", myhf.mo_energy)
np.savetxt("mo_coeff.txt", myhf.mo_coeff)
np.savetxt("total_energy.txt", np.array([myhf.e_tot]))
