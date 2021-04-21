#include "HappinessFunc_StepUp.h"

HappinessFuncStepUp::HappinessFuncStepUp (double happinessAtZeroDiversity,
                                          double happinessAtOneDiversity,
                                          double whereRiseHappens): 
    _happiness_at_zero_diversity{happinessAtZeroDiversity},
    _happiness_at_one_diversity{happinessAtOneDiversity},
    _diversity_where_rise_happens{whereRiseHappens}
{}

double HappinessFuncStepUp::getHappiness ( 
    int tot_num_of_possible_neighbors, 
    int num_of_like_neighbors, 
    int num_of_diff_neighbors) const
{
    double diversity = num_of_diff_neighbors / (num_of_diff_neighbors + num_of_like_neighbors);
    if (diversity < _diversity_where_rise_happens)
        return _happiness_at_zero_diversity;
    return _diversity_where_rise_happens;

}