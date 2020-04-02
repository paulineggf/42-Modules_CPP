#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class   AMateria
{
    private:
    std::string const   _type;
    unsigned int        _xp;

    public:
    AMateria(std::string const &type);
    virtual            AMateria(AMateria const &) = 0;
    virtual AMateria   &operator=(AMateria const &);
    virtual            ~AMateria();

    std::string const   &getType() const;
    unsigned int        getXP() const;

    virtual AMateria    *clone() const = 0;
    virtual void        use(ICharacter &target);
};

#endif
