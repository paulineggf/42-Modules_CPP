#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : 
AWeapon("Plasma Rifle", 5, 21) {
//	std::cout << "PlasmaRifle created" << std::endl;
}

PlasmaRifle::PlasmaRifle(std::string const name, int apcost, int damage) :
AWeapon(name, apcost, damage) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) 
{
	*this = copy;
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	AWeapon::operator=(rhs);
	return *this;
}

PlasmaRifle::~PlasmaRifle() {}

void		PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
