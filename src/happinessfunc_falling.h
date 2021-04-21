#ifndef HAPPINESSFUNC_FALLING_H
#define HAPPINESSFUNC_FALLING_H

#include "happinessfunc.h"

class HappinessFuncFalling: public HappinessFunc
{
    public:
        HappinessFuncFalling (double happinessAtZeroPercentDiversity,
                              double happinessAt100PercentDiversity);
        HappinessFuncFalling () = delete;
        HappinessFuncFalling (const HappinessFuncFalling& obj) = default;
        HappinessFuncFalling (HappinessFuncFalling&& obj) noexcept = default;
        HappinessFuncFalling& operator=(const HappinessFuncFalling& obj) = default;
        HappinessFuncFalling& operator=(HappinessFuncFalling&& obj) noexcept = default;
        ~HappinessFuncFalling() override = default;
        double getHappiness( int tot_num_of_possible_neighbors, 
                             int num_of_like_neighbors, 
                             int num_of_diff_neighbors) const override;
    private:
        double _happiness_at_zero_percent_diversity;
        double _happiness_at_hundred_percent_diversity;
};

#endif