#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class   Ice : public AMateria
{
    public:
    Ice();
    Ice(Ice const &);
    virtual Ice         &operator=(Ice const &);
    virtual ~Ice();

    virtual AMateria    *clone() const;
    virtual void        use(ICharacter &target);
};

#endif
