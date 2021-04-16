#include "../src/factorial.h"
#include "catch.hpp"

TEST_CASE( "Factorials are computed", "[factorial]") {
    REQUIRE (Factorial(1) == 12);
}

