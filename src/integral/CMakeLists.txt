file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
add_library(integral OBJECT ${_HDRS} ${_SRCS})

if(Libint2_FOUND)
  target_link_libraries(integral Libint2::cxx)
endif(Libint2_FOUND)
if(Eigen3_FOUND)
  target_link_libraries(integral Eigen3::Eigen)
endif(Eigen3_FOUND)

target_link_libraries(integral io basis OpenMP::OpenMP_CXX)
# target_include_directories(integral PRIVATE include) install( TARGETS integral
# LIBRARY DESTINATION lib PUBLIC_HEADER DESTINATION include/integral)
# install(FILES ${_HDRS} DESTINATION include/integral)
