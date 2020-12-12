#!/bin/bash

export OMP_NUM_THREADS=1

../../../build/bin/polyquant -i Li_wopos.json
~/Documents/qmcpack/build/bin/convert4qmc -orbitals Li_wopos.h5 -addCusp
cp modified_qmcpack_files/* .

#cd pyscf
#python Li.py
#~/Documents/qmcpack/build/bin/convert4qmc -orbitals Default.h5 -addCusp
#cp modified_qmcpack_files/* .
#cd ..

#h5dump pyscf/Default.h5 > guide.txt
h5dump Li_wopos.h5 > output.txt

#cd pyscf
#~/Documents/qmcpack/build/bin/qmcpack Default.qmc.in-wfj.xml &> pyscf_qmcpack.txt
#cd ..

~/Documents/qmcpack/build/bin/qmcpack Li_wopos.qmc.in-wfj.xml &> polyquant_qmcpack.txt

echo ""
echo ""
echo "SUMMARY"
echo ""
echo "Polyquant"
~/Documents/qmcpack/nexus/bin/qmca -q ev -e 0 --sac *scalar.dat
#echo "pyscf"
#cd pyscf
#~/Documents/qmcpack/nexus/bin/qmca -q ev -e 0 --sac *scalar.dat
#cd ..


