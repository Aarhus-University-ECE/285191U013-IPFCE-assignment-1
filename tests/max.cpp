#include <catch2/catch_test_macros.hpp>

extern "C" {
#include "max.h"
}


TEST_CASE("max", "[max]") {
  REQUIRE(max(1, 2) == 2);
  REQUIRE(max(2, 1) == 2);
  REQUIRE(max(-1, 1) == 1);
  REQUIRE(max(1, -1) == 1);
  REQUIRE(max(0, 0) == 0);
  REQUIRE(max(-1, -2) == -1);
}


TEST_CASE("max again", "[max]") {
  REQUIRE(max(1, 2) == 2);
  REQUIRE(max(2, 1) == 2);
  REQUIRE(max(-1, 1) == 1);
  REQUIRE(max(1, -1) == 1);
  REQUIRE(max(0, 0) == 0);
  REQUIRE(max(-1, -2) == -1);
}
