#include "Cat.h"
#include <iostream>

namespace PetNamespace {
    Cat::Cat(const std::string& catName) : Pet(catName) {}

    void Cat::Sound() const {
        std::cout << name << " says Meow!" << std::endl;
    }

    void Cat::Type() const {
        std::cout << "Type: Cat" << std::endl;
    }
}
