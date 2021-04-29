#ifndef RESIDENTSMAKER_CMDLINE_H
#define RESIDENTSMAKER_CMDLINE_H

#include "ResidentsMaker.h"

class ResidentsMaker_CMDLine: public ResidentsMaker
{
    public:
        std::vector<std::unique_ptr<Resident>> makeResidents
            (std::vector<ResidentFactory&> residentFactories) const override;
}

#endif;