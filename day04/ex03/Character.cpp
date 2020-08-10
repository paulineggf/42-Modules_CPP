#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name) :
_name(name),
_nbMateria(0) {
}

Character::~Character() {
}

std::string const   &Character::getName() const
{
    return _name;
}

void                Character::equip(AMateria *m)
{
    int     i;

    i = 0;
    if (_nbMateria < 4 && m != NULL)
    {
        while (materia[i] != nullptr)
            i++;
        materia[i] = m;
        _nbMateria += 1;
    }
}

void                Character::unequip(int idx)
{
    if (_nbMateria > 0 && idx >= 0 && idx < _nbMateria)
    {
        materia[idx] = nullptr;
        _nbMateria -= 1;
    }
}

void                Character::use(int idx, ICharacter &target)
{
    if (idx < _nbMateria && materia[idx])
        materia[idx]->use(target);
}