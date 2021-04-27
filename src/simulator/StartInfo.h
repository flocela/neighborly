#ifndef STARTINFO_H
#define STARTINFO_H

#include <vector>
#include "City_Grid.h"
#include "City.h"
#include "Resident.h"
#include <memory>

class StartInfo
{
    public:
        std::unique_ptr<City> city;
        std::vector<std::unique_ptr<Resident>> residents;
        int happinessGoal;
        int maxNumOfRuns;
        double percentForcedToMoveStart;
        double percentForcedToMoveEnd;
        double percentOptionallyMoveStart;
        double percentOptionallyMoveEnd;
};

#endif