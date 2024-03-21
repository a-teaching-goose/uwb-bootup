#include "pet.h"

void Pet::speak(const std::string &words) {
    PRINT(name + " doesn't know how to speak");
}

Pet::Pet(const std::string &name, const std::string &gender, int age) : name(name), gender(gender), age(age) {}
