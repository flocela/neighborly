#include "Coordinate.h"

Coordinate::Coordinate (int x, int y): _x{x}, _y{y}
{}

int Coordinate::getX ()
{
    return _x;
}

int Coordinate::getY ()
{
    return _y;
}

bool Coordinate::operator< (const Coordinate& a) const
{
    if (_y == a._y)
        return _x < a._x;
    else
        return _y < a._y;
    
}

std::ostream& operator<<(std::ostream& os, Coordinate const& v)
{
    std::cout << "(" << v._x << ", " << v._y << ")";
}