#include "Base.hpp"
#include "Derived.hpp"

int main(void)
{
    Derived test;
    Base    *test2 = new Derived;

    test2->test();
 //   test.test();
    return 0;
}