#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class   ICharacter;

class   AMateria
{
    protected:
    std::string const   _type;
    unsigned int        _xp;

    public:
    AMateria();
    AMateria(std::string const &type);
    AMateria(AMateria const &);
    virtual AMateria   &operator=(AMateria const &);
    virtual            ~AMateria();

    std::string const   &getType() const;
    unsigned int        getXP() const;

    virtual AMateria    *clone() const = 0;
    virtual void        use(ICharacter &target);
};

#endif
