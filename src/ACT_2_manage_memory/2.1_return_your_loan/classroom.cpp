#include <iostream>
#include "classroom.h"

Laptop *borrow_a_laptop() {
    Laptop *laptop_loaner = new Laptop("mac", 2022);
    return laptop_loaner;
}
