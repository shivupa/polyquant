#!/bin/bash
set -euo pipefail

usage() {
  cat <<'EOF'
Usage: scripts/bump-version.sh X.Y.Z

Updates the Polyquant version in CMakeLists.txt.

Example:
  scripts/bump-version.sh 0.8.0
EOF
}

if [[ "${1:-}" == "--help" || "${1:-}" == "-h" ]]; then
  usage
  exit 0
fi

if [[ $# -ne 1 ]]; then
  usage >&2
  exit 2
fi

version="$1"
if [[ ! "${version}" =~ ^([0-9]+)\.([0-9]+)\.([0-9]+)$ ]]; then
  echo "Version must use X.Y.Z numeric semver format, got: ${version}" >&2
  exit 2
fi

major="${BASH_REMATCH[1]}"
minor="${BASH_REMATCH[2]}"
patch="${BASH_REMATCH[3]}"

repo_root="$(git rev-parse --show-toplevel 2>/dev/null || pwd)"
cmake_file="${repo_root}/CMakeLists.txt"

if [[ ! -f "${cmake_file}" ]]; then
  echo "Could not find CMakeLists.txt at ${cmake_file}" >&2
  exit 1
fi

sed -i \
  -e "s/^set(POLYQUANT_VERSION_MAJOR [0-9]\\+)/set(POLYQUANT_VERSION_MAJOR ${major})/" \
  -e "s/^set(POLYQUANT_VERSION_MINOR [0-9]\\+)/set(POLYQUANT_VERSION_MINOR ${minor})/" \
  -e "s/^set(POLYQUANT_VERSION_PATCH [0-9]\\+)/set(POLYQUANT_VERSION_PATCH ${patch})/" \
  "${cmake_file}"

echo "Updated Polyquant version to ${version}"
echo
echo "Next release steps:"
echo "  git commit -am \"Bump version to ${version}\""
echo "  git tag -a v${version} -m \"Polyquant v${version}\""
echo "  git push origin main"
echo "  git push origin v${version}"
