#include "../src/addresscitygrid.h"
#include "catch.hpp"

TEST_CASE( "Different addresses are unequal", "[addresscitygrid]") {
  	AddressCityGrid a1{0, 0};
  	AddressCityGrid a2{1, 1};
    REQUIRE (a1 == a2);
}
