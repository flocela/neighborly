#ifndef CITYCARDFACTORY_H
#define CITYCARDFACTORY_H

#include <memory>
#include "CityCard.h"

class CityCardFactory 
{
    public:
        virtual std::unique_ptr<CityCard> createCityCard () = 0;
};

#endif