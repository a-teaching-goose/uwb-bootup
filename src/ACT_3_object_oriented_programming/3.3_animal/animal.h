#pragma once

#include <iostream>

#define PRINT(x) std::cout<< x << std::endl

class Animal {
protected:
    std::string name;
    std::string gender;
    int age;

public:
    Animal(const std::string &name, const std::string &gender, int age);

    // what would happen without "virtual" here.
    // Try it.
    virtual void speak(const std::string &words);
};