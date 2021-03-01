#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "max.h"
#include "swap.h"
#include "max_sum.h"

extern "C"
{
    void swap(int *a, int *b);
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("max")
{
    // REQUIRE(max(0, -1) == 0);
}

TEST_CASE("swap")
{
    int a = 1;
    int b = 2;
    swap(&a, &b);
    REQUIRE(a == 2);
    REQUIRE(b == 1);
}

TEST_CASE("max_sum")
{
}
