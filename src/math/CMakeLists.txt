file(GLOB_RECURSE _HDRS "*.hpp")
add_library(math INTERFACE)
target_include_directories(
  math INTERFACE $<BUILD_INTERFACE:${${PROJECT_NAME}_SOURCE_DIR}/src/math>)
# $<INSTALL_INTERFACE:include/math>)

message($<BUILD_INTERFACE:${${PROJECT_NAME}_SOURCE_DIR}/src/math>)
message($<INSTALL_INTERFACE:include/math>)
target_link_libraries(math INTERFACE blaspp lapackpp)
# install(FILES ${_HDRS} DESTINATION include/math)
install(
  TARGETS math
  LIBRARY DESTINATION lib
  PUBLIC_HEADER DESTINATION include/math)

# target_include_directories( math INTERFACE
# $<BUILD_INTERFACE:${${PROJECT_NAME}_SOURCE_DIR}>
# $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/math>)
# target_link_libraries(math PRIVATE blaspp lapackpp) install(TARGETS math
# DESTINATION lib) target_link_libraries(math blaspp lapackpp)

# file(GLOB_RECURSE _SRCS "*.[hc]pp") add_library(math ${_HDRS} ${_SRCS})
# set_target_properties(math PROPERTIES

# add_library(math INTERFACE) target_sources(math INTERFACE ${_HDRS})
# install(FILES ${_HDRS} DESTINATION include/math)
# target_include_directories(math INTERFACE include/math)
# set_target_properties(math PROPERTIES LINKER_LANGUAGE CXX)
#
# install(TARGETS math DESTINATION lib) target_link_libraries(math INTERFACE
# blaspp lapackpp)

# if there is no other matrix type we will install the stl version
# configure_file("dense_matrix_stl.hpp" "dense_matrix.hpp" COPYONLY)
# configure_file("dense_vector_stl.hpp" "dense_vector.hpp" COPYONLY)

# set(_HDRS "matrix.hpp" "vector.hpp" "dense_matrix_operations.hpp")
# set(_MATH_DEF_HDRS "dense_matrix.hpp" "dense_vector.hpp")

# install(FILES ${_HDRS} DESTINATION include/math) install(FILES
# ${_MATH_DEF_HDRS} DESTINATION include/math)

# add_library(math ${_HDRS} ${_MATH_DEF_HDRS}) set_target_properties(math
# PROPERTIES LINKER_LANGUAGE CXX) target_include_directories(math PUBLIC
# include) target_link_libraries(math PUBLIC blaspp lapackpp) install(TARGETS
# math DESTINATION lib) install(FILES ${_HDRS} DESTINATION include/math)
