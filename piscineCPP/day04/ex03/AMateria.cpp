#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() :
_type(nullptr),
_xp(0) {}

AMateria::AMateria(std::string const &type) :
_type(type),
_xp(0) {}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const &copy)
{
    *this = copy;
}

void    AMateria::use(ICharacter &target)
{
    (void)target;
    std::cout << target.getName() << std::endl;
    _xp += 10;
}

AMateria    &AMateria::operator=(AMateria const &rhs)
{
    _xp = rhs._xp;
    return *this;
}

std::string const   &AMateria::getType() const
{
    return _type;
}

unsigned int        AMateria::getXP() const
{
    return _xp;
}