#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	fragTrap1("RV5");
	FragTrap	fragTrap2(fragTrap1);
	FragTrap	fragTrap3;
	FragTrap	fragTrap4("MKDIR");
	FragTrap	fragTrap5("GENERATOR");
	FragTrap	fragTrap6;
		
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
	return (0);
}
