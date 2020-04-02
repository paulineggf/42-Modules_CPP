#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <fstream>
# include "Robot.hpp"

class	FragTrap : public Robot
{
	private:
	void		(*_f[5])(FragTrap &attacker, Robot &target);
	static void	attackRandom0(FragTrap &attacker, Robot &target);
	static void	attackRandom1(FragTrap &attacker, Robot &target);
	static void	attackRandom2(FragTrap &attacker, Robot &target);
	static void	attackRandom3(FragTrap &attacker, Robot &target);
	static void	attackRandom4(FragTrap &attacker, Robot &target);

	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &copy);
	~FragTrap();
	FragTrap&	operator=(FragTrap const &rhs);	

	void		rangedAttack(Robot &target);
	void		meleeAttack(Robot &target);
	void		vaulthunter_dot_exe(Robot &target);
	
};

#endif
