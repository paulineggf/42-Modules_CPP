#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class   Base
{
    private:
    unsigned int    _xp;
    
    public:
    
    Base();

    void    test();
    virtual void    test2() = 0;
};

#endif
