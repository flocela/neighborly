#ifndef RESIDENT_H
#define RESIDENT_H

#include <vector>

class Resident{
    public:
        enum Color { red, blue, green, absent };
        int getHappiness(std::vector<Color> neighbors) const;
        Color getColor() const;
};

#endif