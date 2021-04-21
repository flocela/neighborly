#include "happinessfunc_stepup.h"

HappinessFuncStepUp::HappinessFuncStepUp (double happinessAtZeroPercentDiversity,
                                          double happinessAt100PercentDiversity,
                                          double ratioWhereRiseHappens): 
    _happiness_at_zero_percent_diversity{happinessAtZeroPercentDiversity},
    _happiness_at_100_percent_diversity{happinessAt100PercentDiversity},
    _ratio_where_rise_happens{ratioWhereRiseHappens}
{}

double HappinessFuncStepUp::getHappiness ( 
    int tot_num_of_possible_neighbors, 
    int num_of_like_neighbors, 
    int num_of_diff_neighbors) const
{
    double diversity = num_of_diff_neighbors / (num_of_diff_neighbors + num_of_like_neighbors);
    if (diversity < _ratio_where_rise_happens)
        return _happiness_at_zero_percent_diversity;
    return _happiness_at_100_percent_diversity;

}