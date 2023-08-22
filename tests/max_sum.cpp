#include <catch2/catch_test_macros.hpp>

extern "C" {;
#include "max_sum.h"
}

TEST_CASE("max_sum", "[max_sum]") {
	REQUIRE(max_sum(1, 2, 3) == 6);
    REQUIRE(max_sum(1, 1, 1) == 3);
	REQUIRE(max_sum(1, 1, 0) == 2);
	REQUIRE(max_sum(1, 0, 0) == 1);
	REQUIRE(max_sum(0, 0, 0) == 0);
    REQUIRE(max_sum(-2, 3, 1) == 4);
	REQUIRE(max_sum(-2, -3, -1) == -1);
	REQUIRE(max_sum(-2, -3, 1) == 1);
	REQUIRE(max_sum(-2, 3, -1) == 3);
	REQUIRE(max_sum(2, -3, -1) == 2);
	REQUIRE(max_sum(2, 3, -1) == 5);
	REQUIRE(max_sum(2, -3, 1) == 3);
}
