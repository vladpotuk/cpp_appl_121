#include "Hamster.h"
#include <iostream>

namespace PetNamespace {
    Hamster::Hamster(const std::string& hamsterName) : Pet(hamsterName) {}

    void Hamster::Sound() const {
        std::cout << name << " says Squeak!" << std::endl;
    }

    void Hamster::Type() const {
        std::cout << "Type: Hamster" << std::endl;
    }
}
