#ifndef RESIDENTFACTORY_FLAT_H
#define RESIDENTFACTORY_FLAT_H

#include "ResidentsFactory.h"
#include "Question_Int.h"
#include "Question_Double.h"

class ResidentsFactory_Flat: public ResidentsFactory
{
    public:
        ResidentsFactory_Flat ();
        ResidentsFactory_Flat (const ResidentsFactory_Flat& obj) = default;
        ResidentsFactory_Flat (ResidentsFactory_Flat&& obj) noexcept = default;
        ResidentsFactory_Flat& operator= (const ResidentsFactory_Flat& obj) = default;
        ResidentsFactory_Flat& operator= (ResidentsFactory_Flat&& obj) noexcept = default;

        std::vector<std::unique_ptr<Resident>> createResidents (
                                                UI& ui,
                                                int firstID,
                                                int maxCount, 
                                                Resident::Color color) override;
        std::vector<std::unique_ptr<Resident>> createResidents(
                                                UI& ui,
                                                int firstID, 
                                                int maxCount, 
                                                double happinessGoal, 
                                                Resident::Color color) override;
    
    private:
        Question_Int    _how_many_question;
        Question_Double _happiness_goal_question;
        Question_Double _allowed_movement_question;
        Question_Double _happiness_value_question;

        void initHowManyQuestion (int maxCount);
        void initHappinessGoalQuestion();
        void initAllowedMovementQuestion();
        void initHappinessValueQuestion();

        int getHowMany(UI& ui);
        double getHappinessGoal(UI& ui);
        double getAllowedMovement(UI& ui);
        double getHappinessValue(UI& ui);

};


#endif