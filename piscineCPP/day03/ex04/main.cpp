#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	srand(time(NULL));	

	SuperTrap	superTrap1;

	superTrap1.getAttributs();

	ClapTrap	clapTrap1;

	clapTrap1.getAttributs();

	NinjaTrap	ninjaTrap1;

	ninjaTrap1.getAttributs();

	FragTrap	fragTrap1("RV5");
	FragTrap	fragTrap2(fragTrap1);
	FragTrap	fragTrap3;

	fragTrap3.getAttributs();

	FragTrap	fragTrap4("MKDIR");
	FragTrap	fragTrap5("GENERATOR");
	FragTrap	fragTrap6; 

	ScavTrap	scavTrap1;
	
	scavTrap1.getAttributs();
	
	ScavTrap	scavTrap2("GO");
	ScavTrap	scavTrap3(scavTrap1);
	ScavTrap	scavTrap4;

	scavTrap4 = scavTrap2;
		
	fragTrap6 = fragTrap2;
	fragTrap5.rangedAttack(fragTrap1);
	fragTrap1.meleeAttack(fragTrap4);
	fragTrap1.takeDamage(20);
	fragTrap1.beRepaired(10);
	fragTrap1.beRepaired(20);
	fragTrap1.takeDamage(200);

	fragTrap2.vaulthunter_dot_exe(fragTrap1);
	fragTrap2.vaulthunter_dot_exe(fragTrap1);
	fragTrap2.vaulthunter_dot_exe(fragTrap1);
	fragTrap2.vaulthunter_dot_exe(fragTrap1);
	fragTrap2.vaulthunter_dot_exe(fragTrap1);
	fragTrap2.vaulthunter_dot_exe(fragTrap1);
	fragTrap2.vaulthunter_dot_exe(fragTrap1);
	fragTrap2.vaulthunter_dot_exe(fragTrap1);
	
	fragTrap3.vaulthunter_dot_exe(fragTrap2);
	fragTrap3.vaulthunter_dot_exe(fragTrap2);
	fragTrap3.vaulthunter_dot_exe(fragTrap2);
	fragTrap3.vaulthunter_dot_exe(fragTrap2);
	fragTrap3.vaulthunter_dot_exe(fragTrap2);
	fragTrap3.vaulthunter_dot_exe(fragTrap2);
	fragTrap3.vaulthunter_dot_exe(fragTrap2);
	

	scavTrap1.getName();
	scavTrap1.challengeNewcomer(fragTrap1);

	scavTrap1.rangedAttack(fragTrap2);
	scavTrap1.meleeAttack(fragTrap2);
	
	ninjaTrap1.ninjaShoebox(fragTrap2);
	ninjaTrap1.ninjaShoebox(scavTrap1);
	ninjaTrap1.ninjaShoebox(clapTrap1);
	
	std::cout << std::endl << std::endl;

	superTrap1.ninjaShoebox(fragTrap2);
	superTrap1.vaulthunter_dot_exe(fragTrap2);
	superTrap1.rangedAttack(fragTrap2);
	superTrap1.meleeAttack(fragTrap2);

	return (0);
}
