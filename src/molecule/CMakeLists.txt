file(GLOB_RECURSE _HDRS "*.hpp")
file(GLOB_RECURSE _SRCS "*.[hc]pp")
add_library(molecule ${_HDRS} ${_SRCS})

find_package(PETSC REQUIRED)
if(PETSC_FOUND)
  include_directories(${PETSC_INCLUDES})
  target_link_libraries(molecule ${PETSC_LIBRARIES})
endif(PETSC_FOUND)
find_package(SLEPC REQUIRED)
if(SLEPC_FOUND)
  include_directories(${SLEPC_INC})
  target_link_libraries(molecule ${SLEPC_LIB})
endif(SLEPC_FOUND)

target_link_libraries(molecule io )
target_include_directories(molecule PUBLIC include)
install(TARGETS molecule DESTINATION lib)
install(FILES ${_HDRS} DESTINATION include/molecule)


