#!/bin/bash
./format.sh
rm -rf build
mkdir -p build
cd build
cmake \
    -DPOLYQUANT_DEBUG=0 \
    -DPOLYQUANT_DOC=0 \
    -DPOLYQUANT_TEST=1 \
    -DPOLYQUANT_CODE_COVERAGE=1 \
    ..
make -j 4
lcov --directory . --capture --output-file coverage.info
# filter out system and extra files.
# To also not include test code in coverage add them with full path to the patterns: '*/tests/*'
lcov --remove coverage.info '/usr/*' "${HOME}"'/.cache/*' '*/tests/*' '*build/*' --output-file coverage.info
# output coverage data for debugging (optional)
lcov --list coverage.info
genhtml coverage.info -o temp
#make test
#make Sphinx
#cd ..
#cd examples/h2o
#./run.sh
#cd ../hcn
#./run.sh
