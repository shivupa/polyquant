file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
add_library(math ${_HDRS} ${_SRCS})
set_target_properties(math PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(math PUBLIC include)
install(TARGETS math DESTINATION lib)
install(FILES ${_HDRS} DESTINATION include/math)
