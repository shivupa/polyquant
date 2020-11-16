import molden2qmc

with open("scf_molden.molden", "r") as f:
    psi4 = molden2qmc.PSI4(f)
    psi4.qmcpack(f="Default.h5")
