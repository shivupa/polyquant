if(NOT DEFINED INPUT)
  message(FATAL_ERROR "ConfigureFile.cmake requires INPUT")
endif()

if(NOT DEFINED OUTPUT)
  message(FATAL_ERROR "ConfigureFile.cmake requires OUTPUT")
endif()

configure_file("${INPUT}" "${OUTPUT}" @ONLY)
