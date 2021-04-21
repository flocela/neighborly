#ifndef RESIDENTSTEPUP_H
#define RESIDENTSTEPUP_H

#include <resident.h>
#include "happinessfunc_stepup.h"

class ResidentStepUp: public Resident
{
    public:
        ResidentStepUp () = delete;
        ResidentStepUp (int id,
                        Color color, 
                        ResidentType residentType,
                        double allowedMovementDistance,
                        double happinessGoal,
                        double happinessValueAtZeroDiversity,
                        double happinessValueAtOneDiversity,
                        double diversityWhereRiseHappens);
        ResidentStepUp (const ResidentStepUp& obj) = default;
        ResidentStepUp (ResidentStepUp&& obj) noexcept = default;
        ResidentStepUp& operator= (const ResidentStepUp& obj) = default;
        ResidentStepUp& operator= (ResidentStepUp&& obj) noexcept = default;
        ~ResidentStepUp() = default;
        double getHappiness (std::vector<Color> neighbors) const override;
        Resident::Color getColor () const override;
        Resident::ResidentType getResidentType () const override;
        double getAllowedMovementDistance () const override;
        double getHappinessGoal () const override;

        private:
        HappinessFuncStepUp _happiness_func;
};

#endif