#include "FragTrap.hpp"

FragTrap::FragTrap() :
_name(randomChump()),
_hitPoints(100),
_maxHitPoints(100),
_energyPoints(100),
_level(1),
_meleeAttackDamage(30),
_rangedAttackDamage(20),
_armorDamageReduction(5) {
	srand(time(0));
	std::cout << "Constructor called with random name : " << _name << std::endl;
}

FragTrap::FragTrap(std::string name) :
_name(name),
_hitPoints(100),
_maxHitPoints(100),
_energyPoints(100),
_level(1),
_meleeAttackDamage(30),
_rangedAttackDamage(20),
_armorDamageReduction(5) {
	srand(time(0));
	std::cout << "Constructor called with : " << _name << std::endl;
}

FragTrap::FragTrap(FragTrap &copy)
{
	*this = copy;
	std::cout << "Copy constructor called with : " << _name << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "Operator overload called with : " << rhs._name << std::endl;  
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_maxHitPoints = rhs._maxHitPoints;
	_energyPoints = rhs._energyPoints;
	_level = rhs._level;
	_meleeAttackDamage = rhs._meleeAttackDamage;
	_rangedAttackDamage = rhs._rangedAttackDamage;
	_armorDamageReduction = rhs._armorDamageReduction;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor called with : " << _name << std::endl;
}

std::string	FragTrap::randomChump()
{
	int		i;
	int		r;
	std::string	name;
	std::ifstream	file("names.txt");
	
	i = 0;
	r = (rand() % 500);
	while (i++ < r)
		file >> name;
	file.close();
	return name;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " attaque " << target
	<< " à distance, causant " << _rangedAttackDamage
	<< " points de dégâts !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " attaque en mêlée " << target
	<< ", causant " << _meleeAttackDamage
	<< " points de dégâts !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	amount -= _armorDamageReduction;
	if (amount < 0)
		amount = 0;
	_hitPoints -= amount;
	std::cout << "FR4G-TP " << _name << " se fait attaquer et perd "
	<< amount << " points de vie !" << std::endl;
	if (_hitPoints < 0)
	{
		_hitPoints = 0;
		std::cout << _name << " a perdu toutes ses vies :( Points de vie : "
		<< _hitPoints << std::endl;
	}
	else
		std::cout << "Les points de vie de " << _name << " sont à "
		<< _hitPoints << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << _name << " récupère " << amount
	<< " points de vie !" << std::endl;

	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
	{
		_hitPoints = _maxHitPoints;
		std::cout << "FR4G-TP " << _name
		<< " a récupéré toutes ses vies :D Points de vie : "
		<< _hitPoints << std::endl;
	}
	else
		std::cout << "FR4G-TP " << _name << " a de nouveau "
		<< _hitPoints << " points de vie ! Points de vie : "
		<< _hitPoints << std::endl; 
}

void	FragTrap::vaulthunter_dot_exe(FragTrap &target)
{
	int	r;
	void	(*f[5])(FragTrap &attacker, FragTrap &target);
	
	f[0] = FragTrap::attackRandom0;
	f[1] = FragTrap::attackRandom1;
	f[2] = FragTrap::attackRandom2;
	f[3] = FragTrap::attackRandom3;
	f[4] = FragTrap::attackRandom4;
	if (_energyPoints - 25 < 0)
	{
		std::cout << _name 
		<< " n'a pas assez d'énergie pour attaquer !" << std::endl;
	}
	else
	{
		_energyPoints -= 25;
		r = (rand() % 5);
		(*f[r])(*this, target);
	}
}

void	FragTrap::attackRandom0(FragTrap &attacker, FragTrap &target)
{
	std::cout << "FR4G-TP " << attacker._name
	<< " attaque random 0 " << target._name
	<< ", causant " << 50
	<< " points de dégâts !" << std::endl;
	target.takeDamage(50);
}

void	FragTrap::attackRandom1(FragTrap &attacker, FragTrap &target)
{
	std::cout << "FR4G-TP " << attacker._name
	<< " attaque random 1 " << target._name
	<< ", causant " << 10
	<< " points de dégâts !" << std::endl;
	target.takeDamage(10);
}

void	FragTrap::attackRandom2(FragTrap &attacker, FragTrap &target)
{
	std::cout << "FR4G-TP " << attacker._name
	<< " attaque random 2 " << target._name
	<< ", causant " << 20
	<< " points de dégâts !" << std::endl;
	target.takeDamage(20);
}

void	FragTrap::attackRandom3(FragTrap &attacker, FragTrap &target)
{
	std::cout << "FR4G-TP " << attacker._name
	<< " attaque random 3 " << target._name
	<< ", causant " << 40
	<< " points de dégâts !" << std::endl;
	target.takeDamage(40);
}

void	FragTrap::attackRandom4(FragTrap &attacker, FragTrap &target)
{
	std::cout << "FR4G-TP " << attacker._name
	<< " attaque random 4 " << target._name
	<< ", causant " << 30
	<< " points de dégâts !" << std::endl;
	target.takeDamage(30);
}

