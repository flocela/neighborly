#ifndef GRIDCITYMAP_H
#define GRIDCITYMAP_H

#include "citymap.h"

class GridCityMap: public CityMap
{
    private:
    	std::vector<int> _addresses;
        int _width;
    
    public:
    	GridCityMap (int width);
        GridCityMap () = delete;
        GridCityMap (const GridCityMap& o) = default;
        GridCityMap (GridCityMap&& o) noexcept = default;
        GridCityMap& operator= (const GridCityMap& o) = default;
        ~GridCityMap() = default;

        std::vector<int> getAddresses () const override;
        double dist (const int& from_address, const int& to_address) const override;
        int get_x (const int& address) const;
        int get_y (const int& address) const;
        
        
};

#endif