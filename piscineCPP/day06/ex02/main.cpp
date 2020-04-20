#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

#include <exception>
#include <iostream>

void    identify_from_pointer(Base *p)
{
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);

    if (a != nullptr)
        std::cout << "A" << std::endl;
    if (b != nullptr)
        std::cout << "B" << std::endl;
    if (c != nullptr)
        std::cout << "C" << std::endl;
}

void    identify_from_reference(Base &p)
{
    A *a = dynamic_cast<A*>(&p);
    B *b = dynamic_cast<B*>(&p);
    C *c = dynamic_cast<C*>(&p);

    if (a != nullptr)
        std::cout << "A" << std::endl;
    if (b != nullptr)
        std::cout << "B" << std::endl;
    if (c != nullptr)
        std::cout << "C" << std::endl;
}

int     main(void)
{
    Base *p;
    p = new B;

    identify_from_pointer(p);
    identify_from_reference(*p);
    return 0;
}