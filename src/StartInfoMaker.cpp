#include "StartInfoMaker.h"
#include "Resident_Flat.h"
#include "Resident_StepDown.h"
#include "StartInfo.h"

StartInfo StartInfoMaker::getInfo (City::CityType cityType,
                                   std::vector<double> cityValues,
                                   std::vector<int> numOfResPerGroup,
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
                                   double percentOptionallyMoveEnd
                                  )
{
    StartInfo info{};
    if ( cityType == City::CityType::grid) {
        int city_width = (int)cityValues[0];
        info.city = std::make_unique<City_Grid>(city_width);

    }

    return info;
  	int city_width = 6;
    // ResidentGroup #1
    Resident::Color group1Color         = Resident::Color::blue;
    Resident::ResidentType group1Type   = Resident::ResidentType::flat;
    double group1HappinessfuncValue     = 1.0;
    double group1MovementAllowed        = 6;
    int group1Count                     = 14;

    // ResidentGroup #2
    Resident::Color group2Color           = Resident::Color::red;
    Resident::ResidentType  group2Type    = Resident::ResidentType::stepdown;
    double group2HappinessfuncValueAtZero = 1.0;
    double group2HappinessfuncValueAtOne  = 0.0;
    double group2HappinessfuncXValue      = 0.5;
    double group2MovementAllowed          = 6;
	int group2Count                       = 28;
    
    int happinessGoal = 0.5;

    std::unique_ptr<City> city = std::make_unique<City_Grid>(city_width);
    for (int ii=0; ii<group1Count; ii++)
    {
    	info.residents[ii] = std::make_unique<Resident_Flat>(ii,
											           group1Color,
											           group1Type,
											           group1MovementAllowed,
											           happinessGoal,
											           group1HappinessfuncValue);
    }

	for (int ii=group1Count; ii<group1Count + group2Count; ii++)
    {
    	info.residents[ii] = std::make_unique<Resident_StepDown>(ii,
											               group2Color,
											               group2Type,
											               group2MovementAllowed,
											               happinessGoal,
											               group2HappinessfuncValueAtZero,
                                                           group2HappinessfuncValueAtOne,
                                                           group2HappinessfuncXValue);
    }

    info.city = std::move(city);
    info.maxNumOfRuns = maxNumOfRuns;
    info.percentForcedToMoveStart   = percentForcedToMoveStart;
    info.percentForcedToMoveEnd     = percentForcedToMoveEnd;
    info.percentOptionallyMoveStart = percentOptionallyMoveStart;
    info.percentOptionallyMoveEnd   = percentOptionallyMoveEnd;

}
