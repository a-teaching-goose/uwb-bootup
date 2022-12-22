#include "animal.h"

void Animal::speak(const std::string &words) {
    PRINT(name + " doesn't know how to speak");
}

Animal::Animal(const std::string &name, const std::string &gender, int age) : name(name), gender(gender), age(age) {}
