#ifndef ROBOT_HPP
# define ROBOT_HPP

# include <iostream>
# include <fstream>

class	Robot
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
	Robot();

	Robot(int hitPoints, int maxHitPoints,
	int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage,
	int rangeAttackDamage, int armorDamageReduction);

	Robot(std::string name, int hitPoints, int maxHitPoints,
	int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage,
	int rangeAttackDamage, int armorDamageReduction);
	
	Robot(Robot &copy);
	~Robot();
	Robot&		operator=(Robot const &rhs);	
	
	virtual void	rangedAttack(Robot &target) = 0;
	virtual void	meleeAttack(Robot &target) = 0;

	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName();
	void		getAttributs();
};

#endif
