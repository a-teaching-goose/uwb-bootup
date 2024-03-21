#include "cat.h"

void Cat::speak(const std::string &words) {
    PRINT(name + " meowing: " + words);
}

void Cat::purr() {
    speak("purrr...PURRR...");
}

Cat::Cat(const std::string &name, const std::string &gender, int age) : Pet(name, gender, age) {}
