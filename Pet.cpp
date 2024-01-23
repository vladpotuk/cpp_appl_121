#include "Pet.h"
#include <iostream>

namespace PetNamespace {
    Pet::Pet(const std::string& petName) : name(petName) {}

    void Pet::Show() const {
        std::cout << "Name: " << name << std::endl;
    }
}
