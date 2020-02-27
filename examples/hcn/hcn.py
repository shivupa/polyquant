from pyscf import gto, scf
import numpy as np


print("Polarization Potential")
a = np.load("polarization_potential.npy")
print(a)

for i in ["F.npy","F_pos.npy","hcore.npy","kinetic.npy","nuclear.npy","overlap.npy","polarization_potential.npy","twoelec.npy"]:
    print(np.load(i))
    print("*"*79)
