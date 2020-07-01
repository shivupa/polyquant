#!/bin/bash
./format.sh
#rm -rf build
mkdir -p build
cd build
CC=mpicc \
CXX=mpic++ \
FC=mpifort \
CXXFLAGS="-Wall -Wextra -O3" \
cmake .. \
-DPYCI_DEBUG=0 \
-DPYCI_DOCS=0
make -j 1
#make test
#make Sphinx
#cd ..
#cd examples/h2o
#./run.sh
#cd ../hcn
#./run.sh
