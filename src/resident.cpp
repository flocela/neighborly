#include "resident.h"

Resident::Resident (int id,
                    Color color, 
                    ResidentType residentType,
                    double allowedMovementDistance,
                    double happinessGoal):
    _ID{id}, _color{color}, _resident_type{residentType}, 
    _allowed_movement_distance{allowedMovementDistance}, 
    _happiness_goal{happinessGoal}              
{}
 
const std::vector<int> Resident::residentTypes = {flat, rising, falling, stepup, stepdown}