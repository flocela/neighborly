#include "gridcitymap.h"

#include <math.h>
#include <iostream>

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
GridCityMap::GridCityMap (int width): _width{width}, _addresses(width*width)
{
  	for (int ii=0; ii<width; ++ii)
  	{
  		for (int jj=0; jj<width; ++jj)
        {
          _addresses[ (ii*width) + jj] = ii * width + jj;
        }
  	}
}

std::vector<int> GridCityMap::getAddresses () const
{
	return _addresses;
}

int GridCityMap::get_x (const int& address) const
{
	std::cout << "get_x: " << address << ": "<< address%_width << std::endl; 
	return (address%_width) * 2;
}

int GridCityMap::get_y (const int& address) const
{
	return (address/_width) * 2;
}

double GridCityMap::dist (const int& from_address, const int& to_address) const
{
  	return ( fabs(get_x(from_address) - get_x(to_address)) + 
	  	     fabs(get_y(from_address) - get_y(to_address)) );
}