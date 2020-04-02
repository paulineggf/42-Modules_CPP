#include "ZombieHorde.hpp"

ZombieHorde::~ZombieHorde() {
	delete [] this->_horde;
}

std::string	ZombieHorde::randomChump()
{
	int		i;
	int		r;
	std::string	name;
	std::ifstream	file("names.txt");
	
	i = 0;
	r = (rand() % 500) + 1;
	while (i++ < r)
		file >> name;
	file.close();
	return name;
}

ZombieHorde::ZombieHorde(int n) : _n(n)
{
	int		numName;
	std::string	name;
	int		i;

	i = 0;
	this->_horde = new Zombie[n];
	srand(time(0));
	while (i < NbHorde)
	{
		name = ZombieHorde::randomChump();	
		this->_horde[i++].ZombieName(name, "Rampant");
	}
}

void		ZombieHorde::announce() const
{
	int	i;
	
	i = 0;
	while (i < this->_n)
		this->_horde[i++].announce();
}
