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

    // if this line below doesn't compile, add -std=c++1z to compiler option (in CLion Run/Edit Config/Compiler Option)
    // see https://stackoverflow.com/questions/48445191/compile-with-c17-mac
    int *arr3 = new int[5]{5, 6, 7, 8, 9};

    // TODO

}

void playground_reference() {
    int var = 5;

    //int &ref_var = 5; // what's wrong with this?

    int b = 1, c = 2;

    // TODO
}