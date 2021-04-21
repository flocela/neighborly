#ifndef MAPCITY_GRID_H
#define MAPCITY_GRID_H

#include "citymap.h"

class CityMapGrid: public CityMap
{
    private:
    	std::vector<int> _addresses;
        int _width;
    
    public:
    	CityMapGrid (int width);
        CityMapGrid () = delete;
        CityMapGrid (const CityMapGrid& o) = default;
        CityMapGrid (CityMapGrid&& o) noexcept = default;
        CityMapGrid& operator= (const CityMapGrid& o) = default;
        ~CityMapGrid() = default;

        std::vector<int> getAddresses () const override;
        double dist (const int& from_address, const int& to_address) const override;
        int get_x (const int& address) const;
        int get_y (const int& address) const;
        bool equals(const CityMapGrid& other) const;
        
        
};

#endif