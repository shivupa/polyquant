# add the subdirectories of things that need to be built
add_subdirectory(io)
add_subdirectory(molecule)
add_subdirectory(basis)
add_subdirectory(integral)
add_subdirectory(calculation)
add_subdirectory(scf)

# tell cmake what our excutable is going to be
add_executable(pyci pyci.cpp)

# link against the required things. we don't need to use the if statements since
# its all required but why not
if(PETSC_FOUND)
  include_directories(${PETSC_INCLUDES})
  target_link_libraries(pyci ${PETSC_LIBRARIES})
endif(PETSC_FOUND)
if(SLEPC_FOUND)
  include_directories(${SLEPC_INC})
  target_link_libraries(pyci ${SLEPC_LIB})
endif(SLEPC_FOUND)
if(Libint2_FOUND)
  target_link_libraries(pyci Libint2::cxx)
endif(Libint2_FOUND)

target_include_directories(pyci PUBLIC include)
target_link_libraries(pyci io calculation)

install(TARGETS pyci DESTINATION bin)
