#include <set>
#include "power_of_2.h"

void list_power_of_2(uint upper_limit, std::set<uint> &power_of_2s, std::set<uint> &none_power_of_2s) {
    if (upper_limit == 0) {
        return;
    }

    for (uint i = 1; i <= upper_limit; i++) {
        if (is_power_of_2_loop(i)) {
            power_of_2s.insert(i);
        } else {
            none_power_of_2s.insert(i);
        }
    }
}
