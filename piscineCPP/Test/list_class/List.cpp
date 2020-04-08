#include "List.hpp"
#include "AMateria.hpp"

List::List() :
_content(nullptr),
_next(nullptr) {}

List::~List() {}

List    *List::lstNew(void *_content)
{
    // List    *nv;

    this = new List;
    nv->_content = _content;
    nv->_next = 0;
    return (nv);
}

List    *List::last()
{
    while (this->_next != nullptr)
        *this = *_next;
    return this;    
}

void    List::addBack(List *nv)
{
   this->last()->_next = nv;
}

void    *List::getContent(int idx)
{
    int     i;

    i = 0;
    std::cout << 2 << std::endl;
    while (i < idx)
    {
        std::cout << 3 << std::endl;
        *this = *_next;
        i++;
    }
    std::cout << 4 << std::endl;
    std::cout << (*((AMateria*)(this->_content))).getType() << std::endl;
    std::cout << 4.1 << std::endl;
    return &(this->_content);
}

void    List::clear()
{
    List *tmp;

    tmp = nullptr;
    while (this->_next != nullptr)
    {
        tmp = this;
        delete (IList*)this->_content;
        delete this;
        *this = *(tmp->_next);
    }
}

void    List::delOne(int idx)
{
    int     i;
    List  *tmp;

    i = 0;
    tmp = nullptr;
    while (i < idx && this->_next != nullptr)
    {
        *this = *_next;
        i++;
    }
    while (this->_next != nullptr)
    {
        *tmp = *_next;
        *this = *tmp;
    }
}
