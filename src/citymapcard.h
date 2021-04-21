#ifndef CITYMAPCARD_H
#define CITYMAPCARD_H

#include "citymap.h"
#include <memory>

class CityMapCard
{
    public:
        virtual std::unique_ptr<CityMap> createCityMap () = 0;
};

#endif