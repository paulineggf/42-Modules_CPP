#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	srand(time(0));

	SuperTrap	superTrap1;
	superTrap1.getAttributs();

	std::cout << std::endl << std::endl;

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
	
	superTrap1.rangedAttack(fragTrap1.getName());
	superTrap1.meleeAttack(fragTrap1.getName());
	superTrap1.vaulthunter_dot_exe(fragTrap1.getName());
	superTrap1.ninjaShoebox(fragTrap1);
	superTrap1.ninjaShoebox(scavTrap1);
	superTrap1.ninjaShoebox(clapTrap1);
	superTrap1.ninjaShoebox(ninjaTrap1);

	std::cout << std::endl << std::endl;
	return (0);
}
