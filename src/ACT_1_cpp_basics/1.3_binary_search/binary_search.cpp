#include "binary_search.h"

int binary_search(const int *data, int length, int target) {
    if (data == nullptr || length <= 0) {
        return -1;
    }

    int start = 0, end = length - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (data[mid] == target) {
            return mid;
        }
        if (target > data[mid]) {
            // target might be on the right side of the mid, move the search range to the right
            start = mid + 1;
            continue;
        }
        // target might be on the left side, move left
        end = mid - 1;
    }
    return -1;
}
