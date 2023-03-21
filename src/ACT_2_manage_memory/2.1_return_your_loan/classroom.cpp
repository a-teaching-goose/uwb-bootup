#include <iostream>
#include "classroom.h"

Laptop *borrow_a_laptop() {
    auto *laptop_loaner = new Laptop("mac", 2022);
    return laptop_loaner;
}

int main(int argc, char **argv) {
    // request and borrow a laptop
    Laptop *my_borrowed_laptop = borrow_a_laptop();

    // use the laptop
    my_borrowed_laptop->start_up();

    // done with it, returned it yet?
    // the following line to return the memory to system
    delete my_borrowed_laptop;
}
