#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include "Hamster.h"
#include <iostream>  

int main() {
    PetNamespace::Dog myDog("Buddy");
    PetNamespace::Cat myCat("Whiskers");
    PetNamespace::Parrot myParrot("Polly");
    PetNamespace::Hamster myHamster("Nibbles");

    myDog.Show();
    myDog.Sound();
    myDog.Type();
    std::cout << std::endl;

    myCat.Show();
    myCat.Sound();
    myCat.Type();
    std::cout << std::endl;

    myParrot.Show();
    myParrot.Sound();
    myParrot.Type();
    std::cout << std::endl;

    myHamster.Show();
    myHamster.Sound();
    myHamster.Type();

    return 0;
}
