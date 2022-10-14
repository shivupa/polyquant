# tell cmake what our excutable is going to be
add_executable(polyquant polyquant.cpp)
add_library(polyquant_lib OBJECT)

# add the subdirectories of things that need to be built
add_subdirectory(io)
target_link_libraries(polyquant_lib PUBLIC nlohmann_json::nlohmann_json)
target_link_libraries(polyquant_lib PUBLIC Libint2::cxx)
target_link_libraries(polyquant_lib PUBLIC h5cpp)
target_link_libraries(polyquant_lib PUBLIC fmt::fmt)
target_link_libraries(polyquant_lib PUBLIC Spectra)

add_subdirectory(molecule)
target_link_libraries(polyquant_lib PUBLIC msym)

add_subdirectory(basis)
target_link_libraries(polyquant_lib PUBLIC cpr::cpr)

add_subdirectory(integral)

add_subdirectory(calculation)
target_link_libraries(polyquant_lib PUBLIC cppitertools::cppitertools)

add_subdirectory(scf)

add_subdirectory(ci)

# include_directories(${MKL_INCLUDE_DIR})
target_link_libraries(polyquant_lib PUBLIC LinAlg::linalg)
target_link_libraries(polyquant_lib PUBLIC cxxopts)
target_link_libraries(polyquant_lib PUBLIC OpenMP::OpenMP_CXX)
if(Eigen3_FOUND)
  target_link_libraries(polyquant_lib PUBLIC Eigen3::Eigen)
endif(Eigen3_FOUND)
if(POLYQUANT_CODE_COVERAGE)
  target_link_libraries(polyquant_lib PUBLIC coverage_config)
endif(POLYQUANT_CODE_COVERAGE)
target_link_libraries(polyquant PRIVATE polyquant_lib)
install(TARGETS polyquant DESTINATION bin)
