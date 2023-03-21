#include "bubble_sort.h"

void bubble_sort(int *data, int length) {
    if (data == nullptr || length < 2) {
        return;
    }

    // how many swaps in total?
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                swap(data, j, j + 1);
            }
        }
    }
}

void swap(int *data, int i, int j) {
    // can you do the following code without using any additional variable?
    int tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
}