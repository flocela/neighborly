#include "CityCard_Grid.h"
#include "City_Grid.h"

std::unique_ptr<City> CityCardGrid::createCity ()
{
    return std::make_unique<CityGrid>(6);
}