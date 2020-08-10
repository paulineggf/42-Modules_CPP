#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : 
Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copy)
{
	*this = copy;
}

RadScorpion 	&RadScorpion::operator=(RadScorpion const &rhs)
{
	Enemy::operator=(rhs);
	return *this;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}
