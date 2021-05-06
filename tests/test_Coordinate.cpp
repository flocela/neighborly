#include "catch.hpp"
#include "../src/Coordinate.h"
#include <vector>
#include <algorithm>
#include <iostream>

TEST_CASE("operator< 's primary axis is the y axis")
{
    Coordinate a{10, 1};
    Coordinate b{8, 2};

    REQUIRE(a < b);
}

TEST_CASE("operator< 's secondary axis is the x axis")
{
    Coordinate a{10, 1};
    Coordinate b{8, 1};

    REQUIRE(b < a);
}

TEST_CASE("operator<, a is not less than a")
{
    Coordinate a{10, 1};

    REQUIRE(!(a < a));
}

TEST_CASE("vector is sorted because operator< has been overriden")
{
    Coordinate a{10, 1};
    Coordinate b{8, 1};
    Coordinate c{5, 3};
    Coordinate d{20, 2};
    
    std::vector<Coordinate> coordinates = {a, b, c, d};
    std::sort(coordinates.begin(), coordinates.end());
    for (int ii=0; ii<coordinates.size(); ++ii)
    {
        std::cout << coordinates[ii].getX() << std::endl;
    }
    REQUIRE(coordinates[0].getX() == 8);
    REQUIRE(coordinates[1].getX() == 10);
    REQUIRE(coordinates[2].getX() == 20);
    REQUIRE(coordinates[3].getX() == 5);
}
