#include "catchutils/catch.hpp"
#include "../src/simulator/City_Grid.h"

#include <math.h>
// g++ --std=c++17 -o runme ../src/City_Grid.cpp test_City_Grid.cpp test_main.o

TEST_CASE("x-coordinate based on address")
{
    City_Grid city = City_Grid(6);
    std::vector<int> addresses = city.getAddresses();
    const int a0  = addresses[0];
    const int a27 = addresses[27];
    REQUIRE( city.get_x(a0)  == 0 );
    REQUIRE( city.get_y(a0)  == 0 );
    REQUIRE( city.get_x(a27) == 3 );
    REQUIRE( city.get_y(a27) == 4 );
    REQUIRE(true);
}

TEST_CASE("distance calculated")
{
    City_Grid city = City_Grid(6);
    std::vector<int> addresses = city.getAddresses();
    const int a1  = addresses[1];
    const int a28 = addresses[28];
    int a1_x  = city.get_x(a1);
    int a1_y  = city.get_y(a1);
    int a28_x = city.get_x(a28);
    int a28_y = city.get_y(a28);
    double x_dist = fabs(a1_x - a28_x);
    double y_dist = fabs(a1_y - a28_y);
    REQUIRE( city.dist(a1, a28) == sqrt( (x_dist * x_dist) + (y_dist * y_dist) ) );
}

TEST_CASE("equals()")
{
    City_Grid a = City_Grid(6);
    City_Grid b = City_Grid(6);
    City_Grid c = City_Grid(7);
    REQUIRE (a.equals(b));
    REQUIRE (!a.equals(c));
}