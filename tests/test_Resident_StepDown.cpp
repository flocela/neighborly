#include "catch.hpp"
#include "../src/Resident_StepDown.h"
#include "../src/Resident_Flat.h"
using Catch::Matchers::Contains;


TEST_CASE("Resident_StepDown Ctor throws exception if happinessGoal is greater than 1.0.")
{   
    REQUIRE_THROWS_WITH(
        Resident_StepDown(1, 
                          Resident::Color::green, 
                          Resident::ResidentType::stepdown,
                          5.0,
                          1.2,
                          1.0,
                          0.0,
                         0.5 ), Contains("must be between 0.0 and 1.0 inclusive") );

}

TEST_CASE("Resident_StepDown Ctor throws exception if happinessGoal is less than 0.0")
{   
    REQUIRE_THROWS_WITH(
        Resident_StepDown(1, 
                          Resident::Color::green, 
                          Resident::ResidentType::stepdown,
                          5.0,
                          -0.25,
                          1.0,
                          0.0,
                          0.5 ), Contains("must be between 0.0 and 1.0 inclusive") );
}

TEST_CASE("Resident_StepDown Ctor throws exception if happinessValue at zero is less tahn zero.")
{   
    REQUIRE_THROWS_WITH(
        Resident_StepDown(1, 
                          Resident::Color::green, 
                          Resident::ResidentType::stepdown,
                          5.0,
                          0.25,
                          -0.3,
                          0.0,
                          0.5 ), Contains("must be between 0.0 and 1.0 inclusive") );
}

TEST_CASE("Resident_StepDown Ctor throws exception if happinessValue at zero is greater than 1.0.")
{   
    REQUIRE_THROWS_WITH(
        Resident_StepDown(1, 
                          Resident::Color::green, 
                          Resident::ResidentType::stepdown,
                          5.0,
                          0.25,
                          1.2,
                          0.0,
                          0.5 ), Contains("must be between 0.0 and 1.0 inclusive") );
}

TEST_CASE("Resident_StepDown Ctor throws exception if happinessValue at one is less than zero.")
{   
    REQUIRE_THROWS_WITH(
        Resident_StepDown(1, 
                          Resident::Color::green, 
                          Resident::ResidentType::stepdown,
                          5.0,
                          0.25,
                          0.3,
                          -0.3,
                          0.5 ), Contains("must be between 0.0 and 1.0 inclusive") );
}

TEST_CASE("Resident_StepDown Ctor throws exception if happinessValue at one is greater than 1.0.")
{   
    REQUIRE_THROWS_WITH(
        Resident_StepDown(1, 
                          Resident::Color::green, 
                          Resident::ResidentType::stepdown,
                          5.0,
                          0.25,
                          .5,
                          1.2,
                          0.5 ), Contains("must be between 0.0 and 1.0 inclusive") );
}

TEST_CASE("Resident_StepDown Ctor throws exception if diverstiyWhereDropHappens is less than 0.")
{   
    REQUIRE_THROWS_WITH(
        Resident_StepDown(1, 
                          Resident::Color::green, 
                          Resident::ResidentType::stepdown,
                          5.0,
                          0.25,
                          1.0,
                          0.0,
                          -1.0 ), Contains("must be between 0.0 and 1.0 inclusive") );
}

TEST_CASE("Resident_StepDown Ctor throws exception if diverstiyWhereDropHappens is greater than 1.0.")
{   
    REQUIRE_THROWS_WITH(
        Resident_StepDown(1, 
                          Resident::Color::green, 
                          Resident::ResidentType::stepdown,
                          5.0,
                          0.25,
                          1.0,
                          0.0,
                          1.1), Contains("must be between 0.0 and 1.0 inclusive") );
}

TEST_CASE("Resident_StepDown Ctor throws exception if"
" happinessValueAtZeroDiversity is smaller than happinessValueAtOneDiversity.")
{   
    REQUIRE_THROWS_WITH(
        Resident_StepDown(1, 
                          Resident::Color::green, 
                          Resident::ResidentType::stepdown,
                          5.0,
                          0.25,
                          .25,
                          .75,
                          0.5), Contains("happinessAtZeroDiversity must be"
                          " larger than happinessAtOneDiversity.") );
}

TEST_CASE("Resident_StepDown Ctor throws exception if"
" happinessValueAtZeroDiversity is the same as happinessValueAtOneDiversity.")
{   
    REQUIRE_THROWS_WITH(
        Resident_StepDown(1, 
                          Resident::Color::green, 
                          Resident::ResidentType::stepdown,
                          5.0,
                          0.25,
                          .75,
                          .75,
                          0.5), Contains("happinessAtZeroDiversity must be"
                          " larger than happinessAtOneDiversity.") );
}




/*
TEST_CASE("getHappines() returns happinessValue")
{
    Resident_StepDown resident { 1,
                            Resident::Color::green,
                            Resident::ResidentType::flat,
                            1.0,
                            1.0,
                            0.25 };
    std::vector<Resident::Color> neighbors = {Resident::Color::blue, Resident::Color::blue};
}*/