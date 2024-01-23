#ifndef _CAT_H_
#define _CAT_H_

#include "Pet.h"

namespace PetNamespace {
    class Cat : public Pet {
    public:
        Cat(const std::string& catName);

        void Sound() const override;
        void Type() const override;
    };
}

#endif 

