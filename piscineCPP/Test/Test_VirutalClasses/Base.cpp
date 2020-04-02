#include "Base.hpp"

Base::Base() : _xp(0) {}


void    Base::test()
{
    _xp += 10;
    std::cout << "TEST" << std::endl;
    std::cout << _xp << std::endl;
}