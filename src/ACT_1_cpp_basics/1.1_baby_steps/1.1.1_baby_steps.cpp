#include <cstdio>
#include <iostream>

#include "../1.3_binary_search/binary_search.h"

/*
 * define these above their usage for compilation
 */
void baby_steps();

void increment_by_float(float *data, int size, float increment);

void increment_by_int(int *data, int size, int increment);

template<typename T>
void increment_by(T *data, T size, T increment);

/*
 * entry point of the program
 */
int main(int argc, char **argv) {
    printf("hello 2024 BootUp\n");

    // basics
    baby_steps();
}

void change_string_with_pointer(std::string *str) {
    *str = "it's sunny today";
}

void change_string_with_reference(std::string &str) {
    str = "it's raining today";
}

void baby_steps() {
    /*
     * variables
     */
    int var1 = 5;
    float var2 = 1.5;
    std::string str = "it's cloudy today";
    printf("%s\n", str.c_str());

    /*
     * printing
     */
    std::cout << "var1 is " << var1 << "\n";
    printf("var 2 is %f\n", var2);

    /*
     * pointer
     */
    std::cout << "address of var1 is " << &var1 << "\n";

    // ptr to nothing
    int *ptr;
    ptr = nullptr;  // ptr = 0;

    ptr = &var1;    // these two lines can also be written as int *ptr=&var1

    std::cout << "pointer ptr has value " << ptr << "\n";
    std::cout << "pointer ptr is pointing to value " << *ptr << "\n";

    change_string_with_pointer(&str);
    std::cout << str << std::endl;

    /*
     * reference
     */
    int a = 99;
    int &ref_a = a;
    ref_a++;
    std::cout << ref_a << std::endl;

    int b = 201;
    ref_a = b;
    ref_a++;
    std::cout << ref_a << std::endl;

    change_string_with_reference(str);
    std::cout << str << std::endl;

    /*
     * size of variable
     */
    std::cout << "size of var1 is " << sizeof(var1) << "\n";
    std::cout << "size of ptr is " << sizeof(ptr) << "\n";

    /*
     * array
     */
    int arr1[5] = {1, 2, 3, 4, 5};
    float arr2[5] = {0.1, 0.2, 0.3, 0.4, 0.5};

    // allocate (loan) array "dynamically"
    int *arr3 = new int[3]; // "new" --> "borrow" memory from OS
    for (int i = 0; i < 3; ++i) {
        arr3[i] = i * 2;
    }
    for (int i = 0; i < 3; i++) {
        printf("arr3[%d] = %d\n", i, arr3[i]);
    }
    delete[] arr3;  // you didn't need this in Java

    /*
     * std container, vector
     */
    // if this line below doesn't compile, add -std=c++1z to compiler option (in CLion Run/Edit Config/Compiler Option)
    // see https://stackoverflow.com/questions/48445191/compile-with-c17-mac
    std::vector<int> store = {1, 2, 3};
    for (int i = 0; i < store.size(); ++i) {
        printf("store[%d] = %d\n", i, store[i]);
    }

    /*
     * loop
     */
    for (int i = 0; i < 5; i++) {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }

    /*
     * condition
     */
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {   // % mod operator
            printf("arr1[%d] = %d\n", i, arr1[i]);
        }
    }

    /*
     * function
     */
    increment_by_float(arr2, 5, 0.5);
    for (int i = 0; i < 5; i++) {
        printf("arr2[%d] = %f\n", i, arr2[i]);
    }
    std::cout << "\n";

    increment_by_int(arr1, 5, 3);
    for (int i = 0; i < 5; i++) {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }
    std::cout << "\n";

    /*
     * template
     */
    increment_by<float>(arr2, 5, 0.5);
    for (int i = 0; i < 5; i++) {
        printf("arr2[%d] = %f\n", i, arr2[i]);
    }

    increment_by<int>(arr1, 5, -10);
    for (int i = 0; i < 5; i++) {
        printf("arr2[%d] = %d\n", i, arr1[i]);
    }
}

void increment_by_float(float *data, int size, float increment) {
    for (int i = 0; i < size; i++) {
        data[i] += increment;
    }
}

void increment_by_int(int *data, int size, int increment) {
    for (int i = 0; i < size; i++) {
        data[i] += increment;
    }
}

template<typename T>
void increment_by(T *data, T size, T increment) {
    for (int i = 0; i < size; i++) {
        data[i] += increment;
    }
}