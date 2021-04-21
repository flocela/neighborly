#ifndef CITYCARD_H
#define CITYCARD_H

#include "City.h"
#include <memory>

class CityCard
{
    public:
        virtual std::unique_ptr<City> createCity () = 0;
};

#endif