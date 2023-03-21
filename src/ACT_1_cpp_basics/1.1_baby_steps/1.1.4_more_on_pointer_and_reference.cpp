#include <cstdio>
#include <iostream>

void playground_memory_pointer();

void playground_reference();

int main(int argc, char **argv) {
    playground_memory_pointer();

    playground_reference();
}

void playground_memory_pointer() {
    int var = 10;
    printf("address of var is %x\n", &var);

    // if this line below doesn't compile, add -std=c++1z to compiler option
    // see https://stackoverflow.com/questions/48445191/compile-with-c17-mac
    int *arr3 = new int[5]{5, 6, 7, 8, 9};

    // array is nothing but a pointer to the starting address

    // pointer
    printf("*arr3 = %d\n", *arr3);
    printf("*(arr3+1) = %d\n", *(arr3 + 1));
    printf("*(arr3+2) = %d\n", *(arr3 + 2));
    printf("*(arr3+5) = %d\n", *(arr3 + 5));    // "legal"?
    printf("*(arr3+10) = %d\n", *(arr3 + 10));  // "legal"?

    *(arr3 + 2) = 99;
    printf("*(arr3+2) = %d\n", *(arr3 + 2));

    printf("address of arr3 is %x\n", arr3);
    printf("address of arr3[2] is %x\n", &arr3[2]);

    int *p = &arr3[2];
    *p = 789;
    printf("*(arr3+2) = %d, arr3[2] = %d\n", *(arr3 + 2), arr3[2]);

    // pointer for array
    for (int i = 0; i < 5; i++) {
        printf("arr3[%d] = %d\n", i, arr3[i]);
    }

    delete[]arr3;   // you didn't need to do this in Java, also notice the [] for array
    std::cout << "\n";
}

void playground_reference() {
    int var = 5;

    //int &ref_var = 5; // what's wrong with this?

    int b = 1, c = 2;
    int &a = b;
    int &d = a;
    printf("%d %d %d %d\n", a, b, c, d);
    a = c;
    a++;
    printf("%d %d %d %d\n", a, b, c, d);
    int y = 98;
    int &x = y;
    int z = x;
    printf("%x %x %x\n", &y, &x, &z);
}