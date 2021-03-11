file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
add_library(molecule OBJECT ${_HDRS} ${_SRCS})

target_link_libraries(molecule Libint2::cxx)
if(Eigen3_FOUND)
  target_link_libraries(molecule Eigen3::Eigen)
endif(Eigen3_FOUND)

target_link_libraries(molecule io)
if(POLYQUANT_CODE_COVERAGE)
  target_link_libraries(molecule coverage_config)
endif(POLYQUANT_CODE_COVERAGE)
# target_include_directories(molecule PUBLIC include) install( TARGETS molecule
# LIBRARY DESTINATION lib PUBLIC_HEADER DESTINATION include/molecule)

# install(FILES ${_HDRS} DESTINATION include/molecule)
