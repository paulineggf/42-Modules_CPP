#include "List.hpp"

List::List() :
_content(nullptr),
_next(nullptr) {}

List::~List() {}

List    *List::lstNew(void *_content)
{
    List    *nv;

    nv = new List;
    nv->_content = _content;
    nv->_next = 0;
    return (nv);
}

List    *List::last()
{
    while (this->_next)
        *this = *_next;
    return this;    
}

void    List::addBack(List *nv)
{
    if (this == nullptr)
        *this = *nv;
    else
        this->last()->_next = nv;
}

void    *List::getContent(int j)
{
    int     i;

    i = 0;
    while (i < j)
    {
        *this = *_next;
        i++;
    }
    return this->_content;
}

void    List::clear()
{
   List *tmp;

    while (this != nullptr)
    {
        tmp = this;
        delete (AMateria*)this->_content;
        delete this;
        *this = *(tmp->_next);
    }
}

void    List::delOne(int idx)
{
    List  *tmp;
    int     i;

    i = 0;
    while (i < idx)
    {
        *this = *_next;
        i++;
    }
    while (this != nullptr)
    {
        *tmp = *_next;
        *this = *tmp;
    }
}
