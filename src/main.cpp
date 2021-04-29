#include <iostream>
#include "CityMaker_CMDLine.h"
#include <memory>
#include "CityFactory.h"
#include "CityFactory_Grid.h"


int main() {

    std::vector<std::unique_ptr<CityFactory>> cityFactories;
    cityFactories.emplace_back(std::make_unique<CityFactory_Grid>());
    std::vector<CityFactory&> cityFactoryReferences = {};
    for (auto& factory: cityFactories)
    {
        cityFactoryReferences.push_back(*(factory.get()));
    }

    CityMaker_CMDLine cityMaker{};
    std::unique_ptr<City> city = cityMaker.makeCity(cityFactoryReferences);
    return 0;
}