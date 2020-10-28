# add the subdirectories of things that need to be built
add_subdirectory(io)
add_subdirectory(molecule)
add_subdirectory(basis)
add_subdirectory(integral)
add_subdirectory(calculation)
add_subdirectory(scf)

# tell cmake what our excutable is going to be
add_executable(polyquant polyquant.cpp)

# target_include_directories(polyquant PUBLIC include)
target_link_libraries(polyquant io calculation)

install(TARGETS polyquant DESTINATION bin)
