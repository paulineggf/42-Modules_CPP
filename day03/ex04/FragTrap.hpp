#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <fstream>
# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	private:
	void		(*_f[5])(FragTrap &attacker, ClapTrap &target);
	static void	attackRandom0(FragTrap &attacker, ClapTrap &target);
	static void	attackRandom1(FragTrap &attacker, ClapTrap &target);
	static void	attackRandom2(FragTrap &attacker, ClapTrap &target);
	static void	attackRandom3(FragTrap &attacker, ClapTrap &target);
	static void	attackRandom4(FragTrap &attacker, ClapTrap &target);

	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &copy);
	~FragTrap();
	FragTrap&	operator=(FragTrap const &rhs);	

	int		getHitPoints();

	void		rangedAttack(ClapTrap &target);
	void		meleeAttack(ClapTrap &target);
	void		vaulthunter_dot_exe(ClapTrap &target);

};

#endif
