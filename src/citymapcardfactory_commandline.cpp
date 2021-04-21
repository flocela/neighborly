#include "citymapcardfactory_commandline.h"
#include "citymapcard_grid.h"

std::unique_ptr<CityMapCard> CityMapCardFactoryCommandLine::createCityMapCard ()
{
    return std::make_unique<CityMapCardGrid>(6);
}