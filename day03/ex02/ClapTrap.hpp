#ifndef ROBOT_HPP
# define ROBOT_HPP

# include <iostream>
# include <fstream>

class	ClapTrap
{
	protected:
	std::string	_name;
	int		_hitPoints;
	int		_maxHitPoints;
	int		_energyPoints;
	int		_maxEnergyPoints;
	int		_level;
	int		_meleeAttackDamage;
	int		_rangedAttackDamage;
	int		_armorDamageReduction;

	std::string	randomChump();

	public:
	ClapTrap();

	ClapTrap(int hitPoints, int maxHitPoints,
	int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage,
	int rangeAttackDamage, int armorDamageReduction);

	ClapTrap(std::string name, int hitPoints, int maxHitPoints,
	int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage,
	int rangeAttackDamage, int armorDamageReduction);

	ClapTrap(std::string name);
	ClapTrap(ClapTrap &copy);
	~ClapTrap();
	ClapTrap&		operator=(ClapTrap const &rhs);	
	
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName();
	void		getAttributs();
};

#endif
