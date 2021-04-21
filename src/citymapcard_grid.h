#ifndef CITYMAPCARD_GRID_H
#define CITYMAPCARD_GRID_H

#include "citymap_grid.h"
#include "citymapcard.h"
#include <memory>

class CityMapCardGrid: public CityMapCard
{
    std::unique_ptr<CityMap> createCityMap () override;

};

#endif