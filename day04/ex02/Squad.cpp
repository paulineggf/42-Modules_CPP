#include "Squad.hpp"

Squad::Squad() :
_squad() {
}

Squad::~Squad() {
    ft::list<ISpaceMarine*>::iterator it;

    for (it = _squad.begin(); it != _squad.end(); it++)
        delete *it;
    _squad.clear();
}

Squad::Squad(Squad const &copy)
{
    ft::list<ISpaceMarine*>::iterator it;

    for (it = copy._squad.begin(); it != copy._squad.end(); it++)
        push((*it)->clone());
}

Squad   &Squad::operator=(Squad const &rhs)
{
    ft::list<ISpaceMarine*>::iterator it;

    for (it = rhs._squad.begin(); it != rhs._squad.end(); it++)
        push((*it)->clone());
    return (*this);
}

int     Squad::getCount() const
{
    return _squad.size();
}

ISpaceMarine    *Squad::getUnit(int i) const
{
    ft::list<ISpaceMarine*>::iterator it;

    it = _squad.begin();
    for (int j = 0; j != i; j++)
        it++;
    return *it;
}

int             Squad::push(ISpaceMarine *ism)
{
    ft::list<ISpaceMarine*>::iterator it;

    if (ism)
    {
	    for (it = _squad.begin(); it != _squad.end(); it++)
        {
            if (*it == ism)
                return (1);
        }
        _squad.push_back(ism);
        return (0);
    }
    return (1);
}
