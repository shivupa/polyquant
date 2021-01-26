#!/bin/bash
./format.sh
rm -rf build
mkdir -p build
cd build
export MKL_INCLUDE_DIR=/opt/intel/mkl
export MKL_ROOT=/opt/intel/mkl
cmake \
    -DPOLYQUANT_DEBUG=0 \
    -DPOLYQUANT_DOC=0 \
    -DPOLYQUANT_TEST=1 \
    -DPOLYQUANT_CODE_COVERAGE=0 \
    -DMKL_ROOT=/opt/intel/mkl \
    ..
make -j 4
lcov --capture --initial --directory . --base-directory ../src --output-file coverage_base.info
make test
lcov --base-directory ../src --directory . --capture --output-file coverage.info
# filter out system and extra files.
# output coverage data for debugging (optional)
lcov -a coverage_base.info -a coverage.info -o coverage_total.info
# To also not include test code in coverage add them with full path to the patterns: '*/tests/*'
lcov --remove coverage_total.info '/usr/*' "${HOME}"'/.cache/*' '*/tests/*' '*build/*' --output-file coverage_total.info
lcov --list coverage_total.info
genhtml coverage_total.info -o temp
#make test
#make Sphinx
#cd ..
#cd examples/h2o
#./run.sh
#cd ../hcn
#./run.sh
