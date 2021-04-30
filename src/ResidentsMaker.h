#ifndef RESIDENTSMAKER_H
#define RESIDENTSMAKER_H

#include <vector>
#include <memory>
#include "Resident.h"
#include "ResidentsFactory.h"

class ResidentsMaker
{
    public:
        virtual std::vector<std::unique_ptr<Resident>> 
            makeResidents (std::vector<ResidentsFactory*> residentsFactories,
                           int maxNumOfResidents) const = 0;
        virtual ~ResidentsMaker();
};

#endif