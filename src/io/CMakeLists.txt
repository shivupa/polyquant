file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")

add_library(io ${_HDRS} ${_SRCS})

# target_include_directories(io PRIVATE include)

install(
  TARGETS io
  LIBRARY DESTINATION lib
  PUBLIC_HEADER DESTINATION include/io)
# install(FILES ${_HDRS} DESTINATION include/io)
