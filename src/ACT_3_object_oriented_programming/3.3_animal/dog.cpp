#include "dog.h"

void Dog::speak(const std::string &words) {
    PRINT(owner + "'s dog " + name + " ruffing: " + words);
}


void Dog::play(const std::string &toy) {
    PRINT(name + " playing with " + toy);
}

void Dog::play() {
    PRINT(name + " looking for the cat...");
}

Dog::Dog(const std::string &name, const std::string &gender, int age, const std::string &owner) : Animal(name, gender,
                                                                                                         age) {
    this->owner = owner;
}
