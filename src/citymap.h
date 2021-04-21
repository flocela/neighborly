#ifndef CITYMAP_H
#define CITYMAP_H

#include <vector>
#include <memory>

class CityMap
{
    public:
        enum CityType { grid };
        virtual ~CityMap() = default;

        virtual std::vector<int> getAddresses () const = 0;
        virtual double dist (const int& from_address, const int& to_address) const = 0;
        
};

#endif