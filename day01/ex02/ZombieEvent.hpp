#ifndef	ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <iostream>
# include "Zombie.hpp"

class	ZombieEvent
{
	private:
	std::string	_type;
	std::string	randomChumpFunction();
	void		announce(std::string name);

	public:
	Zombie		*newZombie(std::string name);
	Zombie		*randomChump();
	void		setZombieType(std::string type);
};

#endif
