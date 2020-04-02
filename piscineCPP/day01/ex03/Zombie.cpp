#include "Zombie.hpp"

Zombie::Zombie() : _name("Default"), _type("Default") {
}

Zombie::Zombie(std::string name, std::string type) : 
_name(name),
_type(type) 
{}

std::string	Zombie::getName() const
{
	return this->_name;
}

void		Zombie::advert() const
{
	std::cout << this->_type << " " << this->_name \
	<< " Braiiiiiiinnnnsssss ...." << std::endl;
}

void		Zombie::announce() const
{
	std::cout << "Je suis le Zombie " << this->_name << "!!!" << std::endl;
}

void		Zombie::ZombieName(std::string name, std::string type)
{
	_name = name;
	_type = type;
}
