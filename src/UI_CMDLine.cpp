#include "UI_CMDLine.h"
#include <iostream>


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
    std::cout << "Choose:" << std::endl;
    
}
