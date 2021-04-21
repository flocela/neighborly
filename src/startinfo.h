#ifndef STARTINFO_H
#define STARTINFO_H

#include <vector>
#include "gridcitymap.h"
#include "citymap.h"
#include "resident.h"
#include <memory>

class StartInfo
{
    public:
        std::unique_ptr<CityMap> city;
        std::vector<std::unique_ptr<Resident>> residents;
        int happinessGoal;
        int maxNumOfRuns;
        double percentForcedToMoveStart;
        double percentForcedToMoveEnd;
        double percentOptionallyMoveStart;
        double percentOptionallyMoveEnd;
};

#endif