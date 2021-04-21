#ifndef CITYMAPCARDFACTORY_COMMANDLINE_H
#define CITYMAPCARDFACTORY_COMMANDLINE_H

#include "citymapcardfactory.h"

class CityMapCardFactoryCommandLine: public CityMapCardFactory
{
    public:
        std::unique_ptr<CityMapCard> createCityMapCard () override;
};

#endif
