#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : 
_name(name),
_type(type) 
{}

void	Zombie::advert() const
{
	std::cout << this->_type << " " << this->_name \
	<< " Braiiiiiiinnnnsssss ...." << std::endl;
}
