#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	fragTrap1("RV5");
	FragTrap	fragTrap3;
	FragTrap	fragTrap2(fragTrap3);
	FragTrap	fragTrap4("MKDIR");
	FragTrap	fragTrap5("GENERATOR");
	FragTrap	fragTrap6;
	fragTrap6 = fragTrap2;

	std::cout << std::endl << std::endl;
	fragTrap5.rangedAttack("RV5");
	fragTrap1.takeDamage(20);
	fragTrap1.beRepaired(10);
	fragTrap1.meleeAttack("RV5");
	fragTrap1.takeDamage(30);
	fragTrap1.beRepaired(60);

	std::cout << std::endl << std::endl;
	fragTrap2.vaulthunter_dot_exe(fragTrap1);
	fragTrap2.vaulthunter_dot_exe(fragTrap1);
	fragTrap2.vaulthunter_dot_exe(fragTrap1);
	fragTrap2.vaulthunter_dot_exe(fragTrap1);
	fragTrap2.vaulthunter_dot_exe(fragTrap1);

	std::cout << std::endl << std::endl;
	return (0);
}
