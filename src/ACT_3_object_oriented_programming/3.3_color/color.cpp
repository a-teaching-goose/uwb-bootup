#include "color.h"

Color::Color(int color) : color(color) {}

bool Color::operator==(const Color &rhs) const {
    return color == rhs.color;
}
