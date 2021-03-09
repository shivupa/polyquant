file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
add_library(scf ${_HDRS} ${_SRCS})

target_link_libraries(scf io molecule basis integral OpenMP::OpenMP_CXX)
if(Libint2_FOUND)
  target_link_libraries(scf Libint2::cxx)
endif(Libint2_FOUND)
if(POLYQUANT_CODE_COVERAGE)
  target_link_libraries(scf coverage_config)
endif(POLYQUANT_CODE_COVERAGE)
# target_include_directories(scf PUBLIC include) install( TARGETS scf LIBRARY
# DESTINATION lib PUBLIC_HEADER DESTINATION include/scf) install(FILES ${_HDRS}
# DESTINATION include/scf)
