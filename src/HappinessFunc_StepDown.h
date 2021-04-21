#ifndef HAPPINESSFUNC_STEPDOWN_H
#define HAPPINESSFUNC_STEPDOWN_H

#include "HappinessFunc.h"

class HappinessFuncStepDown: public HappinessFunc
{
    public:
        // HappinessFunc has an x-axis of Diversity and a y-axis of Happiness.
        // Both axes range from 0.0 to 1.0.
        // HappinessFuncStepDown(.90, .50, .75) makes
        // a function that stays constant at 0.90 happiness from
        // diversity 0.0 to 0.7499.. 
        // Then drops at 0.75 diversity.
        // So it has a constant 0.50 happiness from diversity 0.75 
        // to 1.0.
        // An exception is thrown if @happinessAtZeroDiversity or 
        // @happinessAtOneDiversity, or @stepDownHappensAt are not in range.
        // An exception is thrown in if @happinessValueAtZeroDiversity is less than
        // or equal to @happinessValueAtOneDiversity.
        HappinessFuncStepDown (double happinessAtZeroDiversity, 
                               double happinessAtOneDiversity, 
                               double stepDownHappensAt);
        HappinessFuncStepDown () = delete;
        HappinessFuncStepDown (const HappinessFuncStepDown& obj) = default;
        HappinessFuncStepDown (HappinessFuncStepDown&& obj) noexcept = default;
        HappinessFuncStepDown& operator=(const HappinessFuncStepDown& obj) = default;
        HappinessFuncStepDown& operator=(HappinessFuncStepDown&& obj) noexcept = default;
        ~HappinessFuncStepDown() override = default;                       

        double getHappiness( int tot_num_of_possible_neighbors, 
                             int num_of_like_neighbors, 
                             int num_of_diff_neighbors) const override;
    private:
        double _happiness_at_zero_diversity;
        double _happiness_at_one_diversity;
        double _where_drop_happens;
};

#endif