# Set a requirement on the cmake version
cmake_minimum_required(VERSION 3.6.0 FATAL_ERROR)

# Set up the project and version info
project(PYCI)
set(PYCI_VERSION_MAJOR 0)
set(PYCI_VERSION_MINOR 0)
set(PYCI_VERSION_PATCH 1)
set(PYCI_VERSION
    "${PYCI_VERSION_MAJOR}.${PYCI_VERSION_MINOR}.${PYCI_VERSION_PATCH}")

# set up where to find Find*.cmake files and where to put the things we build
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake" ${CMAKE_MODULE_PATH})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY
    ${PYCI_BINARY_DIR}/lib
    CACHE PATH "Single output directory for building all libraries.")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${PYCI_BINARY_DIR}/bin
    CACHE PATH "Single output directory for building all executables.")

# set some flags that we can use cmake -Dflag={0,1} to trigger special things in
# the build this first one doesn't do anything if it was off but it would be
# nice to have a serial build
set(PYCI_MPI
    1
    CACHE BOOL "Enable/disable MPI")
# There isn't currently support for OpenMP but otherwise we could do
# set(PYCI_OMP 1 CACHE BOOL "Enable/disable OpenMP")
set(PYCI_DEBUG
    0
    CACHE BOOL "Enable/disable debug printing")
set(PYCI_DOC
    0
    CACHE BOOL "Enable/disable documentation building")
# Todo change this to be selected based on what libraries are found
set(PYCI_USE_DENSE_MATRIX_STL
    0
    CACHE BOOL "Dense Matrix Type")
set(PYCI_USE_DENSE_MATRIX_EIGEN
    1
    CACHE BOOL "Dense Matrix Type")
# ##############################################################################
set(PYCI_TEST
    1
    CACHE BOOL "Enable/disable testing")

message(STATUS "Ready to build PYCI")

if(PYCI_USE_DENSE_MATRIX_STL)
  add_definitions(-DPYCI_MATH_STL)
elseif(PYCI_USE_DENSE_MATRIX_EIGEN)
  add_definitions(-DPYCI_MATH_EIGEN)
endif(PYCI_USE_DENSE_MATRIX_STL)

# these files can reside in the bin so we know exactly what was built we could
# do this as a header and include the header if we wanted to selectively trigger
# parts of the code, but for now we don't need to
configure_file(${PYCI_SOURCE_DIR}/src/pyci.settings
               ${PYCI_BINARY_DIR}/bin/pyci.settings)
install(FILES ${PYCI_BINARY_DIR}/bin/pyci.settings DESTINATION bin)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# enable testing so the tests will build should we use a flag to only build
# tests if asked to build it? I think I would like tests to build every time.
if(PYCI_TEST)
  enable_testing()
endif(PYCI_TEST)

# if the debug flag is on this will use include what you use to check the
# headers it also makes the make files verbose so you can see what the build is
# doing
if(PYCI_DEBUG)
  # https://stackoverflow.com/questions/41610822/set-cxx-include-what-you-use-
  # property-in-cmake-for-every-target
  find_program(IWYU_PATH NAMES include-what-you-use iwyu)
  if(NOT IWYU_PATH)
    message(FATAL_ERROR "Could not find the program include-what-you-use.")
  endif()
  set(CMAKE_CXX_INCLUDE_WHAT_YOU_USE ${IWYU_PATH})
  set(CMAKE_C_INCLUDE_WHAT_YOU_USE ${IWYU_PATH})
  set(CMAKE_VERBOSE_MAKEFILE on)
endif(PYCI_DEBUG)
set(CMAKE_VERBOSE_MAKEFILE on)

# if the docs flag is on this will use doxygen to build the docs
if(PYCI_DOCS)
  # https://cmake.org/cmake/help/v3.9/module/FindDoxygen.html
  # add_subdirectory(docs)
  file(COPY ${PROJECT_SOURCE_DIR}/docs DESTINATION ${PYCI_BINARY_DIR})
  file(COPY ${PROJECT_SOURCE_DIR}/README.md DESTINATION ${PYCI_BINARY_DIR})
  configure_file(${PROJECT_SOURCE_DIR}/docs/source/conf.py
                 ${PYCI_BINARY_DIR}/docs/source)
  find_package(Sphinx REQUIRED)
  set(SPHINX_SOURCE ${PYCI_BINARY_DIR}/docs/source)
  set(SPHINX_BUILD ${PYCI_BINARY_DIR}/docs)
  add_custom_target(
    Sphinx ALL
    COMMAND ${SPHINX_EXECUTABLE} -b html ${SPHINX_SOURCE} ${SPHINX_BUILD}/html
    COMMAND ${SPHINX_EXECUTABLE} -M latexpdf ${SPHINX_SOURCE} ${SPHINX_BUILD}
    WORKING_DIRECTORY ${SPHINX_BUILD}
    COMMENT "Generating documentation with Sphinx")
endif(PYCI_DOCS)

# set include paths
include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_BINARY_DIR}/src)

# Find all the things FIND PETSC find_package(PETSC REQUIRED) FIND SLEPC
# find_package(SLEPC REQUIRED) FIND nlohmann_json
find_package(nlohmann_json 3.2.0 REQUIRED)
# FIND CPR
find_package(CPR REQUIRED)
# FIND CURL
find_package(CURL REQUIRED)
# FIND Libint2
find_package(Libint2 REQUIRED)
# FIND Eigen
find_package(Eigen3 3.3 REQUIRED NO_MODULE)
# FIND xtensor find_package(xtl REQUIRED) find_package(xtensor REQUIRED)
find_package(OpenMP REQUIRED)
find_package(blaspp REQUIRED)
find_package(lapackpp REQUIRED)
# FIND cxxopts
find_package(cxxopts REQUIRED)

# FIND PythonLibs find_package(PythonLibs) if(PythonLibs_FOUND)
# include_directories(${PYTHON_INCLUDE_DIRS}) target_link_libraries(pyci
# ${PYTHON_LIBRARIES}) endif(PythonLibs_FOUND) Done finding Done finding all the
# things

# this will do stuff in the src/CMakeLists.txt
add_subdirectory(src)
# this will do stuff in the tests/CMakeLists.txt
if(PYCI_TEST)
  add_subdirectory(tests)
endif(PYCI_TEST)

# if its a debug build this will print all the cmake variables
if(PYCI_DEBUG)
  # found this useful macro on SO https://stackoverflow.com/a/31390758
  macro(print_all_variables)
    message(
      STATUS "print_all_variables------------------------------------------{")
    get_cmake_property(_variableNames VARIABLES)
    foreach(_variableName ${_variableNames})
      message(STATUS "${_variableName}=${${_variableName}}")
    endforeach()
    message(
      STATUS "print_all_variables------------------------------------------}")
  endmacro()
  print_all_variables()
endif(PYCI_DEBUG)
