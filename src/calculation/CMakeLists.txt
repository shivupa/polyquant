file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
add_library(calculation OBJECT ${_HDRS} ${_SRCS})

target_link_libraries(calculation Libint2::cxx)
if(Eigen3_FOUND)
  target_link_libraries(calculation Eigen3::Eigen)
endif(Eigen3_FOUND)

target_link_libraries(
  calculation
  io
  molecule
  basis
  integral
  scf
  ci)
if(POLYQUANT_CODE_COVERAGE)
  target_link_libraries(calculation coverage_config)
endif(POLYQUANT_CODE_COVERAGE)
target_link_libraries(calculation cppitertools::cppitertools)
