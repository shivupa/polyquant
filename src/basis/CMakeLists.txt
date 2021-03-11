file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
add_library(basis OBJECT ${_HDRS} ${_SRCS})

target_link_libraries(basis PUBLIC cpr::cpr)
target_link_libraries(basis PUBLIC nlohmann_json::nlohmann_json)
target_link_libraries(basis PRIVATE Libint2::cxx)
if(Eigen3_FOUND)
  target_link_libraries(basis PRIVATE Eigen3::Eigen)
endif(Eigen3_FOUND)

target_link_libraries(basis PRIVATE io)
if(POLYQUANT_CODE_COVERAGE)
  target_link_libraries(basis PRIVATE coverage_config)
endif(POLYQUANT_CODE_COVERAGE)
# target_include_directories(basis PRIVATE include) install( TARGETS basis
# LIBRARY DESTINATION lib PUBLIC_HEADER DESTINATION include/basis) install(FILES
# ${_HDRS} DESTINATION include/basis)
