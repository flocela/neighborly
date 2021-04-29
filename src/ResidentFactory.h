#ifndef RESIDENTFACTORY_H
#define RESIDENTFACTORY_H

#include <memory>
#include "Resident.h"
#include "UI.h"

class ResidentFactory
{
    public:
        virtual std::unique_ptr<Resident> createResident(UI& ui) = 0;
        virtual std::string toString () = 0;
}

#endif;