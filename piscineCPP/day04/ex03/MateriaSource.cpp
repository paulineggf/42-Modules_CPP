#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :
_nbMateria(0) {}

MateriaSource::~MateriaSource() {
    unsigned int    i;

    i = 0;
    while (i < _nbMateria)
    {
        delete materia[i];
        i++;
    }
}

void        MateriaSource::learnMateria(AMateria *aMateria)
{
    if (_nbMateria < 4)
    {
        materia[_nbMateria] = aMateria;
        _nbMateria += 1;
    }
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    int          i;

    i = 0;
    while (i < 4)
    {
        if ((materia[i]->getType()).compare(type) != 0)
            i++;
        else
            break ;
    }
    if (i < 4)
        return materia[i]->clone();
    return 0;
}