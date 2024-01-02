#include "gtest/gtest.h"
#include "ACT_1_cpp_basics/1.6_power_of_2/power_of_2.h"
#include "../util.h"

#define TEST_SIZE 5000

TEST(is_power_of_2_no_loop, zero) {
    bool actual = is_power_of_2_no_loop(0);
    ASSERT_EQ(false, actual);
}

TEST(is_power_of_2, test) {
    // set means a group of values (here of type int) without duplicates
    std::set < uint > power_of_2s;

    /*
     * generate test data
     */
    for (uint i = 1; i <= TEST_SIZE; i *= 2) {
        power_of_2s.insert(i);
    }

    /*
     * test
     */
    for (uint i = 1; i <= TEST_SIZE; i++) {

        bool expect = power_of_2s.find(i) != power_of_2s.end();

        // check no loop solution
        bool actual = is_power_of_2_no_loop(i);
        ASSERT_EQ(expect, actual) << case_string(i);

        // check no loop solution
        actual = is_power_of_2_loop(i);
        ASSERT_EQ(expect, actual) << case_string(i);
    }
}

TEST(list_power_of_2_and_not, test) {
    std::set < uint > power_of_2s;
    std::set < uint > none_power_of_2s;

    list_power_of_2(TEST_SIZE, power_of_2s, none_power_of_2s);

    ASSERT_TRUE(!power_of_2s.empty());
    ASSERT_TRUE(!none_power_of_2s.empty());

    for (uint i = 1; i <= TEST_SIZE; i++) {
        if (is_power_of_2_no_loop(i)) {
            ASSERT_TRUE(power_of_2s.find(i) != power_of_2s.end());
            ASSERT_TRUE(none_power_of_2s.find(i) == none_power_of_2s.end());
            power_of_2s.erase(i);
        } else {
            ASSERT_TRUE(power_of_2s.find(i) == power_of_2s.end());
            ASSERT_TRUE(none_power_of_2s.find(i) != none_power_of_2s.end());
            none_power_of_2s.erase(i);
        }
    }

    ASSERT_TRUE(power_of_2s.empty());
    ASSERT_TRUE(none_power_of_2s.empty());
}
