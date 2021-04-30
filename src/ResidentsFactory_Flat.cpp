#include "ResidentsFactory_Flat.h"
#include <limits>
#include "Resident_Flat.h"

std::vector<std::unique_ptr<Resident>> ResidentsFactory_Flat::createResidents (
                                                            UI& ui, 
                                                            int firstID,
                                                            int maxCount,
                                                            Resident::Color color)
{   initHowManyQuestion(maxCount);
    initHappinessGoalQuestion();
    initAllowedMovementQuestion();
    initHappinessValueQuestion();

    int howMany            = getHowMany(ui);
    double happinessGoal   = getHappinessGoal(ui);
    double allowedMovement = getAllowedMovement(ui);
    double happinessValue  = getHappinessValue(ui);

    std::vector<std::unique_ptr<Resident>> residents = {};
    for ( int ii=0; ii<howMany; ++ii)
    {
        residents.push_back(
            std::make_unique<Resident_Flat>(firstID+ii,
                                            color,
                                            Resident::ResidentType::flat,
                                            allowedMovement,
                                            happinessGoal,
                                            happinessValue));
    }
    return residents;
}

std::vector<std::unique_ptr<Resident>> ResidentsFactory_Flat::createResidents (
                                                            UI& ui,
                                                            int firstID, 
                                                            int maxCount, 
                                                            double happinessGoal, 
                                                            Resident::Color color)
{   
    initHowManyQuestion(maxCount);
    initAllowedMovementQuestion();
    initHappinessValueQuestion();

    int howMany            = getHowMany(ui);
    double allowedMovement = getAllowedMovement(ui);
    double happinessValue  = getHappinessValue(ui);

    std::vector<std::unique_ptr<Resident>> residents = {};
    for ( int ii=0; ii<howMany; ++ii)
    {
        residents.push_back(
            std::make_unique<Resident_Flat>(firstID+ii,
                                            color,
                                            Resident::ResidentType::flat,
                                            allowedMovement,
                                            happinessGoal,
                                            happinessValue));
    }
    return residents;
}

void ResidentsFactory_Flat::initHowManyQuestion (int maxCount)
{
    std::string maxCountStr = std::to_string(maxCount);
    std::string origPrompt  = "How many \"Flat Residents\" should there be?"
                              " Must be less than " + maxCountStr + ".";
    std::string typePrompt  = "Nope, that's not a whole number. Should be a number"
                              " without any decimals.";
    std::string rangePrompt = "That number is too small or too large. Should be"
                              " between 1 and " + maxCountStr + " inclusive.";
    _how_many_question = Question_Int{ 0,
                                       1,
                                       maxCount,
                                       origPrompt,
                                       typePrompt,
                                       rangePrompt};
}

void ResidentsFactory_Flat::initHappinessGoalQuestion ()
{
    std::string origPrompt  = "What should the happiness goal of these residents?"
                              " Must be a number between 0 and 1 inclusively.";
    std::string typePrompt  = "Nope, that's not a number, i.e. 0.2 or 1.0";
    std::string rangePrompt = "That number is too small or too large. Should be"
                              " between 0.0 and 1.0 inclusive.";
    _happiness_goal_question = Question_Double{1,
                                               0.0,
                                               1.0,
                                               origPrompt,
                                               typePrompt,
                                               rangePrompt};
}

void ResidentsFactory_Flat::initAllowedMovementQuestion ()
{
    std::string origPrompt  = "When these residents move, how far away can"
                              " their new house be from their original house?"
                              " Must be a positive number.";
    std::string typePrompt  = "Nope, that's not a number, i.e. 0.2 or 13.0";
    std::string rangePrompt = "That number is not positive. It must be"
                              " 0.0 or greater.";
    _allowed_movement_question = Question_Double{2,
                                                 0.0,
                                                 std::numeric_limits<double>::max(), //TODO test that includes numeric_limits max
                                                 origPrompt,
                                                 typePrompt,
                                                 rangePrompt};
}

void ResidentsFactory_Flat::initHappinessValueQuestion ()
{
    std::string origPrompt  = "\"Flat Residents\" always have the same happiness"
                              " value, regardless of the diversity of their"
                              " neighbors. What is the happiness value for this"
                              " group of residents? The number must be between"
                              " 0.0 and 1.0 inclusive.";
    std::string typePrompt  = "Nope, that's not a number, i.e. 0.2 or 1.0";
    std::string rangePrompt = "That number is too small or too large. Should be"
                              " between 0.0 and 1.0 inclusive.";
    _allowed_movement_question = Question_Double{3,
                                                 0.0,
                                                 1.0,
                                                 origPrompt,
                                                 typePrompt,
                                                 rangePrompt};
}

int ResidentsFactory_Flat::getHowMany (UI& ui)
{
    ui.getAnswer(_how_many_question);
    if (_how_many_question.hasValidAnswer())
    {
        return std::stoi(_how_many_question.getAnswer());
    }
    else
    {
        throw "Can not get information needed to"
        " determine number of residents from the user.";
    }
}

double ResidentsFactory_Flat::getHappinessGoal(UI& ui)
{
    ui.getAnswer(_happiness_goal_question);
    if (_happiness_goal_question.hasValidAnswer())
    {
        return std::stod(_happiness_goal_question.getAnswer());
    }
    else
    {
        throw "Can not get information needed to determine"
        " the happiness goal for these residents from the user.";
    }
}

double ResidentsFactory_Flat::getAllowedMovement(UI& ui)
{
    ui.getAnswer(_allowed_movement_question);
    if (_allowed_movement_question.hasValidAnswer())
    {
        return std::stod(_allowed_movement_question.getAnswer());
    }
    else
    {
        throw "Can not get information needed to determine"
        " the allowed movement for these residents from the user.";
    }
}

double ResidentsFactory_Flat::getHappinessValue(UI& ui)
{
    ui.getAnswer(_happiness_value_question);
    if (_happiness_value_question.hasValidAnswer())
    {
        return std::stod(_happiness_value_question.getAnswer());
    }
    else
    {
        throw "Can not get information needed to determine"
        " the happiness value for these residents from the user.";
    }
}
