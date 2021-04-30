#ifndef RESIDENTSMAKER_CMDLINE_H
#define RESIDENTSMAKER_CMDLINE_H

#include "ResidentsMaker.h"
#include "Question_Int.h"

class ResidentsMaker_CMDLine: public ResidentsMaker
{
    public:
        ResidentsMaker_CMDLine ();
        std::vector<std::unique_ptr<Resident>> 
            makeResidents (std::vector<ResidentsFactory*> residentFactories, 
                           int maxNumOfResidents) const override;
    private:
        std::unique_ptr<Question_Int> _num_of_types_of_residents_q;
        
        

};

#endif