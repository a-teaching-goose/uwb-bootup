#include "gtest/gtest.h"
#include "ACT_2_manage_memory/2.1_return_your_loan/laptop.h"
#include "ACT_2_manage_memory/2.1_return_your_loan/classroom.h"

TEST(cpp, steal_a_laptop) {
    // request and borrow a laptop
    Laptop *my_borrowed_laptop = borrow_a_laptop();

    // use the laptop
    my_borrowed_laptop->start_up();

    // done with it, returned it yet?
    // the following line to return the memory to system
    delete my_borrowed_laptop;
}
