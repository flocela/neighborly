#include "simulator/Resident_StepDown.h"

Resident_StepDown::Resident_StepDown (int id,
                                    Color color, 
                                    ResidentType residentType,
                                    double allowedMovementDistance,
                                    double happinessGoal,
                                    double happinessValueAtZeroDiversity,
                                    double happinessValueAtOneDiversity,
                                    double diversityWhereDropHappens):
    Resident(id, color, residentType, allowedMovementDistance, happinessGoal),
    _happiness_func{happinessValueAtZeroDiversity, 
                    happinessValueAtOneDiversity, 
                    diversityWhereDropHappens}
{
    
}

double Resident_StepDown::getHappiness(std::vector<Resident::Color> neighbors) const
{
    int total = neighbors.size();
    int like  = 0;
    int diff  = 0;

    return _happiness_func.getHappiness(total, like, diff);
}