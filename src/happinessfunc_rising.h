#ifndef HAPPINESSFUNC_RISING_H
#define HAPPINESSFUNC_RISING_H

#include "happinessfunc.h"

class HappinessFuncRising: public HappinessFunc
{
    public:
        // HappinessFuncRising has an x-axis of Diversity and
        // a y-axis of Happiness. Both axes range from 0.0 to 1.0.
        // @happinessAtZeroDiversity is the y-axis Happiness when
        // Diversity is 0.0.
        // @happinessAtOneDiversity is the y-axis happiness when
        // Diversity is 1.0.
        // Exception is thrown @if happinessAtZeroDiversity or 
        // hapinessAtOneDiversity is not in range.
        // Exception is thrown if happinessAtZeroDiversity is 
        // larger than happiness at OneDiversity.
        HappinessFuncRising ( double happinessAtZeroDiversity,
                              double happinessAtOneDiversity);
        HappinessFuncRising () = delete;
        HappinessFuncRising (const HappinessFuncRising& obj) = default;
        HappinessFuncRising (HappinessFuncRising&& obj) noexcept = default;
        HappinessFuncRising& operator=(const HappinessFuncRising& obj) = default;
        HappinessFuncRising& operator=(HappinessFuncRising&& obj) noexcept = default;
        ~HappinessFuncRising() override = default;  

        double getHappiness ( int tot_num_of_possible_neighbors, 
                              int num_of_like_neighbors, 
                              int num_of_diff_neighbors) const override;
    private:
        double _happiness_at_zero_diversity;
        double _happiness_at_one_diversity;
};

#endif