#!/bin/bash
#./format.sh
rm -rf build
mkdir -p build
cd build
cmake \
    -DPOLYQUANT_DOC=0 \
    -DPOLYQUANT_TEST=1 \
    -DPOLYQUANT_CODE_COVERAGE=0 \
    -DCMAKE_C_COMPILER=clang \
    -DCMAKE_CXX_COMPILER=clang++ \
    -DCMAKE_BUILD_TYPE="Release" \
    -DBLIS_INCLUDE_DIR=/opt/aocl-aocc \
    -G Ninja \
    ..
#ninja Sphinx
ninja
#make -j12 
# lcov --capture --initial --directory . --base-directory ../src --output-file coverage_base.info
# ninja test
# lcov --base-directory ../src --directory . --capture --output-file coverage.info
# # filter out system and extra files.
# # output coverage data for debugging (optional)
# lcov -a coverage_base.info -a coverage.info -o coverage_total.info
# # To also not include test code in coverage add them with full path to the patterns: '*/tests/*'
# lcov --remove coverage_total.info '/usr/*' "${HOME}"'/.cache/*' '*/tests/*' '*build/*' --output-file coverage_total.info
# lcov --list coverage_total.info
# genhtml coverage_total.info -o temp
