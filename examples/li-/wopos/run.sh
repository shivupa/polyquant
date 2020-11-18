#!/bin/bash

export OMP_NUM_THREADS=1

../../../build/bin/polyquant -i Li_wopos.json
~/Documents/qmcpack/build/bin/convert4qmc -orbitals electron.h5
sed -i 's/blocks">20/blocks">100/' electron.qmc.in-wfnoj.xml
sed -i 's/steps">50/steps">3000/' electron.qmc.in-wfnoj.xml
sed -i 's/usedrift">no/usedrift">yes/' electron.qmc.in-wfnoj.xml

cd pyscf
python Li.py
~/Documents/qmcpack/build/bin/convert4qmc -orbitals Default.h5
sed -i 's/blocks">20/blocks">100/' Default.qmc.in-wfnoj.xml
sed -i 's/steps">50/steps">3000/' Default.qmc.in-wfnoj.xml
sed -i 's/usedrift">no/usedrift">yes/' Default.qmc.in-wfnoj.xml
cd ..

h5dump pyscf/Default.h5 > guide.txt; h5dump electron.h5 > output.txt

cd pyscf
~/Documents/qmcpack/build/bin/qmcpack Default.qmc.in-wfnoj.xml &> pyscf_qmcpack.txt
cd ..

~/Documents/qmcpack/build/bin/qmcpack electron.qmc.in-wfnoj.xml &> polyquant_qmcpack.txt

echo ""
echo ""
echo "SUMMARY"
echo ""
echo "Polyquant"
~/Documents/qmcpack/nexus/bin/qmca -q ev -e 0 --sac *scalar.dat
echo "pyscf"
cd pyscf
~/Documents/qmcpack/nexus/bin/qmca -q ev -e 0 --sac *scalar.dat
cd ..


