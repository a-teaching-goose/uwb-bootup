#include <string>
#include <sstream>

std::string case_string(int i) {
    std::ostringstream ss;
    ss << "case " << i << " failed";
    return ss.str();
}
