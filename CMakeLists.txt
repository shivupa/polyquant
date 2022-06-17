################################################################################
# Set a requirement on the cmake version
cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)
include(FetchContent)
################################################################################
# Set up the project and version info
project(POLYQUANT)
set(POLYQUANT_VERSION_MAJOR 0)
set(POLYQUANT_VERSION_MINOR 5)
set(POLYQUANT_VERSION_PATCH 3)
set(POLYQUANT_VERSION "${POLYQUANT_VERSION_MAJOR}.${POLYQUANT_VERSION_MINOR}.${POLYQUANT_VERSION_PATCH}")
# these files can reside in the bin so we know exactly what was built we could
# do this as a header and include the header if we wanted to selectively trigger
# parts of the code, but for now we don't need to
configure_file(${POLYQUANT_SOURCE_DIR}/src/polyquant.settings ${POLYQUANT_BINARY_DIR}/bin/polyquant.settings)
install(FILES ${POLYQUANT_BINARY_DIR}/bin/polyquant.settings DESTINATION bin)
# set include paths
include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_BINARY_DIR}/src)
# turn on position independent code
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
################################################################################
# set required C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
################################################################################
# Set up build type
message(STATUS "Ready to build POLYQUANT")
string(TOUPPER ${CMAKE_BUILD_TYPE} CMAKE_BUILD_TYPE)
if(CMAKE_BUILD_TYPE MATCHES DEBUG)
  message("Debug build.")
elseif(CMAKE_BUILD_TYPE MATCHES RELEASE)
  message("Release build.")
else(CMAKE_BUILD_TYPE MATCHES DEBUG)
  set( CMAKE_BUILD_TYPE Release FORCE )
  message("CMAKE_BUILD_TYPE not set. Setting to = ${CMAKE_BUILD_TYPE}")
