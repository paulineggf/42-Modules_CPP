#include "Soldier.hpp"

Soldier::Soldier() :
Victim() {}

Soldier::Soldier(std::string name) :
Victim(name) {
	std::cout << "Yiiah." << std::endl;
}

Soldier::~Soldier() {
	std::cout << "The end is near..." << std::endl;
}

Soldier	&Soldier::operator=(Soldier const &rhs)
{
	Victim::operator=(rhs);
	return *this;
}

void	Soldier::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed into a wonderful rainbow!" << std::endl;
}
