#include "../src/gridcitymap.h"
#include "catch.hpp"

TEST_CASE( "Distance is correct", "[gridcitymap]") {
    GridCityMap citymap{6};
    std::vector<int> addresses = citymap.getAddresses();
    int address_1 = addresses[1];
    int address_28 = addresses[28];
    
    REQUIRE (citymap.get_x(address_1) == 1);
    //REQUIRE (citymap.get_y(address_1) == 1);
    //REQUIRE (citymap.get_x(address_28) == 1);
    //REQUIRE (citymap.get_y(address_28) == 1);
    //REQUIRE (citymap.dist(address_1, address_1) == 2);
    //REQUIRE (citymap.dist(address_1, address_28) == 2);
}