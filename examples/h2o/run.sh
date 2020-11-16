#!/bin/bash

export OMP_NUM_THREADS=1

../../build/bin/polyquant -i h2o.json
~/Documents/qmcpack/build/bin/convert4qmc -orbitals electron.h5
sed -i 's/blocks">20/blocks">100/' electron.qmc.in-wfnoj.xml
sed -i 's/steps">50/steps">3000/' electron.qmc.in-wfnoj.xml
# sed -i 's/usedrift">no/usedrift">yes/' electron.qmc.in-wfnoj.xml

cd psi4
python h2o.py
~/Documents/qmcpack/build/bin/convert4qmc -orbitals Default.h5
sed -i 's/blocks">20/blocks">100/' Default.qmc.in-wfnoj.xml
# sed -i 's/usedrift">no/usedrift">yes/' Default.qmc.in-wfnoj.xml
sed -i 's/steps">50/steps">3000/' Default.qmc.in-wfnoj.xml
cd ..

h5dump psi4/Default.h5 > guide.txt; h5dump electron.h5 > output.txt

cd psi4
~/Documents/qmcpack/build/bin/qmcpack Default.qmc.in-wfnoj.xml &> psi4_qmcpack.txt
cd ..

~/Documents/qmcpack/build/bin/qmcpack electron.qmc.in-wfnoj.xml &> polyquant_qmcpack.txt

echo ""
echo ""
echo "SUMMARY"
echo ""
echo "Polyquant"
~/Documents/qmcpack/nexus/bin/qmca -q ev -e 100 --sac *scalar.dat
echo "Psi4"
cd psi4
~/Documents/qmcpack/nexus/bin/qmca -q ev -e 100 --sac *scalar.dat
cd ..




#python h2o.py
#
#
#rm H_core.txt
#rm kinetic.txt
#rm nuclear.txt
#rm overlap.txt
#rm twoelec.txt
#rm F.txt
