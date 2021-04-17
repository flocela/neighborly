#include "startinfogetter.h"

std::unique_ptr<StartInfo> StartInfoGetter::getInfo ()
{
  	int city_width = 6;
    std::unique_ptr<StartInfo> info = std::make_unique<StartInfo>();
    std::unique_ptr<CityMap>   city = std::make_unique<GridCityMap>(city_width);
}
