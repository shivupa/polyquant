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
  cppitertools::cppitertools)
if(POLYQUANT_CODE_COVERAGE)
  target_link_libraries(scf coverage_config)
endif(POLYQUANT_CODE_COVERAGE)
# target_include_directories(scf PUBLIC include) install( TARGETS scf LIBRARY
# DESTINATION lib PUBLIC_HEADER DESTINATION include/scf) install(FILES ${_HDRS}
# DESTINATION include/scf)
