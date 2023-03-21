#include <iostream>
#include "rubber_duck.h"

RubberDuck::RubberDuck(const std::string &name) : name(name) {}

void RubberDuck::talk(const std::string &words) {
    // words = "123"; // this won't compile, why?
    printf("[Duck %s]: Quack! Quack! %s\n", name.c_str(), words.c_str());
    std::cout << "[Duck " + name + "]: " + words + " I say!" << " Anything to eat?\n";
}

std::string &RubberDuck::get_name() {
    // notice this function return a reference
    return name;
}

void RubberDuck::set_name(const std::string &name) {
    RubberDuck::name = name;
}

std::string RubberDuck::walk(int &steps) {
    std::string msg;
    for (int i = 0; i < steps; i++) {
        msg += "walk(step " + std::to_string(i) + ")!\n";
    }

    // what does this change?
    steps += 100;

    return msg;
}

std::string RubberDuck::color() {
    return "yellow";
}

/*
 * operator overload
 */
bool RubberDuck::operator==(const RubberDuck &another_duck) const {
    return name == another_duck.name;
}

bool RubberDuck::operator!=(const RubberDuck &another_duck) const {
    return !(another_duck == *this);
}

RubberDuck::RubberDuck(const RubberDuck &another_duck) {
    this->name = another_duck.name;
}
