#ifndef GUISTARTINFO_COMMANDLINEA_H
#define GUISTARTINFO_COMMANDLINEA_H

#include "guistartinfo.h"
#include <memory>

class GuiStartInfo_CommandLineA: public GuiStartInfo
{
    public:
        std::unique_ptr<CityMap> getCityMap () override;
        //std::vector<Resident> getResidents () overrride;
};

#endif