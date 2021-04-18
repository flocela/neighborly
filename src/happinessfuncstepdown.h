#ifndef HAPPINESSFUNCSTEPDOWN_H
#define HAPPINESSFUNCSTEPDOWN_H

#include "happinessfunc.h"

class HappinessFuncStepDown: public HappinessFunc
{
    public:
        // This describes a step function. For example:
        // HappinessFunctionStepDown(.90, .50, .75) makes
        // a function that stays constant at 0.9 happiness from
        // diversity 0.0 to 0.7499.. 
        // Then jumps at 0.75 diversity.
        // So it has a constant 0.5 happiness from diversity 0.75 
        // to 1.0.
        HappinessFuncStepDown (double happinessAtZeroPercent, 
                                   double happinessAt100Percent, 
                                   double ratioWhereDropHappens);
        double getHappiness( int tot_num_of_possible_neighbors, 
                             int num_of_like_neighbors, 
                             int num_of_diff_neighbors) const override;
    private:
        double _happiness_at_zero_percent_diversity;
        double _happiness_at_100_percent_diversity;
        double _ratio_where_drop_happens;
};

#endif