# Set a requirement on the cmake version
cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)

include(FetchContent)
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
set(FETCHCONTENT_QUIET ON)

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
  set(CMAKE_VERBOSE_MAKEFILE ON)
endif(POLYQUANT_DEBUG)

# if the docs flag is on this will use doxygen to build the docs
if(POLYQUANT_DOC)
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
endif(POLYQUANT_DOC)

# set include paths
include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_BINARY_DIR}/src)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")

# Clean these up and find libraries if the user doesn't want to use the

FetchContent_Declare(
  nlohmann_json
  GIT_REPOSITORY
    https://github.com/ArthurSonzogni/nlohmann_json_cmake_fetchcontent
  GIT_TAG v3.9.1)
FetchContent_GetProperties(nlohmann_json)
set(JSON_BuildTests OFF)
if(NOT nlohmann_json_POPULATED)
  FetchContent_Populate(nlohmann_json)
  add_subdirectory(${nlohmann_json_SOURCE_DIR} ${nlohmann_json_BINARY_DIR}
                   EXCLUDE_FROM_ALL)
endif()
FetchContent_Declare(
  CPR
  GIT_REPOSITORY https://github.com/whoshuu/cpr.git
  GIT_TAG 1.5.2)
set(BUILD_CPR_TESTS OFF)
set(BUILD_CPR_TESTS_SSL OFF)
FetchContent_MakeAvailable(CPR)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)
find_package(OpenMP REQUIRED)
find_package(MKL REQUIRED)

FetchContent_Declare(
  spectra
  GIT_REPOSITORY https://github.com/shivupa/spectra.git
  GIT_TAG origin/Davidsonspacesize)
FetchContent_MakeAvailable(spectra)

set(POLYQUANT_GIT_USERNAME $ENV{GIT_USERNAME})
set(POLYQUANT_GIT_PASSWORD $ENV{GIT_PASSWORD})
FetchContent_Declare(
  libint2
  GIT_REPOSITORY https://github.com/shivupa/polyquant.git
  GIT_TAG origin/libint
  HTTP_USERNAME ${POLYQUANT_GIT_USERNAME}
  HTTP_PASSWORD ${POLYQUANT_GIT_PASSWORD})
set(enable-fortran ON)
set(LIBINT2_BUILD_SHARED_AND_STATIC_LIBS ON)
set(LIBINT2_REALTYPE double)
set(LIBINT2_BUILD_TESTS OFF)
FetchContent_MakeAvailable(libint2)

FetchContent_Declare(
  cppitertools
  GIT_REPOSITORY https://github.com/ryanhaining/cppitertools.git
  GIT_TAG origin/master)
FetchContent_MakeAvailable(cppitertools)

FetchContent_Declare(
  cxxopts
  GIT_REPOSITORY https://github.com/jarro2783/cxxopts.git
  GIT_TAG origin/master)
FetchContent_MakeAvailable(cxxopts)
set(CONAN
    "DISABLE"
    CACHE
      STRING
      "conan options AUTO (conan must be in path), MANUAL (expects conanbuildinfo.c make in build directory) or DISABLE"
)
set(DISABLE_TESTS
    True
    CACHE BOOL "Disable building unit tests")
set(BUILD_DOCS
    False
    CACHE BOOL "Build documentation")
FetchContent_Declare(
  h5cpp
  GIT_REPOSITORY https://github.com/shivupa/h5cpp
  GIT_TAG origin/optional_docs)
FetchContent_MakeAvailable(h5cpp)

FetchContent_Declare(
  doctest
  GIT_REPOSITORY https://github.com/onqtam/doctest.git
  GIT_TAG origin/dev)
FetchContent_MakeAvailable(doctest)
include(${doctest_SOURCE_DIR}/scripts/cmake/doctest.cmake)

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
