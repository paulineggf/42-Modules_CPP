#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string name, std::string title) :
_name(name),
_title(title) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title <<
	", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs)
{
	_name = rhs._name;
	_title = rhs._title;
	return *this;
}

std::ostream	&operator<<(std::ostream &flux, Sorcerer const &rhs)
{
	rhs.introduce(flux);
	return (flux);
}

void		Sorcerer::introduce(std::ostream &flux) const
{
	flux << "I am " << _name << ", " << _title << ", and i like ponies!" << std::endl; 
}

void		Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}
