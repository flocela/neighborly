#include "catch.hpp"
#include "../src/gridcitymap.h"

#include <math.h>

TEST_CASE("x-coordinate based on address", "[gridcitymap]")
{
    GridCityMap city = GridCityMap(6);
    std::vector<const int*> addresses = *(city.getAddresses().get());
    const int a0  = *(addresses[0]);
    const int a27 = *(addresses[27]);
    REQUIRE( city.get_x(a0)  == 0 );
    REQUIRE( city.get_y(a0)  == 0 );
    REQUIRE( city.get_x(a27) == 6 );
    REQUIRE( city.get_y(a27) == 8 );
}

TEST_CASE("distance calculated", "[gridcitymap]")
{
    GridCityMap city = GridCityMap(6);
    std::vector<const int*> addresses = *(city.getAddresses().get());
    const int a1  = *(addresses[1]);
    const int a28 = *(addresses[28]);
    int a1_x  = city.get_x(a1);
    int a1_y  = city.get_y(a1);
    int a28_x = city.get_x(a28);
    int a28_y = city.get_y(a28);

    REQUIRE( city.dist(a1, a28) == ( fabs(a1_x - a28_x) + fabs(a1_y - a28_y) ) );
}