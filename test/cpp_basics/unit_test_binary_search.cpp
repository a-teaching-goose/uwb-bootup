#include <array>
#include "ACT_1_cpp_basics/1.3_binary_search/binary_search.h"
#include "gtest/gtest.h"
#include "../util.h"

TEST(binary_search, null_array) {
    std::vector<int> lengths = {0, 1, -2};
    for (int length: lengths) {
        int actual = binary_search(nullptr, length, 3);
        ASSERT_EQ(actual, -1) << case_string(length);
    }
}

TEST(binary_search, basic) {
    const int SIZE = 3;
    int *array = new int[SIZE]{1, 2, 3};
    std::vector<int *> input_array = {
            array,
            array,  // repeat here to reuse the same array
            array,
            array,
            array,
    };

    std::vector<int> search_target = {
            1,
            2,
            3,
            4,
            0,
    };

    std::vector<int> expected_result = {
            0,
            1,
            2,
            -1,
            -1,
    };

    ASSERT_EQ(input_array.size(), search_target.size());
    ASSERT_EQ(input_array.size(), expected_result.size());

    for (int i = 0; i < input_array.size(); i++) {
        int actual = binary_search(input_array[i], SIZE, search_target[i]);
        int expect = expected_result[i];
        ASSERT_EQ(expect, actual) << case_string(i);
    }

    // debug this
    delete[] array;
}

/*
 * OK TO MAKE CHANGES TO THIS FUNCTION
 * This test needs additional work to pass some validations
 * Do not change any given lines. OK to add new line(s)
 */
TEST(binary_search, in_between) {
    const int SIZE = 2;
    int *array = new int[SIZE]{2, 4};
    std::vector<int *> input_array = {
            array,
            array,
            array,
            array,
            array,
    };

    std::vector<int> search_target = {
            0,
            2,
            3,
            4,
            8,
    };

    std::vector<int> expected_result = {
            -1,
            0,
            -1,
            1,
            -1,
    };

    ASSERT_EQ(input_array.size(), search_target.size());
    ASSERT_EQ(input_array.size(), expected_result.size());

    for (int i = 0; i < input_array.size(); i++) {
        int actual = binary_search(input_array[i], SIZE, search_target[i]);
        int expect = expected_result[i];
        ASSERT_EQ(expect, actual) << case_string(i);
    }

    delete[] array;
}

TEST(binary_search, has_duplicates) {
    std::vector<int *> input_array = {
            new int[4]{1, 3, 3, 4},
            new int[4]{1, 2, 3, 5},
            new int[1]{3},
            new int[2]{3, 3},
            new int[3]{3, 4, 3},
    };

    std::vector<int> search_target = {
            3,
            3,
            3,
            3,
            3,
    };

    std::vector<int> input_arraySize = {
            4,
            4,
            1,
            2,
            3,
    };

    ASSERT_EQ(input_array.size(), search_target.size());

    for (int i = 0; i < input_array.size(); i++) {
        int index = binary_search(input_array[i], input_arraySize[i], search_target[i]);
        ASSERT_TRUE(index >= 0 && index < input_arraySize[i]) << case_string(i);
        ASSERT_EQ(input_array[i][index], search_target[i]) << case_string(i);
        delete[] input_array[i];
    }
}