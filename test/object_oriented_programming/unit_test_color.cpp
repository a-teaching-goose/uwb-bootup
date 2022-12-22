#include "gtest/gtest.h"
#include "ACT_3_object_oriented_programming/3.3_color/color.h"

TEST(color, simple) {
    Color red(RED);
    Color blue(BLUE);
    Color green(GREEN);
    Color cyan(CYAN);
    Color yellow(YELLOW);

    ASSERT_EQ(yellow, red + green);
    ASSERT_EQ(cyan, blue + green);
}

TEST(color, full) {
    Color red(RED);
    Color blue(BLUE);
    Color green(GREEN);
    Color yellow(YELLOW);
    std::vector<Color> colors{
            {RED},
            {BLUE},
            {GREEN},
    };

    for (Color &color1: colors) {
        for (Color &color2: colors) {
            //TBD for all the cases
            if (color1 == red) {
                if (color2 == green) {
                    ASSERT_EQ(yellow, color1 + color2);
                    ASSERT_EQ(yellow, color2 + color1);
                }
            }
        }
    }
}
