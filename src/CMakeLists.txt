# add the subdirectories of things that need to be built
add_subdirectory(io)
add_subdirectory(molecule)
add_subdirectory(basis)
add_subdirectory(integral)
add_subdirectory(calculation)
add_subdirectory(scf)

# tell cmake what our excutable is going to be
add_executable(polyquant polyquant.cpp)

# include_directories(${MKL_INCLUDE_DIR})
target_link_libraries(polyquant io calculation mkl::mkl_intel_64bit_omp_dyn)
if(POLYQUANT_CODE_COVERAGE)
  target_link_libraries(polyquant coverage_config)
endif(POLYQUANT_CODE_COVERAGE)

install(TARGETS polyquant DESTINATION bin)
