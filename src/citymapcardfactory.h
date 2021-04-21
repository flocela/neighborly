#ifndef CITYMAPCARDFACTORY_H
#define CITYMAPCARDFACTORY_H

#include <memory>
#include "citymapcard.h"

class CityMapCardFactory 
{
    public:
        virtual std::unique_ptr<CityMapCard> createCityMapCard () = 0;
};

#endif