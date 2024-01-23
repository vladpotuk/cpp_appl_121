#ifndef _PARROT_H_
#define _PARROT_H_

#include "Pet.h"

namespace PetNamespace {
    class Parrot : public Pet {
    public:
        Parrot(const std::string& parrotName);

        void Sound() const override;
        void Type() const override;
    };
}

#endif 

