#include "CityCardFactory_CMDLineA.h"
#include "CityCard_Grid.h"

std::unique_ptr<CityCard> CityCardFactoryCommandLineA::createCityCard ()
{
    return std::make_unique<CityCardGrid>(6);
}