#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    delete j; // should not create a leak
    delete i;

    const int numAnimals = 10;
    AAnimal* animals[numAnimals];

    for (int i = 0; i < numAnimals / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = numAnimals / 2; i < numAnimals; ++i) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    // Test deep copy
    Dog originalDog;
    Dog copiedDog = originalDog;
    Cat originalCat;
    Cat copiedCat = originalCat;

    return 0;
}
