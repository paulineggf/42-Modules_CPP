#ifndef DERIVED_HPP
# define DERIVED_HPP

# include <iostream>
# include "Base.hpp"

class   Derived : public Base
{
    public:
    Derived(/* args */);
    ~Derived();

    void    test();
    virtual void    test2();
};

#endif