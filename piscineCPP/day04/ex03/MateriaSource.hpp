#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class   MateriaSource : public IMateriaSource
{
    private:
    unsigned int    _nbMateria;
    AMateria        *materia[4];

    public:
    MateriaSource();
    virtual ~MateriaSource();
    virtual void        learnMateria(AMateria*);
    virtual AMateria*   createMateria(std::string const &type);
};

#endif