#ifndef RESIDENTFLAT_H
#define RESIDENTFLAT_H

#include <resident.h>
#include "happinessfunc_flat.h"

class ResidentFlat: public Resident
{
    public:
        ResidentFlat () = delete;
        ResidentFlat (int id,
                      Color color, 
                      ResidentType residentType,
                      double allowedMovementDistance,
                      double happinessGoal,
                      double happinessValue);
        ResidentFlat (const ResidentFlat& obj) = default;
        ResidentFlat (ResidentFlat&& obj) noexcept = default;
        ResidentFlat& operator= (const ResidentFlat& obj) = default;
        ResidentFlat& operator= (ResidentFlat&& obj) noexcept = default;
        ~ResidentFlat() = default;
        double getHappiness (std::vector<Color> neighbors) const override;
        Resident::Color getColor () const override;
        Resident::ResidentType getResidentType () const override;
        double getAllowedMovementDistance () const override;
        double getHappinessGoal () const override;

        private:
        HappinessFuncFlat _happiness_func;
};

#endif