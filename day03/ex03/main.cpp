#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	srand(time(0));

	ClapTrap	clapTrap1;
	clapTrap1.getAttributs();

	std::cout << std::endl << std::endl;

	NinjaTrap	ninjaTrap1;
	ninjaTrap1.getAttributs();

	std::cout << std::endl << std::endl;

	FragTrap	fragTrap1;
	fragTrap1.getAttributs();

	std::cout << std::endl << std::endl;

	ScavTrap	scavTrap1;
	scavTrap1.getAttributs();

	std::cout << std::endl << std::endl;

	ninjaTrap1.ninjaShoebox(fragTrap1);
	ninjaTrap1.ninjaShoebox(scavTrap1);
	ninjaTrap1.ninjaShoebox(clapTrap1);
	ninjaTrap1.ninjaShoebox(ninjaTrap1);

	std::cout << std::endl << std::endl;

	return (0);
}
