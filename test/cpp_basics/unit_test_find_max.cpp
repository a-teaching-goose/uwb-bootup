#include "gtest/gtest.h"
#include "ACT_1_cpp_basics/1.1_baby_steps/1.1.5_buggy_max.h"
#include "../util.h"

TEST(find_max, test_deceptive) {
    int array[] = {6, 5, 3, 4, 1};
    int expect = 0;
    int actual = find_max(array, 5);
    ASSERT_EQ(expect, actual);
}