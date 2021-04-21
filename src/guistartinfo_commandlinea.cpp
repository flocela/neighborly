#include "guistartinfo_commandlinea.h"
#include "citymapcardfactory_commandline.h"

std::unique_ptr<CityMap> GuiStartInfo_CommandLineA::getCityMap ()
{
    CityMapCardFactoryCommandLine factory{};
    std::unique_ptr<CityMapCard> card = factory.createCityMapCard();
    return card->createCityMap();
}