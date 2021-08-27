file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
add_library(integral OBJECT ${_HDRS} ${_SRCS})

target_link_libraries(integral Libint2::cxx)
if(Eigen3_FOUND)
  target_link_libraries(integral Eigen3::Eigen)
endif(Eigen3_FOUND)

target_link_libraries(integral io basis OpenMP::OpenMP_CXX)
if(POLYQUANT_CODE_COVERAGE)
  target_link_libraries(integral coverage_config)
endif(POLYQUANT_CODE_COVERAGE)
