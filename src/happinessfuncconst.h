#ifndef HAPPINESSFUNCTIONCONST_H
#define HAPPINESSFUNCTIONCONST_H

#include "happinessfunc.h"

// Always returns the same happiness value, no matter the neighbors.

class HappinessFuncConst: public HappinessFunction
{
    public:
        HappinessFuncConst (double result);
        double getHappiness( int tot_num_of_possible_neighbors, 
                             int num_of_like_neighbors, 
                             int num_of_diff_neighbors) const override;
    private:
        double _result;
};

#endif