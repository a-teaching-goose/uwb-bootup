#include "gtest/gtest.h"
#include "ACT_3_object_oriented_programming/3.2_rubber_duck/rubber_duck.h"

#define SKIP_FOR_CI

#ifndef SKIP_FOR_CI

TEST(reference, reference_as_parameter) {
    RubberDuck duck("Donald");
    std::string words = "Hungry!";
    duck.talk(words);
}

TEST(reference, reference_how_many_steps) {
    RubberDuck duck("Tim");
    int steps = 10;
    std::string msg = duck.walk(steps);
    std::cout << "duck walk returns '" << msg << "'\n"; // what if walk returns a reference
    std::cout << "duck " + duck.get_name() + " walked " + std::to_string(steps) + " steps\n";
}

TEST(reference, reference_bad_reference) {
    auto *duck = new RubberDuck("Jerry");
    std::string &duck_name = duck->get_name();
    std::cout << "Duck's name is " << duck_name << "\n";
    delete duck;
    std::cout << "Duck's name is " << duck_name << " after delete\n";
}

#endif