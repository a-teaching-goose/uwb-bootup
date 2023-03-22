#include <array>
#include "gtest/gtest.h"
#include "ACT_1_cpp_basics/1.4_bubble_sort/bubble_sort.h"

template<typename T>
void ASSERT_ARRAY_EQUAL(T *ArrayA, T *ArrayB, T size) {
    for (int i = 0; i < size; i++) {
        ASSERT_EQ(ArrayA[i], ArrayB[i]);
    }
}

TEST(bubble_sort, null_array) {
    // what's a vector?
    std::vector<int> lengths = {0, 1, -2};
    for (int length: lengths) {
        ASSERT_NO_FATAL_FAILURE(bubble_sort(nullptr, length));
    }
}

TEST(bubble_sort, basic) {
    std::vector<int *> input_array = {
            new int[1]{1},
            new int[2]{1, 2},
            new int[2]{2, 1},
            new int[2]{2, 2},
            new int[3]{1, 2, 3},
            new int[3]{3, 2, 1},
            new int[3]{1, 3, 2},
            new int[3]{2, 1, 3},
            new int[5]{9, 1, 6, 2, -1},
    };

    std::vector<int> input_array_sizes = {1, 2, 2, 2, 3, 3, 3, 3, 5};

    std::vector<int *> expects = {
            new int[1]{1},
            new int[2]{1, 2},
            new int[2]{1, 2},
            new int[2]{2, 2},
            new int[3]{1, 2, 3},
            new int[3]{1, 2, 3},
            new int[3]{1, 2, 3},
            new int[3]{1, 2, 3},
            new int[5]{-1, 1, 2, 6, 9},
    };

    /*
     * verify input sizes
     */
    ASSERT_EQ(input_array.size(), expects.size());
    ASSERT_EQ(input_array.size(), input_array_sizes.size());

    /*
     * test bubble sort
     */
    for (int i = 0; i < input_array.size(); i++) {

        bubble_sort(input_array[i], input_array_sizes[i]);

        ASSERT_ARRAY_EQUAL<int>(expects[i], input_array[i], input_array_sizes[i]);

        delete[] input_array[i];
        delete[] expects[i];
    }
}

TEST(bubble_sort, invalid_length) {
    const int SIZE = 3;
    int *test_case = new int[SIZE]{3, 2, 1};
    int *expected = new int[SIZE];
    memcpy(expected, test_case, SIZE * sizeof(int));

    std::vector<int> lengths = {0, -1, -2};

    for (int length: lengths) {
        bubble_sort(test_case, length);
        ASSERT_ARRAY_EQUAL(expected, test_case, SIZE);
    }
    delete[] test_case;
    delete[] expected;
}