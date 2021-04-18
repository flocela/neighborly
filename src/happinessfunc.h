#ifndef HAPPINESSFUNCTION_H
#define HAPPINESSFUNCTION_H

class HappinessFunc
{
    public:
        virtual double getHappiness( int tot_num_of_possible_neighbors, 
                                     int num_of_like_neighbors, 
                                     int num_of_diff_neighbors) const = 0;
};

#endif