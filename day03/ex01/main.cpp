#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{

	FragTrap	fragTrap1;
	
	fragTrap1.getAttributs();

	std::cout << std::endl << std::endl;
	
	ScavTrap	scavTrap1;
	scavTrap1.getAttributs();
	
	std::cout << std::endl << std::endl;
	scavTrap1.challengeNewcomer("fragTrap1");
	return (0);
}
