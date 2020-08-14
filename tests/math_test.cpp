#include <doctest/doctest.h>
#include <iostream>
#include <math/dense_matrix.hpp>

TEST_CASE("MATH DENSE MATRIX CREATION TEST") {
  // Test creating a Dense Matrix
  selci::DENSE_MATRIX<int> test(2, 2);
  test(0, 0) = 0;
  test(0, 1) = 1;
  test(1, 0) = 2;
  test(1, 1) = 3;

  CHECK(0 == test(0, 0));
  CHECK(1 == test(0, 1));
  CHECK(2 == test(1, 0));
  CHECK(3 == test(1, 1));
}

TEST_CASE("MATH DENSE MATRIX PLUS EQUALS DENSE MATRIX TEST") {
  // Test creating a Dense Matrix
  selci::DENSE_MATRIX<int> test(2, 2);
  test(0, 0) = 0;
  test(0, 1) = 1;
  test(1, 0) = 2;
  test(1, 1) = 3;
  selci::DENSE_MATRIX<int> test2(2, 2);
  test2(0, 0) = 1;
  test2(0, 1) = 1;
  test2(1, 0) = 1;
  test2(1, 1) = 1;
  test += test2;

  CHECK(1 == test(0, 0));
  CHECK(2 == test(0, 1));
  CHECK(3 == test(1, 0));
  CHECK(4 == test(1, 1));
}

TEST_CASE("MATH DENSE MATRIX MINUS EQUALS DENSE MATRIX TEST") {
  // Test creating a Dense Matrix
  selci::DENSE_MATRIX<int> test(2, 2);
  test(0, 0) = 0;
  test(0, 1) = 1;
  test(1, 0) = 2;
  test(1, 1) = 3;
  selci::DENSE_MATRIX<int> test2(2, 2);
  test2(0, 0) = 1;
  test2(0, 1) = 1;
  test2(1, 0) = 1;
  test2(1, 1) = 1;
  test -= test2;

  CHECK(-1 == test(0, 0));
  CHECK(0 == test(0, 1));
  CHECK(1 == test(1, 0));
  CHECK(2 == test(1, 1));
}

TEST_CASE("MATH DENSE MATRIX MULTIPLY EQUALS DENSE MATRIX TEST") {
  // Test creating a Dense Matrix
  selci::DENSE_MATRIX<int> test(2, 2);
  test(0, 0) = 0;
  test(0, 1) = 1;
  test(1, 0) = 2;
  test(1, 1) = 3;
  selci::DENSE_MATRIX<int> test2(2, 2);
  test2(0, 0) = 2;
  test2(0, 1) = 2;
  test2(1, 0) = 2;
  test2(1, 1) = 2;
  test *= test2;

  CHECK(0 == test(0, 0));
  CHECK(2 == test(0, 1));
  CHECK(4 == test(1, 0));
  CHECK(6 == test(1, 1));
}

TEST_CASE("MATH DENSE MATRIX DIVIDE EQUALS DENSE MATRIX TEST") {
  // Test creating a Dense Matrix
  selci::DENSE_MATRIX<int> test(2, 2);
  test(0, 0) = 4;
  test(0, 1) = 2;
  test(1, 0) = 2;
  test(1, 1) = 2;
  selci::DENSE_MATRIX<int> test2(2, 2);
  test2(0, 0) = 2;
  test2(0, 1) = 2;
  test2(1, 0) = 2;
  test2(1, 1) = 2;
  test /= test2;

  CHECK(2 == test(0, 0));
  CHECK(1 == test(0, 1));
  CHECK(1 == test(1, 0));
  CHECK(1 == test(1, 1));
}

TEST_CASE("MATH DENSE MATRIX PLUS EQUALS SCALAR TEST") {
  // Test creating a Dense Matrix
  selci::DENSE_MATRIX<int> test(2, 2);
  test(0, 0) = 0;
  test(0, 1) = 1;
  test(1, 0) = 2;
  test(1, 1) = 3;
  test += 1;

  CHECK(1 == test(0, 0));
  CHECK(2 == test(0, 1));
  CHECK(3 == test(1, 0));
  CHECK(4 == test(1, 1));
}

// TEST_CASE("MATH DENSE MATRIX MINUS EQUALS SCALAR TEST") {
//  // Test creating a Dense Matrix
//  selci::DENSE_MATRIX<int> test(2, 2);
//  test(0, 0) = 0;
//  test(0, 1) = 1;
//  test(1, 0) = 2;
//  test(1, 1) = 3;
//  test -= 1;
//
//  CHECK(-1 == test(0, 0));
//  CHECK(0 == test(0, 1));
//  CHECK(1 == test(1, 0));
//  CHECK(2 == test(1, 1));
//}

TEST_CASE("MATH DENSE MATRIX MULTIPLY EQUALS SCALAR TEST") {
  // Test creating a Dense Matrix
  selci::DENSE_MATRIX<int> test(2, 2);
  test(0, 0) = 2;
  test(0, 1) = 2;
  test(1, 0) = 2;
  test(1, 1) = 2;
  test *= 3;

  CHECK(6 == test(0, 0));
  CHECK(6 == test(0, 1));
  CHECK(6 == test(1, 0));
  CHECK(6 == test(1, 1));
}

TEST_CASE("MATH DENSE MATRIX DIVIDE EQUALS SCALAR TEST") {
  // Test creating a Dense Matrix
  selci::DENSE_MATRIX<int> test(2, 2);
  test(0, 0) = 6;
  test(0, 1) = 6;
  test(1, 0) = 6;
  test(1, 1) = 6;
  test /= 3;

  CHECK(2 == test(0, 0));
  CHECK(2 == test(0, 1));
  CHECK(2 == test(1, 0));
  CHECK(2 == test(1, 1));
}

TEST_CASE("MATH DENSE MATRIX POWER EQUALS SCALAR TEST") {
  // Test creating a Dense Matrix
  selci::DENSE_MATRIX<int> test(2, 2);
  test(0, 0) = 3;
  test(0, 1) = 3;
  test(1, 0) = 3;
  test(1, 1) = 3;
  test ^= 2;

  CHECK(9 == test(0, 0));
  CHECK(9 == test(0, 1));
  CHECK(9 == test(1, 0));
  CHECK(9 == test(1, 1));
}
