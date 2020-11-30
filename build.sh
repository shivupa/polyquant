#!/bin/bash
./format.sh
rm -rf build
mkdir -p build
cd build
cmake \
    -DPOLYQUANT_DEBUG=0 \
    -DPOLYQUANT_DOC=0 \
    -DPOLYQUANT_TEST=0 \
    ..
make -j 4
#make test
#make Sphinx
#cd ..
#cd examples/h2o
#./run.sh
#cd ../hcn
#./run.sh
