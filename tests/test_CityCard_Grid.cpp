#include "catch.hpp"
#include "../src/CityCard_Grid.h"

// g++ --std=c++17 -o runme ../src/CityCard_Grid.cpp test_CityCard_Grid.cpp test_main.o

/*
    Can't really test this because requries gui.
*/
TEST_CASE("x-coordinate based on address")
{
    GuiStartInfo_CMDLineA gui{};    
    std::unique_ptr<City> city = gui.getCity();
    /*
    CityGrid city = CityGrid(6);
    std::vector<int> addresses = city.getAddresses();
    const int a0  = addresses[0];
    const int a27 = addresses[27];
    REQUIRE( city.get_x(a0)  == 0 );
    REQUIRE( city.get_y(a0)  == 0 );
    REQUIRE( city.get_x(a27) == 3 );
    REQUIRE( city.get_y(a27) == 4 );*/
}