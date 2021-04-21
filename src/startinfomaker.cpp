#include "startinfomaker.h"
#include "resident_flat.h"
#include "resident_stepdown.h"
#include "startinfo.h"

StartInfo StartInfoMaker::getInfo (CityMap::CityType cityType,
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
    StartInfo info;
    if ( cityType == CityMap::CityType::grid) {
        int city_width = (int)cityValues[0];
        info.city = std::make_unique<GridCityMap>(city_width);

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
    int maxNumOfRuns  = 2;
    double percentForcedToMoveStart   = 10.0;
    double percentForcedToMoveEnd     = 10.0;
    double percentOptionallyMoveStart = 10.0;
    double percentOptionallyMoveEnd = 10.0;


    StartInfo info = StartInfo();

    std::unique_ptr<CityMap> city = std::make_unique<GridCityMap>(city_width);
    std::vector<std::unique_ptr<Resident>> residents = {};
    for (int ii=0; ii<group1Count; ii++)
    {
    	residents[ii] = std::make_unique<ResidentFlat>(ii,
											           group1Color,
											           group1Type,
											           group1MovementAllowed,
											           happinessGoal,
											           group1HappinessfuncValue);
    }

	for (int ii=group1Count; ii<group1Count + group2Count; ii++)
    {
    	residents[ii] = std::make_unique<ResidentStepDown>(ii,
											               group2Color,
											               group2Type,
											               group2MovementAllowed,
											               happinessGoal,
											               group2HappinessfuncValueAtZero,
                                                           group2HappinessfuncValueAtOne,
                                                           group2HappinessfuncXValue);
    }

    info.city = std::move(city);
    info.residents = residents;
    info.maxNumOfRuns = maxNumOfRuns;
    info.percentForcedToMoveStart   = percentForcedToMoveStart;
    info.percentForcedToMoveEnd     = percentForcedToMoveEnd;
    info.percentOptionallyMoveStart = percentOptionallyMoveStart;
    info.percentOptionallyMoveEnd   = percentOptionallyMoveEnd;

}
