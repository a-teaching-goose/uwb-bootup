#include "gtest/gtest.h"
#include "manage_your_own_memory/memory_management.h"

TEST(manage_your_own_memory, test1) {
    auto *memory = new Memory(false);
    ASSERT_FALSE(memory->func());
    delete memory;
}
