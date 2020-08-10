#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : 
_name(randomChump()),
_hitPoints(100),
_maxHitPoints(100),
_energyPoints(100),
_maxEnergyPoints(100),
_level(1),
_meleeAttackDamage(20),
_rangedAttackDamage(20),
_armorDamageReduction(1) {
	std::cout << "ClapTrap constructor called with random name : " << _name << std::endl;
}

ClapTrap::ClapTrap(int hitPoints, int maxHitPoints,
	int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage,
	int rangedAttackDamage, int armorDamageReduction) :
_name(randomChump()),
_hitPoints(hitPoints),
_maxHitPoints(maxHitPoints),
_energyPoints(energyPoints),
_maxEnergyPoints(maxEnergyPoints),
_level(level),
_meleeAttackDamage(meleeAttackDamage),
_rangedAttackDamage(rangedAttackDamage),
_armorDamageReduction(armorDamageReduction) {
	std::cout << "ClapTrap constructor called with random name : " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int maxHitPoints,
	int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage,
	int rangedAttackDamage, int armorDamageReduction) :
_name(name),
_hitPoints(hitPoints),
_maxHitPoints(maxHitPoints),
_energyPoints(energyPoints),
_maxEnergyPoints(maxEnergyPoints),
_level(level),
_meleeAttackDamage(meleeAttackDamage),
_rangedAttackDamage(rangedAttackDamage),
_armorDamageReduction(armorDamageReduction) 
{
	std::cout << "ClapTrap constructor called with : " << _name << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap operator overload called with : " << _name
	<< " and " << rhs._name << std::endl;  
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

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called with : " << _name << std::endl;
}

void		ClapTrap::getAttributs()
{
	std::cout << "Name : " << _name << std::endl;
	std::cout << "Hit Points : " << _hitPoints << std::endl;
	std::cout << "Max Hit Points : " << _maxHitPoints << std::endl;
	std::cout << "Energy Points : " << _energyPoints << std::endl;
	std::cout << "Max Energy Points : " << _maxEnergyPoints << std::endl;
	std::cout << "Level : " << _level << std::endl;
	std::cout << "Melee Attack Damage : " << _meleeAttackDamage << std::endl;
	std::cout << "Ranged Attack Damage : " << _rangedAttackDamage << std::endl;
	std::cout << "Armor Damage Reduction : " << _armorDamageReduction << std::endl;
}

std::string	ClapTrap::getName()
{
	return _name;
}

std::string	ClapTrap::randomChump()
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

void	ClapTrap::takeDamage(unsigned int amount)
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

void	ClapTrap::beRepaired(unsigned int amount)
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
