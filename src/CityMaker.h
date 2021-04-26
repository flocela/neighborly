#ifndef CITYMAKER_H
#define CITYMAKER_H 

#include "UI.h"
#include "City.h"
#include "CityFactory.h"
#include <memory>

class CityMaker
{
    public:
        std::unique_ptr<City> makeCity(UI& ui, CityFactory& cityFactory);
    private:
};

#endif