
#include "gtest/gtest.h"
#include "cpp_basics/baby_step.h"

TEST(baby_step, test1) {
    BabyStep *babyStep = new BabyStep(true);
    ASSERT_TRUE(babyStep->func());
    delete babyStep;
}
