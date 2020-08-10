#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	public:
	PlasmaRifle();
	PlasmaRifle(std::string name, int apcost,  int damage);
	PlasmaRifle(PlasmaRifle const &copy);
	virtual ~PlasmaRifle();
	PlasmaRifle	&operator=(PlasmaRifle const &rhs);

	virtual void	attack() const;
};

#endif
