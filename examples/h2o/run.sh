#!/bin/bash


../../build/bin/polyquant -i h2o.json
~/Documents/qmcpack/build/bin/convert4qmc -addCusp -orbitals electron.h5
cd pyscf
python h2o.py
~/Documents/qmcpack/build/bin/convert4qmc -addCusp -orbitals Default.h5
sed -i 's/blocks">20/blocks">20000/' Default.qmc.in-wfnoj.xml
sed -i 's/usedrift">no/usedrift">yes/' Default.qmc.in-wfnoj.xml
~/Documents/qmcpack/build/bin/qmcpack Default.qmc.in-wfnoj.xml &> pyscf_qmcpack.txt
cd ..
h5dump pyscf/Default.h5 > guide.txt; h5dump electron.h5 > output.txt
sed -i 's/blocks">20/blocks">20000/' electron.qmc.in-wfnoj.xml
sed -i 's/usedrift">no/usedrift">yes/' Default.qmc.in-wfnoj.xml
~/Documents/qmcpack/build/bin/qmcpack electron.qmc.in-wfnoj.xml &> polyquant_qmcpack.txt

echo ""
echo ""
echo "SUMMARY"
echo ""
echo "Polyquant"
~/Documents/qmcpack/nexus/bin/qmca -q ev -e 3000 --sac *scalar.dat
echo "Pyscf"
cd pyscf
~/Documents/qmcpack/nexus/bin/qmca -q ev -e 3000 --sac *scalar.dat
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
