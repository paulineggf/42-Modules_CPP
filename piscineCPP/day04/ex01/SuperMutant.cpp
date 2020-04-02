#include "SuperMutant.hpp"

SuperMutant::SuperMutant() :
Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy)
{
	*this = copy;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &rhs)
{
	Enemy::operator=(rhs);
	return *this;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

void		SuperMutant::takeDamage(int damage)
{
	_hp -= damage + 3;
}
