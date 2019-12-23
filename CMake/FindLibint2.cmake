# - Libint2
#
# Finding this module will define the following variables:
#  Libint2_FOUND - True if the core library has been found
#  Libint2_LIBRARIES - Path to the core library archive
#  Libint2_INCLUDE_DIRS - Path to the include directories. Gives access
#                     to cpr.h, which must be included in every
#                     file that uses this interface

find_package(PkgConfig)
pkg_check_modules(PC_Libint2 QUIET Libint2)

find_path(Libint2_INCLUDE_DIR
          NAMES libint2.hpp
          HINTS /usr/include
  )

find_library(Libint2_LIBRARY
             NAMES libint2.a
             HINTS ${Libint2_LIBRARY_ROOT})

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Libint2 REQUIRED_VARS Libint2_LIBRARY Libint2_INCLUDE_DIR)

if(Libint2_FOUND)
    set(Libint2_LIBRARIES ${Libint2_LIBRARY})
    set(Libint2_INCLUDE_DIRS ${Libint2_INCLUDE_DIR})
endif()

