#include "PowerFist.hpp"

PowerFist::PowerFist() :
AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(std::string const name, int apcost, int damage) :
AWeapon(name, apcost, damage) {}

PowerFist::PowerFist(PowerFist const &copy) 
{
	*this = copy;
}

PowerFist	&PowerFist::operator=(PowerFist const &rhs)
{
	AWeapon::operator=(rhs);
	return *this;
}

PowerFist::~PowerFist() {}

void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM!*" << std::endl;
}
