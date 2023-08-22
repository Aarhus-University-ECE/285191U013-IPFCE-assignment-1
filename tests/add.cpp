
#include <catch2/catch_test_macros.hpp>
extern "C" {
#include "add.h"

}

TEST_CASE("add2", "[add]") {
	REQUIRE(add2(1, 1) == 2);
}


TEST_CASE("add3", "[add]") {
	REQUIRE(add3(1, 1,1) == 3);
}


TEST_CASE("add4", "[add]") {
	REQUIRE(add4(1, 1, 1, 1) == 4);
}
