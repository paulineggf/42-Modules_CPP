#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public:
	SuperMutant();
	SuperMutant(SuperMutant const &supermutant);
	virtual ~SuperMutant();
	SuperMutant 	&operator=(SuperMutant const &rhs);

	virtual void	takeDamage(int damage);
};

#endif
