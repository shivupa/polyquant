enable_testing()

add_executable(main_test doctest_main.cpp io_test.cpp molecule_test.cpp basis_test.cpp)

find_package(doctest REQUIRED)
find_package(PETSC REQUIRED)
if(PETSC_FOUND)
  include_directories(${PETSC_INCLUDES})
  target_link_libraries(main_test ${PETSC_LIBRARIES})
endif(PETSC_FOUND)
find_package(SLEPC REQUIRED)
if(SLEPC_FOUND)
  include_directories(${SLEPC_INC})
  target_link_libraries(main_test ${SLEPC_LIB})
endif(SLEPC_FOUND)

target_link_libraries(main_test doctest::doctest)

target_include_directories(main_test PUBLIC include)
include(doctest)
doctest_discover_tests(main_test)
# add_test(main_test ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/main_test)
