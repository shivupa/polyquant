file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
add_library(ci ${_HDRS} ${_SRCS})

target_link_libraries(
  ci
  io
  molecule
  basis
  integral
  OpenMP::OpenMP_CXX
  cppitertools::cppitertools
  Spectra)
target_link_libraries(ci Libint2::cxx)
if(POLYQUANT_CODE_COVERAGE)
  target_link_libraries(ci coverage_config)
endif(POLYQUANT_CODE_COVERAGE)
