#include "derived_class.h"


DerivedClass::DerivedClass(int capacity) : BaseClass(capacity / 2), capacity(capacity) {
    derived_class_data = new int[capacity];
    PRINT("DERIVED class CONstructor called.");
}

DerivedClass::~DerivedClass() {
    delete[]derived_class_data;
    PRINT("DERIVED class DEstructor called.");
}
