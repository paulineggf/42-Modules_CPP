#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <fstream>

class	FragTrap
{
	private:
	std::string	_name;
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_level;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;

	std::string	randomChump();
	static void	attackRandom0(FragTrap &attacker, FragTrap &target);
	static void	attackRandom1(FragTrap &attacker, FragTrap &target);
	static void	attackRandom2(FragTrap &attacker, FragTrap &target);
	static void	attackRandom3(FragTrap &attacker, FragTrap &target);
	static void	attackRandom4(FragTrap &attacker, FragTrap &target);

	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &copy);
	~FragTrap();
	FragTrap&	operator=(FragTrap const &rhs);	

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(FragTrap &target);
};

#endif
