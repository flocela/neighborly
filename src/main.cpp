#include <iostream>
#include "CityMaker_CMDLine.h"
#include <memory>
#include "CityFactory.h"
#include "CityFactory_Grid.h"
#include "ResidentFactory.h"
#include "ResidentFactory_Flat.h"
#include "ResidentsMaker_CMDLine.h"


int main() {

    std::vector<std::unique_ptr<CityFactory>> cityFactories;
    cityFactories.emplace_back(std::make_unique<CityFactory_Grid>());
    std::vector<CityFactory*> cityFactoryPointers = {};
    for (auto& factory: cityFactories)
    {
        cityFactoryPointers.push_back(factory.get());
    }

    CityMaker_CMDLine cityMaker{};
    std::unique_ptr<City> city = cityMaker.makeCity(cityFactoryPointers);

    std::vector<std::unique_ptr<ResidentFactory>> residentFactories;
    residentFactories.emplace_back(std::make_unique<ResidentFactory_Flat>());
    std::vector<ResidentFactory*> residentFactoryPointers = {};
    for (auto& factory : residentFactories)
    {
        residentFactoryPointers.push_back(factory.get());
    }

    ResidentsMaker_CMDLine residentsMaker{};

    // These residents are not associated with any home at this point. They will be associated
    // via two hashmaps later. A hashmap of resident per home and hashmap of home per resident.
    std::vector<std::unique_ptr<Resident>>residents = 
        residentsMaker.makeResidents(residentFactoryPointers, city->getSize());


    return 0;
}