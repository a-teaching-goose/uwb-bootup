#include <iostream>
#include "animal.h"

class Cat : public Animal {

public:

    Cat(const std::string &name, const std::string &gender, int age);

    void speak(const std::string &words);

    void purr();

    virtual ~Cat(){};
};
