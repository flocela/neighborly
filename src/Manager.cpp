#include "simulator/Manager.h"
#include "simulator/CityFactory.h"
#include "simulator/CityFactory_Grid.h"
#include "simulator/UI_CMDLine.h"
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

    int cityChoice = ui.menu("Choose a city type by typing the"
                             " corresponding number.",
                             namesOfCityFactories);
    std::cout << "Manager AA: " << cityChoice << std::endl;
    std::unique_ptr<City> city = cityFactories[cityChoice]->createCity(ui);
    std::cout << "Finished making city";
    std::cout << "City size: " << city->getAddresses().size();
    
    
}