#include <iostream>

/*
   There once was a prof named Du,
   Whose code passed a test or two,
   But a sneaky little bug,
   Had evaded the debug,
   So he asked his class, "Can you catch it too?"

   The students all scratched their heads,
   As they gathered 'round the prof's spreadsheets,
   They wrote up some tests,
   And gave it their best,
   Until the bug was found, and laid to rest.
                           - by ChatGPT
    */
template<typename T>
int find_max(const T *array, int length) {
    if (array == nullptr || length == 0) {
        return T(0);
    }

    int max = 0;
    int maxVal = array[0];
    for (int i = 1; i < length; ++i) {
        if (array[i] > maxVal) {
            max = i;
        }
    }
    return max;
}