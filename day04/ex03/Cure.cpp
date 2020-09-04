#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() :
AMateria("cure") {
}

Cure::Cure(Cure const &copy)
{
    *this = copy;
}

Cure    &Cure::operator=(Cure const &rhs)
{
    AMateria::operator=(rhs);
    return *this;
}

Cure::~Cure() {}

AMateria    *Cure::clone() const
{
    Cure    *nv;

    nv = new Cure;
    *nv = *this;
    return nv;
}

void        Cure::use(ICharacter &target)
{
    std::cout << "* heals ";
    AMateria::use(target);
    std::cout << "'s wounds *" << std::endl;
}
