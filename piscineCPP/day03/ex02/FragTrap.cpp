#include "FragTrap.hpp"

FragTrap::FragTrap() :
ClapTrap (100, 100, 100, 100, 1, 30, 20, 5) {
	_f[0] = &FragTrap::attackRandom0;
	_f[1] = &FragTrap::attackRandom1;
	_f[2] = &FragTrap::attackRandom2;
	_f[3] = &FragTrap::attackRandom3;
	_f[4] = &FragTrap::attackRandom4;
	std::cout << "FragTrap constructor called with random name : " << _name << std::endl;
}

FragTrap::FragTrap(std::string name) :
ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5) {
	_f[0] = &FragTrap::attackRandom0;
	_f[1] = &FragTrap::attackRandom1;
	_f[2] = &FragTrap::attackRandom2;
	_f[3] = &FragTrap::attackRandom3;
	_f[4] = &FragTrap::attackRandom4;
	std::cout << "FragTrap constructor called with : " << _name << std::endl;
}

FragTrap::FragTrap(FragTrap &copy)
{
	*this = copy;
	std::cout << "Copy constructor called with : " << _name << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap operator overload called with : " << _name
	<< " and " << rhs._name << std::endl;  
	ClapTrap::operator=(rhs);
	_f[0] = rhs._f[0];
	_f[1] = rhs._f[1];
	_f[2] = rhs._f[2];
	_f[3] = rhs._f[3];
	_f[4] = rhs._f[4];
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called with : " << _name << std::endl;
}

void	FragTrap::rangedAttack(ClapTrap &target)
{
	std::cout << "FR4G-TP " << _name << " attaque " << target.getName()
	<< " à distance, causant " << _rangedAttackDamage
	<< " points de dégâts !" << std::endl;
	target.takeDamage(_rangedAttackDamage);
}

void	FragTrap::meleeAttack(ClapTrap &target)
{
	std::cout << "FR4G-TP " << _name << " attaque en mêlée " << target.getName()
	<< ", causant " << _meleeAttackDamage
	<< " points de dégâts !" << std::endl;
	target.takeDamage(_meleeAttackDamage);
}

void	FragTrap::vaulthunter_dot_exe(ClapTrap &target)
{
	int	r;
	
	if (_energyPoints - 25 < 0)
	{
		std::cout << _name 
		<< " n'a pas assez d'énergie pour attaquer !" << std::endl;
	}
	else
	{
		_energyPoints -= 25;
		r = (random() % 5);
		FragTrap::_f[r](*this, target);
	}
}

void	FragTrap::attackRandom0(FragTrap &attacker, ClapTrap &target)
{
	std::cout << "FR4G-TP " << attacker._name
	<< " attaque random 0 " << target.getName()
	<< ", causant " << 50
	<< " points de dégâts !" << std::endl;
	target.takeDamage(50);
}

void	FragTrap::attackRandom1(FragTrap &attacker, ClapTrap &target)
{
	std::cout << "FR4G-TP " << attacker._name
	<< " attaque random 1 " << target.getName()
	<< ", causant " << 10
	<< " points de dégâts !" << std::endl;
	target.takeDamage(10);
}

void	FragTrap::attackRandom2(FragTrap &attacker, ClapTrap &target)
{
	std::cout << "FR4G-TP " << attacker._name
	<< " attaque random 2 " << target.getName()
	<< ", causant " << 20
	<< " points de dégâts !" << std::endl;
	target.takeDamage(20);
}

void	FragTrap::attackRandom3(FragTrap &attacker, ClapTrap &target)
{
	std::cout << "FR4G-TP " << attacker._name
	<< " attaque random 3 " << target.getName()
	<< ", causant " << 40
	<< " points de dégâts !" << std::endl;
	target.takeDamage(40);
}

void	FragTrap::attackRandom4(FragTrap &attacker, ClapTrap &target)
{
	std::cout << "FR4G-TP " << attacker._name
	<< " attaque random 4 " << target.getName()
	<< ", causant " << 30
	<< " points de dégâts !" << std::endl;
	target.takeDamage(30);
}

