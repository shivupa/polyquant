enable_testing()

find_package(doctest REQUIRED)

add_executable(main_test
  doctest_main.cpp
  io_test.cpp
)

target_link_libraries(main_test
  PRIVATE
    doctest::doctest
)

add_test(main_test ${PYCI_BINARY_DIR}/bin/main_test)
