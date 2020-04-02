#include "Derived.hpp"

Derived::Derived() {}

Derived::~Derived() {}

void    Derived::test2()
{
    std::cout << "function test2" << std::endl;
}

void    Derived::test()
{
    // Base::test();
    std::cout << "Derived function" << std::endl;
}