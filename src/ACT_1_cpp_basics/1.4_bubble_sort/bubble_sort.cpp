#include "bubble_sort.h"

void bubble_sort(int *data, int length) {
    if (data == nullptr || length < 2) {
        return;
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                swap(data, j, j + 1);
            }
        }
    }
}

void swap(int *data, int i, int j) {
    int tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
}