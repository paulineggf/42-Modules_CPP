#ifndef LIB_HPP
# define LIB_HPP

#include <iostream>
#include <sstream>

struct              Data
{
    std::string     s1;
    int             n;
    std::string     s2;
};

void                *serialize(void);
Data                *deserialize(void *raw);

 #endif