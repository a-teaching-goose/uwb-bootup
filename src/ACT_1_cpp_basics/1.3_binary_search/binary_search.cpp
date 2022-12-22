#include "binary_search.h"

int binary_search(const int *data, int length, int target) {
    if (data == nullptr) {
        return -1;
    }
    int start = 0, end = length - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (data[mid] == target) {
            return mid;
        }

        if (data[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}
