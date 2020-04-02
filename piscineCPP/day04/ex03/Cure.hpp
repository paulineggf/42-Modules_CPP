#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class   Cure : public AMateria
{
    public:
    Cure();
    virtual Cure(Cure const &);
    virtual Cure    &operator=(Cure const &);
    virtual ~Cure();

    virtual AMateria    *clone() const;
    virtual void        use(ICharacter &target);
};

#endif