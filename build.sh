#!/bin/bash
./format.sh
#rm -rf build
mkdir -p build
cd build
CC=mpicc \
CXX=mpic++ \
FC=mpifort \
CXXFLAGS="-Wall -Wextra -O3" \
cmake  \
-DPYCI_DEBUG=0 \
-DPYCI_DOC=0 \
-DPYCI_TEST=0 \
-DCMAKE_PREFIX_PATH=/opt/slate  \
-DPYCI_USE_DENSE_MATRIX_STL=0 \
-DPYCI_USE_DENSE_MATRIX_EIGEN=1 \
..
make -j 1
#make test
#make Sphinx
#cd ..
#cd examples/h2o
#./run.sh
#cd ../hcn
#./run.sh
