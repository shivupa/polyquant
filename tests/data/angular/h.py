from pyscf import gto, scf
import basis_set_exchange
import numpy as np


for ang_num, ang in enumerate(["s", "p", "d", "f", "g"]):
    prefix = f"{ang_num:1d}_{ang}"
    print(prefix)
    mol = gto.M(
        atom = """
        H     0.000000    0.000000    0.0000;
        H     0.000000    0.000000    1.0000""",
        basis = {'H' : 
                 gto.parse(f'''
    H    {ang}
        1.000000              1.000000
                                    ''')
                 },
        spin=0,
        symmetry = False
    )
    myhf = scf.HF(mol)
    myhf.init_guess = '1e'
    myhf.conv_tol = 1e-12
    myhf.kernel()
    
    eri = mol.intor('int2e', aosym='s1')
    
    i_max, j_max, k_max, l_max = eri.shape
    
    
    with open(f"{prefix}/eri.txt", "w") as f:
        for i in range(i_max):
            for j in range(j_max):
                for k in range(k_max):
                    for l in range(l_max):
                        f.write("{} {} {} {}     {:30.20f}\n".format(i,j,k,l,eri[i,j,k,l]))
    
    
    
    np.savetxt(f"{prefix}/mo_energy.txt", myhf.mo_energy)
    np.savetxt(f"{prefix}/mo_coeff.txt", myhf.mo_coeff)
    np.savetxt(f"{prefix}/total_energy.txt", np.array([myhf.e_tot]))
