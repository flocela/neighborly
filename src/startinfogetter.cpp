#include "startinfo.h"

unique_ptr<StartInfo> StartInfoGetter::getInfo ()
{
  	int city_width = 6;
    unique_ptr<StartInfo> info = make_unique<StartInfo>();
    unique_ptr<CityMap>   city = make_unique<GridCityMap>(city_width);
}
