# Set a requirement on the cmake version
cmake_minimum_required(VERSION 3.6.0 FATAL_ERROR)

# Macro
include(FetchContent)
# FetchContent_MakeAvailable is only availible in CMake 3.14+ This macro mimics
# the behavior
if(${CMAKE_VERSION} VERSION_LESS 3.14)
  macro(FetchContent_MakeAvailable NAME)
    FetchContent_GetProperties(${NAME})
    if(NOT ${NAME}_POPULATED)
      FetchContent_Populate(${NAME})
      add_subdirectory(${${NAME}_SOURCE_DIR} ${${NAME}_BINARY_DIR})
    endif()
  endmacro()
endif()

# ##############################################################################
# Set up the project and version info
project(POLYQUANT)
set(POLYQUANT_VERSION_MAJOR 0)
set(POLYQUANT_VERSION_MINOR 0)
set(POLYQUANT_VERSION_PATCH 1)
set(POLYQUANT_VERSION
    "${POLYQUANT_VERSION_MAJOR}.${POLYQUANT_VERSION_MINOR}.${POLYQUANT_VERSION_PATCH}"
)

# add_compile_options(-Wall -Wextra -pedantic -Werror -O3)

# set up where to find Find*.cmake files and where to put the things we build
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake" ${CMAKE_MODULE_PATH})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY
    ${POLYQUANT_BINARY_DIR}/lib
    CACHE PATH "Single output directory for building all libraries.")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${POLYQUANT_BINARY_DIR}/bin
    CACHE PATH "Single output directory for building all executables.")

# set some flags that we can use cmake -Dflag={0,1} to trigger special things in
# the build this first one doesn't do anything if it was off but it would be
# nice to have a serial build
set(POLYQUANT_DEBUG
    0
    CACHE BOOL "Enable/disable debug printing")
set(POLYQUANT_DOC
    0
    CACHE BOOL "Enable/disable documentation building")
set(POLYQUANT_TEST
    1
    CACHE BOOL "Enable/disable testing")

option(POLYQUANT_CODE_COVERAGE "Enable/disable coverage reporting" OFF)

# Code Coverage Configuration
add_library(coverage_config INTERFACE)
if(POLYQUANT_CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  # Add required flags (GCC & LLVM/Clang)
  target_compile_options(
    coverage_config
    INTERFACE -O0 # no optimization
              -g # generate debug info
              --coverage # sets all required flags
  )
  if(CMAKE_VERSION VERSION_GREATER_EQUAL 3.13)
    target_link_options(coverage_config INTERFACE --coverage)
  else()
    target_link_libraries(coverage_config INTERFACE --coverage)
  endif()
endif(POLYQUANT_CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
# ##############################################################################

message(STATUS "Ready to build POLYQUANT")

# these files can reside in the bin so we know exactly what was built we could
# do this as a header and include the header if we wanted to selectively trigger
# parts of the code, but for now we don't need to
configure_file(${POLYQUANT_SOURCE_DIR}/src/polyquant.settings
               ${POLYQUANT_BINARY_DIR}/bin/polyquant.settings)
install(FILES ${POLYQUANT_BINARY_DIR}/bin/polyquant.settings DESTINATION bin)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# enable testing so the tests will build should we use a flag to only build
# tests if asked to build it? I think I would like tests to build every time.
if(POLYQUANT_TEST)
  enable_testing()
endif(POLYQUANT_TEST)

# if the debug flag is on this will use include what you use to check the
# headers it also makes the make files verbose so you can see what the build is
# doing
if(POLYQUANT_DEBUG)
  # set(CMAKE_CXX_CLANG_TIDY "clang-tidy;-checks=*")
  # https://stackoverflow.com/questions/41610822/set-cxx-include-what-you-use-
  # property-in-cmake-for-every-target
  find_program(IWYU_PATH NAMES include-what-you-use iwyu)
  if(NOT IWYU_PATH)
    message(FATAL_ERROR "Could not find the program include-what-you-use.")
  endif()
  set(CMAKE_CXX_INCLUDE_WHAT_YOU_USE ${IWYU_PATH})
  set(CMAKE_C_INCLUDE_WHAT_YOU_USE ${IWYU_PATH})
  set(CMAKE_VERBOSE_MAKEFILE on)
endif(POLYQUANT_DEBUG)

# if the docs flag is on this will use doxygen to build the docs
if(POLYQUANT_DOCS)
  # https://cmake.org/cmake/help/v3.9/module/FindDoxygen.html
  # add_subdirectory(docs)
  file(COPY ${PROJECT_SOURCE_DIR}/docs DESTINATION ${POLYQUANT_BINARY_DIR})
  file(COPY ${PROJECT_SOURCE_DIR}/README.md DESTINATION ${POLYQUANT_BINARY_DIR})
  configure_file(${PROJECT_SOURCE_DIR}/docs/source/conf.py
                 ${POLYQUANT_BINARY_DIR}/docs/source)
  find_package(Sphinx REQUIRED)
  set(SPHINX_SOURCE ${POLYQUANT_BINARY_DIR}/docs/source)
  set(SPHINX_BUILD ${POLYQUANT_BINARY_DIR}/docs)
  add_custom_target(
    Sphinx ALL
    COMMAND ${SPHINX_EXECUTABLE} -b html ${SPHINX_SOURCE} ${SPHINX_BUILD}/html
    COMMAND ${SPHINX_EXECUTABLE} -M latexpdf ${SPHINX_SOURCE} ${SPHINX_BUILD}
    WORKING_DIRECTORY ${SPHINX_BUILD}
    COMMENT "Generating documentation with Sphinx")
endif(POLYQUANT_DOCS)

# set include paths
include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_BINARY_DIR}/src)

