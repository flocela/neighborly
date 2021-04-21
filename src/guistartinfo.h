#ifndef GUISTARTINFO_H
#define GUISTARTINFO_H

#include <vector>
#include <memory>
#include "citymap.h"
#include "resident.h"

class GuiStartInfo 
{
    public:
        virtual std::unique_ptr<CityMap> getCityMap () = 0;
        virtual std::vector<Resident> getResidents () = 0;
};

#endif