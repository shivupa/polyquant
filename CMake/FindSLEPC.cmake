#############################################################
# Try to find SLEPc                                         #
#                                                           #
# Once done this will define:                               #
#  SLEPC_FOUND     - system has SLEPc                       #
#  SLEPC_DIR       - SLEPc directory                        #
#  SLEPC_INC       - SLEPc include directory                #
#  SLEPC_LIB       - SLEPc library (static or dynamic)      #
#                                                           #
# Usage:                                                    #
#  find_package(SLEPc)                                      #
#                                                           #
# Setting these changes the behavior of the search          #
#  SLEPC_DIR       - SLEPc directory                        #
#############################################################

## Try to set SLEPC_DIR ##
##########################
if(NOT DEFINED SLEPC_DIR)
  set(SLEPC_DIR $ENV{SLEPC_DIR})
endif()

## Includes ##
##############
if(EXISTS "${SLEPC_DIR}/include" )
 set(SLEPC_INC "${SLEPC_DIR}/include" )
else()
  message(SEND_ERROR "SLEPc includes not found")
endif()

## Library ##
#############
if(EXISTS "${SLEPC_DIR}/lib/libslepc.so")
  set(SLEPC_LIB "${SLEPC_DIR}/lib/libslepc.so")
elseif(EXISTS "${SLEPC_DIR}/lib/libslepc.a")
  set(SLEPC_LIB "${SLEPC_DIR}/lib/libslepc.a")
else()
  message(SEND_ERROR "SLEPc library not found")
endif()

## CMake check and done ##
##########################
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(SLEPc
  "SLEPc could not be found: be sure to set SLEPC_DIR in your environment variables"
  SLEPC_LIB SLEPC_INC SLEPC_DIR)

