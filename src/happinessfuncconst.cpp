#include "happinessfuncconst.h"

HappinessFuncConst::HappinessFuncConst(double result): _result{result}
{}

double HappinessFuncConst::getHappiness ( 
    int tot_num_of_possible_neighbors, 
    int num_of_like_neighbors, 
    int num_of_diff_neighbors) const
{
    return _result;
}