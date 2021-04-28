#include "catch.hpp"
#include "../src/Resident_StepDown.h"
#include "../src/Resident_Flat.h"
using Catch::Matchers::Contains;


TEST_CASE("Resident_StepDown Ctor throws exception if happinessGoal is greater than 1.0.")
{   /*
    REQUIRE_THROWS_WITH(Resident_StepDown(1, 
                                          Resident::Color::green, 
                                          Resident::ResidentType::stepdown,
                                          5.0,
                                          1.2,
                                          1.0,
                                          0.0,
                                          0.5 ), Contains("must be between 0.0 and 1.0 inclusive") );*/

}
/*
TEST_CASE("Resident_StepDown Ctor throws exception if happinessGoal is less than 0.0" 
    " happinessGoal is less than 0,")
{   
    REQUIRE_THROWS_WITH(Resident_StepDown( 1, 
                                       Resident::Color::green, Resident::ResidentType::flat,
                                       1.0,
                                       -0.1,
                                       0.25 ), Contains("must be between 0.0 and 1.0 inclusive") );
}

TEST_CASE("Resident_StepDown Ctor throws exception if happinessValue is greater than 1.0 inclusive.")
{   
    REQUIRE_THROWS_WITH(Resident_StepDown( 1, 
                                       Resident::Color::green, Resident::ResidentType::flat,
                                       1.0,
                                       1.0,
                                       1.2 ), Contains("must be between 0.0 and 1.0 inclusive") );
}

TEST_CASE("Resident_StepDown Ctor throws exception if happinessValue is less than 0.0 inclusive.")
{   
    REQUIRE_THROWS_WITH(Resident_StepDown( 1, 
                                       Resident::Color::green, Resident::ResidentType::flat,
                                       1.0,
                                       1.0,
                                       -.25 ), Contains("must be between 0.0 and 1.0 inclusive") );
}


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