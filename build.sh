#!/bin/bash
./format.sh
rm -rf build
mkdir -p build
cd build
CC=mpicc \
CXX=mpic++ \
FC=mpifort \
CXXFLAGS="-Wall -Wextra -O3" \
cmake .. \
-DPYCI_DEBUG=0 \
-DPYCI_DOCS=1
# make 
# make test
make doxygen
# cd ..
# cd examples/h2o
# ./run.sh
