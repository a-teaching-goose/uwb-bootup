#include "gtest/gtest.h"
#include "ACT_2_manage_memory/2.2_stack_heap_memory/stack_vs_heap_memory.h"
#include "ACT_3_object_oriented_programming/3.2_rubber_duck/rubber_duck.h"

#define SKIP_FOR_CI

#ifndef SKIP_FOR_CI

TEST(cpp, lingering_ptr) {

    int size = 2;
    int *ptr = foo_ret_stack_ptr(size); // ptr is invalid on this line. why?
    for (int i = 0; i < size; i++) {
        std::cout << ptr[i] << "\n";
    }
}

TEST(cpp, borrow_but_not_return) {
    int size = 3;
    int *ptr = foo_ret_heap_ptr(size);
    for (int i = 0; i < size; i++) {
        std::cout << ptr[i] << "\n";
    }
    // uncomment the following line to return memory to OS once done to prevent memory leak
    // delete ptr;
}

#endif