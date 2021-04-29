#ifndef RESIDENTSMAKER_H
#define RESIDENTSMAKER_H

#include <vector>
#include <memory>
#include "Resident.h"
#include "ResidentFactory.h"


class ResidentsMaker
{
    public:
        virtual std::vector<std::unique_ptr<Resident>> makeResidents
            (std::vector<ResidentFactory&> residentFactories) const = 0;

};

#endif