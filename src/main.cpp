#include <iostream>
#include "CityMaker_CMDLine.h"
#include <memory>
#include "CityFactory.h"
#include "CityFactory_Grid.h"
#include "ResidentsFactory_Flat.h"
#include "ResidentsFactory.h"
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
    std::cout << "main: "<< city->getSize() << std::endl;

    std::vector<std::unique_ptr<ResidentsFactory>> residentFactories;
    residentFactories.emplace_back(std::make_unique<ResidentsFactory_Flat>());
    std::vector<ResidentsFactory*> residentFactoryPointers = {};
    for (auto& factory : residentFactories)
    {
        residentFactoryPointers.push_back(factory.get());
    }
    
    ResidentsMaker_CMDLine residentsMaker{};

    // These residents are not associated with any home at this point. They will be associated
    // via two hashmaps later. A hashmap of resident per home and hashmap of home per resident.
    std::vector<std::unique_ptr<Resident>>residents = 
        residentsMaker.makeResidents(residentFactoryPointers, city->getSize());
    std::cout << "number of residents: " << residents.size();

    return 0;
}