#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() :
AMateria("ice") {
}

Ice::Ice(Ice const &copy)
{
    *this = copy;
}

Ice    &Ice::operator=(Ice const &rhs)
{
    AMateria::operator=(rhs);
    return *this;
}

Ice::~Ice() {}

AMateria    *Ice::clone() const
{
    Ice    *nv;

    nv = new Ice;
    *nv = *this;
    return nv;
}

void        Ice::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at "
    << target.getName() << std::endl;
}
