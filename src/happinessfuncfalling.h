#ifndef HAPPINESSFUNCFALLING_H
#define HAPPINESSFUNCFALLING_H

#include "happinessfunc.h"

class HappinessFuncFalling: public HappinessFunction
{
    public:
        HappinessFuncFalling (double happinessAtZeroPercentDiversity,
                              double happinessAt100PercentDiversity);
        double getHappiness( int tot_num_of_possible_neighbors, 
                             int num_of_like_neighbors, 
                             int num_of_diff_neighbors) const override;
    private:
        double _happiness_at_zero_percent_diversity;
        double _happiness_at_hundred_percent_diversity;
};

#endif