#ifndef Resident_StepDown_H
#define Resident_StepDown_H

#include "Resident.h"
#include "HappinessFunc_StepDown.h"

class Resident_StepDown: public Resident
{
    public:
        Resident_StepDown () = delete;
        Resident_StepDown (int id,
                          Color color, 
                          ResidentType residentType,
                          double allowedMovementDistance,
                          double happinessGoal,
                          double happinessValueAtZeroDiversity,
                          double happinessValueAtOneDiversity,
                          double diversityWhereDropHappens);
        Resident_StepDown (const Resident_StepDown& obj) = default;
        Resident_StepDown (Resident_StepDown&& obj) noexcept = default;
        Resident_StepDown& operator= (const Resident_StepDown& obj) = default;
        Resident_StepDown& operator= (Resident_StepDown&& obj) noexcept = default;
        ~Resident_StepDown() = default;

        double getHappiness (std::vector<Color> neighbors) const override;

        private:
        HappinessFunc_StepDown _happiness_func;
};

#endif