#include <string>
#include <iomanip>
#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int	main(void)
{
	ZombieEvent	zombieFactory;
	Zombie		*newZombie;
	Zombie		*newZombie2;

	zombieFactory.setZombieType("Rampant");
	newZombie = zombieFactory.newZombie("Babar");
	newZombie->advert();
	newZombie2 = zombieFactory.randomChump();
	newZombie2->advert();
	delete newZombie;
	delete newZombie2;
	return (0);
}
