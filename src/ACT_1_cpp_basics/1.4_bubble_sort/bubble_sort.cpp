#include "bubble_sort.h"

void bubble_sort(int *data, int length) {
    if (length == 0 || data == nullptr) {
        return;
    }

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length - 1; ++j) {
            if (data[j] > data[j + 1]) {
                swap(data + j, data + j + 1);
            }
        }
    }

}

void swap(int *v1, int *v2) {
    int tmp = *v1;
    *v1 = *v2;
    *v2 = tmp;
}
