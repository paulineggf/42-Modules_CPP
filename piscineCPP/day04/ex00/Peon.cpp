#include "Peon.hpp"

Peon::Peon() :
Victim() {}

Peon::Peon(std::string name) :
Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon	&Peon::operator=(Peon const &rhs)
{
	Victim::operator=(rhs);
	return *this;
}

void	Peon::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed into a pink pony!" << std::endl;
}
