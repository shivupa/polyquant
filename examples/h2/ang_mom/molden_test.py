import pyscf.tools as pt
import numpy as np
import argparse

parser = argparse.ArgumentParser(
                    prog = 'QuickPlotOrb',
                    description = 'plots orbitals',
                    epilog = 'Shiv')
parser.add_argument('filename') 
parser.add_argument('-s', '--spin', type=int, default=0)

args = parser.parse_args()
filename = args.filename
spin = args.spin

from iodata import load_one
mol, mo_energy, mo_coeff, mo_occ, irrep_labels, spins = pt.molden.load(filename)
s = mol.intor('int1e_ovlp')
c = mo_coeff[spin]
a = c.T @ s @ c
a -= np.identity(len(s))
print(np.unravel_index(a.argmax(), a.shape), a[np.unravel_index(a.argmax(), a.shape)] )
a = load_one(filename)

