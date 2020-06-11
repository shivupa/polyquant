file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
add_library(scf ${_HDRS} ${_SRCS})

target_link_libraries(scf io molecule basis integral)
target_include_directories(scf PUBLIC include)
install(TARGETS scf DESTINATION lib)
install(FILES ${_HDRS} DESTINATION include/scf)
