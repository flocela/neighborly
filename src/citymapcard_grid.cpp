#include "citymapcard_grid.h"
#include "citymap_grid.h"

std::unique_ptr<CityMap> CityMapCardGrid::createCityMap ()
{
    return std::make_unique<CityMapGrid>(6);
}