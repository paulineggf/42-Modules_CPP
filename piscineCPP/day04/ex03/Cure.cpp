#include "Cure.hpp"

Cure::Cure() :
AMateria("Cure") {
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
    nv = Cure::operator=(this);
    return nv;
}

void        Cure::use(ICharacter &target)
{
    AMateria::use();
    std::cout << "* heals "
    << target.getName() << "'s wounds *" << std::endl;
}
