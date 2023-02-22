from pyscf import gto, scf
import basis_set_exchange
import numpy as np

mol = gto.M(
    atom = """
    H     0.000000    0.000000    0.0000;
    H     0.000000    0.000000    1.0000""",
    basis = {'H' : 
             gto.parse('''
H    D
    1.000000              1.000000
                                ''')
             },
    spin=0,
    symmetry = 'D2h'
)
myhf = scf.HF(mol)
myhf.kernel()

np.savetxt("mo_energy.txt", myhf.mo_energy)
np.savetxt("mo_coeff.txt", myhf.mo_coeff)
np.savetxt("total_energy.txt", np.array([myhf.e_tot]))
