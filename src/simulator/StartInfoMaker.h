#ifndef STARTINFOMAKER_H
#define STARTINFOMAKER_H

#include "StartInfo.h"
#include "HappinessFunc.h"
#include "City.h"
#include <vector>
#include "Resident.h"

class StartInfoMaker {
    public:
        StartInfoMaker () = default;
        StartInfo getInfo (City::CityType cityType,
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