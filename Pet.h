#ifndef _PET_H_
#define _PET_H_

#include <string>

namespace PetNamespace {
    class Pet {
    protected:
        std::string name;

    public:
        Pet(const std::string& petName);
        virtual ~Pet() {}

        virtual void Sound() const = 0;
        void Show() const;
        virtual void Type() const = 0;
    };
}

#endif // _PET_H_
