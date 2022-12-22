#include <iostream>

int sum(const int *array, uint length);

int sum(uint length, const int array[]);

int main(int argc, char **argv) {

    int my_array[5] = {1, 2, 3, 4, 5};

    std::cout << sum(my_array, 5) << std::endl;

    std::cout << sum(5, my_array) << std::endl;
}

int sum(uint length, const int array[]) {
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += array[i];
    }
    return sum;
}

int sum(const int *array, uint length) {
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += array[i];
    }
    return sum;
}
