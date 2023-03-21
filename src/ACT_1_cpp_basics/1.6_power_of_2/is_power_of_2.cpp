#include "power_of_2.h"

// 2   -> 0000 0010
// 4   -> 0000 0100
// 8   -> 0000 1000
// 16  -> 0001 0000
// 32  -> 0010 0000
// 64  -> 0100 0000
// 128 -> 1000 0000

bool is_power_of_2_no_loop(uint val) {
    return val && (!(val & (val - 1)));
}

bool is_power_of_2_loop(uint val) {
    if (val == 0) {
        return false;
    }

    if (val == 1) {
        return true;
    }

    while (val != 1) {
        if (val % 2 != 0) {
            return false;
        }
        val /= 2;
    }

    return true;
}
