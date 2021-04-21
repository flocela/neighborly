#ifndef CITY_GRID_H
#define CITY_GRID_H

#include "City.h"

class CityGrid: public City
{
    private:
    	std::vector<int> _addresses;
        int _width;
    
    public:
    	CityGrid (int width);
        CityGrid () = delete;
        CityGrid (const CityGrid& o) = default;
        CityGrid (CityGrid&& o) noexcept = default;
        CityGrid& operator= (const CityGrid& o) = default;
        ~CityGrid() = default;

        std::vector<int> getAddresses () const override;
        double dist (const int& from_address, const int& to_address) const override;
        int get_x (const int& address) const;
        int get_y (const int& address) const;
        bool equals(const CityGrid& other) const;
        
        
};

#endif