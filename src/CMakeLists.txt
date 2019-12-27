add_subdirectory(io)
add_subdirectory(molecule)
add_subdirectory(basis)
add_subdirectory(integral)
add_subdirectory(calculation)

add_executable(pyci pyci.cpp)

# FIND PETSC
find_package(PETSC REQUIRED)
if(PETSC_FOUND)
  include_directories(${PETSC_INCLUDES})
  target_link_libraries(pyci ${PETSC_LIBRARIES})
endif(PETSC_FOUND)
# FIND SLEPC
find_package(SLEPC REQUIRED)
if(SLEPC_FOUND)
  include_directories(${SLEPC_INC})
  target_link_libraries(pyci ${SLEPC_LIB})
endif(SLEPC_FOUND)
# FIND nlohmann_json
find_package(nlohmann_json 3.2.0 REQUIRED)
if(nlohmann_json_FOUND)
  target_link_libraries(pyci nlohmann_json::nlohmann_json)
endif(nlohmann_json_FOUND)
# FIND CPR
find_package(CPR REQUIRED)
if(CPR_FOUND)
  include_directories(${CPR_INCLUDE_DIRS})
  target_link_libraries(pyci ${CPR_LIBRARIES})
endif(CPR_FOUND)
# FIND CURL
find_package(CURL REQUIRED)
if(CURL_FOUND)
  include_directories(${CURL_INCLUDE_DIR})
  target_link_libraries(pyci ${CURL_LIBRARIES})
endif(CURL_FOUND)
# FIND Libint2
find_package(Libint2 REQUIRED)
if(Libint2_FOUND)
  target_link_libraries(pyci Libint2::cxx)
endif(Libint2_FOUND)
# FIND PythonLibs find_package(PythonLibs) if(PythonLibs_FOUND)
# include_directories(${PYTHON_INCLUDE_DIRS}) target_link_libraries(pyci
# ${PYTHON_LIBRARIES}) endif(PythonLibs_FOUND) Done finding

target_include_directories(pyci PUBLIC include)
target_link_libraries(pyci io calculation)

install(TARGETS pyci DESTINATION bin)
