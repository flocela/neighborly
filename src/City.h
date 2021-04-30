#ifndef CITY_H
#define CITY_H

#include <vector>
#include <memory>

class City
{
    public:
        enum CityType { grid };
        virtual ~City() = default;

        // getSize() returns the number of addresses.
        virtual int getSize() const = 0;
        virtual std::vector<int> getAddresses () const = 0;
        virtual double dist (const int& from_address, const int& to_address) const = 0;
        //vector<CityType> citytypes{Grid, }
};

#endif