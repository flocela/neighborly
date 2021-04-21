#ifndef CITYCARDFACTORY_COMMANDLINE_H
#define CITYCARDFACTORY_COMMANDLINE_H

#include "CityCardFactory.h"

class CityCardFactoryCommandLineA: public CityCardFactory
{
    public:
        std::unique_ptr<CityCard> createCityCard () override;
};

#endif
