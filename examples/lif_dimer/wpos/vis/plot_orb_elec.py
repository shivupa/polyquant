import iodata

original_filename = "electron_polyquant.molden"
filename = "new_electron_polyquant.molden"

x_min = -50.0
x_max = 50.0
npts_x = 100

y_min = -50.0
y_max = 50.0
npts_y = 100

z_min = -50.0
z_max = 50.0
npts_z = 100


with open(".pyscf_conf.py", "w+") as f:
    f.write(
        "cubegen_box_origin=[{},{},{}]\ncubegen_box_extent=[{},{},{}]\n".format(
            x_min, y_min, z_min, x_max - x_min, y_max - y_min, z_max - z_min
        )
    )


#########################################

#data = iodata.load_one(original_filename)
#iodata.dump_one(data, filename)
filename=original_filename

#########################################

import pyscf
import pyscf.tools as pt
from pyscf import scf
import numpy as np

mol, mo_energy, mo_coeff, mo_occ, irrep_labels, spins = pt.molden.load(filename)
s = mol.intor('int1e_ovlp')
#print(s.shape)
#print(mo_occ[0])
#print(mo_occ[0].shape)
#print(mo_coeff[0].shape)
#print(pyscf.scf.uhf.make_rdm1(mo_coeff, mo_occ))
alpha_den_val = pt.cubegen.density(mol, "electrondens_alpha.cube", pyscf.scf.uhf.make_rdm1(mo_coeff, mo_occ)[0] , nx=npts_x, ny=npts_y, nz=npts_z)
beta_den_val = pt.cubegen.density(mol, "electrondens_beta.cube", pyscf.scf.uhf.make_rdm1(mo_coeff, mo_occ)[1] , nx=npts_x, ny=npts_y, nz=npts_z)

pcts_to_print = list(range(50,96,5))
pcts_to_print.append(98)
pcts_to_print.append(99)

def print_iso_table(den_val):
    den_val = den_val.ravel()
    den_val[::-1].sort()
    percentages = np.cumsum(den_val)/ np.sum(den_val)
    print("{:>10}     {:>20}".format("pct", "iso"))
    print("{:>10}     {:>20}".format("-"*10, "-"*10))
    for i in pcts_to_print:
        idx = np.searchsorted(percentages, i/100.0)+1
        if idx >= len(den_val):
            idx = len(den_val)-1
        val = den_val[idx]
        print("{:>10}     {:>20}".format("{:>03d}".format(i), "{:> 18.15f}".format(val)))


print("ALPHA")
print_iso_table(alpha_den_val)
print("BETA")
print_iso_table(beta_den_val)
