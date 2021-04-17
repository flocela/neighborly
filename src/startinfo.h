#ifndef STARTINFO_H
#define STARTINFO_H

#include <vector>
#include "gridcitymap.h"
#include "citymap.h"

class StartInfo
{
    public:
        CityMap* city2;
        //std::vector<Resident> residents;
        int happinessGoal;
        int maxNumOfRuns;
        double percentForcedToMoveStart;
        double percentForcedToMoveEnd;
        double percentOptionallyMoveStart;
        double percentOptionallyMoveEnd;
};

#endif