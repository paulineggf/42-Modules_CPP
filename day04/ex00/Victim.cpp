#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string name) :
_name(name) {
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "The victim " << _name << " died for no apparent reasons!" << std::endl;
}

std::ostream	&operator<<(std::ostream &flux, Victim const &rhs)
{
	rhs.introduce(flux);
	return (flux);
}

void		Victim::introduce(std::ostream &flux) const
{
	flux << "I'm " << _name << " and I like otters!" << std::endl;
}

Victim		&Victim::operator=(Victim const &rhs)
{
	_name = rhs._name;
	return *this;
}

void		Victim::getPolymorphed() const
{
	std::cout << _name
	<< " was just polymorphed in a cute little sheep!" << std::endl;
}
