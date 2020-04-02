#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	public:
	PowerFist();
	PowerFist(std::string name, int apcost, int damage);
	PowerFist(PowerFist const &powerFist);
	virtual ~PowerFist();
	PowerFist	&operator=(PowerFist const &rhs);

	virtual void	attack() const;
};

#endif
