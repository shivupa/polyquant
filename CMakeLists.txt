PROJECT(PYCI)


CMAKE_MINIMUM_REQUIRED(VERSION 3.6.0)

SET(PYCI_VERSION_MAJOR 0)
SET(PYCI_VERSION_MINOR 0)
SET(PYCI_VERSION_PATCH 1)
SET(PYCI_VERSION "${PYCI_VERSION_MAJOR}.${PYCI_VERSION_MINOR}.${PYCI_VERSION_PATCH}")

SET(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake" ${CMAKE_MODULE_PATH})
SET (LIBRARY_OUTPUT_PATH ${PYCI_BINARY_DIR}/lib CACHE PATH "Single output directory for building all libraries.")
SET (EXECUTABLE_OUTPUT_PATH ${PYCI_BINARY_DIR}/bin CACHE PATH "Single output directory for building all executables.")

SET(PYCI_MPI 1 CACHE BOOL "Enable/disable MPI")
SET(PYCI_OMP 1 CACHE BOOL "Enable/disable OpenMP")
SET(PYCI_DEBUG 0 CACHE BOOL "Enable/disable debug printing")
SET (PROJECT_CMAKE ${PYCI_SOURCE_DIR}/CMake)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

INCLUDE_DIRECTORIES( ${PROJECT_SOURCE_DIR}/src ${PROJECT_BINARY_DIR}/src)

MESSAGE(STATUS "Ready to build PYCI")

CONFIGURE_FILE(${PYCI_SOURCE_DIR}/src/pyci.settings ${PYCI_BINARY_DIR}/bin/pyci.settings)
INSTALL(FILES ${PYCI_BINARY_DIR}/bin/pyci.settings DESTINATION bin)

SET(pyci
  src/pyci.cpp
  src/io/io.cpp
)

add_executable( pyci
  ${pyci}
)

find_package( PETSC REQUIRED )
if(PETSC_FOUND)
  include_directories(${PETSC_INCLUDES})
  target_link_libraries(pyci ${PETSC_LIBRARIES})
endif(PETSC_FOUND)
find_package( SLEPC REQUIRED )
if(PETSC_FOUND)
  include_directories(${SLEPC_INC})
  target_link_libraries(pyci ${SLEPC_LIB})
endif(PETSC_FOUND)

# set( CMAKE_VERBOSE_MAKEFILE on )
