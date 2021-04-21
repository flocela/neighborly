#ifndef STARTINFOMAKER_H
#define STARTINFOMAKER_H

#include "startinfo.h"
#include "happinessfunc.h"
#include "citymap.h"
#include <vector>
#include "resident.h"

class StartInfoMaker {
    public:
        StartInfoMaker () = default;
        StartInfo getInfo (CityMap::CityType cityType,
                           std::vector<double> cityValues,
                           std::vector<int> numOfHousesPerGroup,
                           std::vector<Resident::ResidentType> residentTypesPerResGroup,
                           std::vector<int> numOfResidentsPerResGroup,
                           std::vector<Resident::Color> residentColorPerResGroup,
                           std::vector<HappinessFunc> happinessFuncPerResGroup,
                           std::vector<double> allowedMovementPerResGroup,
                           std::vector<double> happinessGoalPerResGroup,
                           int maxNumOfRuns,
                           double percentForcedToMoveStart,
                           double percentForcedToMoveEnd,
                           double percentOptionallyMoveStart,
                           double percentOptionallyMoveEnd);
};

#endif