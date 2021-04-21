#ifndef RESIDENT_H
#define RESIDENT_H

#include <vector>

class Resident{
    public:
        enum Color { red, blue, green, absent };
        enum ResidentType { flat, rising, falling, stepup, stepdown };
        Resident (int id,
                  Color color, 
                  ResidentType residentType,
                  double allowedMovementDistance,
                  double happinessGoal);
        Resident (const Resident& obj) = default;
        Resident (Resident&& obj) noexcept = default;
        Resident& operator= (const Resident& obj) = default;
        Resident& operator= (Resident&& obj) noexcept = default;
        virtual ~Resident ();

        int getID() { return _ID; }
        // neighbors vector includes all possible neighbors, so
        // if a neighbors house is empty, Color::absent should
        // be added to neighbors
        virtual double getHappiness (std::vector<Color> neighbors) const = 0;
        virtual Color getColor () const = 0;
        virtual ResidentType getResidentType ()const = 0;
        virtual double getAllowedMovementDistance () const = 0;
        virtual double getHappinessGoal () const = 0;

    private:
        Resident::Color _color;
        Resident::ResidentType _resident_type;
        double _allowed_movement_distance;
        double _happiness_goal;
        int _ID;
        static const std::vector<int> residentTypes;
};

#endif