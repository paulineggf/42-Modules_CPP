#include "Ice.hpp"

Ice::Ice() :
AMateria("Ice") {
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
    nv = Ice::operator=(this);
    return this;
}

void        Ice::use(ICharacter &target)
{
    AMateria::use();
    std::cout << "* shoots an ice bolt at "
    << target.getName() << std::endl;
}
