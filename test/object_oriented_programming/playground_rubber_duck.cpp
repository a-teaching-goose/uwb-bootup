#include "gtest/gtest.h"
#include "ACT_3_object_oriented_programming/3.2_rubber_duck/rubber_duck.h"

TEST(rubberduck, class_instance_object) {
    std::string name = "Happy Kate Happy";
    RubberDuck duck(name);
    std::cout << "sizeof(duck) = " << sizeof(duck) << "\n";
    std::cout << "sizeof(RubberDuck*) = " << sizeof(&duck) << "\n";
}

TEST(rubberduck, class_constructor) {
    std::string name = "Larry";

    // calling constructor
    RubberDuck duck(name);
    std::cout << "duck has name  = " << duck.get_name() << "\n";

    // calling copy constructor
    // use breakpoint
    RubberDuck another_duck(duck);
    std::cout << "another duck has name  = " << another_duck.get_name() << "\n";

    // is duck and another duck the same object
    std::cout << "duck has address = " << &duck << "\n";
    std::cout << "another duck has address = " << &another_duck << "\n";

    // calling equality operator
    // use breakpoint
    // bet you can't do this in Java
    if (duck == another_duck) {
        std::cout << "same duck\n";
    } else {
        std::cout << "different duck\n";
    }
}

TEST(rubberduck, reference_as_parameter) {
    RubberDuck duck("Donald");
    std::string words = "Hungry!";
    duck.talk(words);
}

TEST(rubberduck, reference_how_many_steps) {
    RubberDuck duck("Tim");
    int steps = 10;
    std::string msg = duck.walk(steps);
    std::cout << "duck walk returns '" << msg << "'\n"; // what if walk returns a reference
    std::cout << "duck " + duck.get_name() + " walked " + std::to_string(steps) + " steps\n";
}

TEST(rubberduck, reference_bad_reference) {
    auto *duck = new RubberDuck("Jerry");
    std::string &duck_name = duck->get_name();
    std::cout << "Duck's name is " << duck_name << "\n";
    delete duck;

    // uncomment this for bad behavior
    //std::cout << "Duck's name is " << duck_name << " after delete\n";
}

