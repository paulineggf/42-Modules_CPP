#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include <fstream>
# include <cstdlib>
# include <time.h>
# include "Zombie.hpp"

# define NbHorde 100

class	ZombieHorde
{
	public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce() const;

	private:
	int			_n;
	static std::string	_names;
	Zombie			*_horde;
	static int		numName(std::string name);			
	static std::string	randomChump();
};

#endif
