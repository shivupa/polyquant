project(PYCI)
set (CMAKE_CXX_STANDARD 11)
cmake_minimum_required(VERSION 3.6.0)

set(PYCI_VERSION_MAJOR 0)
set(PYCI_VERSION_MINOR 0)
set(PYCI_VERSION_PATCH 1)
set(PYCI_VERSION
    "${PYCI_VERSION_MAJOR}.${PYCI_VERSION_MINOR}.${PYCI_VERSION_PATCH}")

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake" ${CMAKE_MODULE_PATH})
set(LIBRARY_OUTPUT_PATH
    ${PYCI_BINARY_DIR}/lib
    CACHE PATH "Single output directory for building all libraries.")
set(EXECUTABLE_OUTPUT_PATH
    ${PYCI_BINARY_DIR}/bin
    CACHE PATH "Single output directory for building all executables.")

set(PYCI_MPI
    1
    CACHE BOOL "Enable/disable MPI")
set(PYCI_OMP
    1
    CACHE BOOL "Enable/disable OpenMP")
set(PYCI_DEBUG
    0
    CACHE BOOL "Enable/disable debug printing")
set(PROJECT_CMAKE ${PYCI_SOURCE_DIR}/CMake)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_BINARY_DIR}/src)

message(STATUS "Ready to build PYCI")

configure_file(${PYCI_SOURCE_DIR}/src/pyci.settings
               ${PYCI_BINARY_DIR}/bin/pyci.settings)
install(FILES ${PYCI_BINARY_DIR}/bin/pyci.settings DESTINATION bin)

add_subdirectory(src)

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

set( CMAKE_VERBOSE_MAKEFILE on )
