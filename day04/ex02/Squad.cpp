#include "Squad.hpp"

Squad::Squad() :
_nbUnit(0),
_lst(NULL) {
}

Squad::~Squad()
{
    lstClear(_lst);
}

int     Squad::getCount() const
{
    return _nbUnit;
}

ISpaceMarine    *Squad::getUnit(int i) const
{
   return (ISpaceMarine*)lstGetContent(_lst, i);
}

int             Squad::push(ISpaceMarine *ism)
{
    t_List  *nv;

    if (!(nv = lstNew(ism)))
        return (0);
    lstAddBack(&_lst, nv);
    _nbUnit += 1;
    return (1);
}