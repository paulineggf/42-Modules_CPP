#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include "List.hpp"

class   Squad : public ISquad
{
    private:
    int             _nbUnit;
    t_List          *_lst;

    int             push_II(ISpaceMarine*);

    public:
    Squad();
    ~Squad();
    virtual int             getCount() const;
    virtual ISpaceMarine    *getUnit(int) const;
    virtual int             push(ISpaceMarine*);
};

#endif