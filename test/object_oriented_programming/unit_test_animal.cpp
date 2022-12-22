#include "gtest/gtest.h"
#include "ACT_3_object_oriented_programming/3.3_animal/cat.h"
#include "ACT_3_object_oriented_programming/3.3_animal/dog.h"

TEST(animal, class_cat) {
    Cat coco("Coco", "male", 2);
    std::string words = "zzzzz";
    coco.speak(words);
    coco.purr();
}

TEST(animal, class_dog) {
    Dog sam("Sam", "male", 3);
    std::string words = "woof!";
    sam.speak(words);
    sam.play("tree branches");
}

TEST(animal, class_animal_virtual) {
    Animal *coco_the_cat = new Cat("Sam", "male", 3);
    coco_the_cat->speak("I'm hungry");
    delete coco_the_cat;
}

#define SIZE 3

TEST(animal, let_all_animal_runs_tedious) {
    Cat coco("Coco", "male", 2);
    Cat annie("Annie", "female", 3);
    Dog sam("Sam", "male", 2);

    coco.speak("hello");
    annie.speak("hello");
    sam.speak("hello");
}

TEST(animal, let_all_animal_runs_using_virtual) {
    Animal *animals[SIZE] = {
            new Cat("Coco", "male", 2),
            new Cat("Annie", "female", 3),
            new Dog("Sam", "male", 2),
    };

    for (int i = 0; i < SIZE; i++) {
        Animal *animal = animals[i];
        animal->speak("hello");
    }

    for (Animal *animal: animals) {
        delete animal;
    }
}
