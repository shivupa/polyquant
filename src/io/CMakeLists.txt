file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")

add_library(io ${_HDRS} ${_SRCS})

if(Eigen3_FOUND)
  target_link_libraries(io Eigen3::Eigen)
endif(Eigen3_FOUND)
# target_include_directories(io PRIVATE include)
target_link_libraries(io h5cpp)

# install( TARGETS io LIBRARY DESTINATION lib PUBLIC_HEADER DESTINATION
# include/io) install(FILES ${_HDRS} DESTINATION include/io)
