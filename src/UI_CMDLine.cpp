#include "UI_CMDLine.h"
#include <iostream>
#include <sstream>

#include "Question_Int.h"


std::string UI_CMDLine::getAnswer (Question& question)
{
    int tries = 0;
    std::string answer = "xx";
    while (tries < 4 && !question.hasValidAnswer())
    {
        std::cout << question.getPrompt();
        std::cin >> answer;
        question.tryAnswer(answer);
        tries++;
        std::cout << "hasValidAswer: " << question.hasValidAnswer() << std::endl;
    }
    return answer;
}

int UI_CMDLine::menu (std::vector<std::string> items) 
{
    int size = items.size();
    std::stringstream ss;
    ss << "Choose a city type by typing the corresponding number.";
    ss << std::endl;
    for (int ii=0; ii<size; ++ii)
    {
        ss << ii+1 << ")" << items[ii];
    }
    ss << std::endl;

    std::stringstream wrongTypess;
    ss << "Please enter a whole number like 2." << std::endl;
    wrongTypess << ss.str();

    std::stringstream inRangess;
    inRangess << "Please enter a number between 1 and ";
    inRangess << items.size() << std::endl;
    inRangess << ss.str();

    Question_Int chooseMenuItem{1,
                                1,
                                size,
                                ss.str(),
                                wrongTypess.str(),
                                inRangess.str()};
    
    int tries = 0;
    std::string answer = "xx";
    while (tries < 4 && !chooseMenuItem.hasValidAnswer())
    {
        std::cout << chooseMenuItem.getPrompt();
        std::cin >> answer;
        chooseMenuItem.tryAnswer(answer);
        tries++;
        std::cout << "hasValidAswer: " << chooseMenuItem.hasValidAnswer() << std::endl;
    }
    return stoi(answer);
}
