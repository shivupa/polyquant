import iodata

original_filename = "electron_polyquant.molden"
filename = "new_electron_polyquant.molden"

x_min = -10.0
x_max = 10.0
npts_x = 100

y_min = -10.0
y_max = 10.0
npts_y = 100

z_min = -10.0
z_max = 10.0
npts_z = 100


with open(".pyscf_conf.py", "w+") as f:
    f.write(
        "cubegen_box_origin=[{},{},{}]\ncubegen_box_extent=[{},{},{}]\n".format(
            x_min, y_min, z_min, x_max - x_min, y_max - y_min, z_max - z_min
        )
    )


#########################################

data = iodata.load_one(original_filename)
iodata.dump_one(data, filename)

#########################################

import pyscf
import pyscf.tools as pt
from pyscf import scf
import numpy as np

mol, mo_energy, mo_coeff, mo_occ, irrep_labels, spins = pt.molden.load(filename)
s = mol.intor('int1e_ovlp')
print(s.shape)
print(mo_occ[0])
print(mo_occ[0].shape)
print(mo_coeff[0].shape)
print(pyscf.scf.uhf.make_rdm1(mo_coeff, mo_occ))
alpha_den_val = pt.cubegen.density(mol, "electrondens_alpha.cube", pyscf.scf.uhf.make_rdm1(mo_coeff, mo_occ)[0] , nx=npts_x, ny=npts_y, nz=npts_z)
beta_den_val = pt.cubegen.density(mol, "electrondens_beta.cube", pyscf.scf.uhf.make_rdm1(mo_coeff, mo_occ)[1] , nx=npts_x, ny=npts_y, nz=npts_z)
