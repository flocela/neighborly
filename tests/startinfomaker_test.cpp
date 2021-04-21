#include "catch.hpp"
#include "../src/startinfomaker.h"

#include <vector>
#include <math.h>
// g++ --std=c++17 -o runme ../src/startinfomaker.cpp startinfomaker_test.cpp test_main.o

TEST_CASE("Correct City", "[startinfogetter]")
{
    std::vector<double> cityValues = {6};
    std::vector<int> numOfResPerGroup = {14, 14};
    std::vector<
    numOfResPerGroup
    StartInfoMaker infoMaker{};
    StartInfo info = infoMaker.getInfo(CityMap::CityType::grid,
                                       cityValues,
                                       );

    CityMap* citymap = info.city.get();
    std::vector<int> addresses = citymap->getAddresses();
    
    
    GridCityMap city = GridCityMap(6);
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