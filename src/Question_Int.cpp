#include "Question_Int.h"
#include <stdexcept>
#include <iostream>

Question_Int::Question_Int (int id,
                            int min, 
                            int max,
                            std::string origPrompt,
                            std::string wrongTypePrompt, 
                            std::string inRangePrompt) :
    _ID{id}, _min{min}, _max{max}, _orig_prompt{origPrompt},
    _type_prompt{wrongTypePrompt}, _range_prompt{inRangePrompt}
{
    _next_prompt = &_orig_prompt;
    _valid_answer = false;
}

std::string Question_Int::getPrompt ()
{
    return *_next_prompt;
}

bool Question_Int::tryAnswer (std::string ans)
{   int intAnswer;
    try {
        intAnswer = std::stoi(ans);
    }
    catch(std::invalid_argument& e)
    {
        std::cout << "invalid argument" << std::endl;
        _next_prompt = &_type_prompt;
        return false;
    }
    catch(...)
    {
        std::cout << "catch..." << std::endl;
        _next_prompt = &_range_prompt;
        return false;
    }
    if (intAnswer < _min || intAnswer > _max)
    {
        std::cout << "out of range" << std::endl;
        _next_prompt = &_range_prompt;
        return false;
    }
    std::cout << "valid answer" << std::endl;
    _valid_answer = true;
    _answer = intAnswer;
}

bool Question_Int::hasValidAnswer ()
{
    return _valid_answer;
}

std::string Question_Int::getAnswer ()
{
    return std::to_string(_answer);
}