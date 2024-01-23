#include "Dog.h"
#include <iostream>

namespace PetNamespace {
    Dog::Dog(const std::string& dogName) : Pet(dogName) {}

    void Dog::Sound() const {
        std::cout << name << " says Woof!" << std::endl;
    }

    void Dog::Type() const {
        std::cout << "Type: Dog" << std::endl;
    }
}
