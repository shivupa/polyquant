# file(GLOB_RECURSE _HDRS "*.hpp") file(GLOB_RECURSE _SRCS "*.[hc]pp")
# add_library(math ${_HDRS} ${_SRCS}) set_target_properties(math PROPERTIES
# LINKER_LANGUAGE CXX)
#
# target_include_directories(math PUBLIC include) install(TARGETS math
# DESTINATION lib) install(FILES ${_HDRS} DESTINATION include/math)

# if there is no other matrix type we will install the stl version
configure_file("dense_matrix_stl.hpp" "dense_matrix.hpp" COPYONLY)
configure_file("dense_vector_stl.hpp" "dense_vector.hpp" COPYONLY)

set(_HDRS "matrix.hpp" "vector.hpp" "dense_matrix_operations.hpp")
set(_MATH_DEF_HDRS "dense_matrix.hpp" "dense_vector.hpp")

install(FILES ${_HDRS} DESTINATION include/math)
install(FILES ${_MATH_DEF_HDRS} DESTINATION include/math)

message(${_HDRS} ${_MATH_DEF_HDRS})
add_library(math ${_HDRS} ${_MATH_DEF_HDRS})
set_target_properties(math PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(math PUBLIC include)
target_link_libraries(math PUBLIC LAPACK_LIBRARIES)
install(TARGETS math DESTINATION lib)
install(FILES ${_HDRS} DESTINATION include/math)
