#ifndef IINTER_HPP
# define IINTER_HPP

# include "Form.hpp"

class   IIntern
{
    public:
    ~IIntern() {}

    virtual Form        *makeForm(std::string name, std::string target) = 0;
};

#endif