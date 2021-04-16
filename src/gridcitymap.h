#ifndef GRIDCITYMAP_H
#define GRIDCITYMAP_H

#include "citymap.h"
#include <memory>

class GridCityMap: public CityMap
{
    private:
    	std::vector<std::unique_ptr<int>> _addresses;
        int _width;
    
    public:
    	GridCityMap (const int width);
        std::vector<int> getAddresses () const override;
        double dist (const int& from_address, const int& to_address) const override;
        int get_x (const int& address);
        int get_y (const int& address);
};

#endif