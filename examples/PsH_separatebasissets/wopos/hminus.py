from pyscf import gto, scf, ci
import numpy as np

mol = gto.Mole()
mol.verbose = 5
# mol.output = 'out_h2o'
mol.atom = """
H        0.000000    0.000000    0.000000"""
basis_dict = {
    "H": gto.parse(
        """
H    S
17.370000 0.032828
2.617300 0.201210
0.589940 0.817240
H    S
0.169029 1.000000
H    S
0.060000 1.000000
H    S
0.020000 1.000000
H    S
0.009000 1.000000"""
    )
}
mol.basis = basis_dict
mol.symmetry = 0
mol.spin = 0
mol.charge = -1
mol.build()

mf = scf.RHF(mol)
mf.kernel()

myci = ci.CISD(mf).run()
dm1 = myci.make_rdm1()


mo = mf.mo_coeff
print()
print(dm1)
print()
print(mo @ dm1 @ mo.T)
print()
eigvals, eigvecs = np.linalg.eigh(dm1)
eigvecs = mo @ eigvecs
print(np.sum(eigvals))
eigvals = np.flip(eigvals)
eigvecs = np.fliplr(eigvecs)
print(eigvals)
print(eigvecs)
print()


dm1_mo = dm1
dm1_ao = mo @ dm1 @ mo.T
