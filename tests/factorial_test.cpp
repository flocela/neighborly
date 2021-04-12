#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/factorial.h"

TEST_CASE( "Factorials are computed", "[factorial]") {
    REQUIRE (Factorial(1) == 1);
}

