file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")

add_library(io ${_HDRS} ${_SRCS})

target_include_directories(io PUBLIC include)

install(TARGETS io DESTINATION lib)
install(FILES ${_HDRS} DESTINATION include/io)
