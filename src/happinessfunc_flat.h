#ifndef HAPPINESSFUNC_FLAT_H
#define HAPPINESSFUNC_FLAT_H

#include "happinessfunc.h"

// Always returns the same happiness value, no matter the neighbors.
class HappinessFuncFlat: public HappinessFunc
{
    public:
        // HappinessFuncFlat has an x-axis of Diversity and
        // a y-axis of Happiness. Both axes range from 0.0 to 1.0.
        // @happinessValue is the y-axis Happiness at all points of the x-axis.
        // An exception is thrown if happinessValue is 
        // not in the range 0.0 to 1.0.
        HappinessFuncFlat (double happinessValue);
        HappinessFuncFlat () = delete;
        HappinessFuncFlat (const HappinessFuncFlat& obj) = default;
        HappinessFuncFlat (HappinessFuncFlat&& obj) noexcept = default;
        HappinessFuncFlat& operator=(const HappinessFuncFlat& obj) = default;
        HappinessFuncFlat& operator=(HappinessFuncFlat&& obj) noexcept = default;
        ~HappinessFuncFlat() override = default;
        
        double getHappiness( int tot_num_of_possible_neighbors, 
                             int num_of_like_neighbors, 
                             int num_of_diff_neighbors) const override;
    private:
        double _result;
};

#endif