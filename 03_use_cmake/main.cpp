#include <cstdio>
#include "cat.h"
#include <iostream>
#include <vector>

// use quiz to demo https://github.com/a-teaching-goose/CSS342A-2022-Spring/blob/main/exam/quiz/quiz-1.md
// use makefile to compile, run with make
// use valgrind to check for memory issues: valgrind ./main.x

int main(int argc, char **argv) {

	std::vector<Cat*> *cats = new std::vector<Cat*>;

    cats->push_back(new Cat("Coco", "Male", 3)); 

	std::cout << cats->size() << std::endl;
	
	(*cats)[0]->speak("sup"); 

	delete (*cats)[0];
	delete cats;
}
