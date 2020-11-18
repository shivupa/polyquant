#!/bin/bash

export OMP_NUM_THREADS=1

#../../../build/bin/polyquant -i Li_wpos.json
#~/Documents/qmcpack/build/bin/convert4qmc -orbitals electron.h5
#~/Documents/qmcpack/build/bin/convert4qmc -orbitals positron.h5
#sed -i 's/blocks">20/blocks">100/' electron.qmc.in-wfnoj.xml
#sed -i 's/steps">50/steps">3000/' electron.qmc.in-wfnoj.xml
#sed -i 's/usedrift">no/usedrift">yes/' electron.qmc.in-wfnoj.xml

h5dump electron.h5 > output_e.txt
h5dump positron.h5 > output_p.txt

~/Documents/qmcpack/build/bin/qmcpack electron.qmc.in-wfnoj.xml &> polyquant_qmcpack.txt

echo ""
echo ""
echo "SUMMARY"
echo ""
echo "Polyquant"
~/Documents/qmcpack/nexus/bin/qmca -q ev -e 0 --sac *scalar.dat


