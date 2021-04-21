#include "City_Grid.h"

#include <math.h>

// _width is the width of the grid.
// The x axis goes from left to right.
// The y axis goes from top to bottom.
// All houses are 2 units apart in the x and y directions.
// A _width of 3 would result in
// 0  1  2
// 3  4  5
// 6  7  8
// Address 3 is 4 units away from address 5 in the x direction.
// Address 1 is 4 units away from address 7 in the y direction.
CityGrid::CityGrid (int width): _width{width}, _addresses(width*width)
{
  	for (int ii=0; ii<width; ++ii)
  	{
  		for (int jj=0; jj<width; ++jj)
        {
          _addresses[ (ii*width) + jj] = ii * width + jj;
        }
  	}
}

std::vector<int> CityGrid::getAddresses () const
{
	return _addresses;
}

int CityGrid::get_x (const int& address) const
{
	return (address%_width);
}

int CityGrid::get_y (const int& address) const
{
	return (address/_width);
}

double CityGrid::dist (const int& from_address, const int& to_address) const
{
	double x_dist = fabs(get_x(from_address - to_address));
	double y_dist = fabs(get_y(from_address - to_address));
  	return sqrt( (x_dist * x_dist) + (y_dist * y_dist));
}

bool CityGrid::equals (const CityGrid& other) const{
  	if ( other.getAddresses().size() == this->getAddresses().size() )
      return true;
	return false;
}