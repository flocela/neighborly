#include "Manager.h"
#include "CityFactory.h"
#include "CityFactory_Grid.h"
#include "UI_CMDLine.h"
#include <string>
#include <memory>
#include <iostream>


int Manager::start ()
{
    UI_CMDLine ui{};  
    std::vector<std::unique_ptr<CityFactory>> cityFactories;
    cityFactories.emplace_back(std::make_unique<CityFactory_Grid>());
    std::vector<std::string> namesOfCityFactories = {};
    for (auto& factory : cityFactories)
    {
        namesOfCityFactories.push_back(factory->toString());
    }

    //int cityChoice = ui.menu(namesOfCityFactories);
    int cityChoice = 0;

    std::unique_ptr<City> city = cityFactories[cityChoice]->createCity(ui);
    std::cout << "Finished making city";
    std::cout << "City size: " << city->getAddresses().size();
    
    
}