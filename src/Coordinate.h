#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>

class Coordinate
{
    public:
        Coordinate(int x, int y);
        Coordinate() = delete;
        Coordinate (const Coordinate& obj) = default;
        Coordinate (Coordinate&& obj) noexcept = default;
        Coordinate& operator=(const Coordinate& obj) = default;
        Coordinate& operator=(Coordinate&& obj) noexcept = default;

        int getX();
        int getY();
        bool operator<(const Coordinate& a) const;
        
        friend std::ostream& operator<<(std::ostream& os, Coordinate const& c);

    private:
        int _x = -1;
        int _y = -1;

};
#endif