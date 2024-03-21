#include <iostream>
#include "pet.h"

class Cat : public Pet {

public:

    Cat(const std::string &name, const std::string &gender, int age);

    void speak(const std::string &words);

    void purr();

    virtual ~Cat(){};
};
