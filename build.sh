#!/bin/bash
rm -rf build
mkdir -p build
cd build
cmake -DENABLE_FORTRAN=ON -DLIBINT2_BUILD_TESTS=OFF -DLIBINT2_BUILD_SHARED_AND_STATIC_LIBS=ON -GNinja ..
ninja
