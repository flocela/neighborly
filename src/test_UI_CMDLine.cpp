#include "catch.hpp"
#include "../src/UI_CMDLine.h"
//#include "../src/Question_Int.h"
#include <iostream>
#include <sstream>

#include <math.h>
// g++ --std=c++17 -o runme ../src/Question_Int.h ../src/UI_CMDLine.cpp test_UI_CMDLine.cpp test_main.o

TEST_CASE("x-coordinate based on address")
{
    std::string origPrompt = "Choose a number between 1 and 10 inclusive";
    std::string notNumPrompt = "I need a whole number.";
    std::string notInRangePrompt = "I need a number between 1 and 10 inclusive.";
    /*Question_Int q{1,
                   1,
                   10,
                   origPrompt,
                   notNumPrompt,
                   notInRangePrompt};*/
    UI_CMDLine ui{};
/*
    std::istringstream iss{"3"};

    char c;
    while(std::cin >> c || !std::cin.eof())
    {
        if (std::cin.fail()) {
            std::cin.clear();
            std::string dummy;
            std::cin >> dummy;
            continue;
        }
        //std::string s{1, c};
        //q.tryAnswer(s);
    }
*/
    REQUIRE( true);
}
