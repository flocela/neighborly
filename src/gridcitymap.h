#ifndef GRIDCITYMAP_H
#define GRIDCITYMAP_H

#include "citymap.h"

class GridCityMap: public CityMap
{
    private:
    	std::vector<std::unique_ptr<int>> _addresses;
        int _width;
    
    public:
    	GridCityMap (int width);
        std::unique_ptr<std::vector<const int*>> getAddresses () const override;
        double dist (const int& from_address, const int& to_address) const override;
        int get_x (const int& address);
        int get_y (const int& address);
        GridCityMap (GridCityMap&& obj) = default;
        ~GridCityMap() = default;
        
};

#endif