#include <fstream>
#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie;
	
	zombie = new Zombie(name, this->_type);
	return zombie;
}

void		ZombieEvent::announce(std::string name)
{
	std::cout << "Hello la compagnie ! Moi c'est " \
	<< name << "!!!" << std::endl;
}

std::string	ZombieEvent::randomChumpFunction()
{
	int		i;
	int		r;
	std::string	name;
	std::ifstream	file("names.txt");
	
	i = 0;
	srand(time(0));
	r = (rand() % 500) + 1;
	while (i++ < r)
		file >> name;
	file.close();
	announce(name);
	return name;
}

Zombie*	ZombieEvent::randomChump()
{
	Zombie *zombie;

	zombie = new Zombie(randomChumpFunction(), this->_type);
	return zombie;
}
