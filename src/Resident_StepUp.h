#ifndef Resident_StepUp_H
#define Resident_StepUp_H

#include "Resident.h"
#include "HappinessFunc_StepUp.h"

class Resident_StepUp: public Resident
{
    public:
        Resident_StepUp () = delete;
        Resident_StepUp (int id,
                        Color color, 
                        ResidentType residentType,
                        double allowedMovementDistance,
                        double happinessGoal,
                        double happinessValueAtZeroDiversity,
                        double happinessValueAtOneDiversity,
                        double diversityWhereRiseHappens);
        Resident_StepUp (const Resident_StepUp& obj) = default;
        Resident_StepUp (Resident_StepUp&& obj) noexcept = default;
        Resident_StepUp& operator= (const Resident_StepUp& obj) = default;
        Resident_StepUp& operator= (Resident_StepUp&& obj) noexcept = default;
        ~Resident_StepUp() = default;

        double getHappiness (std::vector<Color> neighbors) const override;

        private:
        HappinessFunc_StepUp _happiness_func;
};

#endif