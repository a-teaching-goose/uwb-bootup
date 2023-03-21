#include <iostream>
#include <set>

bool is_power_of_2_no_loop(uint val);

bool is_power_of_2_loop(uint val);

void list_power_of_2(uint upper_limit,
                     std::set<uint> &power_of_2s,
                     std::set<uint> &none_power_of_2s);
