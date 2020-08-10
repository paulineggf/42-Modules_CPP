#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
Robot(100, 100, 50, 50, 1, 20, 15, 3) {
	_f[0] = &ScavTrap::challengeRandom0;
	_f[1] = &ScavTrap::challengeRandom1;
	_f[2] = &ScavTrap::challengeRandom2;
	_f[3] = &ScavTrap::challengeRandom3;
	_f[4] = &ScavTrap::challengeRandom4;
	std::cout << "ScavTrap constructor called with random name : " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
Robot(name, 100, 100, 50, 50, 1, 20, 15, 3) {
	_f[0] = &ScavTrap::challengeRandom0;
	_f[1] = &ScavTrap::challengeRandom1;
	_f[2] = &ScavTrap::challengeRandom2;
	_f[3] = &ScavTrap::challengeRandom3;
	_f[4] = &ScavTrap::challengeRandom4;
	std::cout << "ScavTrap constructor called with : " << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	*this = copy;
	std::cout << "ScavTrap copy constructor called with : " << _name << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap operator overload called with : " << _name
	<< " and " << rhs._name << std::endl;  
	Robot::operator=(rhs);
	_f[0] = rhs._f[0];
	_f[1] = rhs._f[1];
	_f[2] = rhs._f[2];
	_f[3] = rhs._f[3];
	_f[4] = rhs._f[4];
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called with : " << _name << std::endl;
}

void	ScavTrap::rangedAttack(Robot &target)
{
	std::cout << "FR4G-TP " << _name << " attaque " << target.getName()
	<< " à distance, causant " << _rangedAttackDamage
	<< " points de dégâts !" << std::endl;
	target.takeDamage(_rangedAttackDamage);
}

void	ScavTrap::meleeAttack(Robot &target)
{
	std::cout << "FR4G-TP " << _name << " attaque en mêlée " << target.getName()
	<< ", causant " << _meleeAttackDamage
	<< " points de dégâts !" << std::endl;
	target.takeDamage(_meleeAttackDamage);
}

void	ScavTrap::challengeNewcomer(Robot &target)
{
	int	num;
	
	num = -1;
	while (num < 0 || num > 4)
	{
		std::cout << "Vous avez le choix entre ces 5 challenges:\n \
		1- Challenge 0\n \
		2- Challenge 1\n \
		3- Challenge 2\n \
		4- Challenge 3\n \
		5- Challenge 4\n" << std::endl;
		std::cin >> num;
	}
	ScavTrap::_f[num](*this, target);
}

void	ScavTrap::challengeRandom0(ScavTrap &challenger, Robot &target)
{
	std::cout << "Challenge 0" << std::endl;
}

void	ScavTrap::challengeRandom1(ScavTrap &challenger, Robot &target)
{
	std::cout << "Challenge 1" << std::endl;
}

void	ScavTrap::challengeRandom2(ScavTrap &challenger, Robot &target)
{
	std::cout << "Challenge 2" << std::endl;
}

void	ScavTrap::challengeRandom3(ScavTrap &challenger, Robot &target)
{
	std::cout << "Challenge 3" << std::endl;
}

void	ScavTrap::challengeRandom4(ScavTrap &challenger, Robot &target)
{
	std::cout << "Challenge 4" << std::endl;
}

