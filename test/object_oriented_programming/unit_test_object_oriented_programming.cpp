#include "gtest/gtest.h"
#include "object_oriented_programming/oop.h"

TEST(oop, test1) {
    RubberDuck duck(true);
    ASSERT_TRUE(duck.func());
}
