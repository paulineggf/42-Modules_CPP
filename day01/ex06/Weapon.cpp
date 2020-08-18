#include <iostream>
#include <string.h>
#include "Weapon.hpp"

Weapon::Weapon(Weapon const &weapon)
{
	_type = weapon._type;
}

Weapon::Weapon(std::string type) : _type(type) {
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string	&Weapon::getType()
{
	return this->_type;
}
