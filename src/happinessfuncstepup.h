#ifndef HAPPINESSFUNCTIONSTEPUP_H
#define HAPPINESSFUNCTIONSTEPUP_H

#include "happinessfunc.h"

class HappinessFuncStepUp: public HappinessFunc
{
    public:
        // This describes a step function. For example:
        // HappinessFunctionStepUp(.50, .90, .75) makes
        // a function that stays constant at 0.5 happiness from
        // diversity 0.0 to 0.7499.. 
        // Then jumps at 0.75 diversity.
        // So it has a constant 0.9 happiness from diversity 0.75 
        // to 1.0.
        HappinessFuncStepUp (double happinessAtZeroPercent, 
                             double happinessAt100Percent, 
                             double ratioWhereRiseHappens);
        double getHappiness( int tot_num_of_possible_neighbors, 
                             int num_of_like_neighbors, 
                             int num_of_diff_neighbors) const override;

    private:
        double _happiness_at_zero_percent_diversity;
        double _happiness_at_100_percent_diversity;
        double _ratio_where_rise_happens;
};

#endif