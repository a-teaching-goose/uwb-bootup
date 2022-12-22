#include "gtest/gtest.h"
#include "ACT_1_cpp_basics/1.2_fibonacci_sequence/fib.h"
#include "../util.h"

//#define MANUAL_TEST

TEST(fib, test) {
    int expect[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,
                    89, 144, 233, 377, 610, 987, 1597, 2584,
                    4181, 6765, 10946, 17711, 28657, 46368, 75025,
                    121393, 196418, 317811};
    int size = 29;

    // below is a cooler way to get the size without hardcoding numbers in code
    // any kind of hardcoded value in code is almost always a bad idea
    // int size = sizeof(expect) / sizeof(expect[0]);

    for (int i = 0; i < size; i++) {
        int actual_efficient_space = fib_space_efficient(i);
        int actual_inefficient_space = fib_space_inefficient(i);

#ifdef MANUAL_TEST
        // manual test
        // print is NOT the way to write test.
        if (expect[i] != actual_efficient_space) {
            printf("case %d failed. expect=%d vs actual=%d\n", i, expect[i], actual_efficient_space);
            break;
        }
        if (expect[i] != actual_inefficient_space) {
            printf("case %d failed. expect=%d vs actual=%d\n", i, expect[i], actual_inefficient_space);
            break;
        }
#else
        // instead, use this
        std::string case_str = case_string(i);
        ASSERT_EQ(expect[i], actual_efficient_space) << case_str;
        ASSERT_EQ(expect[i], actual_inefficient_space) << case_str;
#endif
    }
}
