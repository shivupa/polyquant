#!/bin/bash

export OMP_NUM_THREADS=1

../../../build/bin/polyquant -i Li_wpos.json
~/Documents/qmcpack/build/bin/convert4qmc -orbitals Li_wpos.h5
sed -i 's/blocks">20/blocks">100/' Li_wpos.qmc.in-wfnoj.xml
sed -i 's/steps">50/steps">3000/' Li_wpos.qmc.in-wfnoj.xml
sed -i 's/usedrift">no/usedrift">yes/' Li_wpos.qmc.in-wfnoj.xml

h5dump Li_wpos.h5 > output_e.txt

cp modified_qmcpack_files/* .

~/Documents/qmcpack/build/bin/qmcpack Li_wpos.qmc.in-wfnoj.xml &> polyquant_qmcpack.txt

echo ""
echo ""
echo "SUMMARY"
echo ""
echo "Polyquant"
~/Documents/qmcpack/nexus/bin/qmca -q ev -e 0 --sac *scalar.dat


