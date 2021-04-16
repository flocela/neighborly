#include "gridcitymap.h"
#include <cmath>

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
GridCityMap::GridCityMap (int const width): _width{width}
{
  	for (int ii=0; ii<=width; ++ii)
  	{
  		for (int jj=0; jj<width; ++jj)
        {
          _addresses[ (ii*width) + jj] = std::make_unique<int>(ii*2, jj*2);
        }
  	}
}

std::vector<int> GridCityMap::getAddresses () const
{
	std::vector<int> returnVector ={};
	for (auto& int_ptr: _addresses)
	{
		returnVector.push_back(*(int_ptr.get()));
	}
	return returnVector;
}

int GridCityMap::get_x (const int& address)
{
	return address%_width;
}

int GridCityMap::get_y (const int& address)
{
	return address/_width;
}

double GridCityMap::dist (const int& from_address, const int& to_address) const
{
	
  	return ( 0.1 );
}