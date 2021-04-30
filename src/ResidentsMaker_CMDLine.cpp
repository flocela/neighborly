#include "ResidentsMaker_CMDLine.h"
#include "UI_CMDLine.h"
#include <map>

ResidentsMaker_CMDLine::ResidentsMaker_CMDLine ()
{
    _num_of_types_of_residents_q = 
        std::make_unique<Question_Int>( 0,
                                        1,
                                        3, 
                                       "How many different types"
                                       " of residents will there be? 1,"
                                       " 2, or 3?",
                                       "Nope that's not a whole number."
                                       " Should be 1, 2, or 3. No, decimals.",
                                       "That's either too small or too large."
                                       " Should be 1, 2, or 3.");

}

std::vector<std::unique_ptr<Resident>> ResidentsMaker_CMDLine::makeResidents 
    ( std::vector<ResidentsFactory*> residentFactories, 
      int maxNumOfResidents ) const
{
    std::vector<std::string> residentFactoryNames = {};
    for (ResidentsFactory* residentFactory: residentFactories)
    {
        residentFactoryNames.push_back(residentFactory->toString());
    }
    
    std::map<int, std::string> nthStringsPerInt;
    nthStringsPerInt[1] ="first";
    nthStringsPerInt[2] = "second";
    nthStringsPerInt[3] ="third";

    UI_CMDLine ui{};
    ui.getAnswer( *(_num_of_types_of_residents_q.get()) );
    std::vector<int> choices = {};

    int totNumOfResidents = 0;
    if ( _num_of_types_of_residents_q->hasValidAnswer() )
    {
        int num_of_types = std::stoi(_num_of_types_of_residents_q->getAnswer());
        for (int ii=0; ii<num_of_types; ++ii)
        {
            int residentTypeChoice = ui.menu( "Choose a resident type by typing"
                                              " the corresponding number.",
                                              residentFactoryNames );
            int allowableNumOfResidents = maxNumOfResidents - totNumOfResidents;
            std::string allowableNumOfResString = std::to_string(allowableNumOfResidents);
            
            if (q.hasValidAnswer())
            {
                int numOfRes = std::stoi(ui.getAnswer(q));
            }
            else
            {
                throw "Can not get information needed to make residents from the user.";
            }


            
        }
    }
    else
    {
        throw "Can not get information needed to make residents from the user.";
    }
    

    std::vector<std::unique_ptr<Resident>> x = {};
    return x;
}