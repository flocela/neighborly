#include "GUIStartInfo_CMDLineA.h"
#include "CityCardFactory_CMDLineA.h"

std::unique_ptr<City> GuiStartInfo_CommandLineA::getCity ()
{
    CityCardFactoryCommandLineA factory{};
    std::unique_ptr<CityCard> card = factory.createCityCard();
    return card->createCity();
}