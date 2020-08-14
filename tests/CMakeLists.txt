# add the testing executable with all of the tests
add_executable(main_test doctest_main.cpp basis_test.cpp integral_test.cpp
                         unit_tests/io/io_test.cpp)

# find the required testing library and link the other required libraries
find_package(doctest REQUIRED)
if(PETSC_FOUND)
  include_directories(${PETSC_INCLUDES})
  target_link_libraries(main_test ${PETSC_LIBRARIES})
endif(PETSC_FOUND)
if(SLEPC_FOUND)
  include_directories(${SLEPC_INC})
  target_link_libraries(main_test ${SLEPC_LIB})
endif(SLEPC_FOUND)
if(Libint2_FOUND)
  target_link_libraries(main_test Libint2::cxx)
endif(Libint2_FOUND)
if(Eigen3_FOUND)
  include_directories(${Eigen3_INC})
  target_link_libraries(main_test Eigen3::Eigen)
endif(Eigen3_FOUND)

target_link_libraries(main_test doctest::doctest io)

target_include_directories(main_test PUBLIC include)
include(doctest)
doctest_discover_tests(main_test)
# add_test(main_test ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/main_test)
