#include <iostream>

void print_even_number(const int array[], uint length);

void print_even_number_oneliner(const int array[], uint length);

int main(int argc, char **argv) {

    int my_array[5] = {33, 11, 3, 4, 5};

    print_even_number(my_array, 5);

    print_even_number_oneliner(my_array, 5);

}

void print_even_number(const int array[], uint length) {
    for (int i = 0; i < length; ++i) {
        if (array[i] % 2 != 0) {
            std::cout << "print_even_number: " << array[i] << " is an odd number" << std::endl;
        } else {
            std::cout << "print_even_number: " << array[i] << " is an even number" << std::endl;
        }
        // what are some problems you could find with this code?
        // can you do this without using if-else?
    }
}

void print_even_number_oneliner(const int array[], uint length) {
    std::string odd_msg = "odd";
    std::string even_msg = "even";
    for (int i = 0; i < length; ++i) {
        std::cout << "print_even_number_oneliner:" << array[i] << " is an " <<
                  ((array[i] % 2 == 0) ? odd_msg : even_msg) << " number" << std::endl;
    }
    // what are some problems you could find with this code?
}
