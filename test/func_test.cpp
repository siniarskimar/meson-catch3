#define CATCH_CONFIG_MAIN
#include "func.hpp"
#include <catch2/catch_all.hpp>

TEST_CASE("foo_func: 1+1") { REQUIRE(foo_func(1, 1) == 2); }
TEST_CASE("foo_func: 2+1") { REQUIRE(foo_func(2, 1) == 3); }
