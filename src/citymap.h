#ifndef CITYMAP_H
#define CITYMAP_H

#include <vector>
#include <memory>

class CityMap
{
    public:
        virtual std::unique_ptr<std::vector<const int*>> getAddresses () const = 0;
        virtual double dist (const int& from_address, const int& to_address) const = 0;
        virtual ~CityMap() = default;
};

#endif