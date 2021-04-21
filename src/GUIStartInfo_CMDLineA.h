#ifndef GUISTARTINFO_CMDLINEA_H
#define GUISTARTINFO_CMDLINEA_H

#include "GUIStartInfo.h"
#include <memory>

class GuiStartInfo_CommandLineA: public GuiStartInfo
{
    public:
        std::unique_ptr<City> getCity () override;
        //std::vector<Resident> getResidents () overrride;
};

#endif