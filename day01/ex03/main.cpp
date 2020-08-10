#include <string>
#include <iomanip>
#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main(void)
{
	ZombieHorde	Horde(NbHorde);
	
	Horde.announce();
	return (0);
}
