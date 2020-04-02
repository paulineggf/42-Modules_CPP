#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "List.hpp"

class   Character : public ICharacter
{
    private:
    std::string _name;
    int         _nbMateria;
    List        *_lst;

    public:
    Character(std::string name);
    virtual ~Character();
    virtual std::string const   &getName() const;
    virtual void                equip(AMateria *m);
    virtual void                unequip(int idx);
    virtual void                use(int idx, ICharacter &target);
};

#endif