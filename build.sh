#!/bin/bash
#./format.sh
rm -rf build
mkdir -p build
cd build
export MKL_INCLUDE_DIR=/opt/intel/mkl
export MKL_ROOT=/opt/intel/mkl
cmake \
    -DPOLYQUANT_DEBUG=0 \
    -DPOLYQUANT_DOC=1 \
    -DPOLYQUANT_TEST=1 \
    -DPOLYQUANT_CODE_COVERAGE=0 \
    -DCMAKE_BUILD_TYPE="Release" \
    -DMKL_ROOT=/opt/intel/mkl \
    .. -G Ninja
ninja Sphinx
ninja
lcov --capture --initial --directory . --base-directory ../src --output-file coverage_base.info
ninja test
lcov --base-directory ../src --directory . --capture --output-file coverage.info
# filter out system and extra files.
# output coverage data for debugging (optional)
lcov -a coverage_base.info -a coverage.info -o coverage_total.info
# To also not include test code in coverage add them with full path to the patterns: '*/tests/*'
lcov --remove coverage_total.info '/usr/*' "${HOME}"'/.cache/*' '*/tests/*' '*build/*' --output-file coverage_total.info
lcov --list coverage_total.info
genhtml coverage_total.info -o temp
