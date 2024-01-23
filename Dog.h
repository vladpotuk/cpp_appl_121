#ifndef _DOG_H_
#define _DOG_H_

#include "Pet.h"

namespace PetNamespace {
    class Dog : public Pet {
    public:
        Dog(const std::string& dogName);

        void Sound() const override;
        void Type() const override;
    };
}

#endif 
