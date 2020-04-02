#ifndef Ice_HPP
# define Ice_HPP

# include "AMateria.hpp"

class   Ice : public AMateria
{
    public:
    Ice();
    virutal             Ice(Ice const &);
    virtual Ice         &operator=(Ice const &);
    virtual ~Ice();

    virtual AMateria    *clone() const;
    virtual void        use(ICharacter &target);
};

#endif
