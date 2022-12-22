#include <iostream>
#include "stack_vs_heap_memory.h"

int *foo_ret_heap_ptr(int size) {
    int *array_on_heap = new int[size]{6, -1, 2}; // "borrow" memory from OS

    // array here is allocated from heap memory, and is NOT deallocated upon this function returning
    return array_on_heap;
}

int *foo_ret_stack_ptr(int size) {
    int array_on_stack[2] = {99, 100};

    // array here is allocated from stack memory, and is deallocated upon this function returning
    return array_on_stack;
}