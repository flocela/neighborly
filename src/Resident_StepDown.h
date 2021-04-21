#ifndef RESIDENTSTEPDOWN_H
#define RESIDENTSTEPDOWN_H

#include <Resident.h>
#include "HappinessFunc_StepDown.h"

class ResidentStepDown: public Resident
{
    public:
        ResidentStepDown () = delete;
        ResidentStepDown (int id,
                          Color color, 
                          ResidentType residentType,
                          double allowedMovementDistance,
                          double happinessGoal,
                          double happinessValueAtZeroDiversity,
                          double happinessValueAtOneDiversity,
                          double diversityWhereDropHappens);
        ResidentStepDown (const ResidentStepDown& obj) = default;
        ResidentStepDown (ResidentStepDown&& obj) noexcept = default;
        ResidentStepDown& operator= (const ResidentStepDown& obj) = default;
        ResidentStepDown& operator= (ResidentStepDown&& obj) noexcept = default;
        ~ResidentStepDown() = default;
        double getHappiness (std::vector<Color> neighbors) const override;
        Resident::Color getColor () const override;
        Resident::ResidentType getResidentType () const override;
        double getAllowedMovementDistance () const override;
        double getHappinessGoal () const override;

        private:
        HappinessFuncStepDown _happiness_func;
};

#endif