endif(CMAKE_BUILD_TYPE MATCHES DEBUG)
message("CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")
################################################################################
# set up where to find Find*.cmake files and where to put the things we build
# add_compile_options(-Wall -Wextra -pedantic -Werror -O3)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake" ${CMAKE_MODULE_PATH})
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake/cmake-modules" ${CMAKE_MODULE_PATH})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${POLYQUANT_BINARY_DIR}/lib CACHE PATH "Single output directory for building all libraries.")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${POLYQUANT_BINARY_DIR}/bin CACHE PATH "Single output directory for building all executables.")
################################################################################
# set some flags that we can use cmake -Dflag={0,1} to trigger special things
set(POLYQUANT_DOC 0 CACHE BOOL "Enable/disable documentation building")
set(POLYQUANT_TEST 1 CACHE BOOL "Enable/disable testing")
set(FETCHCONTENT_QUIET ON)
option(POLYQUANT_CODE_COVERAGE "Enable/disable coverage reporting" OFF)
################################################################################
# set up code coverage configuration
add_library(coverage_config INTERFACE)
if(CMAKE_BUILD_TYPE MATCHES DEBUG)
  if(POLYQUANT_CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    # Add required flags (GCC & LLVM/Clang)
    target_compile_options(coverage_config INTERFACE -O0 -g --coverage)
    if(CMAKE_VERSION VERSION_GREATER_EQUAL 3.13)
      target_link_options(coverage_config INTERFACE --coverage)
    else(CMAKE_VERSION VERSION_GREATER_EQUAL 3.13)
      target_link_libraries(coverage_config INTERFACE --coverage)
    endif(CMAKE_VERSION VERSION_GREATER_EQUAL 3.13)
  endif(POLYQUANT_CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
endif(CMAKE_BUILD_TYPE MATCHES DEBUG)
################################################################################
# enable testing 
if(POLYQUANT_TEST)
  enable_testing()
endif(POLYQUANT_TEST)
################################################################################
# enable things for a debug build
if(CMAKE_BUILD_TYPE MATCHES DEBUG)
  # set(CMAKE_CXX_CLANG_TIDY "clang-tidy;-checks=*")
  # https://stackoverflow.com/questions/41610822/set-cxx-include-what-you-use-
  # property-in-cmake-for-every-target
  find_program(IWYU_PATH NAMES include-what-you-use iwyu)
  if(NOT IWYU_PATH)
      message(STATUS "Could not find the program include-what-you-use. Not using it.")
  else(NOT IWYU_PATH)
      set(CMAKE_CXX_INCLUDE_WHAT_YOU_USE ${IWYU_PATH})
      set(CMAKE_C_INCLUDE_WHAT_YOU_USE ${IWYU_PATH})
  endif(NOT IWYU_PATH)
  set(CMAKE_VERBOSE_MAKEFILE ON)
  # ASAN
  # set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
  # set (CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
endif(CMAKE_BUILD_TYPE MATCHES DEBUG)
################################################################################
# set up docs
if(POLYQUANT_DOC)
  # https://cmake.org/cmake/help/v3.9/module/FindDoxygen.html
  # add_subdirectory(docs)
  file(COPY ${PROJECT_SOURCE_DIR}/docs DESTINATION ${POLYQUANT_BINARY_DIR})
  file(COPY ${PROJECT_SOURCE_DIR}/README.md DESTINATION ${POLYQUANT_BINARY_DIR})
  configure_file(${PROJECT_SOURCE_DIR}/docs/source/conf.py ${POLYQUANT_BINARY_DIR}/docs/source)
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
################################################################################
# Find libraries
########################################
# json parsing
FetchContent_Declare(
  nlohmann_json
  GIT_REPOSITORY
    https://github.com/ArthurSonzogni/nlohmann_json_cmake_fetchcontent
  GIT_TAG v3.9.1)
FetchContent_GetProperties(nlohmann_json)
set(JSON_BuildTests OFF)
if(NOT nlohmann_json_POPULATED)
  FetchContent_Populate(nlohmann_json)
  add_subdirectory(${nlohmann_json_SOURCE_DIR} ${nlohmann_json_BINARY_DIR} EXCLUDE_FROM_ALL)
endif(NOT nlohmann_json_POPULATED)
########################################
# curl requests to get basis sets
FetchContent_Declare(
  CPR
  GIT_REPOSITORY https://github.com/whoshuu/cpr.git
  GIT_TAG 1.5.2)
set(BUILD_CPR_TESTS OFF)
set(BUILD_CPR_TESTS_SSL OFF)
set(BUILD_TESTING OFF)
FetchContent_MakeAvailable(CPR)
########################################
# Eigen for matrix math
find_package(Eigen3 3.3 NO_MODULE)
if (NOT TARGET Eigen3::Eigen)
    FetchContent_Declare(
      Eigen
      GIT_REPOSITORY https://gitlab.com/shivupa/eigen.git
      GIT_TAG master
      GIT_SHALLOW TRUE
      GIT_PROGRESS TRUE)
    set(EIGEN_BUILD_DOC OFF)
    # note: To disable eigen tests,
    # you should put this code in a add_subdirectory to avoid to change
    # BUILD_TESTING for your own project too since variables are directory
    # scoped
    set(BUILD_TESTING OFF)
    set(EIGEN_BUILD_PKGCONFIG OFF)
    FetchContent_MakeAvailable(Eigen)
endif (NOT TARGET Eigen3::Eigen)
########################################
# OpenMP for parallelization
find_package(OpenMP REQUIRED)
########################################
# LinAlg
# set this list to prioritize a BLAS type
set( LinAlg_BLAS_PREFERENCE_LIST "BLIS" "IntelMKL" "IBMESSL" "OpenBLAS" "ReferenceBLAS" )
find_package(LinAlg REQUIRED)
########################################
# Spectra for sparse math
FetchContent_Declare(
  spectra
  GIT_REPOSITORY https://github.com/shivupa/spectra.git
  GIT_TAG origin/logging )
FetchContent_MakeAvailable(spectra)
########################################
# libint for gaussian AO integrals
find_package(Libint2)
if (LIBINT2_FOUND)
    INCLUDE_DIRECTORIES(${LIBINT2_INCLUDE_DIRS})
    add_definitions(${LIBINT2_EXTRA_DEFINITIONS})
    message("Libint2 library found in system. Using system installed Libint2.")
else (LIBINT2_FOUND)
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
    message("Libint2 library NOT found in system. Building Libint2.")
endif (LIBINT2_FOUND)
########################################
# itertools in cpp
FetchContent_Declare(
  cppitertools
  GIT_REPOSITORY https://github.com/ryanhaining/cppitertools.git
  GIT_TAG origin/master)
FetchContent_MakeAvailable(cppitertools)
########################################
# command line options
FetchContent_Declare(
  cxxopts
  GIT_REPOSITORY https://github.com/jarro2783/cxxopts.git
  GIT_TAG origin/master)
FetchContent_MakeAvailable(cxxopts)
set(CONAN "DISABLE" CACHE STRING "conan options AUTO (conan must be in path), MANUAL (expects conanbuildinfo.c make in build directory) or DISABLE")
set(DISABLE_TESTS True CACHE BOOL "Disable building unit tests")
set(BUILD_DOCS False CACHE BOOL "Build documentation")
########################################
# HDF5
FetchContent_Declare(
  h5cpp
  GIT_REPOSITORY https://github.com/shivupa/h5cpp
  GIT_TAG origin/optional_docs)
FetchContent_MakeAvailable(h5cpp)
########################################
# Text Formatting
# TODO replace with std::format once compilers support it
FetchContent_Declare(fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG master
)
FetchContent_MakeAvailable(fmt)
########################################
# testing
FetchContent_Declare(
  doctest
  GIT_REPOSITORY https://github.com/onqtam/doctest.git
  GIT_TAG origin/dev)
FetchContent_MakeAvailable(doctest)
include(${doctest_SOURCE_DIR}/scripts/cmake/doctest.cmake)
################################################################################
# this will do stuff in the src/CMakeLists.txt
add_subdirectory(src)
# this will do stuff in the tests/CMakeLists.txt
if(POLYQUANT_TEST)
  add_subdirectory(tests)
endif(POLYQUANT_TEST)
################################################################################
# if its a debug build this will print all the cmake variables
if(CMAKE_BUILD_TYPE MATCHES DEBUG)
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
endif(CMAKE_BUILD_TYPE MATCHES DEBUG)
################################################################################
