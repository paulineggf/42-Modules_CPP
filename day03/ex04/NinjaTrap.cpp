#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap() :
ClapTrap (60, 60, 120, 120, 1, 60, 5, 0) {
	std::cout << "NinjaTrap constructor called with random name : " << _name << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) :
ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0) {
	std::cout << "NinjaTrap constructor called with : " << _name << std::endl;
}

NinjaTrap::NinjaTrap(std::string name, int hitPoints, int maxHitPoints, int energyPoints,
int maxEnergyPoints, int meleeAttackDamage, int rangedAttackDamage, int armorDamageReduction) :
ClapTrap(name, hitPoints, maxHitPoints, energyPoints, maxEnergyPoints, 1,
meleeAttackDamage, rangedAttackDamage, armorDamageReduction) {
	std::cout << "NinjaTrap constructor called with : " << _name << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap &copy)
{
	*this = copy;
	std::cout << "NinjaTrap copy constructor called with : " << _name << std::endl;
}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const &rhs)
{
	std::cout << "NinjaTrap operator overload called with : " << rhs._name << std::endl;  
	ClapTrap::operator=(rhs);
	return *this;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap destructor called with : " << _name << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "Ninja attaque FragTrap " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << "Ninja attaque ScavTrap " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "Ninja attaque ClapTrap " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "Ninja attaque NinjaTrap " << target.getName() << std::endl;
}
