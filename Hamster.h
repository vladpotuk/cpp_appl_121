#ifndef _HAMSTER_H_
#define _HAMSTER_H_

#include "Pet.h"

namespace PetNamespace {
    class Hamster : public Pet {
    public:
        Hamster(const std::string& hamsterName);

        void Sound() const override;
        void Type() const override;
    };
}

#endif 

