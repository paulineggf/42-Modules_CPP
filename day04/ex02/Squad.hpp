#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include "list/list.hpp"

class   Squad : public ISquad
{
    private:
    ft::list<ISpaceMarine*>    _squad;

    public:
    Squad();
    Squad(Squad const &copy);
    ~Squad();
    Squad   &operator=(Squad const &rhs);

    virtual int             getCount() const;
    virtual ISpaceMarine    *getUnit(int) const;
    virtual int             push(ISpaceMarine*);
};

#endif