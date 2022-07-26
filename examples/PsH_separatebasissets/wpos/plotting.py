import glob
import numpy as np

import iodata
import argparse
import os


def default_output_filename(input_filename):
    output_filename = "{}.cube".format(os.path.splitext(input_filename)[0])
    return output_filename

def process_extent_and_center(extent, center):
    if not all(i > 0.0 for i in extent):
        raise ValueError("The extent of the region plotted must all be positive.")
    
    with open('.pyscf_conf.py', 'w') as f:
        f.write(f"cubegen_box_origin={center}\ncubegen_box_extent={extent}\n")

def plot_density(molden_filename,extent, center, numpts, output_filename):
    process_extent_and_center(extent, center)
    import pyscf.tools as pt
    from pyscf import scf
    mol, mo_energy, mo_coeff, mo_occ, irrep_labels, spins = pt.molden.load(molden_filename)
    dm = None
    if len(mo_coeff) == 1:
        mf = scf.RHF(mol)
        dm = mf.make_rdm1(mo_coeff, mo_occ)
    else:
        mf = scf.UHF(mol)
        dm = mf.make_rdm1(mo_coeff, mo_occ)
        dm = dm[0] + dm[1]
    pt.cubegen.density(mol, output_filename, dm)

def plot_orbital(molden_filename,orbital_num, orbital_spin, extent, center, numpts, output_filename):
    process_extent_and_center(extent, center)
    import pyscf.tools as pt
    from pyscf import scf
    mol, mo_energy, mo_coeff, mo_occ, irrep_labels, spins = pt.molden.load(molden_filename)
    print(mo_occ)
    if orbital_spin in ['b', 'beta'] and len(mo_coeff) == 1:
        raise ValueError("Beta orbitals cannot be plotted since the molden file seems to be from a restricted calculation.")
    spin_idx = 0 if orbital_spin in ['a', 'alpha'] else 1

    mo = mo_coeff[spin_idx][:, orbital_num]
    pt.cubegen.orbital(mol, output_filename, mo, nx=numpts[0], ny=numpts[1], nz=numpts[2])

def plot(molden_filename, orbital_num, orbital_spin, extent, center, numpts, output_filename):
    if output_filename is None:
        output_filename = default_output_filename(molden_filename)

    if orbital_num is None:
        plot_density(molden_filename, extent, center, numpts, output_filename)
    else:
        plot_orbital(molden_filename, orbital_num, orbital_spin, extent, center, numpts, output_filename)


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Create a cube from a molden file.")

    parser.add_argument(
        "-i", "--input", type=str, required=True, help="Molden filename."
    )

    parser.add_argument(
        "-n",
        "--orbnum",
        type=int,
        help="Orbital number to plot. If omitted, the electron density will be plotted.",
    )
    parser.add_argument(
        "-s",
        "--spin",
        type=str,
        choices=["a", "alpha", "b", "beta"],
        default="alpha",
        help="Orbital spin to plot. If omitted, the alpha orbital will be plotted.",
    )

    parser.add_argument(
        "-e",
        "--extent",
        type=float,
        nargs=3,
        help="Extent of box to plot in. If omitted, pyscf default will be used.",
    )
    parser.add_argument(
        "-c",
        "--center",
        type=float,
        nargs=3,
        help="Center of box to plot in. If omitted, pyscf default will be used.",
    )
    parser.add_argument(
        "-p",
        "--numpts",
        type=int,
        nargs=3,
        help="Number of points to plot in. If omitted, pyscf default will be used.",
    )

    parser.add_argument("-o", "--output", type=str, help="Cube file output filename.")

    args = parser.parse_args()

    original_filename = args.input
    filename = "normed_" + args.input
    data = iodata.load_one(original_filename)
    iodata.dump_one(data, filename)
    plot(filename, args.orbnum, args.spin, args.extent, args.center, args.numpts, args.output)
    print(args.orbnum)


# parser.add_argument('molden', metavar='N', type=int, nargs='+',
#                    help='molden filename')
#    mol, mo_energy, mo_coeff, mo_occ, irrep_labels, spins = pt.molden.load(filename)
#    print(irrep_labels)
#    for i, j  in enumerate(mo_energy):
#        print(i,j)
#    filename = os.path.splitext(os.path.basename(filename))[0]
#    species, allelec, res, length, caption, rev = filename.split("_")
#    if res == "res":
#        res = True
#    elif res == "unres":
#        res = False
#    else:
#        raise ValueError("check res or unres value in filename. See README")
#    if allelec == "allelec":
#        allelec = True
#    elif allelec == "pp":
#        allelec = False
#    else:
#        raise ValueError("check allelec or pp value in filename. See README")
#    if rev == "rev":
#        rev = True
#    elif rev == "norev":
#        rev = False
#    else:
#        raise ValueError("check rev or norev value in filename. See README")
#
#
#    if not res:
#        mo_occ = mo_occ.reshape(2,len(mo_occ)//2)
#        mo_coeff_new = np.zeros((2,len(mo_coeff),len(mo_coeff[0])//2))
#        offset = len(mo_coeff[0])//2
#        mo_coeff_new[0,:,:]=mo_coeff[:,0:offset]
#        mo_coeff_new[1,:,:]=mo_coeff[:,offset::]
#        mo_coeff = mo_coeff_new
#    if res and rev:
#        mo_energy = mo_energy[::-1]
#        mo_occ = mo_occ[::-1]/2
#        mo_coeff[:,:] = mo_coeff[:,::-1]
#        pt.molden.from_mo(mol, "file.molden", mo_coeff, spin='Alpha', ene=mo_energy, occ=mo_occ)
#    elif not res and rev:
#        raise NotImplementedError("Implement this")
#
#    if allelec and res:
#        mo = mo_coeff[:,20]
#    elif allelec and not res:
#        mo = mo_coeff[0,:,20]
#    elif not allelec and res:
#        mo = mo_coeff[:,16]
#    elif not allelec and not res:
#        mo = mo_coeff[0,:,16]
#
#    pt.cubegen.orbital(mol,"{}.cube".format(filename),mo,nx=101,ny=101,nz=101)
#
