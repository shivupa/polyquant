#!/bin/bash
set -euo pipefail

if [[ "${1:-}" == "--help" || "${1:-}" == "-h" ]]; then
  cat <<'EOF'
Usage: ./build.sh [release|debug|debug-network-tests] [docs] [cmake configure args...]
       ./build.sh coverage [cmake configure args...]

Defaults to the release preset. Examples:
  ./build.sh
  ./build.sh docs
  ./build.sh release docs
  ./build.sh debug docs
  RUN_TESTS=1 ./build.sh release
EOF
  exit 0
fi

config="release"
docs="0"
coverage="0"

while [[ $# -gt 0 ]]; do
  case "$1" in
  release|debug|debug-network-tests)
    config="$1"
    shift
    ;;
  docs)
    docs="1"
    shift
    ;;
  coverage)
    coverage="1"
    shift
    ;;
  *)
    break
    ;;
  esac
done

if [[ "${coverage}" == "1" && "${docs}" == "1" ]]; then
  echo "coverage and docs cannot be combined in one preset" >&2
  exit 2
fi

if [[ "${docs}" == "1" && "${config}" == "debug-network-tests" ]]; then
  echo "docs can be combined with release or debug" >&2
  exit 2
fi

if [[ "${coverage}" == "1" ]]; then
  preset="coverage"
elif [[ "${docs}" == "1" ]]; then
  preset="${config}-docs"
else
  preset="${config}"
fi

cmake --preset "${preset}" "$@"

build_args=(--build --preset "${preset}")
if [[ -n "${BUILD_PARALLEL_LEVEL:-}" ]]; then
  build_args+=(--parallel "${BUILD_PARALLEL_LEVEL}")
else
  build_args+=(--parallel)
fi
cmake "${build_args[@]}"

if [[ "${RUN_TESTS:-0}" == "1" && "${coverage}" != "1" ]]; then
  ctest --preset "${config}"
fi
