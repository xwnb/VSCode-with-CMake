#include <catch2/catch_test_macros.hpp>

#include <Utils.h>

TEST_CASE("Utils add returns correct result", "[Utils]")
{
    REQUIRE(Utils::add(1, 2) == 3);
}