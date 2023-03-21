#include "gtest/gtest.h"
#include "ACT_1_cpp_basics/1.6_power_of_2/power_of_2.h"

std::string bool_to_txt(uint val, bool (*func)(uint));

TEST(is_power_of_2, play) {
    uint test_val = 128;

    // use the loop version
    std::cout << test_val << ", loop: " << bool_to_txt(test_val, &is_power_of_2_loop) << std::endl;

    // use the no-loop version
    std::cout << test_val << ", no loop: " << bool_to_txt(test_val, &is_power_of_2_no_loop) << std::endl;
}

std::string bool_to_txt(uint val, bool (*func)(uint)) {
    return func(val) ?
           "is power of 2" : "is not power of 2";
}
