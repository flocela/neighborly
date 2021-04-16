#ifndef CITYMAP_H
#define CITYMAP_H

#include <vector>

class CityMap
{
    virtual std::vector<int> getAddresses () const = 0;
    virtual double dist (const int& from_address, const int& to_address) const = 0;
};

#endif