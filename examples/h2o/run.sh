#!/bin/bash


../../build/bin/polyquant -i h2o.json
~/Documents/qmcpack/build/bin/convert4qmc -addCusp -orbitals electron.h5
cd pyscf
~/Documents/qmcpack/build/bin/convert4qmc -addCusp -orbitals Default.h5
~/Documents/qmcpack/build/bin/qmcpack Default.qmc.in-wfnoj.xml &> pyscf_qmcpack.txt
cd ..
h5dump pyscf/Default.h5 > guide.txt; h5dump electron.h5 > output.txt
~/Documents/qmcpack/build/bin/qmcpack electron.qmc.in-wfnoj.xml &> polyquant_qmcpack.txt




#python h2o.py
#
#
#rm H_core.txt
#rm kinetic.txt
#rm nuclear.txt
#rm overlap.txt
#rm twoelec.txt
#rm F.txt
