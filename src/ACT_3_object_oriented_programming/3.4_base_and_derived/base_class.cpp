#include "base_class.h"

BaseClass::BaseClass(int capacity) : capacity(capacity) {
    if (capacity < 1) {
        return;
    }

    // allocate memory for base_class_data
    base_class_data = new int[capacity];

    PRINT("BASE class CONstructor called.");
}

BaseClass::~BaseClass() {
    delete[]base_class_data;
    PRINT("BASE class DEstructor called.");
}
