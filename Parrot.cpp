#include "Parrot.h"
#include <iostream>

namespace PetNamespace {
    Parrot::Parrot(const std::string& parrotName) : Pet(parrotName) {}

    void Parrot::Sound() const {
        std::cout << name << " says Squawk!" << std::endl;
    }

    void Parrot::Type() const {
        std::cout << "Type: Parrot" << std::endl;
    }
}
