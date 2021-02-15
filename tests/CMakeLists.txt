# add the testing executable with all of the tests
add_executable(
  main_test
  doctest_main.cpp
  unit_tests/io/io_test.cpp
  unit_tests/molecule/molecule_test.cpp
  unit_tests/basis/basis_test.cpp
  unit_tests/integral/integral_test.cpp
  unit_tests/ci/ci_test.cpp
  integration_tests/calculation/calculation_test.cpp)

# find the required testing library and link the other required libraries
if(Libint2_FOUND)
  target_link_libraries(main_test Libint2::cxx)
endif(Libint2_FOUND)
if(Eigen3_FOUND)
  include_directories(${Eigen3_INC})
  target_link_libraries(main_test Eigen3::Eigen)
endif(Eigen3_FOUND)

target_link_libraries(
  main_test
  doctest::doctest
  io
  molecule
  basis
  integral
  calculation
  scf)

target_include_directories(main_test PUBLIC include)
doctest_discover_tests(main_test ADD_LABELS 1)
# add_test(main_test ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/main_test)
