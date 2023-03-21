#include <iostream>

int *foo_ret_stack_ptr(int size) {
    int array_on_stack[2] = {99, 100};

    // array here is allocated from stack memory, and is deallocated upon this function returning
    return array_on_stack;
}

void lingering_pointer() {
    int size = 2;
    int *ptr = foo_ret_stack_ptr(size); // ptr is invalid on this line. why?
    for (int i = 0; i < size; i++) {
        std::cout << ptr[i] << "\n";
    }
}

int *foo_ret_heap_ptr(int size) {
    int *array_on_heap = new int[size]; // "borrow" memory from OS
    for (int i = 0; i < size; ++i) {
        array_on_heap[i] = i + 1;
    }

    // array here is allocated from heap memory, and is NOT deallocated upon this function returning
    return array_on_heap;
}

void allocated_but_not_freed() {
    int size = 3;
    int *ptr = foo_ret_heap_ptr(size);
    for (int i = 0; i < size; i++) {
        std::cout << ptr[i] << "\n";
    }
    // uncomment the following line to return memory to OS once done to prevent memory leak
    // delete ptr;
}

int main(int argc, char **argv) {
    /*
     *  using a pointer that's invalid
     */
    lingering_pointer();

    /*
     * memory allocated but never freed
     */
    allocated_but_not_freed();
}