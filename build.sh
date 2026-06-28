#!/bin/bash
set -euo pipefail

BUILD_DIR="${BUILD_DIR:-build}"
BUILD_TYPE="${CMAKE_BUILD_TYPE:-Release}"
POLYQUANT_DOC="${POLYQUANT_DOC:-1}"
POLYQUANT_TEST="${POLYQUANT_TEST:-1}"
POLYQUANT_NETWORK_TESTS="${POLYQUANT_NETWORK_TESTS:-1}"
POLYQUANT_CODE_COVERAGE="${POLYQUANT_CODE_COVERAGE:-1}"

generator_args=()
if command -v ninja >/dev/null 2>&1; then
  generator_args=(-G Ninja)
fi

cmake \
  -S . \
  -B "${BUILD_DIR}" \
  -DPOLYQUANT_DOC="${POLYQUANT_DOC}" \
  -DPOLYQUANT_TEST="${POLYQUANT_TEST}" \
  -DPOLYQUANT_NETWORK_TESTS="${POLYQUANT_NETWORK_TESTS}" \
  -DPOLYQUANT_CODE_COVERAGE="${POLYQUANT_CODE_COVERAGE}" \
  -DCMAKE_BUILD_TYPE="${BUILD_TYPE}" \
  "${generator_args[@]}" \
  "$@"

build_args=(--build "${BUILD_DIR}")
if [[ -n "${BUILD_PARALLEL_LEVEL:-}" ]]; then
  build_args+=(--parallel "${BUILD_PARALLEL_LEVEL}")
else
  build_args+=(--parallel)
fi
cmake "${build_args[@]}"

if [[ "${RUN_TESTS:-0}" == "1" ]]; then
  ctest --test-dir "${BUILD_DIR}" --output-on-failure
fi
