# file(GLOB_RECURSE _HDRS "*.hpp") file(GLOB_RECURSE _SRCS "*.[hc]pp")
# add_library(math ${_HDRS} ${_SRCS}) set_target_properties(math PROPERTIES
# LINKER_LANGUAGE CXX)
#
# target_include_directories(math PUBLIC include) install(TARGETS math
# DESTINATION lib) install(FILES ${_HDRS} DESTINATION include/math)

set(_HDRS "matrix.hpp" "vector.hpp" "dense_matrix_operations.hpp")
# if there is no other matrix type we will install the stl version
file(COPY "dense_matrix_stl.hpp" DESTINATION "dense_matrix.hpp")
file(COPY "dense_vector_stl.hpp" DESTINATION "dense_vector.hpp")
set(_MATH_DEF_HDRS "dense_matrix.hpp" "dense_vector.hpp")
install(FILES ${_MATH_DEF_HDRS} DESTINATION include/math)

message(${_HDRS} ${_MATH_DEF_HDRS})
add_library(math ${_HDRS} ${_MATH_DEF_HDRS})
set_target_properties(math PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(math PUBLIC include)
install(TARGETS math DESTINATION lib)
install(FILES ${_HDRS} DESTINATION include/math)
