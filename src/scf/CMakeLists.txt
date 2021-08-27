file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
add_library(scf ${_HDRS} ${_SRCS})

target_link_libraries(scf io molecule basis integral OpenMP::OpenMP_CXX)
target_link_libraries(scf Libint2::cxx)
if(POLYQUANT_CODE_COVERAGE)
  target_link_libraries(scf coverage_config)
endif(POLYQUANT_CODE_COVERAGE)
