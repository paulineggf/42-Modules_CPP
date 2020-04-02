#include "AMateria.hpp"

AMateria::AMateria(std::string &type) :
_type(type),
_xp(0) {}

AMateria::~AMateria() {}

void    AMateria::use(ICharacter &target)
{
    _xp += 10;
}

AMateria    &AMateria::operator=(AMateria const &rhs)
{
    _xp = rhs._xp;
    return *this;
}