# Find all the things FIND PETSC find_package(PETSC REQUIRED) FIND SLEPC
# find_package(SLEPC REQUIRED) FIND nlohmann_json
find_package(nlohmann_json 3.2.0 REQUIRED)
# FIND CPR find_package(CPR REQUIRED) FIND CURL find_package(CURL REQUIRED) FIND
# Libint2
find_package(Libint2 REQUIRED)
# FIND Eigen
find_package(Eigen3 3.3 REQUIRED NO_MODULE)
# TODO replace with main spectra branch
FetchContent_Declare(
  spectra
  GIT_REPOSITORY https://github.com/shivupa/spectra.git
  GIT_TAG origin/cmake_update)
FetchContent_MakeAvailable(spectra)
#list(APPEND CMAKE_MODULE_PATH ${spectra_SOURCE_DIR}/cmake)

FetchContent_Declare(
  cppitertools
  GIT_REPOSITORY https://github.com/ryanhaining/cppitertools.git
  GIT_TAG origin/master)
FetchContent_MakeAvailable(cppitertools)

find_package(OpenMP REQUIRED)
# find_package(blaspp REQUIRED) find_package(lapackpp REQUIRED) FIND cxxopts
find_package(cxxopts REQUIRED)
find_package(h5cpp REQUIRED)
FetchContent_Declare(
  doctest
  GIT_REPOSITORY https://github.com/onqtam/doctest.git
  GIT_TAG 2.4.3)
FetchContent_MakeAvailable(doctest)
include(${doctest_SOURCE_DIR}/scripts/cmake/doctest.cmake)
find_package(MKL REQUIRED)

# FetchContent_Declare(HighFive GIT_REPOSITORY
# https://github.com/BlueBrain/HighFive.git) set(HIGHFIVE_USE_BOOST OFF)
# set(HIGHFIVE_USE_EIGEN ON) set(HIGHFIVE_USE_XTENSOR OFF)
# set(HIGHFIVE_USE_OPENCV OFF) set(HIGHFIVE_UNIT_TESTS OFF)
# set(HIGHFIVE_EXAMPLES OFF) set(HIGHFIVE_PARALLEL_HDF5 OFF)
# set(HIGHFIVE_BUILD_DOCS OFF) FetchContent_MakeAvailable(HighFive)
# include(${highfive_BINARY_DIR}/HighFiveConfig.cmake)
#
# FetchContent_Declare(fmt GIT_REPOSITORY https://github.com/fmtlib/fmt.git)
# FetchContent_MakeAvailable(fmt)
# include(${doctest_SOURCE_DIR}/scripts/cmake/doctest.cmake)
# FetchContent_Declare(h5cpp GIT_REPOSITORY
# https://github.com/steven-varga/h5cpp.git) FetchContent_MakeAvailable(h5cpp)

# FIND PythonLibs find_package(PythonLibs) if(PythonLibs_FOUND)
# include_directories(${PYTHON_INCLUDE_DIRS}) target_link_libraries(polyquant
# ${PYTHON_LIBRARIES}) endif(PythonLibs_FOUND) Done finding Done finding all the
# things

# this will do stuff in the src/CMakeLists.txt
add_subdirectory(src)
# this will do stuff in the tests/CMakeLists.txt
if(POLYQUANT_TEST)
  add_subdirectory(tests)
endif(POLYQUANT_TEST)

# if its a debug build this will print all the cmake variables
if(POLYQUANT_DEBUG)
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
endif(POLYQUANT_DEBUG)
