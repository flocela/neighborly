#include "catch.hpp"
#include "../src/happinessfuncconst.h"

TEST_CASE("HappinessFuncConst always returns same happiness", "[happinessfuncconst]")
{
    HappinessFuncConst funcZero{0};
    HappinessFuncConst funcQuarter{0.25};
    HappinessFuncConst funcOne{1};

    REQUIRE( funcZero.getHappiness(4, 2, 2)    == 0);
    REQUIRE( funcQuarter.getHappiness(4, 2, 2) == 0.25);
    REQUIRE( funcOne.getHappiness(4, 2, 2)     == 1);
}

TEST_CASE("HappinessFuncRising has a positive slope", "[happinessfuncrising]")
{
    HappinessFuncConst funcZero{0};
    HappinessFuncConst funcQuarter{0.25};
    HappinessFuncConst funcOne{1};

    REQUIRE( funcZero.getHappiness(4, 2, 2)    == 0);
    REQUIRE( funcQuarter.getHappiness(4, 2, 2) == 0.25);
    REQUIRE( funcOne.getHappiness(4, 2, 2)     == 1);
}
