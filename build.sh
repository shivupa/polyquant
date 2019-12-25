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
-DPYCI_DEBUG=1
make -j 4
make test
