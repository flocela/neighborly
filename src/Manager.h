#ifndef MANAGER_H
#define MANAGER_H

#include <vector>
#include <map>
#include "Resident.h"
#include "City.h"

class Manager
{
    public:
        int start ();
    private:
        City* getCity ();
        std::vector<Resident> getResidents ();
        std::map<int, Resident> getMapOfAddressesPerResident ();
        
};

#endif