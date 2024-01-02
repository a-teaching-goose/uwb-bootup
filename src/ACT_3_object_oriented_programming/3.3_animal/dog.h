#include "animal.h"

#include <iostream>

class Dog : public Animal {
private:
    std::string owner;

public:

    Dog(const std::string &name, const std::string &gender, int age, const std::string &owner);

    void speak(const std::string &words);

    void play(const std::string &toy);

    void play();
};