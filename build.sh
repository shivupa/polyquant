#!/bin/bash
./format.sh
rm -rf build
mkdir -p build
cd build
cmake ..
.
make -j 1
#make test
ctest
#make Sphinx
#cd ..
#cd examples/h2o
#./run.sh
#cd ../hcn
#./run.sh
