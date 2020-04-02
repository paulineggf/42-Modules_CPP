#include "Character.hpp"

Character::Character(std::string name) :
_name(name),
_nbMateria(0),
_lst(nullptr) {
}

Character::~Character() {}

std::string const   &Character::getName() const
{
    return _name;
}

void                Character::equip(AMateria *m)
{
    if (_nbMateria < 4 && m != NULL)
    {
        _lst->addBack(_lst->lstNew(m));
        _nbMateria += 1;
    }
}

void                Character::unequip(int idx);
{
    _lst->lstDelone()
}