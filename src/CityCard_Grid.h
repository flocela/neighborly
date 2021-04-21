#ifndef CITYCARD_GRID_H
#define CITYCARD_GRID_H

#include "City_Grid.h"
#include "CityCard.h"
#include <memory>

class CityCardGrid: public CityCard
{
    std::unique_ptr<City> createCity () override;

};

#endif