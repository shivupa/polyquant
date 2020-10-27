file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
add_library(calculation ${_HDRS} ${_SRCS})

if(Libint2_FOUND)
  target_link_libraries(calculation Libint2::cxx)
endif(Libint2_FOUND)
if(Eigen3_FOUND)
  target_link_libraries(calculation Eigen3::Eigen)
endif(Eigen3_FOUND)

target_link_libraries(calculation io molecule basis integral scf)
# target_include_directories(calculation PRIVATE include)
install(
  TARGETS calculation
  LIBRARY DESTINATION lib
  PUBLIC_HEADER DESTINATION include/calculation)
# install(FILES ${_HDRS} DESTINATION include/calculation)
