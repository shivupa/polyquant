file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
target_sources(polyquant_lib PRIVATE ${_HDRS} ${_SRCS})
