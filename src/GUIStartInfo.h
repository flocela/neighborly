#ifndef GUISTARTINFO_H
#define GUISTARTINFO_H

#include <vector>
#include <memory>
#include "City.h"
#include "Resident.h"

class GuiStartInfo 
{
    public:
        virtual std::unique_ptr<City> getCity () = 0;
        virtual std::vector<Resident> getResidents () = 0;
};

#endif