project(PYCI)

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

set(pyci src/pyci.cpp src/io/io.cpp src/molecule/molecule.cpp)

add_executable(pyci ${pyci})

find_package(PETSC REQUIRED)
if(PETSC_FOUND)
  include_directories(${PETSC_INCLUDES})
  target_link_libraries(pyci ${PETSC_LIBRARIES})
endif(PETSC_FOUND)
find_package(SLEPC REQUIRED)
if(SLEPC_FOUND)
  include_directories(${SLEPC_INC})
  target_link_libraries(pyci ${SLEPC_LIB})
endif(SLEPC_FOUND)
find_package(nlohmann_json 3.2.0 REQUIRED)
message(${nlohmann_json_FOUND})
if(nlohmann_json_FOUND)
  target_link_libraries(pyci nlohmann_json::nlohmann_json)
endif(nlohmann_json_FOUND)

if(PYCI_DEBUG)
  # found this useful macro on SO
  # https://stackoverflow.com/a/31390758
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

# set( CMAKE_VERBOSE_MAKEFILE on )
